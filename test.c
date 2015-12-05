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
                FILE *pp;
                pp = popen("convert sample.jpg -monochrome sample_monochrome.jpg","r");
                        if (pp != NULL)
                        {
                                while (1)
                                {
                                char *line;
                                char buf[1000];
                                line = fgets(buf, sizeof buf, pp);
                                if (line == NULL) break;
                                if (line[0] == 'd') printf("%s", line); 
                                }
                                pclose(pp);
                        }
                FILE *ppp;
                ppp = popen("display sample_monochrome.jpg", "r");
                        if (ppp != NULL)
                        {
                                while (1)
                                {
                                char *line;
                                char buf[1000];
                                line = fgets(buf, sizeof buf, ppp);
                                if (line == NULL) break;
                                if (line[0] == 'd') printf("%s", line); 
                                }
                                pclose(ppp);
                        }
                printf("output file -> sample_monochrome.jpg\n");

                return 0;
        }
	if(i == 1)
	{

		FILE *pp;
  		pp = popen("convert sample.jpg -colorspace Gray sample_gray.jpg", "r");
  			if (pp != NULL)
			{
    				while (1)
				{
       	 			char *line;
       	 			char buf[1000];
       	 			line = fgets(buf, sizeof buf, pp);
       	 			if (line == NULL) break;
       	 			if (line[0] == 'd') printf("%s", line); 
    				}
  			  	pclose(pp);
  			}
		FILE *ppp;
                ppp = popen("display sample_gray.jpg", "r");
                        if (ppp != NULL)
                        {
                                while (1)
                                {
                                char *line;
                                char buf[1000];
                                line = fgets(buf, sizeof buf, ppp);
                                if (line == NULL) break;
                                if (line[0] == 'd') printf("%s", line); 
                                }
                                pclose(ppp);
                        }
		printf("output file -> sample_gray.jpg\n");

                return 0;
	}

	 if (i == 3)
        {
                FILE *pp;
                pp = popen("convert sample.jpg -resize 50% sample_resize.jpg", "r");
                        if (pp != NULL)
                        {
                                while (1)
                                {
                                char *line;
                                char buf[1000];
                                line = fgets(buf, sizeof buf, pp);
                                if (line == NULL) break;
                                if (line[0] == 'd') printf("%s", line); 
                                }
                                pclose(pp);
                        }
                FILE *ppp;
                ppp = popen("display sample_resize.jpg", "r");
                        if (ppp != NULL)
                        {
                                while (1)
                                {
                                char *line;
                                char buf[1000];
                                line = fgets(buf, sizeof buf, ppp);
                                if (line == NULL) break;
                                if (line[0] == 'd') printf("%s", line); 
                                }
                                pclose(ppp);
                        }
                printf("output file -> sample_resize.jpg\n");

		//return 0;
        }
	return 0;
}



