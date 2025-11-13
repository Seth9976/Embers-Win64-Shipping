// 函数: sub_1406d9700
// 地址: 0x1406d9700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_78 = zx.o(0)
__builtin_memset(&var_78, 0, 0x5c)
int64_t var_68 = (zx.o(0)).q
int64_t var_58 = (zx.o(0)).q
int64_t var_48 = (zx.o(0)).q
int128_t var_2c
__builtin_memset(&var_2c:0xc, 0, 0x1c)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rsi = &var_78

if (rax_2 != 0)
    rsi = rax_2

int128_t var_88 = zx.o(0)
var_88.q = 0
var_88:8.q = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rdx_4 = &var_88

if (rax_4 != 0)
    rdx_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
int64_t* result = sub_1406d2c70(rsi, rdx_4)
int64_t rcx_3 = var_88.q

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = var_2c:0xc.q

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int32_t i_2
int32_t i_1 = i_2
void* var_38

if (i_1 != 0)
    void* rbx_2 = var_38 + 0xc8
    int32_t i
    
    do
        int64_t rcx_5 = *(rbx_2 + 0x30)
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *rbx_2
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(rbx_2 - 0x18)
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *(rbx_2 - 0x78)
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = *(rbx_2 - 0xa8)
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        int64_t rcx_10 = *(rbx_2 - 0xb8)
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = *(rbx_2 - 0xc8)
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
        
        rbx_2 += 0x178
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

int64_t rcx_16 = var_78.q

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
