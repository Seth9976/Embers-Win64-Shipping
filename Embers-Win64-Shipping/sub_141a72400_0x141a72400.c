// 函数: sub_141a72400
// 地址: 0x141a72400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[0x19].d = 0
int64_t rcx = arg2[0x18]

if (rcx != 0)
    sub_140a74f90(rcx)

arg2[0x11].d = 0

if (*(arg2 + 0x8c) != 0)
    sub_140638cc0(&arg2[0x10], 0)

arg2[0x16].d = 0xffffffff
*(arg2 + 0xb4) = 0
sub_14059a8e0(&arg2[0x12], 0)
int64_t rcx_3 = arg2[0x14]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg2[0x10]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t i_1 = arg2[0xb].d
int64_t* rbx_1 = arg2[0xa]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_5 = *rbx_1
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = arg2[0xa]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

arg2[9].d = 0
int64_t rcx_7 = arg2[8]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t result = sub_140aeeb60(arg2, 0)
int64_t rcx_9 = arg2[4]

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = *arg2

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
