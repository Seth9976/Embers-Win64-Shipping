// 函数: sub_140dec100
// 地址: 0x140dec100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x30)
int32_t rbx = *(arg1 + 0x34)
int32_t r14 = *(arg2 + 0x1c)
int32_t r13 = *(arg2 + 0x14)
int32_t r12 = *(arg2 + 0x20)
int64_t r15 = *(arg2 + 8)
int64_t rbp_3 = zx.q(*(arg2 + 0x10) * r9 * r14) + *arg2
int32_t rcx
rcx.b = rbx != 0
int64_t result = memcpy(zx.q((rcx + r13 * r12) * r9) + r15, rbp_3, r9 * r14)

if (rbx == 0)
    return result

int32_t count_1 = *(arg1 + 0x30)
uint64_t count = zx.q(count_1)
int64_t rcx_7 = zx.q(count_1 * r13 * r12) + r15
int64_t rsi_4 = zx.q((*(arg2 + 0x18) - 1) * count_1) + rcx_7

if (*(arg1 + 0x34) != 1)
    memset(rcx_7, 0, count)
    return memset(rsi_4, 0, zx.q(*(arg1 + 0x30)))

memcpy(rcx_7, rbp_3, count.d)
return memcpy(rsi_4, zx.q((r14 - 1) * count_1) + rbp_3, *(arg1 + 0x30))
