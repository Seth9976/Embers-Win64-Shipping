// 函数: sub_14235dfd0
// 地址: 0x14235dfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int32_t var_10 = 0
sub_141dc7a00(arg2, &var_18)
void*** result

if (var_10 != 0)
    result = sub_1423602e0(arg1, arg2, &var_18, arg3)
else
    void*** rax = j_sub_140a82f30(0x6e0)
    
    if (rax == 0)
        result = nullptr
        *0x194 = 0
        *0x50 = *arg1
    else
        void*** result_1 = sub_141db5dc0(rax, arg2)
        result = result_1
        *(result_1 + 0x194) = 0
        result[0xa] = *arg1

int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return result
