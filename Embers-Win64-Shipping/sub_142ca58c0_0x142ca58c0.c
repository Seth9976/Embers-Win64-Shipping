// 函数: sub_142ca58c0
// 地址: 0x142ca58c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rbx = *(arg2 + 0x68)

if (*(*(rbx + 0x18) + 0x30) == 0)
    int64_t* rcx = *(arg2 + 0x78)
    char* rax_2 = (*(*rcx + 8))(rcx)
    int64_t r8_1 = -1
    
    do
        r8_1 += 1
    while (rax_2[r8_1] != 0)
    
    sub_14058ad40(*(rbx + 0x18) + 0x38, rax_2, r8_1)
    *(*(rbx + 0x18) + 0x30) = 1

return &data_1429aa94f
