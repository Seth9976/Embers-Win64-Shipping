// 函数: sub_142c70460
// 地址: 0x142c70460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char i = *arg1
char* r10 = arg1

while (i != 0)
    char r9_1 = *arg2
    
    if (r9_1 == 0)
        break
    
    if (i - 0x61 u<= 0x19)
        i -= 0x20
    
    if (r9_1 - 0x61 u<= 0x19)
        r9_1 -= 0x20
    
    if (i != r9_1)
        break
    
    i = r10[1]
    r10 = &r10[1]
    arg2 = &arg2[1]

char r8_2 = *r10

if (r8_2 - 0x61 u<= 0x19)
    r8_2 -= 0x20

char rcx_1 = *arg2

if (rcx_1 - 0x61 u<= 0x19)
    rcx_1 -= 0x20

int64_t result
result.b = r8_2 == rcx_1
return result
