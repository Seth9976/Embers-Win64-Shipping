// 函数: sub_141c319d0
// 地址: 0x141c319d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 2
*arg1 = &data_143205170
void* rbx = &arg1[0x82]
int64_t result

do
    rbx -= 0x1f8
    i -= 1
    result = `vector destructor iterator'(rbx + 0x58, 0x50, 4, sub_141c318b0)
    int64_t rcx_1 = *(rbx + 8)
    *rbx = &data_143205000
    
    if (rcx_1 != 0)
        result = j_sub_140a74f90(rcx_1)
        *(rbx + 8) = 0
while (i != 0)

return result
