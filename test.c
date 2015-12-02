#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

int i;

void destroy(void) 
{
  gtk_main_quit();
}

int main (int argc, char** argv)
 {
  GtkWidget* window;
  GtkWidget* image;

  gtk_init (&argc, &argv);


  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  image  = gtk_image_new_from_file(argv[1]);

  gtk_signal_connect(GTK_OBJECT (window), "destroy",
    	     GTK_SIGNAL_FUNC (destroy), NULL);

  gtk_container_add(GTK_CONTAINER (window), image);

  gtk_widget_show_all(window);

  gtk_main();

  printf("Command : ");
  scanf("%d", &i);
	if (i == 1)
	{
		FILE *pp;
  		pp = popen("convert sample.jpg -colorspace Gray sample1.jpg", "r");
  			if (pp != NULL)
			{
    				while (1)
				{
       	 			char *line;
       	 			char buf[1000];
       	 			line = fgets(buf, sizeof buf, pp);
       	 			if (line == NULL) break;
       	 			if (line[0] == 'd') printf("%s", line); /* line includes '\n' */
    				}
  			  	pclose(pp);
  			}
		return 0;
	}
return 0;
}


