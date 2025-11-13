// 函数: sub_141ddfa40
// 地址: 0x141ddfa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x13]
int32_t i_3 = arg1[0x14].d

if (i_3 != 0)
    void* rbx_1 = rcx + 0x18
    int32_t i
    
    do
        int64_t rcx_1 = *(rbx_1 + 0x70)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_140623ed0(rbx_1)
        rbx_1 += 0x98
        i = i_3
        i_3 -= 1
    while (i != 1)
    rcx = arg1[0x13]

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t i_2 = arg1[0x11].d
void* rcx_3 = arg1[0x10]

if (i_2 != 0)
    int32_t i_1
    
    do
        *(rcx_3 + 0x60) = &data_142e0b890
        *rcx_3 = &data_142e0b890
        rcx_3 += 0xb8
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rcx_3 = arg1[0x10]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xe]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xc]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[6] = &data_14323d4c8
arg1[5] = &data_142d44da8
return sub_140d163b0(arg1) __tailcall
