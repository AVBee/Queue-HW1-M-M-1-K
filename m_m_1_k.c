#AVBee rev. 1
# March 31, 2017


#include <stdio.h>
#include <math.h>

float serv_util, v_capa ;
FILE *infile, *outfile;


main() /* Main function. */
{
 /* Open input and output files. */
 infile = fopen("mm1.in", "r");
 outfile = fopen("mm1.out", "w");
 /* Specify the number of events for the timing function. */

 /* Read input parameters. */
 fscanf(infile, "%f %f", &serv_util, &v_capa);


 /* Write report heading and input parameters. */
 fprintf(outfile, "Single-server queueing system\n");
 fprintf(outfile, "FINITE CAPACITY\n\n");
 fprintf(outfile, "server utilization %.4f \n\n", serv_util);
 fprintf(outfile, "System Capacity %.4f minutes\n\n", v_capa);

 /* Initialize the simulation. */

 /* Run the simulation while more delays are still needed. */
if (serv_util && v_capa !=0)
    {
    while (v_capa > 0)
        {
        if (serv_util !=0)
            {

                    float prob_block;

                        prob_block = (((powf(serv_util, v_capa))*(1-serv_util))/(1-powf(serv_util, (v_capa+1))));
                        fprintf(outfile, "Block probability %.4f ", prob_block);

            }

 fclose(infile);
 fclose(outfile);
 return 0;
        }
    }
else
{
    printf("Error empty parameters ");
}


}


