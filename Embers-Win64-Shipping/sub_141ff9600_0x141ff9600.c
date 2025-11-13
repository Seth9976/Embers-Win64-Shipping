// 函数: sub_141ff9600
// 地址: 0x141ff9600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_18 = zmm6
uint64_t result_1 = *arg2
uint128_t zmm7
uint128_t var_28 = zmm7
uint128_t zmm8
uint128_t var_38 = zmm8
uint64_t result

if (result_1 == 0)
    result.b = 1
else if ((*(result_1 + 0x30) & 6) != 0)
    result = result_1
    
    if (*(result_1 + 0x14) == 1)
        void* rcx = *arg1
        
        if ((*(rcx + 0x28) & 8) != 0)
            arg1[1].d
            void* var_50_1 = rcx + 0x2c
            int64_t var_58_1 = arg1[3]
            sub_141ffa9a0(rcx, result_1, arg3, arg1[2])
            result = *arg2
    
    char rcx_1 = *(result + 0x80)
    
    if (rcx_1 == 2)
        zmm6 = *(result + 0x90)
        void* rax_2 = arg1[3]
        int32_t rcx_2
        uint128_t zmm0
        uint128_t zmm1
        uint128_t zmm3
        uint128_t zmm5
        uint64_t var_48
        
        if (zmm6.d f>= 9.99999975e-05f)
            zmm8 = *(rax_2 + 0xc8)
            zmm7 = *(rax_2 + 0xc4)
            zmm0.d = zmm8.d f* zmm8.d
            zmm1.d = zmm7.d f* zmm7.d
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = zmm6.d f* zmm6.d
            
            if (zmm1.d f<= zmm0.d)
                zmm1 = zx.o(*(rax_2 + 0xc4))
                rcx_2 = *(rax_2 + 0xcc)
            else
                zmm5 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
                zmm3.d = zmm1.d f* 0.5f
                zmm0.d = zmm5.d f* zmm5.d
                zmm1.d = zmm3.d f* zmm0.d
                zmm0.d = zmm5.d f* (0.5f f- zmm1.d)
                zmm5.d = zmm5.d f+ zmm0.d
                zmm1.d = zmm5.d f* zmm5.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
                zmm5.d = zmm5.d f+ zmm0.d
                rcx_2 = (*(rax_2 + 0xcc)).d
                zmm5.d = zmm5.d f* zmm6.d
                zmm7.d = zmm7.d f* zmm5.d
                zmm8.d = zmm8.d f* zmm5.d
                zmm1.d = zmm7.d
                _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                zmm0.d = zmm8.d
                zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                var_48 = zmm0.q
                zmm1 = zmm0
        else
            rcx_2 = (*(rax_2 + 0xcc)).d
            var_48 = 0
            zmm1 = 0
        *(rax_2 + 0xc4) = zmm1.q
        *(rax_2 + 0xcc) = rcx_2
        void* rcx_3 = arg1[3]
        *(rcx_3 + 0xcc) = __minss_xmmss_memss((*(*arg2 + 0x90)).d, *(rcx_3 + 0xcc)).d
        void* rcx_4 = *arg1
        
        if ((*(rcx_4 + 0x28) & 8) != 0)
            zmm6 = *(*arg2 + 0x90)
            int32_t rax_4
            
            if (zmm6.d f>= 9.99999975e-05f)
                zmm8 = *(rcx_4 + 0x30)
                zmm7 = *(rcx_4 + 0x2c)
                zmm0.d = zmm8.d f* zmm8.d
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm6.d f* zmm6.d
                
                if (zmm1.d f<= zmm0.d)
                    zmm1 = zx.o(*(rcx_4 + 0x2c))
                    rax_4 = *(rcx_4 + 0x34)
                else
                    zmm5 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
                    zmm3.d = zmm1.d f* 0.5f
                    zmm0.d = zmm5.d f* zmm5.d
                    zmm1.d = zmm3.d f* zmm0.d
                    zmm0.d = zmm5.d f* (0.5f f- zmm1.d)
                    zmm5.d = zmm5.d f+ zmm0.d
                    zmm1.d = zmm5.d f* zmm5.d
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
                    zmm5.d = zmm5.d f+ zmm0.d
                    rax_4 = (*(rcx_4 + 0x34)).d
                    zmm5.d = zmm5.d f* zmm6.d
                    zmm7.d = zmm7.d f* zmm5.d
                    zmm8.d = zmm8.d f* zmm5.d
                    zmm1.d = zmm7.d
                    _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                    zmm0.d = zmm8.d
                    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
            else
                rax_4 = (*(rcx_4 + 0x34)).d
                zmm1 = 0
            
            *(rcx_4 + 0x2c) = zmm1.q
            *(rcx_4 + 0x34) = rax_4
            void* rcx_5 = *arg1
            *(rcx_5 + 0x34) = __minss_xmmss_memss((*(*arg2 + 0x90)).d, *(rcx_5 + 0x34)).d
    else if (rcx_1 == 1)
        void* rcx_6 = arg1[3]
        *(rcx_6 + 0xc4) = *(result + 0x84)
        *(rcx_6 + 0xcc) = *(result + 0x8c)
        void* rdx = *arg1
        
        if ((*(rdx + 0x28) & 8) != 0)
            result = *arg2
            int32_t rcx_7 = *(result + 0x8c)
            *(rdx + 0x2c) = *(result + 0x84)
            *(rdx + 0x34) = rcx_7
    
    result.b = 1
else
    result.b = 0

return result
