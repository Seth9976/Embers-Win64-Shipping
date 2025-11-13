// 函数: sub_1420c4a90
// 地址: 0x1420c4a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0x20)
    int32_t rcx = 0
    
    if (arg3 s> 0)
        while (true)
            if (rcx s< 0x20 && (arg1 & 1 << rcx.b) s> 0)
                rcx += 1
                
                if (rcx s>= arg3)
                    break
                
                continue
            
            uint128_t zmm0
            uint128_t zmm2
            
            if (arg2 s< 0 || arg2 s>= arg3)
                if (arg3 s<= 0)
                    arg2 = 0
                else
                    int32_t rax_3 = rand()
                    arg2 = arg3 - 1
                    zmm0 = _mm_cvtepi32_ps(zx.o(arg3))
                    zmm2.d = _mm_cvtepi32_ps(zx.o(rax_3)).d f* 3.05185094e-05f
                    zmm2.d = zmm2.d f* zmm0.d
                    int32_t rax_4 = int.d(zmm2.d)
                    
                    if (rax_4 s<= arg2)
                        arg2 = rax_4
            
            while (test_bit(arg1, arg2))
                if (arg3 s<= 0)
                    arg2 = 0
                else
                    int32_t rax_5 = rand()
                    arg2 = arg3 - 1
                    zmm0 = _mm_cvtepi32_ps(zx.o(arg3))
                    zmm2.d = _mm_cvtepi32_ps(zx.o(rax_5)).d f* 3.05185094e-05f
                    zmm2.d = zmm2.d f* zmm0.d
                    int32_t rax_6 = int.d(zmm2.d)
                    
                    if (rax_6 s<= arg2)
                        arg2 = rax_6
            
            return zx.q(arg2)

return 0xffffffff
