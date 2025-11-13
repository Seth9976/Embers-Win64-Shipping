// 函数: sub_14245e170
// 地址: 0x14245e170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 3
void* rbx = arg1 + 0x198
void* result

do
    int64_t rcx = *(rbx - 0x10)
    rbx -= 0x80
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *rbx = &data_142d6a040
    int64_t rcx_1 = *(rbx + 0x58)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    result = sub_1405ae180(rbx + 8)
while (i != 0)

return result
