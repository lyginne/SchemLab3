/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_16716551292137892734_2582214024_init();
    work_m_11510488442220057834_3505899711_init();
    work_m_16669495246583040543_1533980871_init();
    work_m_13610942553954735262_1351276808_init();
    work_m_06598588245771723920_2381739659_init();
    work_m_16408892092517188929_1621107508_init();
    work_m_08915812904790137609_3017244303_init();
    work_m_15712101409139388116_0399521239_init();
    work_m_15712101409139388116_3076129341_init();
    work_m_05753088050026353480_1098446607_init();
    work_m_01356821293382018190_2987726008_init();
    work_m_05781214433081395064_2725559894_init();
    work_m_10420118029238597759_3027548060_init();
    work_m_04741553667451459998_3856312063_init();
    work_m_06072088423404730870_0520664108_init();
    work_m_09019638026801661158_2864889816_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_09019638026801661158_2864889816");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
