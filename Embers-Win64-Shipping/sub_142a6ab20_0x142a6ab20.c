// 函数: sub_142a6ab20
// 地址: 0x142a6ab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2
int32_t rax = sub_142a6b7a0(arg1, &data_14363e3c0)
int32_t rbx = 0
int32_t rax_1 = sub_142a6b7a0(arg1, &data_14363eb40)

if (rax_1 == 7)
    rbx = arg1[5].d - arg1[0x20].d
else if (rax_1 == 0x12)
    rbx = *(arg1 + 0x54) - 1

int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x6db6db6d, rbx)
int32_t rdx_2 = (temp0 - rbx) s>> 2
int32_t rax_4 = (rdx_2 + (rdx_2 u>> 0x1f)) * 7
int32_t rbx_3 = rbx + rax_4
int32_t r14 = rbx_3 + 7

if (rbx + rax_4 s>= 0)
    r14 = rbx_3

int32_t rbx_4 = arg1[0x20].d
int32_t rax_6 = (*(*arg1 + 0x100))(arg1, zx.q(rdi), 0, 0)
int32_t rax_7 = (*(*arg1 + 0x100))(arg1, zx.q(rdi + 1), 0, 0)
char rcx_4 = (int.d(sub_142a4b9c0(_mm_cvtepi32_pd(zx.q(rax_6 + 1)).q f+ 1.0, 7.0))).b
uint32_t rax_8 = zx.d((rcx_4 s>> 7 & 7) + 1 + rcx_4)
int32_t rax_9 = rax_8 - rbx_4
int32_t rbx_5 = rax_9 + 7

if (rax_8 - rbx_4 s>= 0)
    rbx_5 = rax_9

uint32_t rax_10 = zx.d(*(arg1 + 0x104))

if (rax == 3)
    if (arg3 != 1)
        if (arg3 s>= (*(*arg1 + 0x90))(arg1, 3))
            int32_t rcx_10 = arg3 * 7 - rbx_5 + rax_6 + r14
            int32_t rax_15 = rcx_10 - 7
            
            if (7 - rbx_5 s< rax_10)
                rax_15 = rcx_10
            
            if (rax_15 + 1 s>= rax_7)
                rdi += 1
    else if (7 - rbx_5 s>= rax_10 && r14 s< rbx_5)
        return zx.q(rdi - 1)
else if (rax == 5)
    if (*(arg1 + 0x14) == 0)
        int64_t r8 = *arg1
        
        if (arg3 s>= (*(r8 + 0x90))(arg1, zx.q(rax - 2), r8))
            return zx.q(rdi + 1)
    
    if (arg3 == 1 && *(arg1 + 0x14) != 0)
        return zx.q(rdi - 1)

return zx.q(rdi)
