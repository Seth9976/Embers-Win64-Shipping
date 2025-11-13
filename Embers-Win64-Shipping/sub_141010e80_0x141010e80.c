// 函数: sub_141010e80
// 地址: 0x141010e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[1] == 0
void** const rax = &data_142efce08
*arg1 = &data_142efce08

if (not(cond:0))
    int64_t i
    
    do
        void* rcx = arg1[1]
        i = *(rcx + 8)
        j_sub_140a74f90(rcx)
        arg1[1] = i
    while (i != 0)
    rax = *arg1

arg1[2] = 0
arg1[1] = 0
rax[1](arg1, 0)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
