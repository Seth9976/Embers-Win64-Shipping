// 函数: sub_1408e7180
// 地址: 0x1408e7180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_140865c40(arg1 + 0x18, &result_1, arg2)
int64_t result = sx.q(result_1)
int64_t rcx_1

if (result.d == 0xffffffff)
    rcx_1 = 0
else
    int64_t rdx_1 = result * 3
    result = *(arg1 + 0x18)
    rcx_1 = result + (rdx_1 << 3)

int64_t* rbx = rcx_1 + 8

if (rcx_1 == 0)
    rbx = nullptr

if (rbx == 0)
    return result

void* rbx_1 = *rbx

if (rbx_1 != 0)
    sub_1408db0a0(rbx_1)
    j_sub_140a74f90(rbx_1)

return sub_140868c90(arg1 + 0x18, arg2)
