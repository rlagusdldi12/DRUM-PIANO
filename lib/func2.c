#include <stdio.h>

void mono()
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

               // return 0;
}

