// 函数: sub_140611e90
// 地址: 0x140611e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = sx.d(arg2)
int32_t rcx = r8 - 0x20

if (r8 - 0x61 u> 0x19)
    rcx = r8

char const* const rdx
int64_t r8_1

if (rcx - 0x23 u> 0x33)
    r8_1 = 0
    rdx = &data_1437020ab
else
    switch (rcx)
        case 0x23, 0x26, 0x2b, 0x2d
            arg1[3] = 0xf
            *arg1 = 0
            arg1[2] = 3
            memmove(arg1, &data_142d63e3c, 3)
            *(arg1 + 3) = 0
            return arg1
        case 0x24, 0x25, 0x27, 0x28, 0x29, 0x2a, 0x2f, 0x3a, 0x3b, 0x3d, 0x3f, 0x40, 0x48, 0x49, 
                0x4a, 0x4b, 0x4d, 0x4e, 0x50, 0x51, 0x53, 0x55
            r8_1 = 0
            rdx = &data_1437020ab
        case 0x2c
            arg1[3] = 0xf
            *arg1 = 0
            arg1[2] = 3
            memmove(arg1, &data_142d63e40, 3)
            *(arg1 + 3) = 0
            return arg1
        case 0x2e
            r8_1 = 4
            rdx = "stop"
        case 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39
            arg1[3] = 0xf
            *arg1 = 0
            arg1[2] = 3
            memmove(arg1, &data_142d63e50, 3)
            *(arg1 + 3) = 0
            return arg1
        case 0x3c, 0x3e, 0x4f
            arg1[3] = 0xf
            *arg1 = 0
            arg1[2] = 3
            memmove(arg1, &data_142d63e4c, 3)
            *(arg1 + 3) = 0
            return arg1
        case 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47
            arg1[3] = 0xf
            arg1[2] = 1
            *arg1 = 0x6e
            return arg1
        case 0x4c
            arg1[3] = 0xf
            *arg1 = 0
            arg1[2] = 3
            memmove(arg1, &data_142d63e44, 3)
            *(arg1 + 3) = 0
            return arg1
        case 0x52
            arg1[3] = 0xf
            arg1[2] = 4
            __builtin_strncpy(arg1, "rest", 5)
            return arg1
        case 0x54
            arg1[3] = 0xf
            *arg1 = 0
            arg1[2] = 5
            memmove(arg1, "tempo", 5)
            *(arg1 + 5) = 0
            return arg1
        case 0x56
            arg1[3] = 0xf
            *arg1 = 0
            arg1[2] = 3
            memmove(arg1, &data_142d63e48, 3)
            *(arg1 + 3) = 0
            return arg1

arg1[2] = 0
arg1[3] = 0xf
*arg1 = 0
sub_14058ad40(arg1, rdx, r8_1)
return arg1
