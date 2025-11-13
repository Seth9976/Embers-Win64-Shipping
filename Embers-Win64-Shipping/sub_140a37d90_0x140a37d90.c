// 函数: sub_140a37d90
// 地址: 0x140a37d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg3
int64_t rdx = -1

if (*(rbx + 0x63) == 0)
    rdx = *(rbx + 0x10)

*(*arg1 + 0x30) = rdx
int64_t* rcx = arg1[1]
int64_t var_18 = 0
int64_t var_10 = 0
sub_140a22e70(rcx, &var_18, 0xff)
sub_140a38850()
int64_t result = sub_140a39160(&data_143cf8d78, rbx)
int64_t rcx_1 = var_18

if (rcx_1 == 0)
    return result

return sub_140a74f90(rcx_1)
