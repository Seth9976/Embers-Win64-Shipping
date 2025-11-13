// 函数: sub_14286f680
// 地址: 0x14286f680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
sub_14286ddb0(&arg1[0x200])
void* rax = *(arg1 + 0xb0)

if (rax != 0)
    int64_t rbx_1 = *(rax + 0x208)
    int64_t rbp_1 = *(rax + 0x118)
    int64_t r12_1 = *(rax + 0x128)
    int64_t r14_1 = *(rax + 0x120)
    int64_t r15_1 = *(rax + 0x130)
    sub_14286f800(arg1)
    memset(*(arg1 + 0xb0), 0, 0x210)
    *(*(arg1 + 0xb0) + 0x208) = rbx_1
    
    if (arg1[0xe] != 0)
        *(*(arg1 + 0xb0) + 0x100) = 0x100
    
    if (test_bit(sub_14284fc20(arg1), 0xc))
        *(*(arg1 + 0xb0) + 0x130) = r15_1
        *(*(arg1 + 0xb0) + 0x128) = r12_1
    
    *(*(arg1 + 0xb0) + 0x118) = rbp_1
    *(*(arg1 + 0xb0) + 0x120) = r14_1

sub_142870960(arg1)
int32_t rcx_5 = **(arg1 + 8)

if (rcx_5 == 0x1ffff)
    *arg1 = 0xfefd
    return 1

if ((arg1[0x171] & 0x8000) == 0)
    *arg1 = rcx_5
    return 1

arg1[0x179] = 0x100
*arg1 = 0x100
return 1
