// 函数: sub_1427883a0
// 地址: 0x1427883a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[1]
uint32_t rdi = **arg1
int32_t rsi_1 = rdi * arg2
uint64_t result = zx.q(rdi + rsi_1)

if (result.d s> *(rbx + 0x168))
    result = arg1[2]
    rdi = *result - rsi_1

if (rdi s<= 0)
    return result

int64_t* r9_1 = *(rbx + 0x710)
int64_t r10_1 = sx.q(rsi_1)
int32_t r8_1 = *(arg1[4] + 0x30)
return sub_14036eae0(zx.q(r8_1 * rsi_1) + *arg1[3], rdi, r8_1, r9_1[0xe] + (r10_1 << 2), 
    **(rbx + 0x708), *r9_1 + r10_1 * 0xc)
