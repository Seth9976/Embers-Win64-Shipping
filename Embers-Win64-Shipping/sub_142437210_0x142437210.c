// 函数: sub_142437210
// 地址: 0x142437210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f5ea70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5ea70)
    
    if (data_143f5ea70 == 0xffffffff)
        data_143a3054c
        int32_t rax_3 = sub_1424378d0()
        int32_t rbx_1
        
        if (rax_3 == 0x5dc0)
            int32_t rax_5 = data_143a30558
            int32_t rbx_4
            
            if (rax_5 s>= 1)
                rbx_4 = 2
                
                if (rax_5 s< 2)
                    rbx_4 = rax_5
            else
                rbx_4 = 1
            
            rbx_1 = rbx_4 * 0x3800
        else
            int32_t rax_4 = data_143a30558
            
            if (rax_3 == 0xbb80)
                if (rax_4 s>= 1)
                    int32_t rbx_3 = 2
                    
                    if (rax_4 s< 2)
                        rbx_3 = rax_4
                    
                    rbx_1 = rbx_3 << 0xf
                else
                    rbx_1 = 0x8000
            else if (rax_4 s>= 1)
                int32_t rbx_2 = 2
                
                if (rax_4 s< 2)
                    rbx_2 = rax_4
                
                rbx_1 = rbx_2 << 0xd
            else
                rbx_1 = 0x2000
        
        int32_t rax_6
        int32_t zmm6_1
        rax_6, zmm6_1 = sub_1424378d0()
        uint128_t zmm1_1
        zmm1_1.d = _mm_cvtepi32_ps(zx.o(rax_6)).d f* zmm6_1
        zmm1_1.d = zmm1_1.d f/ float.s(zx.q(rbx_1 u>> 2))
        zmm1_1.d = zmm1_1.d f+ 20f
        data_143f5ea6c = int.d(zmm1_1.d)
        _Init_thread_footer(&data_143f5ea70)

return zx.q(data_143f5ea6c)
