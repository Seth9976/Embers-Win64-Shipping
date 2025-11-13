// 函数: sub_1429c32a0
// 地址: 0x1429c32a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_8 = arg1
int64_t var_10 = -2
int32_t var_18 = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0xf
*arg1 = 0
int32_t var_18_1 = 1
char* arg_10

if (FormatMessageA(
        FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM |
            FORMAT_MESSAGE_IGNORE_INSERTS, 
        nullptr, GetLastError(), 0x400, &arg_10, 0, nullptr) != 0)
    char* rdx_1 = arg_10
    int64_t r8_1 = -1
    
    do
        r8_1 += 1
    while (rdx_1[r8_1] != 0)
    
    sub_14058ad40(arg1, rdx_1, r8_1)
    LocalFree(arg_10)

return arg1
