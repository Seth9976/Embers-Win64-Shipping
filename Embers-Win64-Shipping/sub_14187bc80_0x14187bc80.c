// 函数: sub_14187bc80
// 地址: 0x14187bc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x278)
void*** result

if (rax == 0)
    result = nullptr
else
    int128_t var_48 = *arg2
    void var_38
    sub_140596d10(&var_38, arg1)
    void var_28
    sub_140596d10(&var_28, &arg1[2])
    void var_18
    sub_140596d10(&var_18, &arg1[4])
    result = sub_141863200(rax, &var_38, &var_48, arg4, arg3)

int64_t rcx_4 = arg1[4]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[2]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = *arg1

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return result
