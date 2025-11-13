// 函数: sub_1418d3960
// 地址: 0x1418d3960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 5
int64_t* rbx = arg1 + 0x118

do
    int64_t rcx = rbx[-3]
    rbx = &rbx[-7]
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t rcx_1 = rbx[2]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t rcx_2 = *rbx
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
while (i != 0)
