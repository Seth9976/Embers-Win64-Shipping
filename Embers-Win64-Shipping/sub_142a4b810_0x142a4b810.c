// 函数: sub_142a4b810
// 地址: 0x142a4b810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg1
char* string

if (arg1 == 0 || *arg1 == 0)
    string = &data_1434cce10
else
    int64_t rax_1 = -1
    
    do
        rax_1 += 1
    while (arg1[rax_1] != 0)
    
    char* result = sub_142a7dd00(sx.q(rax_1.d + 2))
    string = result
    
    if (result == 0)
        return result
    
    char* rax_3 = result - rbx
    char i
    
    do
        i = *rbx
        *(rax_3 + rbx) = i
        rbx = &rbx[1]
    while (i != 0)
    
    for (char* i_1 = strchr(string, 0x2f); i_1 != 0; i_1 = strchr(string, 0x2f))
        *i_1 = 0x5c

char* rcx_3 = data_144015470

if (rcx_3 != 0 && *rcx_3 != 0)
    sub_142a7dcd0(rcx_3)

data_144015470 = string
return sub_142a7db20(0x13, sub_142a4b610)
