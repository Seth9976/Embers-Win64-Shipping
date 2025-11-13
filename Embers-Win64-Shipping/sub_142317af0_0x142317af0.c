// 函数: sub_142317af0
// 地址: 0x142317af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141a85d50(arg1 + 0x290, 0)
int32_t i = 0

if (*(arg1 + 0x170) s> 0)
    int32_t i_1 = 0
    int32_t r15_1 = 1
    
    do
        int64_t rsi_1 = sx.q(i_1) << 3
        void* rdi_1 = *(rsi_1 + *(arg1 + 0x168))
        
        if (sub_14214bcb0(rdi_1) != 0)
            int64_t rdi_2 = *(rdi_1 + 0x18)
            
            if (*(arg1 + 0x298) == *(arg1 + 0x2c4))
            label_142317c47:
                int32_t var_48
                sub_140b33170(arg1 + 0x290, &var_48)
                int64_t* var_40
                *var_40 = rdi_2
                var_40[1].d = i
                *(var_40 + 0xc) = 0xffffffff
                void arg_8
                result = sub_140a6fff0(arg1 + 0x290, &arg_8, 
                    (rdi_2 u>> 0x20).d + sub_140b5ead0(rdi_2.d), var_40, var_48, nullptr)
                void* rcx_15 = *(arg1 + 0x60)
                
                if (rcx_15 != 0)
                    int64_t var_58 = rdi_2
                    int16_t var_50_1 = 0xffff
                    sub_141e4ba50(rcx_15, &data_143f398c8, &var_58)
                    result = sub_141e3aac0(*(arg1 + 0x60), rdi_2, 0, 1)
            else
                int32_t rax_9 = sub_140b5ead0(rdi_2.d) + rdi_2:4.d
                void* r8_3 = arg1 + 0x2c8
                void* rcx_8 = *(r8_3 + 8)
                
                if (rcx_8 != 0)
                    r8_3 = rcx_8
                
                result = *(r8_3 + (((sx.q(*(arg1 + 0x2d8)) - 1) & sx.q(rax_9)) << 2))
                
                if (result == 0xffffffff)
                    goto label_142317c47
                
                int64_t r8_4 = *(arg1 + 0x290)
                void* rcx_10
                
                while (true)
                    int64_t rdx_5 = sx.q(result) * 5
                    rcx_10 = r8_4 + (rdx_5 << 2)
                    
                    if (*(r8_4 + (rdx_5 << 2)) == rdi_2)
                        break
                    
                    result = *(rcx_10 + 0xc)
                    
                    if (result == 0xffffffff)
                        goto label_142317c47
                
                if (result == 0xffffffff || rcx_10 == 0 || rcx_10 == -8)
                    goto label_142317c47
        else
            int32_t rcx_3 = *(arg1 + 0x170)
            int32_t rax_3 = rcx_3 - i_1
            
            if (rax_3 != 1)
                int64_t rcx_4 = *(arg1 + 0x168)
                memmove(rcx_4 + rsi_1, rcx_4 + (sx.q(r15_1) << 3), (rax_3 - 1) << 3)
                rcx_3 = *(arg1 + 0x170)
            
            *(arg1 + 0x170) = rcx_3 - 1
            result = sub_1405c53d0(arg1 + 0x168)
            r15_1 -= 1
            i = i_1 - 1
        
        i += 1
        r15_1 += 1
        i_1 = i
    while (i s< *(arg1 + 0x170))

return result
