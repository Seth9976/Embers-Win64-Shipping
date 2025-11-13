// 函数: sub_14283970c
// 地址: 0x14283970c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
float zmm7[0x4]
float var_28[0x4] = zmm7
uint64_t rax
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3

if (arg2 s> 0x19)
    if (arg2 s> 0x26)
        if (arg2 == 0x32)
        label_14283a867:
            int64_t rdx_20 = *(arg1 + 0xd98)
            
            if (rdx_20 != 0)
                zmm2 = zx.o(*(arg1 + 0x660))
                zmm1 = zx.o(*(arg1 + 0x668))
                zmm3 = zx.o(*(arg1 + 0x80))
                zmm0 = _mm_cvtpd_ps(zx.o(*(arg1 + 0x658)))
                zmm1 = _mm_cvtpd_ps(zmm1)
                zmm2.d = _mm_cvtpd_ps(zmm2).d f+ zmm0.d
                zmm2.d = zmm2.d f+ zmm1.d
                zmm3.d = _mm_cvtpd_ps(zmm3).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x78))).d
                zmm3.d = zmm3.d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x88))).d
                *(arg1 + 0xdec) = (int.d(zmm2.d) << 0xf) + int.d(zmm3.d) + *(rdx_20 + 0x24)
                *(arg1 + 0xda0) = 1
        else if (arg2 s> 0x32)
            if (arg2 s<= 0x34)
            label_14283a731:
                zmm0 = zx.o(*(arg1 + 0x678))
                zmm1 = zx.o(*(arg1 + 0x688))
                zmm2 = zx.o(*(arg1 + 0x780))
                zmm3 = zx.o(*(arg1 + 0x6a0))
                uint128_t zmm4 = _mm_cvtpd_ps(zx.o(*(arg1 + 0x680)))
                zmm0 = _mm_cvtpd_ps(zmm0)
                zmm1 = _mm_cvtpd_ps(zmm1)
                zmm4.d = zmm4.d f+ zmm0.d
                zmm0 = _mm_cvtpd_ps(zx.o(*(arg1 + 0x778)))
                zmm4.d = zmm4.d f+ zmm1.d
                zmm1 = _mm_cvtpd_ps(zx.o(*(arg1 + 0x788)))
                zmm4.d = zmm4.d f* 100f
                zmm2.d = _mm_cvtpd_ps(zmm2).d f+ zmm0.d
                zmm2.d = zmm2.d f+ zmm1.d
                zmm3.d = _mm_cvtpd_ps(zmm3).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x698))).d
                zmm4.d = zmm4.d f+ zmm2.d
                zmm3.d = zmm3.d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x6a8))).d
                zmm4.d = zmm4.d f+ zmm3.d
                *(arg1 + 0xdd0) = zmm4.d
            else if (arg2 == 0x3a)
                zmm1 = zx.o(*(arg1 + 0x758))
                void* rax_5 = *(arg1 + 0xd98)
                
                if (zmm1.q f<= -1.0)
                    zmm1 = zx.o(*(rax_5 + 0x30))
                    zmm0.d = _mm_cvtepi32_ps(zx.o(*(rax_5 + 0x2c))).d f* 100f
                    zmm0.d = zmm0.d f- _mm_cvtepi32_ps(zmm1).d
                else
                    zmm1.q = zmm1.q f* 100.0
                    zmm1.q = zmm1.q f- _mm_cvtepi32_pd(zx.q(*(rax_5 + 0x30))).q
                    zmm0 = _mm_cvtpd_ps(zmm1)
                
                *(arg1 + 0xddc) = zmm0.d
                float zmm0_17 = sub_14283bdd0(zmm0.d)
                rax = *(arg1 + 0xd98)
                *(arg1 + 0xddc) = zmm0_17
                
                if (rax != 0)
                    *(arg1 + 0xddc) = *(arg1 + 0xda4) / float.s(zx.q(*(rax + 0x28))) * zmm0_17
            else if (arg2 == 0x3b)
                goto label_14283a731
        
        switch (arg2)
            case 0x27
            label_14283a670:
                *(arg1 + 0xe1c) = sub_14283845c(arg1, 0x23, 0x27, 0).d
                *(arg1 + 0xe20) = 0x3f800000
                *(arg1 + 0xe24) = 0
                *(arg1 + 0xe28) = 0xbf800000
                *(arg1 + 0xe2c) = 0x40000000
            case 0x28
            label_14283a291:
                zmm6 = zx.o(0)
                zmm1 = zx.o(*(arg1 + 0x4c8))
                zmm2.d =
                    _mm_cvtpd_ps(zx.o(*(arg1 + 0x4c0))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x4b8))).d
                zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
                zmm2.d = zmm2.d f* 0.00100000005f
                zmm0.d = 1f f- zmm2.d
                
                if (0f f<= zmm0.d)
                    zmm7 = _mm_min_ss(0x3f800000, zmm0.d)
                else
                    zmm7 = zx.o(0)
                
                rax = sub_14283845c(arg1, 0x24, 0x28, 1)
                *(arg1 + 0xe30) = rax.d
                *(arg1 + 0xe34) = 0x3f800000
                
                if (rax.d != 0)
                    zmm6.d = -1f / float.s(zx.q(rax.d))
                
                *(arg1 + 0xe38) = zmm6.d
                *(arg1 + 0xe3c) = zmm7[0]
                *(arg1 + 0xe40) = 0x40000000
            case 0x2d
            label_14283a587:
                int64_t rdx_19 = *(arg1 + 0xd98)
                
                if (rdx_19 != 0)
                    zmm2 = zx.o(*(arg1 + 0x5c0))
                    zmm1 = zx.o(*(arg1 + 0x5c8))
                    zmm3 = zx.o(*(arg1 + 0x60))
                    zmm0 = _mm_cvtpd_ps(zx.o(*(arg1 + 0x5b8)))
                    zmm1 = _mm_cvtpd_ps(zmm1)
                    zmm2.d = _mm_cvtpd_ps(zmm2).d f+ zmm0.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    zmm3.d = _mm_cvtpd_ps(zmm3).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x58))).d
                    zmm3.d = zmm3.d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x68))).d
                    *(arg1 + 0xde8) = (int.d(zmm2.d) << 0xf) + int.d(zmm3.d) + *(rdx_19 + 0x20)
                    *(arg1 + 0xda0) = 1
            case 0x2e
                zmm1 = zx.o(*(arg1 + 0x5e8))
                zmm2.d =
                    _mm_cvtpd_ps(zx.o(*(arg1 + 0x5e0))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x5d8))).d
                zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
                
                if (not(zmm2.d f< 0f))
                    *(arg1 + 6) = int.d(zmm2.d).b
            case 0x2f
                zmm1 = zx.o(*(arg1 + 0x608))
                zmm2.d =
                    _mm_cvtpd_ps(zx.o(*(arg1 + 0x600))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x5f8))).d
                zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
                
                if (not(zmm2.d f<= 0f))
                    *(arg1 + 7) = int.d(zmm2.d).b
            case 0x30
                zmm0 = zx.o(*(arg1 + 0x620))
                zmm1 = zx.o(*(arg1 + 0x628))
                zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x618))).d f* 0.400000006f
                zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm0).d
                zmm0 = zx.o(0)
                zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
                
                if (not(0f f> zmm2.d))
                    if (zmm2.d f<= 1440f)
                        zmm0 = _mm_cvtps_pd(zmm2.q)
                    else
                        zmm0 = 0x4096800000000000
                
                *(arg1 + 0xdd4) = _mm_cvtpd_ps(zmm0).d
    else if (arg2 == 0x26)
        zmm1 = zx.o(*(arg1 + 0x4e8))
        zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x4e0))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x4d8))).d
        zmm0 = 0xc5e10000
        zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
        
        if (not(-7200f f> zmm2.d))
            zmm0 = _mm_min_ss(0x45fa0000, zmm2.d)
        
        int32_t rax_4 = (int.q(sub_14283c0a4(zmm0.q) f* *(arg1 + 0xda4) * 0.015625f)).d
        rax = zx.q(rax_4 + 1)
        *(arg1 + 0xe58) = rax.d
        *(arg1 + 0xe5c) = 0x3f800000
        float zmm1_5
        
        if (rax_4 == 0xffffffff)
            zmm1_5 = (zx.o(0)).d
        else
            zmm1_5 = -1f / float.s(rax)
        
        *(arg1 + 0xe60) = zmm1_5
        *(arg1 + 0xe64) = 0
        *(arg1 + 0xe68) = 0x3f800000
    else if (arg2 s> 0x20)
        if (arg2 == 0x21)
            zmm1 = zx.o(*(arg1 + 0x448))
            zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x440))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x438))).d
            zmm0 = 0xc63b8000
            zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
            
            if (not(-12000f f> zmm2.d))
                zmm0 = _mm_min_ss(0x459c4000, zmm2.d)
            
            *(arg1 + 0xdf4) = int.q(sub_14283c0f4(zmm0.q) f* *(arg1 + 0xda4) * 0.015625f).d
            *(arg1 + 0xdf8) = 0
            *(arg1 + 0xdfc) = 0
            *(arg1 + 0xe00) = 0xbf800000
            *(arg1 + 0xe04) = 0x3f800000
        else if (arg2 == 0x22)
            zmm1 = zx.o(*(arg1 + 0x468))
            zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x460))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x458))).d
            zmm0 = 0xc63b8000
            zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
            
            if (not(-12000f f> zmm2.d))
                zmm0 = _mm_min_ss(0x45fa0000, zmm2.d)
            
            int32_t rax_3 = (int.q(sub_14283c0a4(zmm0.q) f* *(arg1 + 0xda4) * 0.015625f)).d
            rax = zx.q(rax_3 + 1)
            *(arg1 + 0xe08) = rax.d
            *(arg1 + 0xe0c) = 0x3f800000
            float zmm1_4
            
            if (rax_3 == 0xffffffff)
                zmm1_4 = (zx.o(0)).d
            else
                zmm1_4 = 1f / float.s(rax)
            
            *(arg1 + 0xe10) = zmm1_4
            *(arg1 + 0xe14) = 0xbf800000
            *(arg1 + 0xe18) = 0x3f800000
        else
            if (arg2 == 0x23)
                goto label_14283a670
            
            if (arg2 - 0x24 u<= 1)
                goto label_14283a291
    else if (arg2 == 0x20)
    label_14283a1c4:
        rax = sub_14283845c(arg1, 0x1c, 0x20, 1)
        uint128_t zmm1_3 = zx.o(*(arg1 + 0x3c8))
        uint128_t zmm2_1
        zmm2_1.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x3c0))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x3b8))).d
        zmm2_1.d = zmm2_1.d f+ _mm_cvtpd_ps(zmm1_3).d
        zmm1_3 = zx.o(0)
        zmm2_1.d = zmm2_1.d f* 0.00100000005f
        uint128_t zmm0_12
        zmm0_12.d = 1f f- zmm2_1.d
        int32_t zmm3_1
        
        if (0f f<= zmm0_12.d)
            zmm3_1 = _mm_min_ss(0x3f800000, zmm0_12.d)
        else
            zmm3_1 = (zx.o(0)).d
        
        *(arg1 + 0xed0) = rax.d
        *(arg1 + 0xed4) = 0x3f800000
        
        if (rax.d != 0)
            zmm0_12.d = float.s(zx.q(rax.d))
            zmm1_3.d = -1f f/ zmm0_12.d
        
        *(arg1 + 0xed8) = zmm1_3.d
        *(arg1 + 0xedc) = zmm3_1
        *(arg1 + 0xee0) = 0x40000000
    else if (arg2 == 0x1a)
        zmm1 = zx.o(*(arg1 + 0x368))
        zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x360))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x358))).d
        zmm0 = 0xc63b8000
        zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
        
        if (not(-12000f f> zmm2.d))
            zmm0 = _mm_min_ss(0x45fa0000, zmm2.d)
        
        int32_t rax_2 = (int.q(sub_14283c0a4(zmm0.q) f* *(arg1 + 0xda4) * 0.015625f)).d
        rax = zx.q(rax_2 + 1)
        *(arg1 + 0xea8) = rax.d
        *(arg1 + 0xeac) = 0x3f800000
        float zmm1_2
        
        if (rax_2 == 0xffffffff)
            zmm1_2 = (zx.o(0)).d
        else
            zmm1_2 = 1f / float.s(rax)
        
        *(arg1 + 0xeb0) = zmm1_2
        *(arg1 + 0xeb4) = 0xbf800000
        *(arg1 + 0xeb8) = 0x3f800000
    else if (arg2 == 0x1b)
    label_14283a02b:
        *(arg1 + 0xebc) = sub_14283845c(arg1, 0x1b, 0x1f, 0).d
        *(arg1 + 0xec0) = 0x3f800000
        *(arg1 + 0xec4) = 0
        *(arg1 + 0xec8) = 0xbf800000
        *(arg1 + 0xecc) = 0x40000000
    else if (arg2 s> 0x1b)
        if (arg2 s<= 0x1d)
            goto label_14283a1c4
        
        if (arg2 == 0x1e)
            zmm1 = zx.o(*(arg1 + 0x3e8))
            zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x3e0))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x3d8))).d
            zmm0 = 0xc63b8000
            zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
            
            if (not(-12000f f> zmm2.d))
                zmm0 = _mm_min_ss(0x45fa0000, zmm2.d)
            
            int32_t rax_1 = (int.q(sub_14283c0a4(zmm0.q) f* *(arg1 + 0xda4) * 0.015625f)).d
            rax = zx.q(rax_1 + 1)
            *(arg1 + 0xef8) = rax.d
            *(arg1 + 0xefc) = 0x3f800000
            
            if (rax_1 == 0xffffffff)
                zmm2 = zx.o(0)
            else
                float zmm1_1[0x2] = 0xbf800000
                zmm1_1[0] = -1f / float.s(rax)
                zmm2 = _mm_cvtps_pd(zmm1_1)
            
            *(arg1 + 0xf00) = _mm_cvtpd_ps(zmm2)
            *(arg1 + 0xf04) = 0
            *(arg1 + 0xf08) = 0x40000000
        else if (arg2 == 0x1f)
            goto label_14283a02b
else if (arg2 == 0x19)
    zmm1 = zx.o(*(arg1 + 0x348))
    zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x340))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x338))).d
    zmm0 = 0xc63b8000
    zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
    
    if (not(-12000f f> zmm2.d))
        zmm0 = _mm_min_ss(0x459c4000, zmm2.d)
    
    *(arg1 + 0xe94) = int.q(sub_14283c0f4(zmm0.q) f* *(arg1 + 0xda4) * 0.015625f).d
    *(arg1 + 0xe98) = 0
    *(arg1 + 0xe9c) = 0
    *(arg1 + 0xea0) = 0xbf800000
    *(arg1 + 0xea4) = 0x3f800000
else if (arg2 s> 0xa)
    if (arg2 == 0x15)
        zmm1 = zx.o(*(arg1 + 0x2c8))
        zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x2c0))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x2b8))).d
        zmm0 = 0xc63b8000
        zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
        
        if (not(-12000f f> zmm2.d))
            zmm0 = _mm_min_ss(0x459c4000, zmm2.d)
        
        *(arg1 + 0xf38) = int.q(sub_14283c0f4(zmm0.q) f* *(arg1 + 0xda4)).d
    else if (arg2 == 0x16)
        zmm1 = zx.o(*(arg1 + 0x2e8))
        zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x2e0))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x2d8))).d
        zmm0 = 0xc67a0000
        zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
        
        if (not(-16000f f> zmm2.d))
            zmm0 = _mm_min_ss(0x458ca000, zmm2.d)
        
        float zmm0_7
        zmm0_7, rax = sub_14283bb00(zmm0.q)
        *(arg1 + 0xf3c) = zmm0_7 * 256f f/ *(arg1 + 0xda4)
    else if (arg2 == 0x17)
        zmm1 = zx.o(*(arg1 + 0x308))
        zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x300))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x2f8))).d
        zmm0 = 0xc63b8000
        zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
        
        if (not(-12000f f> zmm2.d))
            zmm0 = _mm_min_ss(0x459c4000, zmm2.d)
        
        *(arg1 + 0xf50) = int.q(sub_14283c0f4(zmm0.q) f* *(arg1 + 0xda4)).d
    else if (arg2 == 0x18)
        zmm1 = zx.o(*(arg1 + 0x328))
        zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x320))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x318))).d
        zmm0 = 0xc67a0000
        zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
        
        if (not(-16000f f> zmm2.d))
            zmm0 = _mm_min_ss(0x458ca000, zmm2.d)
        
        float zmm0_5
        zmm0_5, rax = sub_14283bb00(zmm0.q)
        *(arg1 + 0xf54) = zmm0_5 * 256f f/ *(arg1 + 0xda4)
    
    switch (arg2)
        case 0xb
            zmm1 = zx.o(*(arg1 + 0x188))
            zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x180))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x178))).d
            zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
            
            if (not(-12000f f<= zmm2.d))
                zmm0 = -0x3f38900000000000
            else if (zmm2.d f<= 12000f)
                zmm0 = _mm_cvtps_pd(zmm2.q)
            else
                zmm0 = 0x40c7700000000000
            
            *(arg1 + 0xf2c) = _mm_cvtpd_ps(zmm0).d
        case 0xc
        label_142839c28:
            int64_t rdx_11 = *(arg1 + 0xd98)
            
            if (rdx_11 != 0)
                zmm2 = zx.o(*(arg1 + 0x1a0))
                zmm1 = zx.o(*(arg1 + 0x1a8))
                zmm3 = zx.o(*(arg1 + 0x40))
                zmm0 = _mm_cvtpd_ps(zx.o(*(arg1 + 0x198)))
                zmm1 = _mm_cvtpd_ps(zmm1)
                zmm2.d = _mm_cvtpd_ps(zmm2).d f+ zmm0.d
                zmm2.d = zmm2.d f+ zmm1.d
                zmm3.d = _mm_cvtpd_ps(zmm3).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x38))).d
                zmm3.d = zmm3.d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x48))).d
                *(arg1 + 0xde4) = (int.d(zmm2.d) << 0xf) + int.d(zmm3.d) + *(rdx_11 + 0x1c)
                *(arg1 + 0xda0) = 1
        case 0xd
            zmm1 = zx.o(*(arg1 + 0x1c8))
            zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x1c0))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x1b8))).d
            zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
            
            if (not(-960f f<= zmm2.d))
                zmm0 = -0x3f72000000000000
            else if (zmm2.d f<= 960f)
                zmm0 = _mm_cvtps_pd(zmm2.q)
            else
                zmm0 = 0x408e000000000000
            
            *(arg1 + 0xf48) = _mm_cvtpd_ps(zmm0).d
        case 0xf
            zmm1 = zx.o(*(arg1 + 0x208))
            zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x200))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x1f8))).d
            zmm0 = zx.o(0)
            zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
            zmm2.d = zmm2.d f/ 1000f
            
            if (not(0f f> zmm2.d))
                if (zmm2.d f<= 1f)
                    zmm0 = _mm_cvtps_pd(zmm2.q)
                else
                    zmm0 = 0x3ff0000000000000
            
            zmm0 = _mm_cvtpd_ps(zmm0)
            *(arg1 + 0xfb0) = zmm0.d
            zmm0.d = zmm0.d f* *(arg1 + 0xdf0)
            zmm0.d = zmm0.d f* 3.05175781e-05f
            *(arg1 + 0xfb4) = zmm0.d
        case 0x10
            zmm1 = zx.o(*(arg1 + 0x228))
            zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x220))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x218))).d
            zmm0 = zx.o(0)
            zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
            zmm2.d = zmm2.d f/ 1000f
            
            if (not(0f f> zmm2.d))
                if (zmm2.d f<= 1f)
                    zmm0 = _mm_cvtps_pd(zmm2.q)
                else
                    zmm0 = 0x3ff0000000000000
            
            zmm0 = _mm_cvtpd_ps(zmm0)
            *(arg1 + 0xfa8) = zmm0.d
            zmm0.d = zmm0.d f* *(arg1 + 0xdf0)
            zmm0.d = zmm0.d f* 3.05175781e-05f
            *(arg1 + 0xfac) = zmm0.d
        case 0x11
            zmm2 = zx.o(*(arg1 + 0x248))
            zmm0.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x240))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x238))).d
            zmm0.d = zmm0.d f+ _mm_cvtpd_ps(zmm2).d
            *(arg1 + 0xf9c) = zmm0.d
            int128_t zmm0_3
            zmm0_3.d = sub_14283c02c(zmm0, 1).d f* *(arg1 + 0xdf0)
            zmm0_3.d = zmm0_3.d f* 3.05175781e-05f
            *(arg1 + 0xfa0) = zmm0_3.d
            float zmm0_4
            zmm0_4, rax = sub_14283c02c(*(arg1 + 0xf9c), 0)
            *(arg1 + 0xfa4) = zmm0_4 f* *(arg1 + 0xdf0) * 3.05175781e-05f
else if (arg2 == 0xa)
    zmm1 = zx.o(*(arg1 + 0x168))
    zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x160))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x158))).d
    zmm0 = 0xc63b8000
    zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
    
    if (not(-12000f f> zmm2.d))
        zmm0 = _mm_min_ss(0x463b8000, zmm2.d)
    
    *(arg1 + 0xf40) = zmm0.d
else if (arg2 s> 5)
    if (arg2 == 6)
        zmm1 = zx.o(*(arg1 + 0xe8))
        zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0xe0))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0xd8))).d
        zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
        
        if (not(-12000f f<= zmm2.d))
            zmm0 = -0x3f38900000000000
        else if (zmm2.d f<= 12000f)
            zmm0 = _mm_cvtps_pd(zmm2.q)
        else
            zmm0 = 0x40c7700000000000
        
        *(arg1 + 0xf58) = _mm_cvtpd_ps(zmm0).d
    else if (arg2 == 7)
        zmm1 = zx.o(*(arg1 + 0x108))
        zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x100))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0xf8))).d
        zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
        
        if (not(-12000f f<= zmm2.d))
            zmm0 = -0x3f38900000000000
        else if (zmm2.d f<= 12000f)
            zmm0 = _mm_cvtps_pd(zmm2.q)
        else
            zmm0 = 0x40c7700000000000
        
        *(arg1 + 0xf30) = _mm_cvtpd_ps(zmm0).d
    else if (arg2 == 8)
        zmm0 = zx.o(*(arg1 + 0x118))
        zmm1 = zx.o(*(arg1 + 0x128))
        zmm2 = _mm_cvtpd_ps(zx.o(*(arg1 + 0x120)))
        *(arg1 + 0xf60) = 0xbf800000
        zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm0).d
        zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
        *(arg1 + 0xf5c) = zmm2.d
    else if (arg2 == 9)
        zmm1 = zx.o(*(arg1 + 0x148))
        zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0x140))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x138))).d
        zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
        zmm1 = zx.o(0)
        zmm2.d = zmm2.d f/ 10f
        zmm0 = _mm_cvtps_pd(zmm2.q)
        
        if (not(0.0 f> zmm0.q))
            zmm1 = _mm_min_sd(0x4058000000000000, zmm0.q)
        
        zmm1.q = zmm1.q f- 3.0099999904632568
        zmm1.q = zmm1.q f/ 20.0
        zmm1.d = fconvert.s(pow(0x4024000000000000, zmm1.q))
        double _X = _mm_cvtps_pd(zmm1.q)
        *(arg1 + 0xf64) = zmm1.d
        double zmm0_2
        zmm0_2, rax = sqrt(_X)
        zmm1.q = 0x3ff0000000000000 f/ zmm0_2
        *(arg1 + 0xf60) = 0xbf800000
        *(arg1 + 0xf68) = _mm_cvtpd_ps(zmm1).d
else if (arg2 == 5)
    zmm1 = zx.o(*(arg1 + 0xc8))
    zmm2.d = _mm_cvtpd_ps(zx.o(*(arg1 + 0xc0))).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0xb8))).d
    zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
    
    if (not(-12000f f<= zmm2.d))
        zmm0 = -0x3f38900000000000
    else if (zmm2.d f<= 12000f)
        zmm0 = _mm_cvtps_pd(zmm2.q)
    else
        zmm0 = 0x40c7700000000000
    
    *(arg1 + 0xf44) = _mm_cvtpd_ps(zmm0).d
else if (arg2 == 0)
label_142839774:
    int64_t rdx_3 = *(arg1 + 0xd98)
    
    if (rdx_3 != 0)
        zmm2 = zx.o(*(arg1 + 0xa0))
        zmm1 = zx.o(*(arg1 + 0xa8))
        zmm3 = zx.o(*(arg1 + 0x20))
        zmm0 = _mm_cvtpd_ps(zx.o(*(arg1 + 0x98)))
        zmm1 = _mm_cvtpd_ps(zmm1)
        zmm2.d = _mm_cvtpd_ps(zmm2).d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        zmm3.d = _mm_cvtpd_ps(zmm3).d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x18))).d
        zmm3.d = zmm3.d f+ _mm_cvtpd_ps(zx.o(*(arg1 + 0x28))).d
        *(arg1 + 0xde0) = (int.d(zmm2.d) << 0xf) + int.d(zmm3.d) + *(rdx_3 + 0x18)
        *(arg1 + 0xda0) = 1
else
    if (arg2 == 1)
        goto label_142839c28
    
    if (arg2 == 2)
        goto label_14283a587
    
    if (arg2 == 3)
        goto label_14283a867
    
    if (arg2 == 4)
        goto label_142839774
