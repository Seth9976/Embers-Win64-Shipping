// 函数: sub_1420c9740
// 地址: 0x1420c9740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t arg_10 = arg2
void* rax = sub_1423de540(data_143f5b298, arg1, 1)

if (rax == 0)
    return 

void* rbx_1 = *(rax + 0x188)
void* rbx_2

if (rbx_1 == 0)
    rbx_2 = *(rax + 0x300)
else
    rbx_2 = *(rbx_1 + 0xc0)

if (sub_1423dce10(rbx_2, &arg_10) != 0)
    sub_1423e60e0(rbx_2, arg_10)
