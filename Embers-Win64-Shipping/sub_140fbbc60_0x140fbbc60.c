// 函数: sub_140fbbc60
// 地址: 0x140fbbc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
void var_58
int64_t* rax_1 = sub_140aae420(&var_58, *sub_140fb2f00(arg1, &var_68))
int64_t var_40 = *rax_1
int64_t* rcx_1 = rax_1[1]

if (rcx_1 != 0)
    rcx_1[1].d += 1

int32_t rax_2 = rax_1[2].d
void* rcx_2 = *(arg1 + 0x400)
int64_t var_20 = 0
int32_t var_18 = 0
int32_t var_30 = rax_2
char var_28 = 1
sub_140f17c10(rcx_2, &var_40)
sub_140745b20(&var_20)

if (rcx_1 != 0)
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1)
        (**rcx_1)(rcx_1)
        int32_t rax_5 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rcx_1 + 8))(rcx_1, 1)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t rsi_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_50 + 8))(var_50, zx.q(rsi_1))

int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp2_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_60 + 8))(var_60, 1)

int64_t* rcx_10 = *(arg1 + 0x3a0)
int64_t var_78 = *(arg1 + 0x3c0)
void* rax_13 = *(arg1 + 0x3c8)
void* var_70 = rax_13

if (rax_13 != 0)
    *(rax_13 + 8) += 1

(*(*rcx_10 + 0x240))(rcx_10, &var_78)
*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
