#include <stdio.h>

void resize()
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
	

