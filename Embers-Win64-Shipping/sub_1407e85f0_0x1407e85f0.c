// 函数: sub_1407e85f0
// 地址: 0x1407e85f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r13 = zx.q(*(arg2 + 0xe0))
int32_t r14 = *(arg2 + 0x50)
int32_t rax
rax.b = (*(arg2 + 0x360) & 1) != 0
int32_t rcx = *(arg3 + 0x6c)
uint64_t rax_1 = zx.q(rax + 1)
int64_t r12 = *(arg2 + 0x48)
int32_t rbp_1 = rax_1.d * r13.d
*(arg3 + 0x68) = 0
uint32_t rax_2 = (rax_1 * 5).d

if (rax_2 s>= rcx && rcx != rax_2 + 1)
    sub_140809940(arg3, rax_2 + 1)

*(arg3 + 0xa8) = 0

if (rax_2 + 1 s> *(arg3 + 0xac))
    sub_140809860(arg3 + 0x70, rax_2 + 1)

void* rax_3 = *(arg1 + 0x780)
sub_1407ce900(arg3, (((zx.q(*(rax_3 + 0x660)) & 1) + 0x21) << 4) + rax_3)
void* rcx_4 = *(arg1 + 0x780)
sub_1407ce880(arg3, rcx_4 + 0x230 + ((zx.q(*(rcx_4 + 0x660)) & 1) << 5))
void* rcx_6 = *(arg1 + 0x780)
sub_1407ce980(arg3, rcx_6 + 0x270 + (zx.q(*(rcx_6 + 0x660)) & 1) * 0x1f0)
void* r8 = *(arg1 + 0x780)
sub_1407ce880(arg3, (sx.q((*(r8 + 0x660) & 1) + (*(arg1 + 0xc) << 1)) << 5) + *(r8 + 0x650))
sub_1407e6350(arg3, r12, r13.d)

if ((*(arg2 + 0x360) & 1) != 0)
    void* rcx_12 = *(arg1 + 0x780)
    int32_t rax_12 = *(rcx_12 + 0x660)
    sub_1407ce900(arg3, ((((zx.q(rax_12 u>> 1) ^ zx.q(rax_12)) & 1) + 0x21) << 4) + rcx_12)
    void* rdx_22 = *(arg1 + 0x780)
    int32_t rax_13 = *(rdx_22 + 0x660)
    sub_1407ce880(arg3, rdx_22 + 0x230 + (((zx.q(rax_13 u>> 1) ^ zx.q(rax_13)) & 1) << 5))
    void* rdx_25 = *(arg1 + 0x780)
    int32_t rax_14 = *(rdx_25 + 0x660)
    sub_1407ce980(arg3, rdx_25 + 0x270 + ((zx.q(rax_14 u>> 1) ^ zx.q(rax_14)) & 1) * 0x1f0)
    void* r9_1 = *(arg1 + 0x780)
    int32_t rax_16 = *(r9_1 + 0x660)
    sub_1407ce880(arg3, 
        (sx.q(((rax_16 u>> 1 ^ rax_16) & 1) + (*(arg1 + 0xc) << 1)) << 5) + *(r9_1 + 0x650))
    sub_1407e6350(arg3, r12 + r13, r13.d)

return sub_1407e6350(arg3, zx.q(rbp_1) + r12, r14 - rbp_1) __tailcall
