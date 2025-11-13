// 函数: sub_142c8c090
// 地址: 0x142c8c090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdx = arg1
char* rbx = arg1
int64_t rcx = 1
char i = *rdx

while (i != 0)
    rcx += 1
    
    if (i == 0x22 || i == 0x5c)
        rcx += 1
    
    i = rdx[1]
    rdx = &rdx[1]

char* result = data_143ccb898(rcx, rdx)

if (result == 0)
    return result

char* result_1 = result

while (*rbx != 0)
    char rdx_1 = *rbx
    
    if (rdx_1 == 0x22 || rdx_1 == 0x5c)
        *result_1 = 0x5c
        result_1 = &result_1[1]
    
    char rax = *rbx
    rbx = &rbx[1]
    *result_1 = rax
    result_1 = &result_1[1]

*result_1 = 0
return result
