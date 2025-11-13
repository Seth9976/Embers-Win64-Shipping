// 函数: sub_1405e7450
// 地址: 0x1405e7450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
sub_1427c61e0(arg3, arg4, &arg_8)
int32_t var_68 = 0
sub_1427c6100(arg3, arg4, 0, &var_68)
int64_t* rax = *(arg1 + 0x98)
int32_t var_64 = 0
int32_t var_60 = 0
int32_t var_5c = 0
int32_t var_58 = 0
int64_t rcx_2 = *rax
int64_t var_50
__builtin_memset(&var_50, 0, 0x20)
int64_t var_48
int64_t var_40
int64_t var_38

if (rcx_2 == 0)
    int32_t rax_1 = *(arg1 + 0x58)
    var_48.d = rax_1
    
    if (rax_1 s> 0)
        sub_1405daba0(&var_50)
    
    if (*(arg1 + 0xb0) == 0x494d767a4861704d && *(arg1 + 0xb8) == 0x3790dc259df278b4)
        int32_t rcx_6 = *(arg1 + 0x58) + var_38.d
        var_38.d = rcx_6
        
        if (rcx_6 s> 0)
            sub_1405daba0(&var_40)
else
    sub_1405e6b80(arg1 + 0x90, &var_50)

int64_t rsi = var_50
int32_t* var_78 = &var_64
int32_t* var_80 = &var_60
int32_t var_88 = *(arg1 + 0x58)
int32_t rax_5 = sub_1427c6060(arg3, arg4, 0, sub_1405e7c40, 0, rsi)
int64_t rdi = var_40

if (arg_8 == 2 && *(arg1 + 0xb0) == 0x494d767a4861704d && *(arg1 + 0xb8) == 0x3790dc259df278b4)
    int32_t* var_78_1 = &var_5c
    int32_t* var_80_1 = &var_58
    int32_t var_88_1 = *(arg1 + 0x58)
    rax_5 = sub_1427c6060(arg3, arg4, 1, sub_1405e7c40, 0, rdi)

int64_t* rax_7

if (rax_5 == 0)
    int64_t var_30_1 = arg2
    rax_7 = j_sub_140a82f30(zx.q(rax_5 + 0x30))

if (rax_5 != 0 || rax_7 == 0)
    if (rdi != 0)
        sub_140a74f90(rdi)
    
    if (rsi != 0)
        sub_140a74f90(rsi)
else
    *rax_7 = 0
    rax_7[1] = rsi
    rax_7[2].d = var_48.d
    *(rax_7 + 0x14) = var_48:4.d
    rax_7[3] = rdi
    rax_7[4].d = var_38.d
    *(rax_7 + 0x24) = var_38:4.d
    rax_7[5] = arg2
    void** rax_10 = *(arg1 + 0xa0)
    __builtin_memset(&var_50, 0, 0x20)
    *(arg1 + 0xa0) = rax_7
    *rax_10 = rax_7

return 0
