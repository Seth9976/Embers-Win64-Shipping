// 函数: sub_141822ac0
// 地址: 0x141822ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x40)
int64_t* rbx = *(arg1 + 0x38)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x38)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_2 = *(arg1 + 0x28)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x18)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 8)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)
