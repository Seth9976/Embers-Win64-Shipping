// 函数: sub_142a7fdc0
// 地址: 0x142a7fdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = arg1
*(arg2 + 0x1f4) = 0
*(arg2 + 0x1fc) = 0
int32_t* rbx_1

if (*(arg1 + 0x8e) != 0)
    rbx_1 = *(arg1 + 0xd0)

char rcx_1

if (*(arg1 + 0x8e) == 0 || *rbx_1 s> 0)
    rcx_1 = *(arg1 + 0x8d)
else
    int64_t r10_1 = sx.q(*(arg1 + 0xc8))
    int32_t rcx = 0
    
    if (r10_1.d s> 0)
        int64_t r9_1 = 0
        int32_t* rax_1 = rbx_1
        
        while (*rax_1 s<= 0)
            rcx += 1
            r9_1 += 1
            rax_1 = &rax_1[2]
            
            if (r9_1 s>= r10_1)
                break
    
    if (rcx s>= r10_1.d)
        rcx = (r10_1 - 1).d
    
    rcx_1 = rbx_1[sx.q(rcx) * 2 + 1].b

arg2[0x40].b = rcx_1
int32_t* rbx_2

if (*(arg1 + 0x8e) != 0)
    rbx_2 = *(arg1 + 0xd0)

char rcx_3

if (*(arg1 + 0x8e) == 0 || *rbx_2 s> 0)
    rcx_3 = *(arg1 + 0x8d)
else
    int64_t r10_2 = sx.q(*(arg1 + 0xc8))
    int32_t rcx_2 = 0
    
    if (r10_2.d s> 0)
        int64_t r9_2 = 0
        int32_t* rax_3 = rbx_2
        
        while (*rax_3 s<= 0)
            rcx_2 += 1
            r9_2 += 1
            rax_3 = &rax_3[2]
            
            if (r9_2 s>= r10_2)
                break
    
    if (rcx_2 s>= r10_2.d)
        rcx_2 = (r10_2 - 1).d
    
    rcx_3 = rbx_2[sx.q(rcx_2) * 2 + 1].b

rcx_3 &= 1
arg2[0x3f].d = 0
*(arg2 + 0x204) = zx.d(rcx_3)
*(arg2 + 0x202) = rcx_3
*(arg2 + 0x201) = rcx_3
int64_t rax_6 = *(arg1 + 0x48)

if (rax_6 == 0)
    arg2[0x3e].d = 0x14
    arg2[0x3d] = &arg2[1]
else
    arg2[0x3d] = rax_6
    int64_t rax_7
    int64_t rdx_1
    rdx_1:rax_7 = mulu.dp.q(-0x5555555555555555, sx.q(*(arg1 + 0x24)))
    arg2[0x3e].d = (rdx_1 u>> 4).d

void* result = *arg2
int32_t rcx_5 = *(result + 0x84)

if (rcx_5 != 1 && rcx_5 != 6)
    arg2[0x13d].b = 0
    return result

arg2[0x13d].b = 1
return result
