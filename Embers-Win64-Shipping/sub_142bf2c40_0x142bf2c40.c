// 函数: sub_142bf2c40
// 地址: 0x142bf2c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)
int32_t* entry_r8
__builtin_memset(entry_r8, 0, 0x30)
void* rax = *(rcx + 0x40)
int512_t entry_zmm2
int32_t result = (*(rax + 0x120))(arg2, *(rcx + 0x48), entry_zmm2, *(rax + 0x10))

if (result == 0)
    return result

void* rcx_1 = *(arg1 + 0x10)
int64_t rdx_1 = sx.q(*entry_r8)
int64_t rax_1
int64_t r9_1

if (rcx_1 != 0)
    r9_1 = sx.q(*(rcx_1 + 0x24))
    rax_1 = sx.q(*(arg1 + 0x24))

int32_t rax_4

if (rcx_1 == 0 || r9_1.d == rax_1.d)
    rax_4 = rdx_1.d
else
    rax_4 = (divs.dp.q(sx.o(rax_1 * rdx_1), r9_1)).d

int64_t rcx_2 = sx.q(entry_r8[1])
*entry_r8 = rax_4
void* rax_5 = *(arg1 + 0x10)
int64_t rax_6
int64_t rdx_4

if (rax_5 != 0)
    rdx_4 = sx.q(*(rax_5 + 0x24))
    rax_6 = sx.q(*(arg1 + 0x24))

int32_t rax_9

if (rax_5 == 0 || rdx_4.d == rax_6.d)
    rax_9 = rcx_2.d
else
    rax_9 = (divs.dp.q(sx.o(rax_6 * rcx_2), rdx_4)).d

int64_t rcx_4 = sx.q(entry_r8[2])
entry_r8[1] = rax_9
void* rax_10 = *(arg1 + 0x10)

if (rax_10 != 0)
    int64_t rdx_7 = sx.q(*(rax_10 + 0x24))
    int64_t rax_11 = sx.q(*(arg1 + 0x24))
    
    if (rdx_7.d != rax_11.d)
        entry_r8[2] = (divs.dp.q(sx.o(rax_11 * rcx_4), rdx_7)).d
        return zx.q(result)

entry_r8[2] = rcx_4.d
return result
