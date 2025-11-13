// 函数: sub_141c7af20
// 地址: 0x141c7af20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdi = 0
int32_t rdx = 0

for (uint32_t i = 0x2000; i != 0; i u>>= 1)
    rdx += 1

int32_t r12_2

if (rdx != 0)
    if (rdx u<= 0x10)
        r12_2 = sub_141c7b210(arg1, rdx)
    else
        int32_t rax = sub_141c7b210(arg1, rdx - 0x10)
        r12_2 = sub_141c7b210(arg1, 0x10) | rax << 0x10

uint32_t result

if (rdx == 0 || r12_2 == 0)
    sub_141c79950(arg2)
    result.b = 1
else
    if (sub_141c7bf20(&arg2[2], r12_2).b != 0)
        memset(*(arg2 + 8), 0, zx.q(r12_2))
        uint64_t i_4 = zx.q(sub_141c7b210(arg1, 5))
        
        if ((i_4 - 1).d u<= 0x14)
            int32_t var_58 = 0
            int64_t var_50 = 0
            int32_t var_48_1 = 0
            char var_40_1 = 0
            void* var_38_1 = nullptr
            
            if (sub_141c7b2a0(&var_50, 0x15, 0, 1, 0) == 0)
            label_141c7b17e:
                rdi.b = 0
            else
                uint64_t rcx_6 = zx.q(var_48_1)
                int64_t r15_1 = var_50
                memset(rcx_6 + r15_1, 0, zx.q(0x15 - rcx_6.d))
                var_48_1 = 0x15
                
                if (i_4.d != 0)
                    void* const rbx_3 = &data_14320ea20
                    uint64_t i_1
                    
                    do
                        char rax_4 = sub_141c7b210(arg1, 3)
                        uint64_t rcx_9 = zx.q(*rbx_3)
                        rbx_3 += 1
                        *(rcx_9 + r15_1) = rax_4
                        i_1 = i_4
                        i_4 -= 1
                    while (i_1 != 1)
                
                if (sub_141c7be60(&var_58) == 0)
                label_141c7b17e_1:
                    rdi.b = 0
                else
                    if (r12_2 != 0)
                        do
                            int32_t rbx_5 = r12_2 - rdi
                            int32_t rax_6 = sub_141c79cd0(arg1, &var_58)
                            
                            if (rax_6 u<= 0x10)
                                uint64_t rdx_4 = zx.q(rdi)
                                rdi += 1
                                *(rdx_4 + *(arg2 + 8)) = rax_6.b
                            else if (rax_6 == 0x11)
                                int32_t rax_8 = sub_141c7b210(arg1, rax_6 - 0xe) + 3
                                
                                if (rax_8 u> rbx_5)
                                    goto label_141c7b17e_2
                                
                                rdi += rax_8
                            else if (rax_6 != 0x12)
                                uint64_t i_3
                                
                                if (rax_6 == 0x13)
                                    i_3 = zx.q(sub_141c7b210(arg1, 2) + 3)
                                else
                                    if (rax_6 != 0x14)
                                        goto label_141c7b17e_2
                                    
                                    i_3 = zx.q(sub_141c7b210(arg1, rax_6 - 0xe) + 7)
                                
                                if (rdi == 0)
                                    goto label_141c7b17e_2
                                
                                if (i_3.d u> rbx_5)
                                    goto label_141c7b17e_2
                                
                                char r8_3 = *(zx.q(rdi - 1) + *(arg2 + 8))
                                
                                if (r8_3 == 0)
                                    goto label_141c7b17e_2
                                
                                if (rdi u< i_3.d + rdi)
                                    uint64_t rcx_18 = zx.q(rdi)
                                    rdi += i_3.d
                                    uint64_t i_2
                                    
                                    do
                                        rcx_18 += 1
                                        *(rcx_18 + *(arg2 + 8) - 1) = r8_3
                                        i_2 = i_3
                                        i_3 -= 1
                                    while (i_2 != 1)
                            else
                                int32_t rax_10 = sub_141c7b210(arg1, rax_6 - 0xb) + 0xb
                                
                                if (rax_10 u> rbx_5)
                                    goto label_141c7b17e_2
                                
                                rdi += rax_10
                        while (rdi u< r12_2)
                    
                    if (rdi != r12_2)
                    label_141c7b17e_2:
                        rdi.b = 0
                    else
                        rdi = zx.d(sub_141c7be60(arg2))
            
            if (var_38_1 != 0)
                int64_t rcx_20 = *(var_38_1 + 0xa8)
                
                if (rcx_20 != 0)
                    sub_141c799d0(rcx_20 - 8)
                
                int64_t rcx_22 = *(var_38_1 + 0xb8)
                
                if (rcx_22 != 0)
                    sub_141c799d0(rcx_22 - 8)
                
                sub_141c799d0(var_38_1)
            
            int64_t rcx_25 = var_50
            
            if (rcx_25 != 0)
                sub_141c799d0(rcx_25)
            
            return zx.d(rdi.b)
    
    result.b = 0

return result
