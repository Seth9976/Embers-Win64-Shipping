// 函数: sub_140f01890
// 地址: 0x140f01890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*arg3)
int32_t r10 = arg3[1]

if (r11.d s>= 0 && r11.d s< *(arg1 + 0x20))
    int64_t rdi_1 = sx.q(arg2[1].d)
    int32_t r8 = 0
    
    if (rdi_1.d s> 0)
        int64_t r9 = 0
        int32_t* rax_2 = *arg2 + 0xac
        
        do
            if (rax_2[-0x16] == r11.d)
                if (r10 == 0 || *(*(r11 * 0x70 + *(arg1 + 0x18)) + 8) s<= 1
                        || (r10 s>= rax_2[-0x19] && r10 s< rax_2[-0x18]))
                    return zx.q(r8)
                
                if ((r8 == (rdi_1 - 1).d || *rax_2 != r11.d || arg4 != 0) && rax_2[-0x18] == r10)
                    return zx.q(r8)
            
            r8 += 1
            r9 += 1
            rax_2 = &rax_2[0x16]
        while (r9 s< rdi_1)

return 0xffffffff
