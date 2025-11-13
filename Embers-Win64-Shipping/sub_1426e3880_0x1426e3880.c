// 函数: sub_1426e3880
// 地址: 0x1426e3880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3c6e0(arg2 + 0x34)
uint64_t result_1 = result

if (result != 0 && *(arg1 + 0x34) != 0)
    int64_t* rcx_1 = *(arg1 + 0x180)
    
    if (rcx_1 != 0)
        int64_t r9_1 = *rcx_1
        (*(r9_1 + 0x260))(rcx_1, result, zx.q(arg2[6].d), r9_1)
        *(arg1 + 0x178) = sub_140cdb8f0(*(*(arg1 + 0x180) + 0x10), *(arg1 + 0x188))
    
    void* rax_2 = *(arg1 + 0x178)
    int64_t rax_3
    
    if (rax_2 != 0)
        rax_3 = sx.q(*(rax_2 + 0x4c))
    
    uint32_t zmm12[0x4]
    
    if (rax_2 == 0 || rax_3 == neg.q(*(arg1 + 0x180)))
        zmm12 = *(arg1 + 0x1a0)
    else
        zmm12 = *(rax_3 + *(arg1 + 0x180))
    
    uint32_t zmm6[0x4]
    
    if (*(arg1 + 0xfc) != 0)
        zmm6 = 0x7f7fc99e
    else
        zmm6 = zx.o(0)
    
    char rax_5 = *(arg1 + 0xfa)
    uint32_t zmm7[0x4] = 0xff7fc99e
    
    if (rax_5 == 2)
        int64_t* rcx_3 = *(arg1 + 0x98)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x260))(rcx_3, result_1, zx.q(arg2[6].d))
            *(arg1 + 0x90) = sub_140cdb8f0(*(*(arg1 + 0x98) + 0x10), *(arg1 + 0xa0))
        
        void* rax_9 = *(arg1 + 0x90)
        int64_t rax_10
        
        if (rax_9 != 0)
            rax_10 = sx.q(*(rax_9 + 0x4c))
        
        if (rax_9 == 0 || rax_10 == neg.q(*(arg1 + 0x98)))
            zmm6 = *(arg1 + 0xb8)
        else
            zmm6 = *(rax_10 + *(arg1 + 0x98))
    else if (rax_5 == 1)
        arg2[6].d
        sub_1426cce30(arg1 + 0x100, result_1)
        void* rax_12 = *(arg1 + 0x108)
        int64_t rax_13
        
        if (rax_12 != 0)
            rax_13 = sx.q(*(rax_12 + 0x4c))
        
        if (rax_12 == 0 || rax_13 == neg.q(*(arg1 + 0x110)))
            zmm6 = *(arg1 + 0x130)
        else
            zmm6 = *(rax_13 + *(arg1 + 0x110))
    
    result = zx.q(*(arg1 + 0xfb))
    
    if (result.b == 2)
        int64_t* rcx_6 = *(arg1 + 0xd0)
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x260))(rcx_6, result_1, zx.q(arg2[6].d))
            *(arg1 + 0xc8) = sub_140cdb8f0(*(*(arg1 + 0xd0) + 0x10), *(arg1 + 0xd8))
        
        result = *(arg1 + 0xc8)
        
        if (result == 0)
            zmm7 = *(arg1 + 0xf0)
        else
            int64_t rax_18 = sx.q(*(result + 0x4c))
            result = rax_18 + *(arg1 + 0xd0)
            
            if (rax_18 == neg.q(*(arg1 + 0xd0)))
                zmm7 = *(arg1 + 0xf0)
            else
                zmm7 = *result
    else if (result.b == 1)
        arg2[6].d
        sub_1426cce30(arg1 + 0x138, result_1)
        result = *(arg1 + 0x140)
        
        if (result == 0)
            zmm7 = *(arg1 + 0x168)
        else
            int64_t rax_19 = sx.q(*(result + 0x4c))
            result = rax_19 + *(arg1 + 0x148)
            
            if (rax_19 == neg.q(*(arg1 + 0x148)))
                zmm7 = *(arg1 + 0x168)
            else
                zmm7 = *result
    
    char r9_2 = *(arg1 + 0xfa)
    int32_t i_2 = 0
    int64_t* r15_1 = arg2[0x25]
    int128_t zmm10 = 0xff7fffff
    int64_t* r8_6 = r15_1
    uint32_t zmm0[0x4]
    
    if (r9_2 == 0 || *(arg1 + 0xfb) == 0)
        int64_t r11_1 = sx.q(arg2[1].d)
        int64_t rsi_1 = 0
        
        if (r11_1 s>= 4)
            void* rdx_9 = *arg2 + 0xc
            int64_t i_3 = ((r11_1 - 4) u>> 2) + 1
            rsi_1 = i_3 << 2
            int64_t i
            
            do
                int32_t rax_20 = *(rdx_9 - 8)
                
                if (not(test_bit(rax_20, 0x1e)) && rax_20 s>= 0)
                    zmm0 = *(*r8_6 + (sx.q(arg2[0x24].d) << 2))
                    
                    if (not(zmm0[0] f== -3.40282347e+38f))
                        if (r9_2 == 0 && not(zmm6[0] f<= zmm0[0]))
                            zmm6 = zmm0
                        
                        if (*(arg1 + 0xfb) == 0 && not(zmm7[0] f>= zmm0[0]))
                            zmm7 = zmm0
                
                int32_t rax_22 = *rdx_9
                
                if (not(test_bit(rax_22, 0x1e)) && rax_22 s>= 0)
                    zmm0 = *(r8_6[2] + (sx.q(arg2[0x24].d) << 2))
                    
                    if (not(zmm0[0] f== -3.40282347e+38f))
                        if (r9_2 == 0 && not(zmm6[0] f<= zmm0[0]))
                            zmm6 = zmm0
                        
                        if (*(arg1 + 0xfb) == 0 && not(zmm7[0] f>= zmm0[0]))
                            zmm7 = zmm0
                
                int32_t rax_24 = *(rdx_9 + 8)
                
                if (not(test_bit(rax_24, 0x1e)) && rax_24 s>= 0)
                    zmm0 = *(r8_6[4] + (sx.q(arg2[0x24].d) << 2))
                    
                    if (not(zmm0[0] f== -3.40282347e+38f))
                        if (r9_2 == 0 && not(zmm6[0] f<= zmm0[0]))
                            zmm6 = zmm0
                        
                        if (*(arg1 + 0xfb) == 0 && not(zmm7[0] f>= zmm0[0]))
                            zmm7 = zmm0
                
                result = zx.q(*(rdx_9 + 0x10))
                
                if (not(test_bit(result.d, 0x1e)) && result.d s>= 0)
                    result = r8_6[6]
                    zmm0 = *(result + (sx.q(arg2[0x24].d) << 2))
                    
                    if (not(zmm0[0] f== -3.40282347e+38f))
                        if (r9_2 == 0 && not(zmm6[0] f<= zmm0[0]))
                            zmm6 = zmm0
                        
                        if (*(arg1 + 0xfb) == 0 && not(zmm7[0] f>= zmm0[0]))
                            zmm7 = zmm0
                
                r8_6 = &r8_6[8]
                rdx_9 += 0x20
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        if (rsi_1 s< r11_1)
            int64_t i_4 = r11_1 - rsi_1
            int32_t* rdx_12 = *arg2 + 4 + (rsi_1 << 3)
            int64_t i_1
            
            do
                result = zx.q(*rdx_12)
                
                if (not(test_bit(result.d, 0x1e)) && result.d s>= 0)
                    result = *r8_6
                    zmm0 = *(result + (sx.q(arg2[0x24].d) << 2))
                    
                    if (not(zmm0[0] f== -3.40282347e+38f))
                        if (r9_2 == 0 && not(zmm6[0] f<= zmm0[0]))
                            zmm6 = zmm0
                        
                        if (*(arg1 + 0xfb) == 0 && not(zmm7[0] f>= zmm0[0]))
                            zmm7 = zmm0
                
                r8_6 = &r8_6[2]
                rdx_12 = &rdx_12[2]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
    
    if (not(zmm6[0] f== zmm7[0]))
        result = zx.q(*(arg1 + 0x1e0))
        uint32_t zmm5[0x4]
        
        if (result.b == 0)
            zmm5 = zmm6
        else
            int64_t* rcx_14 = *(arg1 + 0x1b8)
            
            if (rcx_14 != 0)
                (*(*rcx_14 + 0x260))(rcx_14, result_1, zx.q(arg2[6].d))
                zmm10 = 0xff7fffff
                *(arg1 + 0x1b0) = sub_140cdb8f0(*(*(arg1 + 0x1b8) + 0x10), *(arg1 + 0x1c0))
                result = zx.q(*(arg1 + 0x1e0))
            
            if (result.b == 0)
                zmm5 = zmm6
            else
                result = *(arg1 + 0x1b0)
                
                if (result == 0)
                    zmm5 = *(arg1 + 0x1d8)
                else
                    int64_t rax_29 = sx.q(*(result + 0x4c))
                    result = rax_29 + *(arg1 + 0x1b8)
                    
                    if (rax_29 == neg.q(*(arg1 + 0x1b8)))
                        zmm5 = *(arg1 + 0x1d8)
                    else
                        zmm5 = *result
        
        zmm5[0] = zmm5[0] f- zmm7[0]
        zmm5[0] = zmm5[0] f- zmm6[0]
        uint32_t zmm8[0x4] = _mm_and_ps(zmm5, 0x7fffffff)
        zmm0 = _mm_and_ps(zmm5, 0x7fffffff)
        zmm8 = _mm_max_ss(zmm8[0], zmm0[0])
        
        if (arg2[0x26].d s> 0)
            uint32_t* rdx_15 = nullptr
            
            do
                int64_t r8_8 = *arg2
                result = zx.q(*(rdx_15 + r8_8 + 4))
                
                if (not(test_bit(result.d, 0x1e)) && result.d s>= 0)
                    uint32_t zmm1 = (zx.o(0)).d
                    result = *r15_1
                    zmm0 = *(result + (sx.q(arg2[0x24].d) << 2))
                    
                    if (zmm0[0] f== zmm10.d)
                        zmm1 = (zx.o(0)).d
                    else
                        if (zmm0[0] f>= zmm6[0])
                            zmm0 = _mm_min_ss(zmm0[0], zmm7[0])
                        else
                            zmm0 = zmm6
                        
                        bool cond:1_1 = zmm12[0] f< 0f
                        uint32_t zmm2[0x4] = 0x3f800000
                        zmm5[0] = zmm5[0] f- zmm0[0]
                        zmm2[0] = 1f f/ zmm8[0]
                        uint32_t zmm3[0x4] = _mm_and_ps(zmm5, 0x7fffffff)
                        
                        if (cond:1_1)
                            zmm0 = zmm2
                            zmm2 = 0x3f800000
                            zmm0[0] = zmm0[0] f* zmm3[0]
                            zmm2[0] = 1f f- zmm0[0]
                        else
                            zmm2[0] = zmm2[0] f* zmm3[0]
                        
                        uint32_t rcx_17 = zx.d(*(arg1 + 0xf9))
                        zmm0 = _mm_and_ps(zmm12, 0x7fffffff)
                        
                        if (rcx_17 == 0)
                            zmm1 = zmm0[0] f* zmm2[0]
                        else if (rcx_17 == 1)
                            zmm1 = zmm2[0] f* zmm2[0] f* zmm0[0]
                        else if (rcx_17 == 2)
                            zmm1 = (1f f- zmm2[0]) f* zmm0[0]
                        else if (rcx_17 == 3)
                            zmm1 = _mm_sqrt_ss(0, zmm2[0]) f* zmm0[0]
                        else if (rcx_17 == 4)
                            if (zmm2[0] f<= 0f)
                                zmm1 = (zx.o(0)).d
                            else
                                zmm1 = zmm0[0]
                    
                    *(rdx_15 + r8_8) = zmm1 f+ *(rdx_15 + r8_8)
                
                i_2 += 1
                rdx_15 = &rdx_15[2]
                r15_1 = &r15_1[2]
            while (i_2 s< arg2[0x26].d)

return result
