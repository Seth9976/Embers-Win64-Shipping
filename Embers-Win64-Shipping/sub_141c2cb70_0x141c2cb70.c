// 函数: sub_141c2cb70
// 地址: 0x141c2cb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg2 + 4))
int32_t r15 = *(arg2 + 0xc)
int64_t rbp
rbp.b = *(arg2 + 8) s> 0
int32_t r12 = *(arg2 + 0x14)
int64_t r14
r14.b = *(arg2 + 0x10) s> 0
uint8_t rax_9

if (r9.d s> 0)
    int64_t r8_2 = r9 - (r9 u>> 1 & 0x5555555555555555)
    int64_t rcx_3 = (r8_2 u>> 2 & 0x3333333333333333) + (r8_2 & 0x3333333333333333)
    rax_9 = (((((rcx_3 u>> 4) + rcx_3) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38).b

uint64_t rsi

if (r9.d s<= 0 || rax_9 != 1)
    rsi.b = 0
else
    rsi = zx.q(rax_9)

char rbx = 0
char arg_15 = *arg2
int32_t rax_11 = 0
char arg_14 = 1

if (r9.d != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(r9.d)
    rax_11 = temp0_1 + 1

int32_t arg_10 = rax_11
arg_10.q = arg_10.q
int64_t* var_38
sub_141c39e90(&var_38, &arg_10, &data_143f34940)
int64_t* rcx_5 = var_38
int32_t var_30
int64_t rdi
rdi.b = var_30 s> 0

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

rdi.b &= rsi.b
char rdx_1 = 0

if (r12 s> 0)
    rdx_1 = rdi.b

if (r15 s> 0)
    rbx = rdx_1 & r14.b

return zx.q(rbx) & zx.q(rbp.b)
