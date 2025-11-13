// 函数: sub_141d33780
// 地址: 0x141d33780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 3
void* r14 = &arg1[7]

do
    void* rbx_1 = *(r14 - 0x10)
    r14 -= 0x10
    i -= 1
    
    if (rbx_1 != 0)
        *(rbx_1 + 0x68) = 0
        int64_t rcx = *(rbx_1 + 0x60)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        sub_1408d6a20(rbx_1 + 0x20)
        int64_t rcx_2 = *(rbx_1 + 8)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        j_sub_140a74f90(rbx_1)
while (i != 0)

*arg1 = &data_142e85a30

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
