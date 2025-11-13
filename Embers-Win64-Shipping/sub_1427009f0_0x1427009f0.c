// 函数: sub_1427009f0
// 地址: 0x1427009f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_4 = sx.q(*(arg1 + 0x30))
int32_t r9 = 0

if (rax_4.d s> 0)
    int32_t zmm1 = *arg2
    int64_t r8_1 = 0
    int32_t* rax_1 = *(arg1 + 0x28) + 0xc
    
    do
        if (not(zmm1 f<= rax_1[-1]) && not(zmm1 f>= rax_1[2]))
            int32_t zmm0 = arg2[1]
            
            if (not(zmm0 f<= *rax_1) && not(zmm0 f>= rax_1[3]))
                zmm0 = arg2[2]
                
                if (not(zmm0 f<= rax_1[1]) && zmm0 f< rax_1[4])
                    return zx.q(r9)
        
        r9 += 1
        r8_1 += 1
        rax_1 = &rax_1[0x24]
    while (r8_1 s< rax_4)

return 0xffffffff
