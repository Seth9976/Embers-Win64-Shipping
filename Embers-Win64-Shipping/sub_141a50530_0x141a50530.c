// 函数: sub_141a50530
// 地址: 0x141a50530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x110)

if (rcx != 0 && (*(*rcx + 0x280))(rcx) != 0)
    char var_58
    int128_t var_48
    sub_141a56f70(sub_141a5a760(arg1, &var_48), &var_58)
    int64_t var_38
    
    if (var_38 != 0)
        sub_140a74f90(var_38)
    
    int64_t* rcx_4 = *(arg1 + 0x110)
    void* rax_5 = (*(*rcx_4 + 0x280))(rcx_4)
    int64_t rdi = 0
    int32_t arg_c = 0
    int64_t rdx_2 = 0
    var_48 = *(rax_5 + 0xf8)
    int64_t rcx_5 = var_48.q
    
    if (rcx_5.b == 0)
        rdx_2 = 4
    
    int32_t arg_8 = (rcx_5 u>> 0x20).d + *(rdx_2 + &data_14302eb88)
    sub_141a352a0(&arg_8, arg_8.q, &var_58)
    int32_t arg_1c = 0
    var_48 = *(rax_5 + 0xf8)
    int64_t rax_6 = var_48:8.q
    
    if (rax_6.b == 1)
        rdi = 4
    
    int32_t arg_18 = (rax_6 u>> 0x20).d + *(rdi + &data_14302eb90)
    sub_141a352a0(&arg_18, arg_18.q, &var_58)
    int32_t rax_9 = arg_8
    
    if (not(arg_c.d f< 0.5f))
        rax_9 += 1
    
    int32_t rcx_10 = arg_18
    
    if (not(arg_1c.d f< 0.5f))
        rcx_10 += 1
    
    int64_t rax_10 = *(arg1 + 0x90)
    uint32_t rdx_6 = (rax_10 u>> 0x20).d
    
    if (rax_10.b != 1)
        rdx_6 += 1
    
    uint32_t rax_11
    
    if (rax_10.b != 1)
        rax_11 = (rax_10 u>> 0x20).d + 1
    else
        rax_11 = (rax_10 u>> 0x20).d
    
    uint32_t var_54 = rax_11
    var_58 = 1
    char var_50 = 0
    int32_t var_4c = rcx_10 - rax_9 + rdx_6
    *arg2 = var_58.o
    arg2[1].b = 1
    return arg2

sub_141a50300(arg1, arg2)
return arg2
