// 函数: sub_141feb2c0
// 地址: 0x141feb2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = arg2
int32_t var_40 = 0xffffffff
int32_t var_3c = 4
int32_t arg_10
sub_140e10ae0(arg1 + 0xc0, &arg_10, &var_48)
int64_t rdx_1 = sx.q(arg_10)
uint64_t result

if (rdx_1.d == 0xffffffff)
    var_48 = arg2
    int32_t var_40_1 = 0xffffffff
    int32_t var_3c_1 = 4
    int64_t rdx_5 = sx.q(*sub_140e10ae0(arg1 + 0x110, &arg_10, &var_48))
    
    if (rdx_5.d == 0xffffffff)
        void* rsi_1 = arg1 + 0x160
        var_48 = arg2
        int32_t var_40_2 = 0xffffffff
        int32_t var_3c_2 = 4
        result = sub_140e10ae0(rsi_1, &arg_10, &var_48)
        int64_t rbx_1 = sx.q(*result)
        arg_10 = rbx_1.d
        
        if (rbx_1.d != 0xffffffff)
            int64_t rax_16 = *rsi_1
            int64_t rcx_14 = rbx_1 * 3
            void* rdx_8 = rax_16 + (rcx_14 << 3)
            int32_t rcx_15 = *(rax_16 + (rcx_14 << 3) + 0xc)
            result = zx.q(((zx.q(rcx_15 u>> 2) << 2) + -fffffffffffffffc).d) | (zx.q(rcx_15) & 3)
            *(rdx_8 + 0xc) = result.d
            
            if (result.d u< 4)
                sub_141fe09c0(arg1 + 0x10, *(rdx_8 + 8))
                int64_t rcx_18 = sx.q(*(arg1 + 0x1b8))
                
                if (rcx_18.d != 0)
                    int32_t rsi_2 = 0
                    int32_t r13_1 = 0
                    int64_t r12
                    r12.b = **(arg1 + 0x1b0) != arg2
                    int64_t rdi_1 = 0
                    
                    do
                        int64_t r9_5 = sx.q(rsi_2)
                        rdi_1 += 1
                        rsi_2 += 1
                        
                        if (rdi_1 s< rcx_18)
                            int64_t* rcx_19 = *(arg1 + 0x1b0) + (rdi_1 << 3)
                            
                            do
                                int32_t rax_22
                                rax_22.b = *rcx_19 != arg2
                                
                                if (zx.d(r12.b) != rax_22)
                                    break
                                
                                rsi_2 += 1
                                rdi_1 += 1
                                rcx_19 = &rcx_19[1]
                            while (rdi_1 s< rcx_18)
                        
                        int32_t r14_2 = rsi_2 - r9_5.d
                        
                        if (r12.b != 0)
                            if (r13_1 != r9_5.d)
                                int64_t rcx_20 = *(arg1 + 0x1b0)
                                memmove(rcx_20 + (sx.q(r13_1) << 3), rcx_20 + (r9_5 << 3), 
                                    r14_2 << 3)
                            
                            r13_1 += r14_2
                        
                        r12.b ^= 1
                    while (rdi_1 s< rcx_18)
                    
                    *(arg1 + 0x1b8) = r13_1
                    rbx_1 = zx.q(arg_10)
                
                return sub_1405c2fb0(rsi_1, rbx_1.d)
    else
        int64_t rax_11 = *(arg1 + 0x110)
        int64_t r8_10 = rdx_5 * 3
        int32_t r8_11 = *(rax_11 + (r8_10 << 3) + 0xc)
        result = zx.q(((zx.q(r8_11 u>> 2) << 2) + -fffffffffffffffc).d) | (zx.q(r8_11) & 3)
        *(rax_11 + (r8_10 << 3) + 0xc) = result.d
        
        if (result.d u< 4)
            return sub_1405c2fb0(arg1 + 0x110, rdx_5.d) __tailcall
else
    int64_t r8_1 = *(arg1 + 0xc0)
    int64_t rcx_1 = rdx_1 * 3
    int64_t r9_1 = rcx_1 << 3
    int32_t rcx_2 = *(r8_1 + (rcx_1 << 3) + 0xc)
    result = zx.q(((zx.q(rcx_2 u>> 2) << 2) + -fffffffffffffffc).d) | (zx.q(rcx_2) & 3)
    *(r8_1 + r9_1 + 0xc) = result.d
    
    if (result.d u< 4)
        if (*(arg1 + 0xc8) != *(arg1 + 0xf4))
            void* r8_2 = *(arg1 + 0x100)
            void* r10_1 = *(arg1 + 0xc0)
            void* r11_1 = r10_1 + r9_1
            void* r9_2 = arg1 + 0xf8
            int64_t rcx_5 = sx.q(*(arg1 + 0x108) - 1) & sx.q(*(r11_1 + 0x14))
            
            if (r8_2 != 0)
                r9_2 = r8_2
            
            int32_t i = *(r9_2 + (rcx_5 << 2))
            void* r8_3 = r9_2 + (rcx_5 << 2)
            
            if (i != 0xffffffff)
                while (i != rdx_1.d)
                    int64_t i_1 = sx.q(i)
                    int64_t r8_5 = i_1 + ((i_1 + 1) << 1)
                    i = *(r10_1 + (r8_5 << 3))
                    r8_3 = r10_1 + (r8_5 << 3)
                    
                    if (i == 0xffffffff)
                        return sub_1405c3640(arg1 + 0xc0, rdx_1.d, i + 2) __tailcall
                
                *r8_3 = *(r11_1 + 0x10)
        
        return sub_1405c3640(arg1 + 0xc0, rdx_1.d, 1) __tailcall

return result
