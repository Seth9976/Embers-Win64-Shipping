// 函数: sub_142ca6160
// 地址: 0x142ca6160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rbx = *(arg2 + 0xb0)

if (*(*(rbx + 0x18) + 0x34) == 0)
    int64_t* rcx = *(arg2 + 0x58)
    char* rax_2 = (*(*rcx + 8))(rcx)
    int64_t r8_1 = -1
    
    do
        r8_1 += 1
    while (rax_2[r8_1] != 0)
    
    sub_14058ad40(*(rbx + 0x18) + 0x38, rax_2, r8_1)
    *(*(rbx + 0x18) + 0x34) = 1

return &data_1429acca6
