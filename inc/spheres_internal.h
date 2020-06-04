// --------------------------------------------------
// changes: Ron ronnyjamesdisco@googlemail.compare
// included custom spheres
// --------------------------------------------------


#ifdef SKIP_FACTORY_SPHERES_IN_HEXFILE

 	const void *wavetable_list[] = {0};

#else

//	#include "spheres/hp_909hits_01.h"
//	#include "spheres/hp_Distorted_FM.h"
//	#include "spheres/hp_Morphing_Cello.h"
//	#include "spheres/hp_TalkativeFM.h"
//	#include "spheres/computed_formants.h"
//	#include "spheres/hp_wavetable_formants_applespeech_1.h"
//	#include "spheres/wavetable_SWN_D.h"
//	#include "spheres/wavetable_SWN_wf_rm_hs.h"
//	#include "spheres/wavetable_Sine_Seq_JQ.h"
//	#include "spheres/wavetable_pailo_sine_square.h"
//	#include "spheres/wavetable_pailo_smoothrough.h"
//	#include "spheres/wavetable_ring_mod_JQ.h"
//
	#include "spheres_ron/u1.h" // warm pad 1
	#include "spheres_ron/u2.h" // warm pad 2
	#include "spheres_ron/u3.h" // glass aluminium
	#include "spheres_ron/u9.h" // rich pipes
	#include "spheres_ron/u10.h" // soft pipes
	#include "spheres_ron/u11.h" // dream pipes 
	#include "spheres_ron/u12.h" // harp organ
	#include "spheres_ron/u13.h" // big city chords
	#include "spheres_ron/u16.h" // dub organ 
	#include "spheres_ron/u17.h" // hollow dub
	#include "spheres_ron/u18.h" // bright dub
	#include "spheres_ron/u20.h" // glass orchestra

	const void *wavetable_list[] = {
		(void *)u1.h, 
		(void *)u2.h,
		(void *)u3.h,
		(void *)u9.h,
		(void *)u10.h,
		(void *)u11.h,
		(void *)u12.h,
		(void *)u13.h,
		(void *)u16.h,
		(void *)u17.h,
		(void *)u18.h,
		(void *)u20.h,
//
//
//		(void *)wavetable_SWN_D,
//		(void *)wavetable_pailo_sine_square, 
//		(void *)computed_formants,
//		(void *)hp_wavetable_formants_applespeech_1,
//		(void *)hp_Morphing_Cello,
//		(void *)hp_TalkativeFM,
//		(void *)hp_Distorted_FM,
//		(void *)hp_909hits_01,
//		(void *)wavetable_SWN_wf_rm_hs, 
//		(void *)wavetable_pailo_smoothrough, 
//		(void *)wavetable_ring_mod_JQ,
//		(void *)wavetable_Sine_Seq_JQ, 
	};

#endif
