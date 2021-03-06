#include <mach/mt_typedefs.h>

#define TEMPERATURE_T0                  110
#define TEMPERATURE_T1                  0
#define TEMPERATURE_T2                  25
#define TEMPERATURE_T3                  50
#define TEMPERATURE_T                   255 // This should be fixed, never change the value

#define FG_METER_RESISTANCE 	0

#define MAX_BOOTING_TIME_FGCURRENT	1*10 // 10s

#if defined(CONFIG_POWER_EXT)
#define OCV_BOARD_COMPESATE	72 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#else
#define OCV_BOARD_COMPESATE	0 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#endif

#define Q_MAX_POS_50	2104
#define Q_MAX_POS_25	2095
#define Q_MAX_POS_0	1982
#define Q_MAX_NEG_10	2001

#define Q_MAX_POS_50_H_CURRENT	2087
#define Q_MAX_POS_25_H_CURRENT	2060
#define Q_MAX_POS_0_H_CURRENT	1800
#define Q_MAX_NEG_10_H_CURRENT	1715

#define R_FG_VALUE 				20 // mOhm, base is 20
#define CURRENT_DETECT_R_FG	10  //1mA

#define OSR_SELECT_7			0

#define CAR_TUNE_VALUE			94 //0.95

/////////////////////////////////////////////////////////////////////
// <DOD, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
{	0	,	4329	},
{	1	,	4314	},
{	3	,	4297	},
{	4	,	4280	},
{	6	,	4264	},
{	7	,	4247	},
{	9	,	4231	},
{	10	,	4215	},
{	12	,	4198	},
{	13	,	4183	},
{	15	,	4168	},
{	16	,	4152	},
{	18	,	4137	},
{	19	,	4121	},
{	21	,	4107	},
{	22	,	4092	},
{	24	,	4080	},
{	25	,	4066	},
{	27	,	4050	},
{	28	,	4035	},
{	30	,	4019	},
{	31	,	4005	},
{	33	,	3991	},
{	34	,	3977	},
{	36	,	3964	},
{	37	,	3952	},
{	39	,	3940	},
{	40	,	3927	},
{	42	,	3914	},
{	43	,	3901	},
{	45	,	3889	},
{	46	,	3877	},
{	48	,	3866	},
{	49	,	3858	},
{	51	,	3849	},
{	52	,	3841	},
{	54	,	3834	},
{	55	,	3827	},
{	57	,	3821	},
{	58	,	3816	},
{	60	,	3810	},
{	61	,	3804	},
{	63	,	3800	},
{	64	,	3795	},
{	66	,	3791	},
{	67	,	3787	},
{	69	,	3784	},
{	70	,	3782	},
{	72	,	3779	},
{	73	,	3777	},
{	75	,	3775	},
{	76	,	3772	},
{	78	,	3769	},
{	79	,	3766	},
{	81	,	3762	},
{	82	,	3757	},
{	84	,	3751	},
{	85	,	3744	},
{	87	,	3735	},
{	88	,	3726	},
{	90	,	3715	},
{	91	,	3705	},
{	92	,	3698	},
{	94	,	3692	},
{	95	,	3689	},
{	96	,	3687	},
{	96	,	3685	},
{	97	,	3684	},
{	97	,	3683	},
{	97	,	3682	},
{	98	,	3679	},
{	99	,	3675	},
{	100	,	3672	},
{	100	,	3672	},
{	100	,	3672	},
{	100	,	3672	},
{	100	,	3672	},
{	100	,	3672	},
{	100	,	3672	},
{	100	,	3672	},
{	100	,	3672	}
};      
         
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
{	0	,	4306	},
{	2	,	4274	},
{	3	,	4254	},
{	5	,	4236	},
{	6	,	4219	},
{	8	,	4202	},
{	9	,	4186	},
{	11	,	4171	},
{	12	,	4154	},
{	14	,	4139	},
{	15	,	4124	},
{	17	,	4109	},
{	18	,	4095	},
{	20	,	4082	},
{	21	,	4069	},
{	23	,	4054	},
{	24	,	4039	},
{	26	,	4024	},
{	27	,	4009	},
{	29	,	3997	},
{	30	,	3984	},
{	32	,	3972	},
{	33	,	3962	},
{	35	,	3953	},
{	36	,	3942	},
{	38	,	3930	},
{	39	,	3916	},
{	41	,	3901	},
{	42	,	3886	},
{	44	,	3873	},
{	45	,	3861	},
{	47	,	3851	},
{	48	,	3842	},
{	50	,	3836	},
{	51	,	3828	},
{	53	,	3822	},
{	54	,	3816	},
{	56	,	3811	},
{	57	,	3806	},
{	59	,	3801	},
{	60	,	3797	},
{	62	,	3792	},
{	63	,	3788	},
{	65	,	3785	},
{	66	,	3782	},
{	68	,	3780	},
{	69	,	3778	},
{	71	,	3776	},
{	72	,	3774	},
{	74	,	3772	},
{	75	,	3770	},
{	77	,	3766	},
{	78	,	3761	},
{	80	,	3754	},
{	81	,	3747	},
{	83	,	3737	},
{	84	,	3727	},
{	86	,	3714	},
{	87	,	3701	},
{	89	,	3693	},
{	90	,	3688	},
{	92	,	3685	},
{	93	,	3681	},
{	95	,	3676	},
{	96	,	3666	},
{	98	,	3636	},
{	99	,	3611	},
{	99	,	3594	},
{	99	,	3582	},
{	99	,	3572	},
{	100	,	3565	},
{	100	,	3560	},
{	100	,	3555	},
{	100	,	3555	},
{	100	,	3555	},
{	100	,	3555	},
{	100	,	3555	},
{	100	,	3555	},
{	100	,	3555	},
{	100	,	3555	},
{	100	,	3555	}
};


// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
{	0	,	4314	},
{	1	,	4297	},
{	3	,	4281	},
{	4	,	4265	},
{	6	,	4248	},
{	7	,	4232	},
{	9	,	4216	},
{	10	,	4200	},
{	11	,	4184	},
{	13	,	4168	},
{	14	,	4153	},
{	16	,	4138	},
{	17	,	4123	},
{	19	,	4107	},
{	20	,	4093	},
{	21	,	4079	},
{	23	,	4066	},
{	24	,	4052	},
{	26	,	4038	},
{	27	,	4024	},
{	28	,	4010	},
{	30	,	3998	},
{	31	,	3986	},
{	33	,	3976	},
{	34	,	3965	},
{	36	,	3954	},
{	37	,	3943	},
{	38	,	3932	},
{	40	,	3921	},
{	41	,	3908	},
{	43	,	3895	},
{	44	,	3880	},
{	46	,	3867	},
{	47	,	3855	},
{	48	,	3845	},
{	50	,	3838	},
{	51	,	3830	},
{	53	,	3824	},
{	54	,	3818	},
{	56	,	3813	},
{	57	,	3807	},
{	58	,	3802	},
{	60	,	3798	},
{	61	,	3793	},
{	63	,	3789	},
{	64	,	3785	},
{	66	,	3781	},
{	67	,	3778	},
{	68	,	3775	},
{	70	,	3772	},
{	71	,	3770	},
{	73	,	3768	},
{	74	,	3765	},
{	76	,	3761	},
{	77	,	3755	},
{	78	,	3749	},
{	80	,	3742	},
{	81	,	3734	},
{	83	,	3724	},
{	84	,	3712	},
{	85	,	3699	},
{	87	,	3685	},
{	88	,	3680	},
{	90	,	3677	},
{	91	,	3675	},
{	93	,	3672	},
{	94	,	3666	},
{	95	,	3650	},
{	97	,	3601	},
{	98	,	3529	},
{	100	,	3426	},
{	100	,	3356	},
{	100	,	3332	},
{	100	,	3332	},
{	100	,	3332	},
{	100	,	3332	},
{	100	,	3332	},
{	100	,	3332	},
{	100	,	3332	},
{	100	,	3332	},
{	100	,	3332	}
}; 


// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
{	0	,	4340	},
{	1	,	4317	},
{	3	,	4300	},
{	4	,	4283	},
{	6	,	4266	},
{	7	,	4251	},
{	9	,	4234	},
{	10	,	4218	},
{	11	,	4202	},
{	13	,	4186	},
{	14	,	4170	},
{	16	,	4155	},
{	17	,	4139	},
{	18	,	4123	},
{	20	,	4108	},
{	21	,	4094	},
{	23	,	4079	},
{	24	,	4065	},
{	26	,	4051	},
{	27	,	4037	},
{	28	,	4024	},
{	30	,	4012	},
{	31	,	3999	},
{	33	,	3987	},
{	34	,	3975	},
{	35	,	3964	},
{	37	,	3953	},
{	38	,	3942	},
{	40	,	3932	},
{	41	,	3922	},
{	43	,	3912	},
{	44	,	3900	},
{	45	,	3881	},
{	47	,	3865	},
{	48	,	3853	},
{	50	,	3845	},
{	51	,	3837	},
{	52	,	3830	},
{	54	,	3823	},
{	55	,	3817	},
{	57	,	3811	},
{	58	,	3805	},
{	60	,	3800	},
{	61	,	3795	},
{	62	,	3790	},
{	64	,	3785	},
{	65	,	3781	},
{	67	,	3777	},
{	68	,	3774	},
{	69	,	3770	},
{	71	,	3765	},
{	72	,	3753	},
{	74	,	3746	},
{	75	,	3742	},
{	77	,	3737	},
{	78	,	3731	},
{	79	,	3725	},
{	81	,	3719	},
{	82	,	3712	},
{	84	,	3702	},
{	85	,	3690	},
{	87	,	3676	},
{	88	,	3665	},
{	89	,	3663	},
{	91	,	3661	},
{	92	,	3657	},
{	94	,	3654	},
{	95	,	3645	},
{	96	,	3612	},
{	98	,	3553	},
{	99	,	3467	},
{	100	,	3330	},
{	100	,	3271	},
{	100	,	3271	},
{	100	,	3271	},
{	100	,	3271	},
{	100	,	3271	},
{	100	,	3271	},
{	100	,	3271	},
{	100	,	3271	},
{	100	,	3271	}
};      

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
	  {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
	  {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0}
};    

/////////////////////////////////////////////////////////////////////
// <Rbat, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
{	358	,	4329	},
{	575	,	4314	},
{	1095	,	4297	},
{	1068	,	4280	},
{	1065	,	4264	},
{	1060	,	4247	},
{	1058	,	4231	},
{	1050	,	4215	},
{	1033	,	4198	},
{	1023	,	4183	},
{	1025	,	4168	},
{	1038	,	4152	},
{	1050	,	4137	},
{	1055	,	4121	},
{	1055	,	4107	},
{	1045	,	4092	},
{	1038	,	4080	},
{	1023	,	4066	},
{	1003	,	4050	},
{	983	,	4035	},
{	963	,	4019	},
{	948	,	4005	},
{	938	,	3991	},
{	923	,	3977	},
{	913	,	3964	},
{	905	,	3952	},
{	898	,	3940	},
{	885	,	3927	},
{	875	,	3914	},
{	858	,	3901	},
{	850	,	3889	},
{	838	,	3877	},
{	828	,	3866	},
{	825	,	3858	},
{	818	,	3849	},
{	813	,	3841	},
{	813	,	3834	},
{	808	,	3827	},
{	808	,	3821	},
{	808	,	3816	},
{	808	,	3810	},
{	803	,	3804	},
{	805	,	3800	},
{	805	,	3795	},
{	803	,	3791	},
{	803	,	3787	},
{	805	,	3784	},
{	808	,	3782	},
{	810	,	3779	},
{	818	,	3777	},
{	823	,	3775	},
{	825	,	3772	},
{	825	,	3769	},
{	830	,	3766	},
{	835	,	3762	},
{	838	,	3757	},
{	838	,	3751	},
{	848	,	3744	},
{	853	,	3735	},
{	860	,	3726	},
{	873	,	3715	},
{	890	,	3705	},
{	938	,	3698	},
{	1005	,	3692	},
{	1113	,	3689	},
{	1220	,	3687	},
{	1213	,	3685	},
{	1213	,	3684	},
{	1210	,	3683	},
{	1205	,	3682	},
{	1203	,	3679	},
{	1190	,	3675	},
{	1183	,	3672	},
{	1185	,	3672	},
{	1185	,	3672	},
{	1185	,	3672	},
{	1185	,	3672	},
{	1185	,	3672	},
{	1185	,	3672	},
{	1185	,	3672	},
{	1185	,	3672	}
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
{	260	,	4306	},
{	360	,	4274	},
{	375	,	4254	},
{	380	,	4236	},
{	385	,	4219	},
{	388	,	4202	},
{	390	,	4186	},
{	398	,	4171	},
{	398	,	4154	},
{	403	,	4139	},
{	410	,	4124	},
{	413	,	4109	},
{	415	,	4095	},
{	395	,	4082	},
{	408	,	4069	},
{	420	,	4054	},
{	425	,	4039	},
{	423	,	4024	},
{	420	,	4009	},
{	423	,	3997	},
{	420	,	3984	},
{	418	,	3972	},
{	418	,	3962	},
{	425	,	3953	},
{	413	,	3942	},
{	413	,	3930	},
{	405	,	3916	},
{	395	,	3901	},
{	388	,	3886	},
{	380	,	3873	},
{	375	,	3861	},
{	373	,	3851	},
{	373	,	3842	},
{	378	,	3836	},
{	378	,	3828	},
{	383	,	3822	},
{	390	,	3816	},
{	393	,	3811	},
{	398	,	3806	},
{	403	,	3801	},
{	410	,	3797	},
{	413	,	3792	},
{	418	,	3788	},
{	423	,	3785	},
{	430	,	3782	},
{	440	,	3780	},
{	450	,	3778	},
{	460	,	3776	},
{	473	,	3774	},
{	490	,	3772	},
{	508	,	3770	},
{	523	,	3766	},
{	538	,	3761	},
{	555	,	3754	},
{	575	,	3747	},
{	595	,	3737	},
{	618	,	3727	},
{	635	,	3714	},
{	653	,	3701	},
{	678	,	3693	},
{	705	,	3688	},
{	750	,	3685	},
{	808	,	3681	},
{	885	,	3676	},
{	975	,	3666	},
{	1083	,	3636	},
{	1030	,	3611	},
{	988	,	3594	},
{	958	,	3582	},
{	935	,	3572	},
{	918	,	3565	},
{	905	,	3560	},
{	893	,	3555	},
{	893	,	3555	},
{	893	,	3555	},
{	893	,	3555	},
{	893	,	3555	},
{	893	,	3555	},
{	893	,	3555	},
{	893	,	3555	},
{	893	,	3555	}
};

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
{	158	,	4314	},
{	173	,	4297	},
{	178	,	4281	},
{	180	,	4265	},
{	183	,	4248	},
{	183	,	4232	},
{	188	,	4216	},
{	190	,	4200	},
{	193	,	4184	},
{	183	,	4168	},
{	188	,	4153	},
{	188	,	4138	},
{	188	,	4123	},
{	188	,	4107	},
{	190	,	4093	},
{	193	,	4079	},
{	195	,	4066	},
{	198	,	4052	},
{	200	,	4038	},
{	203	,	4024	},
{	203	,	4010	},
{	205	,	3998	},
{	205	,	3986	},
{	218	,	3976	},
{	223	,	3965	},
{	225	,	3954	},
{	225	,	3943	},
{	225	,	3932	},
{	220	,	3921	},
{	215	,	3908	},
{	203	,	3895	},
{	190	,	3880	},
{	180	,	3867	},
{	175	,	3855	},
{	173	,	3845	},
{	175	,	3838	},
{	175	,	3830	},
{	178	,	3824	},
{	180	,	3818	},
{	185	,	3813	},
{	188	,	3807	},
{	193	,	3802	},
{	198	,	3798	},
{	198	,	3793	},
{	200	,	3789	},
{	203	,	3785	},
{	205	,	3781	},
{	208	,	3778	},
{	210	,	3775	},
{	210	,	3772	},
{	215	,	3770	},
{	218	,	3768	},
{	220	,	3765	},
{	220	,	3761	},
{	218	,	3755	},
{	220	,	3749	},
{	225	,	3742	},
{	228	,	3734	},
{	230	,	3724	},
{	228	,	3712	},
{	230	,	3699	},
{	223	,	3685	},
{	218	,	3680	},
{	220	,	3677	},
{	243	,	3675	},
{	260	,	3672	},
{	275	,	3666	},
{	280	,	3650	},
{	275	,	3601	},
{	313	,	3529	},
{	380	,	3426	},
{	393	,	3356	},
{	335	,	3332	},
{	333	,	3332	},
{	333	,	3332	},
{	333	,	3332	},
{	333	,	3332	},
{	333	,	3332	},
{	333	,	3332	},
{	333	,	3332	},
{	333	,	3332	}
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
{	138	,	4340	},
{	125	,	4317	},
{	123	,	4300	},
{	123	,	4283	},
{	123	,	4266	},
{	125	,	4251	},
{	125	,	4234	},
{	125	,	4218	},
{	128	,	4202	},
{	128	,	4186	},
{	128	,	4170	},
{	133	,	4155	},
{	133	,	4139	},
{	130	,	4123	},
{	133	,	4108	},
{	135	,	4094	},
{	135	,	4079	},
{	138	,	4065	},
{	138	,	4051	},
{	138	,	4037	},
{	140	,	4024	},
{	145	,	4012	},
{	145	,	3999	},
{	148	,	3987	},
{	148	,	3975	},
{	150	,	3964	},
{	153	,	3953	},
{	155	,	3942	},
{	158	,	3932	},
{	160	,	3922	},
{	165	,	3912	},
{	163	,	3900	},
{	148	,	3881	},
{	135	,	3865	},
{	128	,	3853	},
{	130	,	3845	},
{	130	,	3837	},
{	130	,	3830	},
{	130	,	3823	},
{	133	,	3817	},
{	133	,	3811	},
{	135	,	3805	},
{	138	,	3800	},
{	140	,	3795	},
{	140	,	3790	},
{	143	,	3785	},
{	145	,	3781	},
{	145	,	3777	},
{	150	,	3774	},
{	150	,	3770	},
{	148	,	3765	},
{	130	,	3753	},
{	130	,	3746	},
{	135	,	3742	},
{	135	,	3737	},
{	135	,	3731	},
{	135	,	3725	},
{	135	,	3719	},
{	138	,	3712	},
{	138	,	3702	},
{	138	,	3690	},
{	138	,	3676	},
{	130	,	3665	},
{	135	,	3663	},
{	140	,	3661	},
{	143	,	3657	},
{	150	,	3654	},
{	153	,	3645	},
{	158	,	3612	},
{	173	,	3553	},
{	180	,	3467	},
{	200	,	3330	},
{	178	,	3271	},
{	178	,	3271	},
{	178	,	3271	},
{	178	,	3271	},
{	178	,	3271	},
{	178	,	3271	},
{	178	,	3271	},
{	178	,	3271	},
{	178	,	3271	}
};      

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
	  {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
	  {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},   
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0}
};     


int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

//#define CONFIG_POWER_VERIFY