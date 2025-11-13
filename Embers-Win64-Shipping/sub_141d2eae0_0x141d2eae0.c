// 函数: sub_141d2eae0
// 地址: 0x141d2eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 2
void* rbx = arg1 + 0xb0

do
    int64_t rcx = *(rbx - 0x30)
    rbx -= 0x40
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t rcx_1 = *rbx
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t rcx_2 = *(rbx - 0x10)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
while (i != 0)
