// 函数: sub_142acb6d0
// 地址: 0x142acb6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg3 + 8)
int32_t arg_18 = 0

if (arg5 != 0)
    *arg5 = 0

uint64_t result = sub_142acb860(arg1, arg2, rbp, arg4)
int32_t rcx = arg_18

if (rcx s<= 0)
    result = sub_142acad60(arg1, arg2, rbp, &arg_18)
    rcx = arg_18
    
    if (rcx s<= 0)
        int16_t rax = *(arg1 + 0x430)
        int32_t r8_3
        
        if (rax s< 0)
            r8_3 = *(arg1 + 0x434)
        else
            r8_3 = sx.d(rax) s>> 5
        
        if (sub_142ac78a0(arg2, rbp, r8_3, arg1 + 0x428, 0) != 0)
            void* const rdi_1 = &data_143656128
            int32_t rsi_1 = 0
            
            while (true)
                int32_t rax_9 =
                    std::_WChar_traits<wchar_t>::length(&data_143656128 + (sx.q(rsi_1) << 3))
                
                if (sub_142a8ee00(arg2, rbp, rax_9, &data_143656128 + (sx.q(rsi_1) << 3), 0, rax_9, 
                        0) == 0)
                    *(arg3 + 8) = rax_9 + rbp
                    break
                
                rdi_1 += 8
                rsi_1 += 1
                
                if (*rdi_1 == 0)
                    *(arg3 + 0xc) = rbp
                    break
        else
            int16_t rax_2 = *(arg1 + 0x430)
            
            if (rax_2 s< 0)
                *(arg3 + 8) = *(arg1 + 0x434) + rbp
            else
                *(arg3 + 8) = (sx.d(rax_2) s>> 5) + rbp
        
        return 0

if (arg5 != 0)
    *arg5 = 1

*(arg3 + 8) = rcx + rbp
return result
