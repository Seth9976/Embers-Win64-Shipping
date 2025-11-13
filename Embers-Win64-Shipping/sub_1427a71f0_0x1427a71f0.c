// 函数: sub_1427a71f0
// 地址: 0x1427a71f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg1[0xc]

if (result != 0)
    return result

int64_t* rax = j_sub_140a82f30(zx.q((result + 0x10).d))
int64_t* rdx_1 = rax

if (rax == 0)
    rdx_1 = rax
else
    *rdx_1 = 0
    rdx_1[1] = 0

int64_t rax_1 = *arg1
arg1[0xc] = rdx_1
(*(rax_1 + 0x2f0))(arg1, rdx_1)
return arg1[0xc]
