// 函数: sub_1408d07a0
// 地址: 0x1408d07a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg2)
int64_t rbp = sx.q(arg3)
char* rsi_2 = rbx * 0xa0 + arg1[0xb]

if (*(rsi_2 + 0x28) == 0)
    return 

if (*rsi_2 == 0)
    sub_1408cf570(arg1, rbx.b, rbp.d, sub_1408ce160(arg1, zx.q(rbp.d), rbx.b))
    return 

int64_t r14_1 = sx.q(sub_1408d0410(arg1, rbx.b).d)

if (r14_1.d == 0xffffffff)
    return 

int64_t rbx_2 = r14_1 * 0x30
sub_1408cf420(arg1, zx.q(rbp.d), *(*(rsi_2 + 0x20) + (sx.q(*(rbx_2 + arg1[0x19] + 0x14)) << 3)))
void* rbx_3 = rbx_2 + arg1[0x19]
int64_t rsi_3 = sx.q(*(rbx_3 + 0x28))
int32_t rax_2 = (rsi_3 + 1).d
*(rbx_3 + 0x28) = rax_2

if (rax_2 s> *(rbx_3 + 0x2c))
    sub_1405a4cf0(rbx_3 + 0x20)

int64_t rcx_5 = rbp << 6
*(*(rbx_3 + 0x20) + (rsi_3 << 2)) = rbp.d
*(rcx_5 + arg1[7] + 0x14) = r14_1.d
*(rcx_5 + arg1[7] + 4) = 1
*(rcx_5 + arg1[7] + 2) = 0
