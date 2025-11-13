// 函数: sub_141b1abb0
// 地址: 0x141b1abb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141af0640(arg4)
int32_t rdi = *(arg1 + 0x10)
int64_t r15 = 0
int64_t rbx_1 = *(arg1 + 8)
void* r12 = rax
int64_t* rax_1 = *(rax + 8)
uint64_t var_b8 = 0

if (rdi != 0)
    sub_1405a4c70(&var_b8, rdi, 0)
    memcpy(var_b8, rbx_1, rdi * 2)
else
    int32_t var_ac_1 = 0

int64_t* rsi_1 = arg5
int64_t* var_78
sub_141a4a790(rsi_1, &var_78, arg3, &arg3[4])
int64_t* r14 = var_78
int32_t var_70
void* rcx_4 = &r14[sx.q(var_70)]
int64_t* result = nullptr
uint64_t r13_3 = (rcx_4 - r14 + 7) u>> 3

if (r14 u> rcx_4)
    r13_3 = 0

if (r13_3 != 0)
    do
        int64_t var_a8 = *r14
        result = sub_140d3c6e0(&var_a8)
        int64_t* result_1 = result
        
        if (result != 0)
            int32_t rdx_3 = rsi_1[0x5b].d
            int64_t zmm0_1 = rsi_1[0x5a]
            char rax_4 = *(rsi_1 + 0x2dc)
            void** const var_88 = &data_14305d7e0
            int32_t var_90_1 = rdx_3
            int64_t rdx_4 = *(r12 + 0x18)
            int64_t* var_80_1 = rax_1
            int64_t var_98 = zmm0_1
            sub_1405c5900(&rsi_1[0x1f], rdx_4, &var_88, result_1, rax_4, &var_98)
            var_88 = &data_142d4ba10
            void var_68
            sub_1405bb0c0(rax_1, &var_68, result_1)
            void var_38
            void* rax_5 = sub_140d3c6e0(&var_38)
            
            if (rax_5 == 0)
                void* rax_6 = sub_1405bdd80(&var_68)
                
                if (rax_6 != 0)
                    int64_t rbx_3 = sx.q(*(rax_6 + 0x4c))
                    int64_t var_40
                    int64_t* rbx_4 = rbx_3 + var_40
                    
                    if (rbx_3 != neg.q(var_40) && rbx_4 != &var_b8)
                        uint64_t r12_1 = var_b8
                        int32_t r8_6 = *(rbx_4 + 0xc)
                        rbx_4[1].d = rdi
                        
                        if (rdi != 0 || r8_6 != 0)
                            sub_1405a4c70(rbx_4, rdi, r8_6)
                            memcpy(*rbx_4, r12_1, rdi * 2)
                        else
                            *(rbx_4 + 0xc) = 0
                        
                        rsi_1 = arg5
                        r12 = rax
            else
                sub_141af2050(result_1, rax_5, &var_b8)
            
            void var_30
            result = sub_140d3c6e0(&var_30)
            
            if (result != 0)
                int64_t r9_2 = *result_1
                result = (*(r9_2 + 0x210))(result_1, result, 0, r9_2)
            
            int64_t var_50
            
            if (var_50 != 0)
                result = sub_140a74f90(var_50)
        
        r14 = &r14[1]
        r15 += 1
    while (r15 != r13_3)

uint64_t rcx_16 = var_b8

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
