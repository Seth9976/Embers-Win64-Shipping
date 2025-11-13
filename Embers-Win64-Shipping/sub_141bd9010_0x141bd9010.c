// 函数: sub_141bd9010
// 地址: 0x141bd9010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rdx = *arg1
int64_t* rbx_1 = rdx
void* rcx = &rdx[sx.q(arg1[1].d)]

if (rdx == rcx)
    return 

while (*rbx_1 != arg2)
    rbx_1 = &rbx_1[1]
    
    if (rbx_1 == rcx)
        return 

int32_t rbx_3 = ((rbx_1 - rdx) s>> 3).d

if (rbx_3 == 0xffffffff)
    return 

int64_t rbp_1 = sx.q(arg1[3].d)
int32_t rax_1 = (rbp_1 + 1).d
arg1[3].d = rax_1

if (rax_1 s> *(arg1 + 0x1c))
    sub_140638870(&arg1[2])

*(arg1[2] + (rbp_1 << 3)) = arg2
int32_t rcx_2 = arg1[1].d
int32_t rax_4 = rcx_2 - rbx_3

if (rax_4 != 1)
    int64_t r9_1 = *arg1
    memmove(r9_1 + (sx.q(rbx_3) << 3), r9_1 + (sx.q(rbx_3 + 1) << 3), (rax_4 - 1) << 3)
    rcx_2 = arg1[1].d

arg1[1].d = rcx_2 - 1
sub_1405c53d0(arg1)

if (arg3 != 0)
    sub_140dba910(&arg1[6], arg2)
