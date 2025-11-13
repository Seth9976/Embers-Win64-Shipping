// 函数: sub_14281b288
// 地址: 0x14281b288
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = sub_14281ec28(*arg1)
void* rcx_1 = *arg1
char rbx = 0

if (*(rcx_1 + 0xd0) == 0 && *(rcx_1 + 0xd2) == 0 && *(rcx_1 + 0xd3) == 0)
    wchar16* rdx_1
    
    if (arg1[8].b != 0)
        rdx_1 = &data_14370209c
        goto label_14281b2f0
    
    while (arg1[7] u< i)
        char arg_10 = 0x20
        rdx_1 = &arg_10
    label_14281b2f0:
        sub_14281f460(&arg1[1], rdx_1, 1)
    
    sub_14281f460(&arg1[1], &data_142d6bc34, 1)

int32_t result = arg2 - 1

if (result u> 2 && arg2 != 5)
    return result

void* rcx_4 = *arg1
int64_t rax

if (*(rcx_4 + 0xd0) == 0 && *(rcx_4 + 0xd2) == 0)
    rax = sub_14281e6ec(rcx_4)

if (*(rcx_4 + 0xd0) != 0 || *(rcx_4 + 0xd2) != 0 || rax != 0)
    rbx = 1

return sub_14281ba8c(arg1, rbx, i)
