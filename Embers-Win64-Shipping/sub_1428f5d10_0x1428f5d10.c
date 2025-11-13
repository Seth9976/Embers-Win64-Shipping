// 函数: sub_1428f5d10
// 地址: 0x1428f5d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = 0

if (sub_142890300(arg1) != 0)
    return sub_1428a6ba0(&(*U""\tv 0")[4]) __tailcall

char* result_1 = sub_1428a6730(sx.q(arg1[1].d << 4) + 2)
char* result = result_1

if (result_1 == 0)
    sub_1428a5670((&result_1[3]).d, (&result_1[0x69]).d, (&result_1[0x41]).d, 
        "crypto\bn\bn_print.c", 0x1e)
    return result

if (arg1[2].d != 0)
    *result_1 = 0x2d
    result_1 = &result_1[1]

int32_t rcx_4 = arg1[1].d
int64_t r8_4 = sx.q(rcx_4 - 1)

if (rcx_4 - 1 s>= 0)
    int64_t temp1_1
    
    do
        int64_t rcx_10 = *arg1
        uint64_t rdx_3 = zx.q(*(rcx_10 + (r8_4 << 3) + 7))
        
        if (rbx != 0 || rdx_3.b != 0)
            rbx = 1
            *result_1 = (*"0123456789ABCDEF")[rdx_3 u>> 4]
            result_1[1] = *((zx.q(rdx_3.d) & 0xf) + "0123456789ABCDEF")
            result_1 = &result_1[2]
            rcx_10 = *arg1
        
        char rdx_5 = (*(rcx_10 + (r8_4 << 3) + 6)).b
        
        if (rbx != 0 || rdx_5 != 0)
            uint32_t rdx_6 = zx.d(rdx_5)
            rbx = 1
            *result_1 = (*"0123456789ABCDEF")[zx.q(rdx_6) u>> 4]
            result_1[1] = *((zx.q(rdx_6) & 0xf) + "0123456789ABCDEF")
            result_1 = &result_1[2]
            rcx_10 = *arg1
        
        uint8_t rdx_9 = (*(rcx_10 + (r8_4 << 3)) u>> 0x28).b
        
        if (rbx != 0 || rdx_9 != 0)
            uint32_t rdx_10 = zx.d(rdx_9)
            rbx = 1
            *result_1 = (*"0123456789ABCDEF")[zx.q(rdx_10) u>> 4]
            result_1[1] = *((zx.q(rdx_10) & 0xf) + "0123456789ABCDEF")
            result_1 = &result_1[2]
            rcx_10 = *arg1
        
        uint8_t rdx_13 = (*(rcx_10 + (r8_4 << 3)) u>> 0x20).b
        
        if (rbx != 0 || rdx_13 != 0)
            uint32_t rdx_14 = zx.d(rdx_13)
            rbx = 1
            *result_1 = (*"0123456789ABCDEF")[zx.q(rdx_14) u>> 4]
            result_1[1] = *((zx.q(rdx_14) & 0xf) + "0123456789ABCDEF")
            result_1 = &result_1[2]
            rcx_10 = *arg1
        
        uint8_t rdx_17 = (*(rcx_10 + (r8_4 << 3)) u>> 0x18).b
        
        if (rbx != 0 || rdx_17 != 0)
            uint32_t rdx_18 = zx.d(rdx_17)
            rbx = 1
            *result_1 = (*"0123456789ABCDEF")[zx.q(rdx_18) u>> 4]
            result_1[1] = *((zx.q(rdx_18) & 0xf) + "0123456789ABCDEF")
            result_1 = &result_1[2]
            rcx_10 = *arg1
        
        uint8_t rdx_21 = (*(rcx_10 + (r8_4 << 3)) u>> 0x10).b
        
        if (rbx != 0 || rdx_21 != 0)
            uint32_t rdx_22 = zx.d(rdx_21)
            rbx = 1
            *result_1 = (*"0123456789ABCDEF")[zx.q(rdx_22) u>> 4]
            result_1[1] = *((zx.q(rdx_22) & 0xf) + "0123456789ABCDEF")
            result_1 = &result_1[2]
            rcx_10 = *arg1
        
        uint8_t rdx_25 = (*(rcx_10 + (r8_4 << 3)) u>> 8).b
        
        if (rbx != 0 || rdx_25 != 0)
            uint32_t rdx_26 = zx.d(rdx_25)
            rbx = 1
            *result_1 = (*"0123456789ABCDEF")[zx.q(rdx_26) u>> 4]
            result_1[1] = *((zx.q(rdx_26) & 0xf) + "0123456789ABCDEF")
            result_1 = &result_1[2]
            rcx_10 = *arg1
        
        char rdx_28 = (*(rcx_10 + (r8_4 << 3))).b
        
        if (rbx != 0 || rdx_28 != 0)
            uint32_t rdx_29 = zx.d(rdx_28)
            rbx = 1
            *result_1 = (*"0123456789ABCDEF")[zx.q(rdx_29) u>> 4]
            result_1[1] = *((zx.q(rdx_29) & 0xf) + "0123456789ABCDEF")
            result_1 = &result_1[2]
        
        temp1_1 = r8_4
        r8_4 -= 1
    while (temp1_1 - 1 s>= 0)

*result_1 = 0
return result
