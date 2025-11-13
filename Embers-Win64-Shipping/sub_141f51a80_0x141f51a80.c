// 函数: sub_141f51a80
// 地址: 0x141f51a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14327bb58
arg1[5] = &data_143012b40
arg1[0x3e] = &data_143012b70
int64_t rcx = arg1[0x8e]

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t i_1 = arg1[0x8d].d
void* rbx = arg1[0x8c]

if (i_1 != 0)
    int32_t i
    
    do
        sub_141f519f0(rbx)
        rbx += 0x90
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x8c]

if (rbx != 0)
    sub_140a74f90(rbx)

return sub_1408db3b0(arg1) __tailcall
