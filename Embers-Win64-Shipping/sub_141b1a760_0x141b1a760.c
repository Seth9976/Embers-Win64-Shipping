// 函数: sub_141b1a760
// 地址: 0x141b1a760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r12 = *(arg1 + 8)
void* rax = sub_141af0640(arg4)
int64_t* r14 = *(rax + 8)
int64_t* var_78
void** result = sub_141a4a790(arg5, &var_78, arg3, &arg3[4])
int64_t* rsi = var_78
int64_t rdi_1 = 0
int32_t var_70
void* rdx_1 = &rsi[sx.q(var_70)]
uint64_t rbp_3 = (rdx_1 - rsi + 7) u>> 3

if (rsi u> rdx_1)
    rbp_3 = 0

if (rbp_3 != 0)
    do
        int64_t var_a8 = *rsi
        result = sub_140d3c6e0(&var_a8)
        int64_t* result_1 = result
        
        if (result != 0)
            int64_t zmm0_1 = arg5[0x5a]
            int64_t rdx_2 = *(rax + 0x18)
            void** const var_88 = &data_14305d7f8
            int32_t var_90_1 = arg5[0x5b].d
            char rax_3 = *(arg5 + 0x2dc)
            int64_t* var_80_1 = r14
            int64_t var_98 = zmm0_1
            sub_1405c5900(&arg5[0x1f], rdx_2, &var_88, result_1, rax_3, &var_98)
            char arg_8 = r12
            var_88 = &data_142d4ba10
            void var_68
            sub_1405bb0c0(r14, &var_68, result_1)
            void var_38
            void* rax_4 = sub_140d3c6e0(&var_38)
            
            if (rax_4 == 0)
                void* rax_5 = sub_1405bdd80(&var_68)
                
                if (rax_5 != 0)
                    int64_t rcx_9 = sx.q(*(rax_5 + 0x4c))
                    int64_t var_40
                    
                    if (rcx_9 != neg.q(var_40))
                        *(rcx_9 + var_40) = arg_8
            else
                sub_141a2ce10(result_1, rax_4, &arg_8)
            
            void var_30
            result = sub_140d3c6e0(&var_30)
            
            if (result != 0)
                int64_t r9_2 = *result_1
                result = (*(r9_2 + 0x210))(result_1, result, 0, r9_2)
            
            int64_t var_50
            
            if (var_50 != 0)
                result = sub_140a74f90(var_50)
        
        rsi = &rsi[1]
        rdi_1 += 1
    while (rdi_1 != rbp_3)

return result
