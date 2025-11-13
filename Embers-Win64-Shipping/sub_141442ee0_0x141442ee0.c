// 函数: sub_141442ee0
// 地址: 0x141442ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = &arg1[4]
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
int64_t i_1 = 3
arg1[3] = arg2[3]
int64_t i

do
    int64_t* rcx = *(arg2 - arg1 + rbx)
    int64_t* rdi_1 = *rbx
    *rbx = rcx
    
    if (rcx != 0)
        (*(*rcx + 0x30))()
    
    if (rdi_1 != 0)
        (*(*rdi_1 + 0x38))(rdi_1)
    
    rbx += 8
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* rcx_2 = *(arg2 + 0x28)
int64_t* rbx_1 = *(arg1 + 0x28)
*(arg1 + 0x28) = rcx_2

if (rcx_2 != 0)
    (*(*rcx_2 + 0x30))()

if (rbx_1 != 0)
    (*(*rbx_1 + 0x38))(rbx_1)

return arg1
