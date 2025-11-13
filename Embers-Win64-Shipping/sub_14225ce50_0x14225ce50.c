// 函数: sub_14225ce50
// 地址: 0x14225ce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (arg1[2].b & 2) == 0
*arg1 = &data_143311ce0

if (not(cond:0))
    void* rax_1 = sub_140d3c6e0(arg1 + 0x14)
    
    if (rax_1 != 0)
        int32_t r9_1 = 0
        int32_t rsi_1 = arg1[6].d
        int32_t i_2 = *(rax_1 + 0x378)
        int32_t i = i_2
        int64_t r11_1 = *(rax_1 + 0x370)
        
        if (i_2 s> 0)
            do
                int32_t rcx_2 = i & 0x80000001
                
                if (rcx_2 s< 0)
                    rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(i)
                int32_t i_1 = (temp1_1 - temp0_1) s>> 1
                i = i_1
                int32_t rax_5 = i_1 + r9_1
                
                if (*(r11_1 + sx.q(rax_5) * 0x10) s< rsi_1)
                    r9_1 = rax_5 + rcx_2
            while (i s> 0)
        
        if (r9_1 s< i_2)
            int32_t* rcx_9 = (sx.q(r9_1) << 4) + r11_1
            
            if (rsi_1 s>= *rcx_9 && r9_1 != 0xffffffff)
                int32_t rax_7 = i_2 - r9_1
                
                if (rax_7 != 1)
                    memmove(rcx_9, (sx.q(r9_1 + 1) << 4) + r11_1, (rax_7 - 1) << 4)
                    i_2 = *(rax_1 + 0x378)
                
                *(rax_1 + 0x378) = i_2 - 1
                sub_1405a5010(rax_1 + 0x370)

*arg1 = &data_142d857b8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
