// 函数: sub_1408bb2e0
// 地址: 0x1408bb2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2 & 2) == 0)
    *arg1 = &data_142e040e0
    sub_140691a20(&arg1[0x3c])
    int64_t rcx_6 = arg1[0x31]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t rcx_7 = arg1[0x2f]
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    sub_1408ba670(&arg1[0x18])
    
    if ((arg2 & 1) != 0)
        j_sub_140a74f90(arg1)
    
    return arg1

int64_t i = arg1[-1]
void* rbx_1 = i * 0x2a8 + arg1

while (i != 0)
    rbx_1 -= 0x2a8
    i -= 1
    *rbx_1 = &data_142e040e0
    sub_140691a20(rbx_1 + 0x1e0)
    int64_t rcx_1 = *(rbx_1 + 0x188)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t rcx_2 = *(rbx_1 + 0x178)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    sub_1408ba670(rbx_1 + 0xc0)

if ((arg2 & 1) != 0)
    arg1[-1]
    j_sub_140a74f90(&arg1[-1])

return &arg1[-1]
