// 函数: sub_142c86470
// 地址: 0x142c86470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *arg1
_time64(&arg1[0xc])
int64_t rax
int64_t r8_1
rax, r8_1 = sub_142c65dc0(**(arg1 + 0x10), nullptr, rdi == 0, arg1)
int512_t entry_zmm2

if (rax s< 0)
    sub_142c64760(**(arg1 + 0x10), "Connection time-out", r8_1, entry_zmm2)
    return 0x1c

int64_t r9_2

if (rdi != 0)
    if (rax s<= 0)
        r9_2 = 0xe10
    else
        r9_2 = (rax + 0x1f4) s/ 0x3e8
    
    *(arg1 + 0x38) = *(arg1 + 0x30) + r9_2
    arg1[0xa] = r9_2.d s/ 5
else
    r9_2 = (rax + 0x1f4) s/ 0x3e8
    *(arg1 + 0x38) = *(arg1 + 0x30) + r9_2
    int32_t rcx_10 = r9_2.d s/ 5
    
    if (rcx_10 s< 1)
        rcx_10 = 1
    
    int32_t temp0_1 = divs.dp.d(sx.q(r9_2.d), rcx_10)
    arg1[0xa] = rcx_10
    arg1[9] = temp0_1
    
    if (temp0_1 s< 1)
        arg1[9] = 1

int32_t r8_2 = arg1[0xa]

if (r8_2 s< 3)
    r8_2 = 3

if (r8_2 s> 0x32)
    r8_2 = 0x32

arg1[0xe]
int32_t rax_17 = divs.dp.q(sx.o(r9_2), sx.q(r8_2))
void** rcx_15 = *(arg1 + 0x10)
arg1[0xa] = r8_2
int32_t var_10 = r8_2
uint64_t r8_3 = zx.q(*arg1)

if (rax_17 s< 1)
    rax_17 = 1

arg1[0xc]
arg1[9] = rax_17
int32_t var_18 = rax_17
sub_142c64850(*rcx_15, "set timeouts for state %d; Total %ld, retry %d maxtry %d\n", r8_3, 
    entry_zmm2)
_time64(&arg1[0x10])
return 0
