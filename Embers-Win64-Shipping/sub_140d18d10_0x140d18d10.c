// 函数: sub_140d18d10
// 地址: 0x140d18d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi

if (arg2 s>= *(arg1 + 0x24))
    rdi = nullptr
else
    int16_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(arg2)
    uint32_t rdx_1 = zx.d(temp1_1)
    int32_t rax_3 = temp2_1 + rdx_1
    rdi = *(*(arg1 + 0x10) + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18

int32_t rax_9 = *(rdi + 0x10)

if (rax_9 != 0)
    return rax_9

int32_t rbx_1 = *(arg1 + 0x128)
*(arg1 + 0x128) += 1
int32_t rbx_2 = rbx_1 + 1

if (rbx_2 s<= 0x3e8)
    sub_140af98a0("Unknown", 0x184, 
        UObject serial numbers overflowed (trying to allocate serial number %d).", zx.q(rbx_2))
    sub_140afbb40()

int32_t rax_8 = 0
bool z_1

if (0 == *(rdi + 0x10))
    *(rdi + 0x10) = rbx_2
    z_1 = true
else
    rax_8 = *(rdi + 0x10)
    z_1 = false

if (not(z_1))
    return rax_8

return rbx_2
