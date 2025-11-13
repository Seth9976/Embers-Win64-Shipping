// 函数: sub_14137aa20
// 地址: 0x14137aa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_14081d830(0x90, *(arg1 + 8), 1, 0)
int64_t* rsi = nullptr
int128_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    sub_14117af20(rax)

memset(rdi, 0, 0x90)
int64_t var_78 = *arg4
char var_70 = arg4[3].b
int16_t var_6f = 0
int32_t var_6c = 0xffffffff
*rdi = var_78.o
int128_t zmm1 = *arg4
int128_t zmm0 = *(arg4 + 0x10)
int64_t* var_30
sub_141384d70(&var_30, arg5)
void*** rax_3 = sub_14081d830(0x70, *(arg1 + 8), 1, 0)
void*** rbx_1 = rax_3
int32_t i_2
int32_t i_4

if (rax_3 == 0)
    i_2 = i_4
    rbx_1 = nullptr
    rsi = var_30
else
    void var_68
    var_78.o = *sub_1412ec240(&var_68, rdi)
    sub_141992bd0(rbx_1, arg2, &var_78, 1)
    i_2 = 0
    *rbx_1 = &data_142f6e240
    rbx_1[0xb] = arg3
    int64_t* rax_6 = var_30
    *(rbx_1 + 0x38) = zmm1
    *(rbx_1 + 0x48) = zmm0
    rbx_1[0xc] = rax_6
    rbx_1[0xd].d = i_4
    int32_t var_24
    *(rbx_1 + 0x6c) = var_24
int64_t result = sub_1419968d0(arg1, rbx_1)
int64_t* rbx_2 = rsi

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_6 = *rbx_2
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        rbx_2 = &rbx_2[3]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rsi != 0)
    result = sub_140a74f90(rsi)

int32_t i_3 = arg5[1].d
int64_t* rbx_3 = *arg5

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_8 = *rbx_3
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        rbx_3 = &rbx_3[3]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_3 = *arg5

if (rbx_3 == 0)
    return result

return sub_140a74f90(rbx_3)
