// 函数: sub_140b78da0
// 地址: 0x140b78da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x130)
int64_t* rbx = *(arg1 + 0x128)

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x128)

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_3 = *(arg1 + 0x120)
int64_t* rbx_1 = *(arg1 + 0x118)

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = *(arg1 + 0x118)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

*(arg1 + 0x108) = 0
int64_t rcx_4 = *(arg1 + 0x100)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140b7c310(arg1 + 0xc0, 0)
int64_t rcx_6 = *(arg1 + 0xe0)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0xc0)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

*(arg1 + 0xb8) = 0
int64_t rcx_8 = *(arg1 + 0xb0)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140b7c310(arg1 + 0x70, 0)
int64_t rcx_10 = *(arg1 + 0x90)

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = *(arg1 + 0x70)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = *(arg1 + 0x58)

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_140b786a0(arg1 + 0x48)
int64_t result = sub_140b78470(arg1 + 0x38)
int64_t rcx_15 = *(arg1 + 0x28)

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int64_t rcx_16 = *(arg1 + 0x18)

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t rcx_17 = *(arg1 + 8)

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
