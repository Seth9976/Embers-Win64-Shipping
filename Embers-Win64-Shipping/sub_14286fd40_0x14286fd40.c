// 函数: sub_14286fd40
// 地址: 0x14286fd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t arg_10

if (sub_14286fc30(arg1, &arg_10) == 0 || arg_10 s> 0 || arg2 s> 0)
    return 0

void* rcx = *(arg1 + 0xb0)
int64_t rax_1 = *(rcx + 0x208)
int32_t rdx_1 = *(rcx + 0x1fc)

if (rax_1 == 0)
    *(rcx + 0x1fc) = rdx_1 * 2
    void* rax_4 = *(arg1 + 0xb0)
    
    if (*(rax_4 + 0x1fc) u> 0x3938700)
        *(rax_4 + 0x1fc) = 0x3938700
    
    sub_142870200(arg1)
else
    *(*(arg1 + 0xb0) + 0x1fc) = rax_1(arg1, rdx_1)

void* rax_5 = *(arg1 + 0xb0)
*(rax_5 + 0x1f0) += 1

if (*(*(arg1 + 0xb0) + 0x1f0) u> 2 && not(test_bit(sub_14284fc20(arg1), 0xc)))
    int64_t rcx_7 = sx.q(sub_142899cf0(sub_14284fce0(arg1), 0x2f, 0, 0))
    void* rax_10 = *(arg1 + 0xb0)
    
    if (rcx_7 u< *(rax_10 + 0x130))
        *(rax_10 + 0x130) = rcx_7

void* rax_11 = *(arg1 + 0xb0)

if (*(rax_11 + 0x1f0) u> 0xc)
    sub_142856580(arg1, 0xffffffff, 0x13e, 0x138, "ssl\d1_lib.c", 0x17e)
    return 0xffffffff

*(rax_11 + 0x1e8) += 1
void* rax_13 = *(arg1 + 0xb0)

if (*(rax_13 + 0x1e8) u> 2)
    *(rax_13 + 0x1e8) = 1

sub_142870200(arg1)
return sub_142877560(arg1) __tailcall
