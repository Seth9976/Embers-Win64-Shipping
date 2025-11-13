// 函数: sub_14064f8e0
// 地址: 0x14064f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_6e = 0
int32_t var_6c
__builtin_memset(&var_6c, 0, 0x2c)
int16_t var_70 = arg3 & 0xfe00
void** const var_78 = &data_142d7f6a8
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void*** rax_2 = *(arg2 + 0x38)
void** const* rsi = &var_78
int64_t var_90 = 0
int128_t zmm0 = zx.o(0)

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_90, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

arg3.b = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg3, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg3)

int16_t* rax_5 = *(arg2 + 0x38)
int16_t* r13 = &arg3
char arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    r13 = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char* rax_7 = *(arg2 + 0x38)
char* r12 = &arg_20
char var_98 = 0
*(arg2 + 0x38) = 0

if (rax_7 != 0)
    r12 = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_98, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

char* rax_9 = *(arg2 + 0x38)
char* r15 = &var_98
char var_97 = 0
*(arg2 + 0x38) = 0

if (rax_9 != 0)
    r15 = rax_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_97, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_97)

char* rax_11 = *(arg2 + 0x38)
char* r14 = &var_97
char var_96 = 0
*(arg2 + 0x38) = 0

if (rax_11 != 0)
    r14 = rax_11

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_96, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_96)

char* rax_13 = *(arg2 + 0x38)
char* rcx_7 = &var_96
int64_t rdx_14 = var_90

if (rax_13 != 0)
    rcx_7 = rax_13

int64_t rax_14 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_14 != 0
*(arg2 + 0x20) = rdi + rax_14
int64_t* rbx_1 = zmm0:8.q

if (rbx_1 != 0)
    rbx_1[1].d += 1

rax_14.b = (rsi[1].b & 0xc) != 0
*r13 = rax_14.b
rax_14.b = (rsi[1].b & 0x30) != 0
*r15 = rax_14.b
rax_14.b = (rsi[1].b & 3) != 0
*r12 = rax_14.b
rax_14.b = (rsi[1].b & 0xc0) != 0
*r14 = rax_14.b
int64_t* rdi_2 = rsi[5]

if (rdi_2 != 0)
    rdi_2[1].d += 1

int64_t result
result.b = rsi[3] == rdx_14
*rcx_7 = result.b

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        result = (**rdi_2)(rdi_2)
        int32_t temp2_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rdi_2 + 8))(rdi_2, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = zmm0:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int128_t var_58
int64_t* rbx_3 = var_58:8.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp7_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
