// 函数: sub_141a2f1d0
// 地址: 0x141a2f1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x100) = 0
*(arg1 + 0x108) = 0
*(arg1 + 0x10c) = 8

if (arg3 == 0)
    return arg1

void* rax_1 = (*(*arg4 + 8))(arg4, arg3)
int64_t rcx_1 = sx.q(*(arg2 + 0x28))
int32_t r9 = data_143f29fb0

if (rcx_1.d != 0)
    void* rax_2 = *(arg2 + 0x20)
    int64_t rbx_1 = rcx_1 << 2
    void* r10_1 = arg2
    int64_t r11_1 = 0
    
    if (rax_2 != 0)
        r10_1 = rax_2
    
    uint64_t rbx_2 = rbx_1 u>> 2
    
    if (r10_1 u> rbx_1 + r10_1)
        rbx_2 = 0
    
    if (rbx_2 != 0)
        do
            int32_t rax_4 = *r10_1
            
            if (r9 != 0)
                int32_t r9_2 = (r9 - rax_4) ^ rax_4 u>> 0xd
                int32_t r8_2 = (0x9e3779b9 - r9_2 - rax_4) ^ r9_2 << 8
                int32_t r9_6 = (rax_4 - r8_2 - r9_2) ^ r8_2 u>> 0xd
                int32_t rdx_4 = (r9_2 - r8_2 - r9_6) ^ r9_6 u>> 0xc
                int32_t r8_5 = (r8_2 - rdx_4 - r9_6) ^ rdx_4 << 0x10
                int32_t r9_9 = (r9_6 - r8_5 - rdx_4) ^ r8_5 u>> 5
                int32_t rdx_7 = (rdx_4 - r8_5 - r9_9) ^ r9_9 u>> 3
                int32_t r8_8 = (r8_5 - rdx_7 - r9_9) ^ rdx_7 << 0xa
                r9 = (r9_9 - r8_8 - rdx_7) ^ r8_8 u>> 0xf
            else
                r9 = rax_4
            
            r10_1 += 4
            r11_1 += 1
        while (r11_1 != rbx_2)

int32_t arg_8 = r9
void* var_58 = arg3
void* var_50 = rax_1
int64_t var_48 = 0
sub_141a29170(arg1, &arg_8, &var_58)
int32_t* r14 = *arg5
void* rbx_3 = &r14[sx.q(arg5[1].d)]

if (r14 != rbx_3)
    void* rax_19 = rbx_3
    
    do
        int64_t rbx_4 = sx.q(*r14)
        
        if (rbx_4.d != data_143f29fb0)
            void* rcx_9
            
            if (*(rax_1 + 0xd8) == *(rax_1 + 0x104))
            label_141a2f3e8:
                rcx_9 = nullptr
            else
                void* r8_11 = rax_1 + 0x108
                void* rcx_7 = *(r8_11 + 8)
                
                if (rcx_7 != 0)
                    r8_11 = rcx_7
                
                int32_t rax_21 = *(r8_11 + (((sx.q(*(rax_1 + 0x118)) - 1) & rbx_4) << 2))
                
                if (rax_21 == 0xffffffff)
                label_141a2f3e8_1:
                    rcx_9 = nullptr
                else
                    int32_t* r8_12 = *(rax_1 + 0xd0)
                    void* rdx_12
                    
                    while (true)
                        rdx_12 = sx.q(rax_21) * 0xf8
                        
                        if (*(r8_12 + rdx_12) == rbx_4.d)
                            break
                        
                        rax_21 = *(r8_12 + rdx_12 + 0xf0)
                        
                        if (rax_21 == 0xffffffff)
                            goto label_141a2f3e8_2
                    
                    rcx_9 = rdx_12 + r8_12
                    
                    if (rax_21 == 0xffffffff)
                    label_141a2f3e8_2:
                        rcx_9 = nullptr
            
            void* rdi_1 = rcx_9 + 8
            
            if (rcx_9 == 0)
                rdi_1 = nullptr
            
            if (rdi_1 != 0)
                void* rax_22 = sub_141a52920(rdi_1)
                
                if (rax_22 != 0)
                    int64_t rcx_11 = sx.q(*(arg2 + 0x28))
                    
                    if (rcx_11.d != 0)
                        void* rax_23 = *(arg2 + 0x20)
                        int64_t r11_2 = rcx_11 << 2
                        void* r9_12 = arg2
                        
                        if (rax_23 != 0)
                            r9_12 = rax_23
                        
                        int64_t r10_2 = 0
                        uint64_t r11_3 = r11_2 u>> 2
                        
                        if (r9_12 u> r9_12 + r11_2)
                            r11_3 = 0
                        
                        if (r11_3 != 0)
                            do
                                int32_t rax_25 = *r9_12
                                
                                if (rbx_4.d != 0)
                                    int32_t rbx_6 = (rbx_4.d - rax_25) ^ rax_25 u>> 0xd
                                    int32_t r8_15 = (0x9e3779b9 - rbx_6 - rax_25) ^ rbx_6 << 8
                                    int32_t rbx_10 = (rax_25 - r8_15 - rbx_6) ^ r8_15 u>> 0xd
                                    int32_t rdx_16 = (rbx_6 - r8_15 - rbx_10) ^ rbx_10 u>> 0xc
                                    int32_t r8_18 = (r8_15 - rdx_16 - rbx_10) ^ rdx_16 << 0x10
                                    int32_t rbx_13 = (rbx_10 - r8_18 - rdx_16) ^ r8_18 u>> 5
                                    int32_t rdx_19 = (rdx_16 - r8_18 - rbx_13) ^ rbx_13 u>> 3
                                    int32_t r8_21 = (r8_18 - rdx_19 - rbx_13) ^ rdx_19 << 0xa
                                    rbx_4 = zx.q(rbx_13 - r8_21 - rdx_19) ^ zx.q(r8_21 u>> 0xf)
                                else
                                    rbx_4 = zx.q(rax_25)
                                
                                r9_12 += 4
                                r10_2 += 1
                            while (r10_2 != r11_3)
                    
                    int64_t rax_38 = *arg4
                    arg_8 = rbx_4.d
                    var_58 = rax_22
                    void* var_48_1 = rdi_1
                    int64_t var_50_1 = (*(rax_38 + 8))(arg4, rax_22)
                    sub_141a29170(arg1, &arg_8, &var_58)
            
            rax_19 = rbx_3
        
        r14 = &r14[1]
    while (r14 != rax_19)

return arg1
