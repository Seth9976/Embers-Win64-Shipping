// 函数: sub_1427d9810
// 地址: 0x1427d9810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || *arg2 == 0)
    return &data_1434cce10

char* rax = arg2
uint64_t rbx = 0

do
    rbx = zx.q(rbx.d + 1)
    rax = &rax[1]
while (*rax != 0)

int64_t result = (*(*arg1 + 8))(arg1, zx.q((rbx + 1).d))
memcpy(result, arg2, rbx.d)
*(rbx + result) = 0
return result
