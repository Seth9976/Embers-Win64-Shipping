// 函数: sub_140f9b810
// 地址: 0x140f9b810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x61]
int32_t i_3 = arg1[0x62].d

if (i_3 != 0)
    int64_t* rbx_1 = rcx + 8
    int32_t i
    
    do
        sub_140745b20(rbx_1)
        rbx_1 = &rbx_1[3]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rcx = arg1[0x61]

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t i_4 = arg1[0x60].d
void* rcx_2 = arg1[0x5f]

if (i_4 != 0)
    int64_t* rbx_2 = rcx_2 + 8
    int32_t i_1
    
    do
        sub_140745b20(rbx_2)
        rbx_2 = &rbx_2[3]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    rcx_2 = arg1[0x5f]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_4 = arg1[0x5c]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x5a]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int32_t i_5 = arg1[0x58].d
int64_t* rbx_3 = arg1[0x57]

if (i_5 != 0)
    int32_t i_2
    
    do
        int64_t* rcx_6 = *rbx_3
        
        if (rcx_6 != 0)
            (**rcx_6)(rcx_6, 1)
        
        rbx_3 = &rbx_3[1]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

arg1[0x58].d = 0

if (*(arg1 + 0x2c4) != 0)
    sub_140638c50(&arg1[0x57], 0)

int64_t rcx_8 = arg1[0x57]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

arg1[0x55] = &data_142d82a88
return sub_140de0ac0(arg1) __tailcall
