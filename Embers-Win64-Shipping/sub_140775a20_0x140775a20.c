// 函数: sub_140775a20
// 地址: 0x140775a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x220)
int64_t i_4 = sx.q(arg2)
int64_t* rax

if (r9 s< i_4.d)
    uint64_t i_2 = zx.q(i_4.d - r9)
    uint64_t i
    
    do
        int64_t rdi_1 = sx.q(*(arg1 + 0x220))
        int32_t rax_1 = (rdi_1 + 1).d
        *(arg1 + 0x220) = rax_1
        
        if (rax_1 s> *(arg1 + 0x224))
            sub_1405a4f90(arg1 + 0x218)
        
        rax = (rdi_1 << 4) + *(arg1 + 0x218)
        *rax = 0
        rax[1] = 0
        i = i_2
        i_2 -= 1
    while (i != 1)

int64_t i_3 = i_4

if (i_4.d s<= 0)
    return 

int64_t rdi_2 = 0
int64_t i_1

do
    int64_t* rbx_2 = *(arg1 + 0x218) + rdi_2
    rbx_2[1].d = 0
    
    if (*(rbx_2 + 0xc) s<= 0xffffffff)
        sub_140775b10(rbx_2, 0)
    
    if (arg3 s> 0)
        rax = zx.q(rbx_2[1].d + arg3)
        rbx_2[1].d = rax.d
        
        if (rax.d s> *(rbx_2 + 0xc))
            sub_140775270(rbx_2)
    
    rdi_2 += 0x10
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
