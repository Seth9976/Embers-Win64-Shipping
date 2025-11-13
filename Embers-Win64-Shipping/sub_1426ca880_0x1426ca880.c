// 函数: sub_1426ca880
// 地址: 0x1426ca880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x8d] = &data_143258940
sub_140596d80(&arg1[0x90])
sub_140596d80(&arg1[0x8e])
int32_t i_1 = arg1[0x83].d
void* rcx_2 = arg1[0x82]

if (i_1 != 0)
    void* rbx_1 = rcx_2 + 0x58
    int32_t i
    
    do
        *(rbx_1 - 8) = &data_143258940
        sub_140596d80(rbx_1 + 0x10)
        sub_140596d80(rbx_1)
        rbx_1 += 0xa0
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_2 = arg1[0x82]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x72] = &data_143258940
sub_140596d80(&arg1[0x75])
sub_140596d80(&arg1[0x73])
int64_t rcx_7 = arg1[0x70]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x6e]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x6c]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x6a]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[0x44] = &data_142d6b458
return sub_1405ae4b0(arg1) __tailcall
