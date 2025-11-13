// 函数: sub_1408e57d0
// 地址: 0x1408e57d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x360)
float zmm6[0x4] = arg2

if (rdi != 0)
    void* rax_1 = sub_1408ea9e0()
    void* rdx_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        if (arg3 != 0)
            int32_t zmm2 = *(rdi + 0x28)
            arg2 = zmm6
            arg2[0] = arg2[0] f/ zmm2
            int32_t rcx_1 = int.d(arg2[0])
            
            if (rcx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_1)).d f== arg2[0]))
                arg2 = _mm_cvtepi32_ps(zx.o(rcx_1
                    - (_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2[0].q)) & 1)))
            
            arg2[0] = arg2[0] f* zmm2
            zmm6[0] = zmm6[0] - arg2[0]
        
        char* result = *(rdi + 0x88)
        uint64_t rdx_2 = sx.q(*(rdi + 0x90))
        void* r10 = &result[rdx_2 * 0x14]
        
        if (result != r10)
            void* rax_6 = &result[8]
            
            do
                char rdx_3 = *result
                float arg_c = zmm6[0]
                char arg_8 = 1
                uint64_t rcx_3
                char* result_1
                uint128_t zmm0_1
                
                if (rdx_3 != 2)
                    zmm0_1 = *(rax_6 - 4)
                    
                    if (not(zmm0_1.d f>= zmm6[0]))
                        result_1 = result
                        rcx_3 = zx.q(rdx_3)
                    else if (zmm6[0] f< zmm0_1.d || rdx_3 != 1)
                        rcx_3.b = 1
                        result_1 = &arg_8
                    else
                        result_1 = result
                        rcx_3 = zx.q(rdx_3)
                else
                    result_1 = result
                    rcx_3 = zx.q(rdx_3)
                
                if (rcx_3.b != rdx_3 || (rcx_3.b != 2 && (*(rax_6 - 4)).d f!= *(result_1 + 4)))
                    rcx_3.b = 0
                else
                    rcx_3.b = 1
                
                if (rcx_3.b == 0)
                    rcx_3.b = 0
                else
                    char rdx_4 = *rax_6
                    float arg_24 = zmm6[0]
                    char arg_20 = 1
                    void* r8
                    
                    if (rdx_4 != 2)
                        zmm0_1 = *(rax_6 + 4)
                        
                        if (not(zmm0_1.d f<= zmm6[0]))
                            r8 = rax_6
                            rcx_3 = zx.q(rdx_4)
                        else if (zmm6[0] f> zmm0_1.d || rdx_4 != 1)
                            rcx_3.b = 1
                            r8 = &arg_20
                        else
                            r8 = rax_6
                            rcx_3 = zx.q(rdx_4)
                    else
                        r8 = rax_6
                        rcx_3 = zx.q(rdx_4)
                    
                    if (rcx_3.b != rdx_4 || (rcx_3.b != 2 && (*(rax_6 + 4)).d f!= *(r8 + 4)))
                        rcx_3.b = 0
                    else
                        rcx_3.b = 1
                    
                    if (rcx_3.b == 0)
                        rcx_3.b = 0
                    else
                        rcx_3.b = 1
                
                if (rcx_3.b != 0)
                    return result
                
                result = &result[0x14]
                rax_6 += 0x14
            while (result != r10)
            
            rdx_2 = zx.q(*(rdi + 0x90))
        
        return *(rdi + 0x88) + sx.q((rdx_2 - 1).d) * 0x14

return &data_143984f08
