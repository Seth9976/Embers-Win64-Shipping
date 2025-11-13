// 函数: sub_140be17b0
// 地址: 0x140be17b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x50)
*(arg1 + 0xb4) = 0
*(arg1 + 0xb6) = 0xffff0000

if (result != 0)
    for (bool cond:0_1 = ((zx.q(*(*(result + 8) + 0x10)) u>> 0xf).b & 1) == 0; not(cond:0_1); 
            cond:0_1 = ((zx.q(*(*(result + 8) + 0x10)) u>> 0xf).b & 1) == 0)
        int64_t rcx_2 = *(result + 0x40)
        
        if (rcx_2.b s>= 0)
            if ((*(arg1 + 0xb0) & 0x800000) == 0)
                break
            
            if (not(test_bit(rcx_2, 9)))
                *(arg1 + 0xc0) = result
                break
        else
            *(arg1 + 0xb4) += 1
            *(arg1 + 0xb6) = *(result + 0x3c) * *(result + 0x38) + *(result + 0x4c)
            
            if (test_bit(zx.q(*(result + 0x40)), 0xa))
                *(arg1 + 0xb8) = *(result + 0x4c)
        
        result = *(result + 0x20)
        
        if (result == 0)
            break

return result
