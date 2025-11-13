// 函数: sub_1412e4c50
// 地址: 0x1412e4c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x3a88)
void var_3ab8
int64_t rax_1 = __security_cookie ^ &var_3ab8
int64_t rsi = sx.q(arg6)
void var_3a78
int64_t* result = sub_14125bfb0(&var_3a78)
int32_t rcx_2 = arg7 + rsi.d

if (rsi.d s< rcx_2)
    int64_t rbx_2 = rsi * 0x28
    uint64_t i_2 = zx.q(rcx_2 - rsi.d)
    
    if (arg5 == 0)
        int32_t rsi_3 = (rsi << 2).d + arg4
        uint64_t i
        
        do
            result = sub_1412e45a0(*(rbx_2 + *arg1), arg2, arg3, rsi_3, arg8, arg9, &var_3a78)
            rsi_3 += 4
            rbx_2 += 0x28
            i = i_2
            i_2 -= 1
        while (i != 1)
    else
        uint64_t i_1
        
        do
            int64_t** rcx_4 = *arg1
            result = sub_1412e45a0(*(rcx_4 + rbx_2), arg2, arg3, 
                (*(rcx_4 + rbx_2 + 0x18) << 2) + arg4, arg8, arg9, &var_3a78)
            rbx_2 += 0x28
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

__security_check_cookie(rax_1 ^ &var_3ab8)
return result
