// 函数: sub_141c56770
// 地址: 0x141c56770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x80)
bool z

if (0 == *(arg1 + 0x70))
    *(arg1 + 0x70) = 0
    z = true
else
    *(arg1 + 0x70)
    z = false

int64_t rsi
rsi.b = z
void* rsi_3 = ((rsi + 5) << 4) + arg1
int64_t r14 = sx.q(*(rsi_3 + 8))
int32_t rax_2 = (r14 + 1).d
*(rsi_3 + 8) = rax_2

if (rax_2 s> *(rsi_3 + 0xc))
    sub_1405c4fe0(rsi_3)

int64_t* rcx_4 = (r14 << 6) + *rsi_3
void* rsi_4 = &arg2[4]
*rcx_4 = *arg2
int64_t result = arg2[2]
rcx_4[2] = result
arg2[2] = 0
*(rcx_4 + 0x20) = *rsi_4
*(rcx_4 + 0x30) = *(rsi_4 + 0x10)

if (*rcx_4 != 0)
    *arg2 = 0

*(arg1 + 0x1bc) += 1

if (arg1 != -0x80)
    result = LeaveCriticalSection(arg1 + 0x80)

if (*arg2 == 0)
    return result

void* rax_4 = arg2[2]

if (rax_4 != 0)
    rsi_4 = rax_4

return (*(*rsi_4 + 0x10))(rsi_4)
