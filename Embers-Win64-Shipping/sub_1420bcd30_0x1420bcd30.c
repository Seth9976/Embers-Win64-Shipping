// 函数: sub_1420bcd30
// 地址: 0x1420bcd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
int96_t zmm0 = (*(arg1 + 0x10)).12
uint32_t count = arg2[1].d
int64_t rbp = *arg2
int64_t var_38 = 0
uint32_t count_1 = count

if (count != 0)
    sub_1405da9e0(&var_38, count, 0)
    memcpy(var_38, rbp, count)
else
    int32_t var_2c_1 = 0

int64_t result = zmm0.q(sx.q(zmm0:8.d) + rax, &var_38)
int64_t rcx_5 = *arg2

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
