// 函数: sub_14276fa40
// 地址: 0x14276fa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20) = arg5
*(arg1 + 0x30) = arg6
*(arg1 + 0x38) = arg7
*(arg1 + 0x2c) = arg2
*(arg1 + 0x28) = arg3
*(arg1 + 0x18) = arg4
int32_t rax_5 = ((zx.q(arg9) << 2) + 0x3f).d & 0xffffffc0
*(arg1 + 0x80) = rax_5
int32_t rax_6 = rax_5 * arg2
*(arg1 + 0x84) = rax_6
int32_t rdx = *(arg1 + 0x78)

if (rax_6 s> rdx)
    *(arg1 + 0x78) = rax_6
    
    if (rax_6 s> *(arg1 + 0x7c))
        sub_14085a250(arg1 + 0x70)
else if (rax_6 s< rdx && rax_6 != rdx)
    *(arg1 + 0x78) = rax_6

*(arg1 + 0x50) = *arg8
uint64_t* rbx = *(arg1 + 0x60)
uint64_t rdi = sx.q(*(arg1 + 0x68))
void* rbp = &rbx[rdi * 3]

if (rbx != rbp)
    do
        int32_t rax_8 = *(rbx + 0xc)
        rbx[1].d = 0
        
        if (rax_8 s< 0 && rax_8 != 0)
            sub_1405dadb0(rbx, 0)
        
        rbx[2].d = 0xffffffff
        rbx = &rbx[3]
    while (rbx != rbp)
    
    rdi = zx.q(*(arg1 + 0x68))

int32_t rdx_1 = *(arg1 + 0x58)

if (rdx_1 s> rdi.d)
    *(arg1 + 0x68) = rdx_1
    int32_t i_1 = rdx_1 - rdi.d
    
    if (rdx_1 s> *(arg1 + 0x6c))
        sub_1405a4df0(arg1 + 0x60)
    
    int64_t* rdx_3 = *(arg1 + 0x60) + sx.q(rdi.d) * 0x18
    
    if (i_1 != 0)
        int32_t i
        
        do
            *rdx_3 = 0
            rdx_3[1] = 0
            rdx_3[2].d = 0xffffffff
            rdx_3 = &rdx_3[3]
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (rdx_1 s< rdi.d)
    arg4.b = 1
    sub_1418ec240(arg1 + 0x60, rdx_1, rdi.d - rdx_1, arg4.b)

*(arg1 + 0xa0) = arg10
return arg10
