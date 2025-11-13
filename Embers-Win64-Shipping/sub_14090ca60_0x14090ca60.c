// 函数: sub_14090ca60
// 地址: 0x14090ca60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t rax_1 = __security_cookie ^ &var_28
*arg3 = 0
*arg2 = 0
*arg1 = 0
int64_t var_20 = 0
int32_t temp0
int32_t temp1
int32_t temp2
int32_t temp3
temp0, temp1, temp2, temp3 = __cpuid(2, 0)
var_28 = 0
var_28:4.d = temp1
int32_t rbx
rbx.b = 0
var_20:4.d = temp3
int64_t i = 0
var_28.d = temp0
var_20.d = temp2

do
    switch (zx.d(*(&var_28:2 + i)) - 0xa)
        case 0, 0x5c
            *arg1 = 8
        case 2, 6, 0xb, 0x56, 0x5d
            *arg1 = 0x10
        case 4
            *arg1 = 0x18
        case 0x10
            *arg2 = 0x60
        case 0x18
            *arg3 = 0x200
        case 0x19
            *arg3 = 0x400
        case 0x1b, 0x7e
            *arg3 = 0x800
        case 0x1f, 0x3c, 0x7f
            *arg3 = 0x1000
        case 0x22, 0x26, 0x5e
            *arg1 = 0x20
        case 0x2f, 0x31, 0x37, 0x6f, 0x77
            *arg2 = 0x80
        case 0x30
            *arg2 = 0xc0
        case 0x32, 0x38, 0x70, 0x74, 0x78
            *arg2 = 0x100
        case 0x33
            *arg2 = 0x180
        case 0x34, 0x39, 0x71, 0x75, 0x76, 0x79, 0x7c
            *arg2 = 0x200
        case 0x36
            *arg2 = 0
        case 0x3a, 0x6e, 0x72, 0x7a, 0x7d
            *arg2 = 0x400
        case 0x3b, 0x73, 0x7b
            *arg2 = 0x800
        case 0x3d, 0x41, 0x80
            *arg3 = 0x2000
        case 0x3e
            *arg2 = 0xc00
        case 0x3f
            if (*arg2 == 0)
                rbx.b = 1
                *arg2 = 0x1000
            
            *arg3 = 0x1000
        case 0x40
            *arg3 = 0x1800
        case 0x42
            *arg3 = 0x3000
        case 0x43
            *arg3 = 0x4000
        case 0x44
            *arg2 = 0x1800
        case 0x83
            *arg3 = 0xc00
    
    i += 1
while (i s< 0xe)

if (rbx.b != 0 && *arg2 == *arg3)
    *arg3 = 0

*arg1 <<= 0xa
*arg2 <<= 0xa
int32_t result = *arg3 << 0xa
*arg3 = result
__security_check_cookie(rax_1 ^ &var_28)
return result
