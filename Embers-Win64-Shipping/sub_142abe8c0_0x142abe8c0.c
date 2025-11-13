// 函数: sub_142abe8c0
// 地址: 0x142abe8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x1a0)
int32_t result

do
    void* rcx = *(arg1 + 0x198)
    int16_t rax_1 = *(rcx + 8)
    int32_t rax_3
    
    if (rax_1 s< 0)
        rax_3 = *(rcx + 0xc)
    else
        rax_3 = sx.d(rax_1) s>> 5
    
    int32_t rdx = *(arg1 + 0x1a0)
    int32_t rax_4
    
    if (rdx != rax_3)
        rax_4 = sub_142a486d0(rcx, rdx)
        
        if (rax_4 s<= 0x2030)
            if (rax_4 != 0x2030)
                goto label_142abe928
            
            *(*(arg1 + 0x1a8) + 0x89) = 1
    else
        rax_4 = -1
    label_142abe928:
        
        if (rax_4 + 1 u<= 0xa5)
            switch (rax_4)
                case 0x23, 0x2a, 0x2c, 0x2e, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 
                        0x39, 0x3b, 0x40, 0xffffffff
                    result = *(arg1 + 0x1a0)
                    arg2[1] = result
                    break
                case 0x25
                    *(*(arg1 + 0x1a8) + 0x88) = 1
                case 0x2b
                    *(*(arg1 + 0x1a8) + 0x8c) = 1
                case 0x2d
                    *(*(arg1 + 0x1a8) + 0x8b) = 1
                case 0xa4
                    *(*(arg1 + 0x1a8) + 0x8a) = 1
    result = sub_142abf000(arg1, arg3)
while (*arg3 s<= 0)

return result
