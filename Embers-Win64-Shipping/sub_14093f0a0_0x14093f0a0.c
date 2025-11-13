// 函数: sub_14093f0a0
// 地址: 0x14093f0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1
char rax
int64_t r8
rax, r8 = sub_140b0f6c0(&arg_18, u"FRIEND")

if (rax != 0)
    return sub_1409403f0(arg1, arg2, arg_18)

r8.b = 1
char rax_2
int64_t r8_2
rax_2, r8_2 = sub_140b0f6c0(&arg_18, u"SESSION")
r8_2.b = 1

if (rax_2 == 0)
    char rax_10
    int64_t r8_4
    rax_10, r8_4 = sub_140b0f6c0(&arg_18, u"PRESENCE")
    
    if (rax_10 != 0)
        return sub_1409407e0(arg1, arg2, arg_18)
    
    r8_4.b = 1
    
    if (sub_140b0f6c0(&arg_18, u"PURCHASE") == 0)
        return 0
    
    return sub_140940b50(arg1, arg2, arg_18)

int64_t var_28 = arg_18
int64_t rsi
rsi.b = 0

if (sub_140b0f6c0(&var_28, u"DUMP") != 0)
    int64_t* var_20
    (*(*arg1 + 0x20))(arg1, &var_20)
    int64_t* rcx_5 = var_20
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x378))(rcx_5)
    
    rsi.b = 1
    int64_t* var_18
    
    if (var_18 != 0)
        var_18[1].d -= 1
        
        if (var_18[1].d == 1)
            int64_t rdx_2 = *var_18
            (*rdx_2)(var_18, rdx_2)
            int32_t __saved_r9_1 = *(var_18 + 0xc)
            *(var_18 + 0xc) -= 1
            
            if (__saved_r9_1 == 1)
                int64_t r8_3 = *var_18
                (*(r8_3 + 8))(var_18, zx.q(__saved_r9_1), r8_3)

return zx.q(rsi.b)
