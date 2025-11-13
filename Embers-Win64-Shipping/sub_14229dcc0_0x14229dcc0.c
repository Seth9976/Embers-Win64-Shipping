// 函数: sub_14229dcc0
// 地址: 0x14229dcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t var_38
sub_140a2e390(&var_38, u"ColorVertexData(%i)=(", zx.q(*(arg1 + 0x34)))
int32_t i = 0
int32_t var_30
int32_t r8_2

if (var_30 == 0)
    r8_2 = 0
else
    r8_2 = var_30 - 1

sub_140a20ba0(arg2, var_38, r8_2)
int64_t rcx_2 = var_38

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t rcx_3 = arg2[1].d
uint64_t r8_3 = zx.q(*(arg1 + 0x34))
uint32_t rax_2 = (r8_3 * 9).d
uint32_t rdx_2 = rcx_3 - 1 + rax_2

if (rcx_3 == 0)
    rdx_2 = rax_2

if (rdx_2 + 1 s> *(arg2 + 0xc))
    sub_1405947f0(arg2, rdx_2 + 1)
    r8_3 = zx.q(*(arg1 + 0x34))

if (r8_3.d != 0)
    do
        sub_140b01a80(&var_38, u"%.8x,", zx.q(*(zx.q(*(arg1 + 0x30) * i) + *(arg1 + 0x28))))
        int64_t r8_5 = -1
        
        do
            r8_5 += 1
        while (*(&var_38 + (r8_5 << 1)) != 0)
        
        sub_140a20ba0(arg2, &var_38, r8_5.d)
        i += 1
    while (i u< *(arg1 + 0x34))

int32_t rax_4 = arg2[1].d
int32_t rcx_9 = rax_4 - 2
int64_t result = *arg2

if (rax_4 == 0)
    rcx_9 = -1

*(result + (sx.q(rcx_9) << 1)) = 0x29
__security_check_cookie(rax_1 ^ &var_58)
return result
