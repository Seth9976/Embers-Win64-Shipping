// 函数: sub_1408de400
// 地址: 0x1408de400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e0f788
int32_t i_2 = arg1[0xe].d

if (i_2 != 0)
    void* rbx_1 = &arg1[0xd][2]
    int32_t i
    
    do
        sub_140bc0410(rbx_1)
        rbx_1 += 0x30
        i = i_2
        i_2 -= 1
    while (i != 1)

arg1[0xe].d = 0

if (*(arg1 + 0x74) != 0)
    sub_1405a5220(&arg1[0xd], 0)

arg1[0x10].d = 0

if (*(arg1 + 0x84) != 0)
    sub_1405c5660(&arg1[0xf], 0)

int64_t* rcx_3 = arg1[0x17]

if (rcx_3 != 0)
    rcx_3[9].d -= 1
    
    if (rcx_3[9].d == 1)
        sub_140a2f6e0(rcx_3)

sub_1419948a0(&arg1[0x13])
int64_t rcx_5 = arg1[0x11]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0xf]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int32_t i_3 = arg1[0xe].d
void* rcx_7 = arg1[0xd]

if (i_3 != 0)
    void* rbx_2 = rcx_7 + 0x10
    int32_t i_1
    
    do
        sub_140bc0410(rbx_2)
        rbx_2 += 0x30
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rcx_7 = arg1[0xd]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_1408db330(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
