// 函数: sub_141ffdef0
// 地址: 0x141ffdef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
sub_141ff4080(arg2, 0, sub_140a96170(&var_58))
int32_t i = 0

if (*(arg3 + 0xd8) s> 0)
    int64_t** r14_1 = nullptr
    
    do
        int64_t* rbx_1 = *(r14_1 + *(arg3 + 0xd0))
        void var_40
        (*(*arg1 + 0x278))(arg1, &var_40, arg4, rbx_1)
        char var_28
        
        if (var_28 != 0)
            sub_14065da90(arg2, &var_40)
            *(arg2 + 0x19) &= 0xfe
            arg2[3].b = var_28
            char var_27
            *(arg2 + 0x19) |= var_27 & 1
        else
            sub_142008e40(arg4, rbx_1)
        
        int64_t* var_38
        
        if (var_38 != 0)
            var_38[1].d -= 1
            
            if (var_38[1].d == 1)
                (**var_38)(var_38)
                int32_t rax_7 = *(var_38 + 0xc)
                *(var_38 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*(*var_38 + 8))(var_38, 1)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg3 + 0xd8))

sub_140597df0(&arg4[0x12], arg3 + 0x90)
arg4[0x16] = *(arg3 + 0xb0)
sub_14065da90(&arg4[0x17], arg3 + 0xb8)
return arg2
