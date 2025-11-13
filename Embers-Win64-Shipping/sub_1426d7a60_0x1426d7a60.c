// 函数: sub_1426d7a60
// 地址: 0x1426d7a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x27].d s<= 0)
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) s<= 0xffffffff)
        sub_1405c5570(arg1, 0)
    
    sub_1426e82e0(&arg1[0x25], 0)
    int32_t rax_8 = *(arg1 + 0x24)
    arg1[4].d = 0
    
    if (rax_8 s< 0 && rax_8 != 0)
        rax_8 = sub_1405c5510(&arg1[3], 0)
    
    arg1[5].d = 2
    return rax_8

uint64_t rax = zx.q(arg1[0x2a].d)

if (rax.d != 0)
    int32_t rdx_2 = arg1[1].d
    int64_t rcx_2 = *arg1
    
    if (rax.d - 1 u<= 1)
        sub_1426c4800(rcx_2, rdx_2, arg2)
        uint128_t zmm0_2
        
        if (arg1[0x2a].d != 1)
            zmm0_2 = 0x3f400000
        else
            zmm0_2 = 0x3f733333
        
        int32_t* rcx_5 = *arg1
        int32_t rax_3 = 1
        int32_t rdx_4 = arg1[0x27].d
        zmm0_2.d = zmm0_2.d f* *rcx_5
        
        if (rdx_4 s> 1)
            void* rcx_6 = &rcx_5[2]
            
            do
                if (zmm0_2.d f> *rcx_6)
                    rdx_4 = rax_3
                    break
                
                rax_3 += 1
                rcx_6 += 8
            while (rax_3 s< rdx_4)
        
        int32_t rbx_1
        
        if (rdx_4 s<= 0)
            rbx_1 = 0
        else
            int32_t rax_4 = data_143f7200c * 0xbb38435
            zmm0_2 = _mm_cvtepi32_ps(zx.o(rdx_4))
            data_143f7200c = rax_4 + 0x3619636b
            arg2.d = (rax_4 + 0x3619636b) u>> 9 | 0x3f800000
            rbx_1 = int.d((arg2.d - 1f) f* zmm0_2.d)
        
        rax = sub_1426e6a40(arg1, rbx_1)
    else
        sub_1426c4800(rcx_2, rdx_2, arg2)
        sub_14083cc90(arg1, arg1[0x27].d, 1)
        int32_t i_4 = arg1[0x27].d
        int32_t zmm4_1 = (zx.o(0)).d
        rax = *arg1
        int32_t zmm2_1 = (zx.o(0)).d
        float zmm3 = -3.39999995e+38f
        uint64_t rcx_4 = rax
        
        if (i_4 s> 0)
            uint64_t i_3 = zx.q(i_4)
            uint64_t i
            
            do
                float zmm1_1 = *rcx_4
                rcx_4 += 8
                zmm3 = _mm_max_ss(zmm1_1, zmm3)
                zmm2_1 = _mm_min_ss(zmm1_1, zmm2_1)
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        if (zmm2_1 f!= zmm3)
            int32_t i_1 = 0
            
            if (i_4 s> 0)
                do
                    i_1 += 1
                    *rax = (*rax f- zmm2_1) * 1f / (zmm3 f- zmm2_1)
                    rax += 8
                while (i_1 s< arg1[0x27].d)
                
                arg1[5].d = 1
                return rax
        else
            if (not(zmm2_1 f== 0f))
                zmm4_1 = 0x3f800000
            
            int32_t i_2 = 0
            
            if (i_4 s> 0)
                do
                    *rax = zmm4_1
                    rax += 8
                    i_2 += 1
                while (i_2 s< arg1[0x27].d)
                
                arg1[5].d = 1
                return rax
else if ((*(arg1 + 0x13e) & 3) == 0)
    sub_1426c4800(*arg1, arg1[1].d, arg2)
    int64_t rax_1 = sub_1426e6a40(arg1, 0)
    arg1[5].d = 1
    return rax_1

arg1[5].d = 1
return rax
