// 函数: sub_142be8f30
// 地址: 0x142be8f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2 + 4
void* rdx = rbx + 3
int32_t rcx = 0
uint32_t i_3 =
    ((zx.d(*(rbx - 4)) << 8 | zx.d(*(arg2 + 1))) << 8 | zx.d(*(rbx - 2))) << 8 | zx.d(*(rbx - 1))

if (i_3 != 0)
    uint32_t i
    
    do
        uint32_t rax_3 = zx.d(*rdx)
        rdx += 4
        rcx = rcx + 1 + rax_3
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t r8 = *(arg1 + 0x2c)
uint32_t rdi_2 = zx.d(*(rbx - 4)) << 8 | zx.d(*(rbx - 3))
int32_t arg_8 = 0
uint32_t i_2 = (rdi_2 << 8 | zx.d(*(rbx - 2))) << 8 | zx.d(*(rbx - 1))

if (rcx + 1 u> r8)
    *(arg1 + 0x38) = arg3
    int64_t rax_8 = sub_142b99a90(arg3, 4, r8, rcx + 1, *(arg1 + 0x30), &arg_8)
    bool cond:0_1 = arg_8 != 0
    *(arg1 + 0x30) = rax_8
    
    if (cond:0_1)
        return 0
    
    *(arg1 + 0x2c) = rcx + 1

uint32_t* rdx_1 = *(arg1 + 0x30)

if (i_2 != 0)
    uint32_t i_1
    
    do
        uint32_t rcx_3 = zx.d(*(rbx + 1))
        uint32_t rax_9 = zx.d(*rbx)
        rbx += 4
        uint32_t rax_13 = (rax_9 << 8 | rcx_3) << 8 | zx.d(*(rbx - 2))
        int32_t j_1 = zx.d(*(rbx - 1)) + 1
        int32_t j
        
        do
            *rdx_1 = rax_13
            rax_13 += 1
            rdx_1 = &rdx_1[1]
            j = j_1
            j_1 -= 1
        while (j != 1)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

*rdx_1 = 0
return *(arg1 + 0x30)
