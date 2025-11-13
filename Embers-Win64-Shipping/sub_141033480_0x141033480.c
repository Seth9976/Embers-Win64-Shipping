// 函数: sub_141033480
// 地址: 0x141033480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r12_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t rcx = r12_1 * 0x28
void* rbx_2 = *arg1 + rcx
int32_t i

do
    bool cond:0_1 = *(rbx_2 + 0x10) == 0
    *(rbx_2 + 8) = &data_142efcdf8
    
    if (not(cond:0_1))
        int64_t j
        
        do
            void* rcx_1 = *(rbx_2 + 0x10)
            j = *(rcx_1 + 0x10)
            j_sub_140a74f90(rcx_1)
            *(rbx_2 + 0x10) = j
        while (j != 0)
    
    int64_t rax_1 = *(rbx_2 + 8)
    *(rbx_2 + 0x18) = 0
    *(rbx_2 + 0x10) = 0
    (*(rax_1 + 8))(rbx_2 + 8, 0)
    int64_t* rcx_3 = *rbx_2
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x10))(rcx_3)
    
    rbx_2 += 0x28
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_3 = arg1[1].d
int32_t rcx_5 = rax_3 - r12_1.d

if (rcx_5 != arg3)
    int64_t r9 = *arg1
    memmove(rcx + r9, r9 + sx.q(r12_1.d + arg3) * 0x28, (rcx_5 - arg3) * 0x28)
    rax_3 = arg1[1].d

arg1[1].d = rax_3 - arg3

if (arg4 != 0)
    sub_1409da680(arg1)
