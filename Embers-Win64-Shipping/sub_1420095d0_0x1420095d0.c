// 函数: sub_1420095d0
// 地址: 0x1420095d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
sub_141ff4080(arg2, 0, sub_140a96170(&var_58))
int64_t rbx = sx.q(*(arg3 + 0xd8))
uint64_t rsi = 0
int64_t rbp = *(arg3 + 0xd0)
uint64_t var_68 = 0
int32_t var_60 = rbx.d

if (rbx.d != 0)
    sub_1405c4a00(&var_68, rbx.d, 0)
    rsi = var_68
    memcpy(rsi, rbp, (rbx << 3).d)
    rbx = zx.q(var_60)

sub_141ffcbb0(arg3)

if (rbx.d s> 0)
    uint64_t i_1 = zx.q(rbx.d)
    uint64_t i
    
    do
        int64_t* rbx_1 = *rsi
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
                int32_t rax_6 = *(var_38 + 0xc)
                *(var_38 + 0xc) -= 1
                
                if (rax_6 == 1)
                    (*(*var_38 + 8))(var_38, 1)
        
        rsi += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rsi = var_68

sub_140597df0(&arg4[0x12], arg3 + 0x90)
arg4[0x16] = *(arg3 + 0xb0)
sub_14065da90(&arg4[0x17], arg3 + 0xb8)

if (rsi != 0)
    sub_140a74f90(rsi)

return arg2
