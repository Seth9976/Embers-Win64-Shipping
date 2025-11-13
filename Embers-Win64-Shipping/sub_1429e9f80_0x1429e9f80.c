// 函数: sub_1429e9f80
// 地址: 0x1429e9f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rsi = sx.q(arg6)
int64_t r11 = sx.q(arg2)
char result

if (arg3 != 0)
    int32_t rdx = r11.d
    
    if (arg4 == 0)
        result = sub_14038c1ba(arg1, rdx, arg5, rsi.d, 4, arg3)
    else
        int32_t var_58[0xc]
        sub_14038c1ba(arg1 - sx.q((r11 * 2).d), rdx, &var_58, 4, 9, arg3)
        result = sub_14038c6b9(&var_58, 4, arg5, rsi.d, 4, arg4)
else if (arg4 == 0)
    void* r10_3 = arg1 + r11
    *arg5 = *arg1
    *(arg5 + 1) = *(arg1 + 1)
    *(arg5 + 2) = *(arg1 + 2)
    *(arg5 + 3) = *(arg1 + 3)
    void* rbx_1 = arg5 + rsi
    *rbx_1 = *r10_3
    *(rbx_1 + 1) = *(r10_3 + 1)
    *(rbx_1 + 2) = *(r10_3 + 2)
    void* r10_4 = r10_3 + r11
    *(rbx_1 + 3) = *(r10_3 + 3)
    void* rbx_2 = rbx_1 + rsi
    *rbx_2 = *r10_4
    *(rbx_2 + 1) = *(r10_4 + 1)
    *(rbx_2 + 2) = *(r10_4 + 2)
    *(rbx_2 + 3) = *(r10_4 + 3)
    void* rbx_3 = rbx_2 + rsi
    void* r10_5 = r10_4 + r11
    *rbx_3 = *r10_5
    *(rbx_3 + 1) = *(r10_5 + 1)
    *(rbx_3 + 2) = *(r10_5 + 2)
    result = *(r10_5 + 3)
    *(rbx_3 + 3) = result
else
    result = sub_14038c6b9(arg1 - sx.q((r11 * 2).d), r11.d, arg5, rsi.d, 4, arg4)

__security_check_cookie(rax_1 ^ &var_88)
return result
