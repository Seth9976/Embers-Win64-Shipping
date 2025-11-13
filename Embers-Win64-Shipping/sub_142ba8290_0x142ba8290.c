// 函数: sub_142ba8290
// 地址: 0x142ba8290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *(arg1 + 0x410)
int16_t r14 = 0
int16_t r12 = 0
int16_t rdi = 0

if ((*(arg1 + 0x418) & 0x100) == 0)
    return 

int16_t* rax_1 = *(r13 + 0x60)
int32_t* i = *(rax_1 + 0x28)

for (void* r15_1 = &i[zx.q(*rax_1) * 3]; i u< r15_1; i = &i[3])
    void* rax_3 = sub_142bb0eb0(arg1, *i)
    int16_t rax_4 = sub_142bb0d40(arg1, *(r13 + 0x60) + 8, zx.d(i[1].w), zx.d(*(i + 6)))
    
    if (rax_3 != 0)
        *rax_3 = i[2].w + rax_4
        int32_t rcx_4 = *i
        
        if (rcx_4 == 0x68617363)
            r14 = rax_4
        else if (rcx_4 == 0x68647363)
            r12 = rax_4
        else if (rcx_4 == 0x686c6770)
            rdi = rax_4

int16_t rdx_4 = *(arg1 + 0x6a)
int16_t rax_5 = *(arg1 + 0x6c)
int16_t rcx_5 = rax_5
rax_5 += r12
*(arg1 + 0x6c) = rax_5
rcx_5 = rcx_5 - rdx_4 + *(arg1 + 0x6e)
rdx_4 += r14
*(arg1 + 0x6a) = rdx_4
*(arg1 + 0x6e) = rdx_4 - rax_5 + rcx_5 + rdi
int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(*(arg1 + 0x27a))
*(arg1 + 0x74) = *(arg1 + 0x278) - ((temp1_1 - temp0_1) s>> 1).w
*(arg1 + 0x76) = *(arg1 + 0x27a)
sub_142b92e90(arg1 + 0xa8, sub_142bb5a30, 0, arg2)
