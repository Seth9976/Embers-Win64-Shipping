// 函数: sub_141f89b80
// 地址: 0x141f89b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 8))()
sub_141f86d30(arg1, rax_1)
void* rax_2 = sub_141f87c30(arg1, arg3)
int32_t rcx_2

if (rax_2 != 0)
    rcx_2 = *rax_2

if (rax_2 == 0 || rcx_2 s< 0 || rcx_2 s>= rax_1)
    *arg2 = 0
else
    sub_141f86d30(arg1, (*(*arg1 + 8))(arg1))
    int64_t rcx_6 = sx.q(*sub_141f87c30(arg1, arg3))
    int64_t rax_6 = arg1[0xf]
    int32_t zmm1_1 = *(rax_6 + (rcx_6 << 3) + 4)
    *arg2 = *(rax_6 + (rcx_6 << 3))
    arg2[1] = zmm1_1

return arg2
