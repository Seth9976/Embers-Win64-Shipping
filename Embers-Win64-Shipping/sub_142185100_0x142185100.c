// 函数: sub_142185100
// 地址: 0x142185100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
*arg1 = &data_1432e6c30
int64_t* rbx = arg1[2]
uint64_t r14_1 = sx.q(arg1[3].d) << 3 u>> 3

if (rbx u> &rbx[arg1[3]])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            (*(*rcx + 0x80))(rcx, 1)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)

int64_t* rcx_1 = arg1[4]

if (rcx_1 != 0)
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1)
        (**rcx_1)(rcx_1, 1)

int64_t rcx_2 = arg1[2]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142dd5c80

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
