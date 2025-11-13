// 函数: sub_1423bd270
// 地址: 0x1423bd270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t rsi

if (arg3 == 0)
    rsi = 0
else
    rsi = arg2[6].d

uint64_t r12 = zx.q(*(arg2 + 0x5f))
char rax_1 = (*(*arg2 + 0x318))(arg2)
int64_t rdx = *arg2
(*(rdx + 0x340))(arg2, rdx)
int64_t rdx_1 = *arg2
int32_t rbp = int.d(arg4)
(*(rdx_1 + 0x338))(arg2, rdx_1)
int32_t rax_2 = int.d(arg4)
void* r9_1 = r12 * 0x54 + *(arg1 + 0x28)

if (rax_1 != 0)
    return 0

bool cond:1 = rax_2 == rbp

if (rax_2 s>= rbp)
    rbp = rax_2

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(rbp)
int32_t rdx_2

rdx_2 = cond:1 ? 0x20 : 0x1f - temp0

int32_t rdx_4 = rdx_2 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(rbp - 1)
int32_t r8

if (rdx_4 == 0)
    r8 = 0x20
else
    r8 = 0x1f - temp0_1

int32_t rcx_4 = (0x20 - r8) & not.d(rdx_4)

if (r12.b == 0x10)
    rsi += data_143f5a494

int32_t rax_6 = *(r9_1 + 4)
int32_t rdx_7 = rcx_4 - rsi

if (rdx_7 s>= rax_6)
    rax_6 = *(r9_1 + 8)
    
    if (rdx_7 s< rax_6)
        rax_6 = rdx_7

if (rax_6 s>= 0)
    rdi = rcx_4
    
    if (rax_6 s< rcx_4)
        rdi = rax_6

return zx.q(rcx_4 - rdi)
