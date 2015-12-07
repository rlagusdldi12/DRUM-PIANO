#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

int i;
int flag;

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

  printf("-------------------------------------------\n");
  printf("              SELECT OPTION                \n");
  printf("1=Grayscale | 2=Monochrome | 3=Resize\n");
  printf("-------------------------------------------\n");
  printf("Command : ");
  scanf("%d", &i);
	 if (i == 2)
	{
		mono();
	}
	if(i == 1)
	{
		gray();
	}
	 if (i == 3)
        {
		resize();        
	}
return 0;
}


