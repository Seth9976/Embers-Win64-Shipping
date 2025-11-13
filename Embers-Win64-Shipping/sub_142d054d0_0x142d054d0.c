// 函数: sub_142d054d0
// 地址: 0x142d054d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0x31
void* rbx = &data_143f4baa0
void* result

do
    rbx -= 0x50
    i -= 1
    *(rbx + 0x48) = 0
    int64_t rcx_1 = *(rbx + 0x40)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    result = sub_14211a1e0(rbx)
while (i != 0)

return result
