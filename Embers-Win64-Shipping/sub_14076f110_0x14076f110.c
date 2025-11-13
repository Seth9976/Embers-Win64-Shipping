// 函数: sub_14076f110
// 地址: 0x14076f110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* i = *(arg1 + 0x58)
int64_t result = sx.q(*(arg1 + 0x60))

for (void* rsi = &i[result]; i != rsi; i = &i[1])
    int64_t rdi_1 = *(*i + 0x10)
    result = sub_14086a460()
    
    if (rdi_1 == result)
        if (i != 0)
            void* rbx = *i
            sub_140d226f0(arg1, sub_141a6e000())
            int64_t rax_4 = *(rbx + 0x98)
            char rdi_2 = *(rbx + 0xec)
            int32_t r11_1 = *(rbx + 0xe8)
            int32_t r10_1 = *(rbx + 0xe4)
            int32_t r9_1 = *(rbx + 0xe0)
            uint32_t r8_2 = (rax_4 u>> 0x20).d
            int64_t rax_5 = *(rbx + 0x90)
            int64_t* rbx_1 = arg2 + 0xb0
            
            if (rax_4.b == 1)
                r8_2 = (rax_4 u>> 0x20).d + 1
            
            uint32_t rdx_3 = (rax_5 u>> 0x20).d + 1
            
            if (rax_5.b == 1)
                rdx_3 = (rax_5 u>> 0x20).d
            
            char var_28
            char var_28_1 = var_28 | 3
            char var_50_1 = 0
            void** const var_58 = &data_142d999a8
            uint32_t var_44_1 = r8_2
            int32_t var_40_1 = r9_1
            int32_t var_3c_1 = r10_1
            char var_34_1 = rdi_2
            char rcx_6 = rbx_1[6].b
            
            if ((rcx_6 & 1) != 0)
                int64_t* r8_3 = rbx_1
                
                if ((rcx_6 & 2) == 0)
                    r8_3 = *rbx_1
                
                rbx_1[6].b = rcx_6 & 0xfe
                (**r8_3)(r8_3, 0)
                rcx_6 = rbx_1[6].b
                
                if ((rcx_6 & 2) == 0)
                    sub_140a74f90(*rbx_1)
                    rcx_6 = rbx_1[6].b
            
            if ((var_28_1 & 1) != 0)
                char rdx_4 = var_28_1 & 0xfe
                *rbx_1 = var_58.o
                rbx_1[6].b = (((rdx_4 ^ rcx_6) & 2) ^ rcx_6) | 1
                *(rbx_1 + 0x10) = rdx_3.o
                *(rbx_1 + 0x20) = r11_1.o
                
                if ((rdx_4 & 1) != 0)
                    void** const rcx_9 = &var_58
                    
                    if ((rdx_4 & 2) == 0)
                        rcx_9 = var_58
                    
                    (**rcx_9)(rcx_9, 0)
                    
                    if ((rdx_4 & 2) == 0)
                        sub_140a74f90(var_58)
            
            if ((rbx_1[6].b & 2) == 0)
                rbx_1 = *rbx_1
            
            result = (*(*rbx_1 + 8))(rbx_1)
        
        break

__security_check_cookie(rax_1 ^ &var_78)
return result
