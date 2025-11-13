// 函数: sub_142c77820
// 地址: 0x142c77820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
void* rbx = *(rcx + 0x250)
char* arg_8
int32_t result = sub_142c51e30(rcx, *(rcx + 0x4e38), 0, &arg_8, nullptr, 1)

if (result != 0)
    return result

char* rcx_1 = arg_8
char rax = *rcx_1

if (rax == 0x2f || rax == 0x5c)
    rcx_1 = &rcx_1[1]

char* string = data_143ccb8b0(rcx_1)
*(rbx + 8) = string

if (string == 0)
    data_143ccb8a0(arg_8)
    return 0x1b

char* rax_2 = strchr(string, 0x2f)

if (rax_2 == 0)
    rax_2 = strchr(*(rbx + 8), (&rax_2[0x5c]).d)
    
    if (rax_2 == 0)
        data_143ccb8a0(arg_8)
        return 3

*rax_2 = 0
void* rax_4 = &rax_2[1]
*(rbx + 0x10) = rax_4

while (*rax_4 != 0)
    if (*rax_4 == 0x2f)
        *rax_4 = 0x5c
    
    rax_4 += 1

data_143ccb8a0(arg_8)
return 0
