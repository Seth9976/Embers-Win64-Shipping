// 函数: sub_141442fa0
// 地址: 0x141442fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
int64_t i_1 = 2
int64_t i

do
    int64_t* rcx = *(arg2 - arg1 + rbx)
    int64_t* rdi_1 = *rbx
    *rbx = rcx
    
    if (rcx != 0)
        (*(*rcx + 0x30))()
    
    if (rdi_1 != 0)
        (*(*rdi_1 + 0x38))(rdi_1)
    
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[2].d = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3].d = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4].d = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
return arg1
