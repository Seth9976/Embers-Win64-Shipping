// 函数: sub_140af3620
// 地址: 0x140af3620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_2 = arg1[1].d
uint64_t rax = zx.q(rdx_2 - 1)

if (rdx_2 == 0)
    rax = 0

int16_t* const r8

if (rdx_2 == 0)
    r8 = &data_142d40450
else
    r8 = *arg1

if (rax.d == 0)
    return 0

int32_t r9_1
bool cond:2_1

while (true)
    r9_1 = rax.d
    rax = zx.q(rax.d - 1)
    int16_t rdx = r8[rax]
    cond:2_1 = rdx != 0x3d
    
    if (rdx != 0x3d)
        break
    
    if (rax.d == 0)
        cond:2_1 = rdx != rdx
        break

if (cond:2_1)
    rax = zx.q(r9_1)

int32_t rax_1 = rax.d & 3
uint32_t rdx_1 = (rax.d u>> 2) * 3
uint32_t rcx_2 = rdx_1 + 2

if (rax_1 != 3)
    rcx_2 = rdx_1

if (rax_1 != 2)
    return zx.q(rcx_2)

return zx.q(rcx_2 + 1)
