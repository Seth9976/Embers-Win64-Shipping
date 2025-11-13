// 函数: sub_141e1d2d0
// 地址: 0x141e1d2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (9.99999975e-06f f>= *(arg1 + 0xcc))
    int64_t* rcx_10 = *(arg1 + 0x18)
    
    if (rcx_10 != 0)
        return (*(*rcx_10 + 0x18))(rcx_10)
    
    if (arg2[8].b == 0)
        return sub_141e0ba30(&arg2[1])
    
    return sub_141e47c50(&arg2[1], arg3)

void* rax = *arg2
int32_t rdx = 0
void* var_58 = rax
int32_t rcx = 0
int64_t var_50 = 0
int32_t var_44_1 = 0
int64_t var_38
__builtin_memset(&var_38, 0, 0x1b)
void* var_40_1 = rax + 0x4a0
char var_18_1 = 1
int32_t rsi_1 = *(rax + 0x4a8)

if (rsi_1 s> 0)
    int32_t var_48_1 = 0
    sub_141acba60(&var_50, rsi_1)
    rdx = var_44_1
    rcx = var_48_1

int32_t rax_1 = rcx + rsi_1
int32_t var_48_2 = rax_1

if (rax_1 s> rdx)
    sub_141acb8e0(&var_50, rcx)

uint32_t zmm1[0x8] = sub_141abd4c0(&var_38, rax + 0x4a0)
int64_t* rcx_4 = *(arg1 + 0x18)

if (rcx_4 != 0)
    (*(*rcx_4 + 0x18))(rcx_4, arg2)
else if (arg2[8].b == 0)
    zmm1 = sub_141e0ba30(&arg2[1])
else
    zmm1 = sub_141e47c50(&arg2[1], zmm1)

int64_t* rcx_6 = *(arg1 + 0x28)

if (rcx_6 == 0)
    int64_t* rcx_7 = &var_50
    
    if (var_18_1 == 0)
        zmm1 = sub_141e0ba30(rcx_7)
    else
        zmm1 = sub_141e47c50(rcx_7, zmm1)
else
    (*(*rcx_6 + 0x18))(rcx_6, &var_58)

return sub_141e451a0(&arg2[1], 
    sub_141de0cd0(&arg2[1], &var_50, &arg2[4], &var_38, zmm1, *(arg1 + 0xcc), 2))
