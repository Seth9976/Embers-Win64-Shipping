// 函数: sub_141d2fae0
// 地址: 0x141d2fae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143222268
int64_t* rcx = arg1[0x19]

if (rcx != 0)
    (**rcx)(rcx, 1)
    arg1[0x19] = 0

int64_t result = sub_140a4fc50(arg1[0xa])
int64_t i = 2
void* rbx = &arg1[0x1b]

do
    int64_t rcx_2 = *(rbx - 0x20)
    rbx -= 0x30
    i -= 1
    
    if (rcx_2 != 0)
        result = sub_140a74f90(rcx_2)
    
    int64_t rcx_3 = *rbx
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)
while (i != 0)

int64_t rcx_4 = arg1[6]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[3]

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
