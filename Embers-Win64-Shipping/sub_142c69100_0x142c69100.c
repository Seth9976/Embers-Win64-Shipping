// 函数: sub_142c69100
// 地址: 0x142c69100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* string_1 = arg1
char* rax = strstr(arg1, "//")
void* string = &rax[2]

if (rax == 0)
    string = string_1

char* rbx = strchr(string, 0x3f)
char* rax_2 = strchr(string, 0x2f)

if (rax_2 == 0)
    void* rax_3 = -ffffffffffffffff
    
    do
        rax_3 += 1
    while (*(string_1 + rax_3) != 0)
    
    rax_2 = rax_3 + string_1

if (rbx == 0)
    void* rbx_1 = -ffffffffffffffff
    
    do
        rbx_1 += 1
    while (*(string_1 + rbx_1) != 0)
    
    rbx = rbx_1 + string_1

if (rax_2 u< rbx)
    return rax_2

return rbx
