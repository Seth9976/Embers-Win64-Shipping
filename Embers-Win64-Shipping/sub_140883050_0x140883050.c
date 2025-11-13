// 函数: sub_140883050
// 地址: 0x140883050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ddadd8
int64_t rcx = arg1[0x2c]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x2a]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140a1d5c0(&arg1[0x26])
void* rbx = arg1[0x21]

if ((rbx.b & 1) != 0)
    rbx = (rbx s>> 1) + &arg1[0x21]

int32_t i_4 = arg1[0x22].d

if (i_4 != 0)
    int32_t i
    
    do
        sub_140a1d5c0(rbx)
        rbx += 0x10
        i = i_4
        i_4 -= 1
    while (i != 1)

sub_140a1d5c0(&arg1[0x21])
int64_t rcx_5 = arg1[0x18]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int32_t i_5 = arg1[0x16].d
int64_t* rbx_2 = arg1[0x15]

if (i_5 != 0)
    int32_t i_1
    
    do
        int64_t rcx_6 = *rbx_2
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    rbx_2 = arg1[0x15]

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int64_t rcx_8 = arg1[0x11]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int32_t i_6 = arg1[0xf].d
int64_t* rbx_3 = arg1[0xe]

if (i_6 != 0)
    int32_t i_2
    
    do
        int64_t rcx_9 = *rbx_3
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx_3 = &rbx_3[2]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)
    rbx_3 = arg1[0xe]

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t result = sub_140846240(&arg1[0xa])
void* rcx_12 = arg1[8]

if (rcx_12 != 0)
    result = sub_1408883d0(rcx_12)

int32_t i_7 = arg1[7].d
int64_t* rbx_4 = arg1[6]

if (i_7 != 0)
    int32_t i_3
    
    do
        int64_t rcx_13 = *rbx_4
        
        if (rcx_13 != 0)
            result = sub_140a74f90(rcx_13)
        
        rbx_4 = &rbx_4[2]
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)
    rbx_4 = arg1[6]

if (rbx_4 != 0)
    result = sub_140a74f90(rbx_4)

int64_t rcx_15 = arg1[3]

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[1]

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
