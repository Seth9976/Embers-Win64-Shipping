// 函数: sub_1406d83d0
// 地址: 0x1406d83d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_88 = zx.o(0)
var_88.q = 0
var_88:8.q = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int128_t zmm0 = zx.o(0)
int128_t var_78 = zmm0
__builtin_memset(&var_78, 0, 0x5c)
int64_t var_68 = zmm0.q
int64_t var_58 = zmm0.q
int64_t var_48 = zmm0.q
int128_t var_2c
__builtin_memset(&var_2c:0xc, 0, 0x1c)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int128_t* rax_3 = *(arg2 + 0x38)
int128_t* rsi = &var_78

if (rax_3 != 0)
    rsi = rax_3

int128_t var_98 = zx.o(0)
var_98.q = 0
var_98:8.q = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_98, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

*(arg2 + 0x38)
int64_t rax_6 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_6 != 0
*(arg2 + 0x20) = rbx + rax_6
uint64_t result = sub_1406d0b50(&var_88, rsi, arg3)
int64_t rcx_4 = var_98.q

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = var_2c:0xc.q

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int32_t i_2
int32_t i_1 = i_2
void* var_38

if (i_1 != 0)
    void* rbx_3 = var_38 + 0xc8
    int32_t i
    
    do
        int64_t rcx_6 = *(rbx_3 + 0x30)
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *rbx_3
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *(rbx_3 - 0x18)
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = *(rbx_3 - 0x78)
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        int64_t rcx_10 = *(rbx_3 - 0xa8)
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = *(rbx_3 - 0xb8)
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
        
        int64_t rcx_12 = *(rbx_3 - 0xc8)
        
        if (rcx_12 != 0)
            result = sub_140a74f90(rcx_12)
        
        rbx_3 += 0x178
        i = i_1
        i_1 -= 1
    while (i != 1)

if (var_38 != 0)
    result = sub_140a74f90(var_38)

if (var_48 != 0)
    result = sub_140a74f90(var_48)

if (var_58 != 0)
    result = sub_140a74f90(var_58)

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_17 = var_78.q

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t rcx_18 = var_88.q

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
