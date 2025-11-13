// 函数: sub_1421b3fb0
// 地址: 0x1421b3fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_10 = *(arg1 + 0x10)
void* r8 = arg1
int32_t r10 = *(arg1 + 0x18)

if (rax_10 != 0)
    r8 = rax_10

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
uint64_t rcx_1 = zx.q((r10 + 0x1f) u>> 5)
int64_t rdx_2 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
int64_t rax_4 = rdx_2

if (rdx_2 s< rcx_1)
    while (*(r8 + (rax_4 << 2)) == 0xffffffff)
        rdx_2 = zx.q(rdx_2.d + 1)
        rax_4 += 1
        
        if (rax_4 s>= rcx_1)
            break

if (rdx_2.d s< rcx_1.d)
    int64_t rax_5 = sx.q(rdx_2.d)
    int32_t rax_6 = *(r8 + (rax_5 << 2))
    int32_t rcx_3 = not.d(rax_6)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rcx_3)
    int32_t rdx_4 = (rdx_2.d << 5) + temp0_1
    
    if (rdx_4 s< r10)
        *(r8 + (rax_5 << 2)) = rax_6 | (neg.d(rcx_3) & rcx_3)
        return zx.q(rdx_4)

return 0xffffffff
