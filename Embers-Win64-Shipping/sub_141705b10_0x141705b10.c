// 函数: sub_141705b10
// 地址: 0x141705b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x80)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x70)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int32_t i_1 = *(arg1 + 0x68)
int64_t* rbx = *(arg1 + 0x60)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x60)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_4 = *(arg1 + 0x10)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)
