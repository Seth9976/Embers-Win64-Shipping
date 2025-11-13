// 函数: sub_141d6dfa0
// 地址: 0x141d6dfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d6a590(arg1 + 0x3a0, arg2)

if (*(arg1 + 0x3f8) != *(arg1 + 0x424))
    int32_t rax_1 = sub_140a6b260(arg2, 0x10)
    void* rcx_2 = *(arg1 + 0x430)
    void* r11_1 = arg1 + 0x428
    int64_t rsi_2 = sx.q(*(arg1 + 0x438)) - 1
    
    if (rcx_2 != 0)
        r11_1 = rcx_2
    
    int32_t i = *(r11_1 + ((sx.q(rax_1) & rsi_2) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_1 = *(arg1 + 0x3f0)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rax_4 = i_1 * 3
            void* r8_1 = r9_1 + (rax_4 << 3)
            int32_t rcx_6 = (*(r9_1 + (rax_4 << 3) + 4) ^ *(arg2 + 4))
                | (*(r9_1 + (rax_4 << 3) + 8) ^ arg2[1].d) | (*(r8_1 + 0xc) ^ *(arg2 + 0xc))
            
            if ((rcx_6 | (*arg2 ^ *r8_1)) == 0)
                if (*(arg1 + 0x3f8) != *(arg1 + 0x424))
                    int64_t rax_12 = i_1 * 3
                    int64_t rax_14 = sx.q(*(r9_1 + (rax_12 << 3) + 0x14)) & rsi_2
                    void* rcx_8 = r11_1 + (rax_14 << 2)
                    int32_t j = *(r11_1 + (rax_14 << 2))
                    
                    while (j != 0xffffffff)
                        if (j == i)
                            *rcx_8 = *(r9_1 + (rax_12 << 3) + 0x10)
                            break
                        
                        int64_t j_1 = sx.q(j)
                        j = *(r9_1 + ((j_1 * 3 + 2) << 3))
                        rcx_8 = r9_1 + ((j_1 * 3 + 2) << 3)
                
                sub_1405c3640(arg1 + 0x3f0, i, 1)
                break
            
            i = *(r8_1 + 0x10)
        while (i != 0xffffffff)

return sub_141d6a6f0(arg1 + 0x350, arg2) __tailcall
