// 函数: sub_140b0b470
// 地址: 0x140b0b470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x50]
int64_t* rbx = arg1

if (rcx != 0)
    rbx = rcx

int32_t i_1 = arg1[0x51].d

if (i_1 != 0)
    int32_t i
    
    do
        if (*(rbx + 0x21) == 0)
            sub_140a74f90(*rbx)
        
        rbx = &rbx[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = arg1[0x50]

if (rcx != 0)
    sub_140a74f90(rcx)
