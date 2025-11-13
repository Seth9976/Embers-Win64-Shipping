// 函数: sub_141062440
// 地址: 0x141062440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = sx.q(*(arg1 + 0x218))
int32_t r8 = *(arg2 + 0x84)
*(arg2 + 0x80) = 0
int32_t rdx = 0

if (r8 != i_2.d)
    sub_141068ea0(arg2, i_2.d)
    rdx = *(arg2 + 0x80)
    r8 = *(arg2 + 0x84)

int32_t result = rdx + i_2.d
*(arg2 + 0x80) = result

if (result s> r8)
    sub_14088f7f0(arg2)

int64_t i_1 = i_2

if (i_2.d s> 0)
    void* rdi = arg1 + 0x24
    void* rbx_1 = arg2 + 2
    int64_t i
    
    do
        *(rbx_1 - 2) = *(rdi + 4)
        *(rbx_1 - 1) = *(rdi + 8)
        uint64_t r9_1 = zx.q(*rdi)
        
        switch ((r9_1 - 2).d)
            case 0
                *rbx_1 = 4
            case 4
                *rbx_1 = 3
            case 8
                *rbx_1 = 0xd
            case 9
                *rbx_1 = 0x12
            case 0xa
                *rbx_1 = 0x10
            case 0xb
                *rbx_1 = 0xe
            case 0xc
                *rbx_1 = 0xa
            case 0xe
                *rbx_1 = 2
            case 0x16
                *rbx_1 = 0x13
            case 0x1a
                *rbx_1 = 7
            case 0x1c
                *rbx_1 = 6
            case 0x1d
                *rbx_1 = 5
            case 0x20
                *rbx_1 = 0xc
            case 0x21
                *rbx_1 = 0x11
            case 0x22
                *rbx_1 = 0xf
            case 0x23
                *rbx_1 = 0xb
            case 0x24
                *rbx_1 = 9
            case 0x27
                *rbx_1 = 1
            case 0x28
                *rbx_1 = 0x14
            case 0x55
                *rbx_1 = 8
            default
                sub_140af98a0("Unknown", 0xc1, u"Unknown D3D vertex element type %u", r9_1)
                sub_140afbb40()
        
        *(rbx_1 + 1) = *(rdi - 4)
        *(rbx_1 + 2) = *(arg1 + (zx.q(*(rdi + 4)) << 1) + 0x220)
        result.b = *(rdi + 0xc) == 1
        rdi += 0x20
        *(rbx_1 + 4) = result.w
        rbx_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
