// 函数: sub_140f16820
// 地址: 0x140f16820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_588
int64_t rax_1 = __security_cookie ^ &var_588
*(arg1 + 0x4b8) = arg2

if (arg2 == 0)
    void var_568
    sub_140e94440(&var_568)
    int64_t var_3c8
    *(arg1 + 0x4b8) = var_3c8
    sub_140e97d60(&var_568)
    arg2 = *(arg1 + 0x4b8)

*(arg1 + 0x680) = arg2 + 8
*(arg1 + 0x688) = arg2 + 0x90
*(arg1 + 0x690) = arg2 + 0x118
*(arg1 + 0x698) = arg2 + 0x1a0
__security_check_cookie(rax_1 ^ &var_588)
return arg2 + 0x1a0
