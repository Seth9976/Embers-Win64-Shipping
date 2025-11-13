// 函数: sub_140949080
// 地址: 0x140949080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e2a138
int64_t rsi = data_143ced130
int64_t rcx
bool cond:1

if (data_143de5480 == 0)
    rcx = 0
    cond:1 = true
else
    uint32_t rax_1 = GetCurrentThreadId()
    int32_t temp0_1 = data_143de5470
    cond:1 = rax_1 == temp0_1
    rcx.b = rax_1 != temp0_1

int32_t r9 = *(rsi + (rcx << 2))
uint64_t rflags
int32_t temp0_2
temp0_2, rflags = _bit_scan_reverse(r9)
arg1[2] = 0
int32_t arg_8 = temp0_2
*(arg1 + 0x1c) = 0
int32_t rcx_1

rcx_1 = cond:1 ? 0x20 : 0x1f - temp0_2

int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_3
temp0_3, rflags_1 = _bit_scan_reverse(r9 - 1)
int32_t arg_10 = temp0_3
char rdx

if (rcx_3 == 0)
    rdx = 0x20
else
    rdx = 0x1f - temp0_3.b

int32_t rbp = 1 << ((not.d(rcx_3)).b & (0x20 - rdx))
arg1[3].d = rbp

if (rbp s> *(arg1 + 0x1c))
    sub_1405c4f50(&arg1[2])

memset(arg1[2], 0, sx.q(rbp) * 0x30)
arg1[1].d = arg1[3].d - 1
arg1[4].d = 0
*(arg1 + 0x24) = 0
arg1[5].b = 1
arg1[6] = arg2
arg1[7] = (*(*arg2 + 0x378))(arg2)
return arg1
