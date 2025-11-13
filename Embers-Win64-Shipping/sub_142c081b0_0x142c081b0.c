// 函数: sub_142c081b0
// 地址: 0x142c081b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
*(arg1[3] + 0x28) = 0
void* rdx = arg1[3]
int32_t rcx = *(rdx + 0x60)

if (rcx u< 0x7ffffff)
    int32_t rcx_1 = rcx << 5
    int32_t rax_1 = 0x2000
    
    if (rcx_1 u> 0x2000)
        rax_1 = rcx_1
    
    *(rdx + 0x2c) = rax_1

void* rdx_1 = arg1[3]
int32_t rcx_2 = *(rdx_1 + 0x60)

if (rcx_2 u< 0x3ffffff)
    int32_t rcx_3 = rcx_2 << 6
    int32_t rax_2 = 0x400
    
    if (rcx_3 u> 0x400)
        rax_2 = rcx_3
    
    *(rdx_1 + 0x30) = rax_2

void* rcx_4 = arg1[3]
*(arg1 + 0x2c) = *(rcx_4 + 0x38)
sub_142bf4e80(rcx_4)
void* rdx_2 = arg1[3]
int32_t r8 = *(*arg1 + 0x34)

if (*(rdx_2 + 0x60) u> 0)
    do
        uint64_t rcx_5 = rdi * 5
        rdi = zx.q(rdi.d + 1)
        *(*(rdx_2 + 0x70) + (rcx_5 << 2) + 4) = r8
    while (rdi.d u< *(rdx_2 + 0x60))

sub_142c08870(arg1[3])
sub_142c073e0(arg1[3], arg1[1])
sub_142c072d0(arg1[3])
int512_t zmm0 = sub_142c07170(arg1[3])
void* rcx_10 = *arg1
int64_t r9 = *(*(rcx_10 + 0x20) + 0x20)

if (r9 != 0)
    r9(rcx_10, arg1[3], arg1[1])

sub_142c08710(arg1, zmm0)
sub_142c08650(arg1)
sub_142c07970(arg1, sub_142bf4ea0(arg1[3]))
sub_142c076d0(arg1)
void* rcx_16 = arg1[3]

if ((*(rcx_16 + 0x38) & 0xfffffffd) == 5)
    sub_142bf5780(rcx_16)

sub_142c07510(arg1[3], arg1[1])

if ((*(*arg1 + 0xb9) & 8) != 0)
    sub_142c32460(arg1[3])

void* rcx_19 = *arg1
int64_t r9_1 = *(*(rcx_19 + 0x20) + 0x28)

if (r9_1 != 0)
    r9_1(rcx_19, arg1[3], arg1[1])

sub_142c087a0(arg1[3])
*(arg1[3] + 0x38) = *(arg1 + 0x2c)
*(arg1[3] + 0x2c) = 0x3fffffff
void* result = arg1[3]
*(result + 0x30) = 0x1fffffff
return result
