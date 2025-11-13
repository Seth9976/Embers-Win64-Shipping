// 函数: sub_141b983a0
// 地址: 0x141b983a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
uint64_t result = __security_cookie ^ &var_58
uint64_t result_1 = result
*(arg1 + 0x4f0) &= 0xfffffffd
void* rbx = *(arg1 + 0x508)

if (rbx != 0)
    char var_34_1 = 0
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    char var_30_1 = 1
    void var_38
    
    if (&var_38 != rbx + 0x4e8 && *(rbx + 0x4ec) != 0)
        *(rbx + 0x4ec) = 0
    
    *(rbx + 0x4f0) = 1
    sub_1407473e0(rbx + 0x4f8, &var_28)
    sub_140f63650(rbx)
    result = sub_140745b20(&var_28)

__security_check_cookie(result_1 ^ &var_58)
return result
