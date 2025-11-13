// 函数: sub_1424364c0
// 地址: 0x1424364c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == data_143f5e628)
    data_143f5e628 = 0
    z = true
else
    data_143f5e628
    z = false

uint64_t rax

if (not(z))
    int128_t zmm1 = arg2[1]
    int64_t rdx = *(arg1 + 0x10)
    int128_t var_28 = *arg2
    int128_t var_18_1 = zmm1
    
    if (ov_open_callbacks(arg1, rdx, 0, 0, &var_28).d s>= 0)
        if (arg3 != 0)
            void* rax_1 = ov_info(*(arg1 + 0x10), 0xffffffff)
            *(arg3 + 8) = *(rax_1 + 8)
            *(arg3 + 4) = *(rax_1 + 4)
            rax = ov_pcm_total(*(arg1 + 0x10), 0xffffffff)
            
            if (rax s>= 0)
                *(arg3 + 0xc) = *(arg3 + 4) * rax.d * 2
                int64_t rax_3
                int64_t zmm0_1
                rax_3, zmm0_1 = ov_time_total(*(arg1 + 0x10), 0xffffffff)
                rax_3.b = 1
                zmm1.d = fconvert.s(zmm0_1)
                *(arg3 + 0x10) = zmm1.d
                return rax_3
            
            if (rax == -0x83)
                *(arg3 + 0xc) = 0
        
        rax.b = 1
        return rax

rax.b = 0
return rax
