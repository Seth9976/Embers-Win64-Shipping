// 函数: sub_141f536b0
// 地址: 0x141f536b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t i_2 = arg1[0x82].d
int32_t i = i_2

if (i_2 s> 0)
    do
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(i)
        int32_t i_1 = (temp2_1 - temp1_1) s>> 1
        int32_t r8 = i_1 + rdi
        
        if ((*arg2).d f< *(sx.q(r8) * 0x2c + arg1[0x81]))
            i = i_1
        else
            rdi = r8 + 1
            i += 0xffffffff - i_1
    while (i s> 0)

uint32_t rcx_2 = zx.d(arg2[8].b)

if (rcx_2 == 0)
    rcx_2.b = 0
else if (rcx_2 == 1)
    rcx_2.b = 1
else if (rcx_2 == 2)
    rcx_2.b = 2
else if (rcx_2 == 3)
    rcx_2.b = 5
else if (rcx_2 == 4)
    rcx_2.b = 3
else
    rcx_2.b = 6

uint128_t zmm1 = zx.o(*(arg2 + 4))
int32_t var_6c = *(arg2 + 0xc)
int32_t var_60 = arg2[3].d
int32_t rax_6 = *(arg2 + 0x24)
int32_t var_78 = (*arg2).d
int32_t var_54 = rax_6
int64_t var_68 = arg2[2]
int64_t zmm0 = *(arg2 + 0x1c)
uint64_t var_74 = zmm1.q
char var_50 = rcx_2.b
arg1[0x82].d = i_2 + 1

if (i_2 + 1 s> *(arg1 + 0x414))
    sub_140ac0cd0(&arg1[0x81])

int128_t* r15 = sx.q(rdi) * 0x2c
void* rdx_4 = arg1[0x81] + r15
memmove(rdx_4 + 0x2c, rdx_4, (i_2 - rdi) * 0x2c)
int64_t rcx_5 = arg1[0x81]
*(r15 + rcx_5) = var_78.o
*(r15 + rcx_5 + 0x10) = var_68.o
*(r15 + rcx_5 + 0x20) = zmm0
*(r15 + rcx_5 + 0x28) = var_50.d
float var_88[0x4]
float (* rax_11)[0x4] = sub_140ade170(&arg2[5], &var_88)
var_78 = (*arg2).d
int128_t zmm0_2 = data_14399f720
var_68.o = *rax_11
int64_t var_5c
var_5c:4.o = zmm0_2
int128_t var_48 = zmm0_2
char var_38 = 1
sub_141f6c3b0(&arg1[0x84], &var_78, rdi)
int32_t r13_1 = arg1[0x88].d
uint128_t zmm1_2 = zx.o(*(arg2 + 0x34))
int32_t var_6c_1 = *(arg2 + 0x3c)
int32_t rax_13 = data_143dbb200
int32_t var_60_1 = rax_13
int32_t var_54_1 = rax_13
var_78 = (*arg2).d
int64_t zmm0_3 = data_143dbb1f8.q
uint64_t var_74_1 = zmm1_2.q
char var_50_1 = 1
arg1[0x88].d = r13_1 + 1

if (r13_1 + 1 s> *(arg1 + 0x444))
    sub_140ac0cd0(&arg1[0x87])

void* rdx_9 = arg1[0x87] + r15
memmove(rdx_9 + 0x2c, rdx_9, (r13_1 - rdi) * 0x2c)
int128_t* rcx_10 = arg1[0x87]
*(rcx_10 + r15) = var_78.o
*(rcx_10 + r15 + 0x10) = zmm0_3.o
*(rcx_10 + r15 + 0x20) = zmm0_3
*(rcx_10 + r15 + 0x28) = var_50_1.d
int64_t* result = (*(*arg1 + 0x868))(arg1)

if (result != 0)
    result = (*(*result + 0x270))(result, *arg2)

if (*(arg1 + 0x4e2) != 0)
    result = arg1[0x81]
    
    if (not((*(sx.q(arg1[0x82].d) * 0x2c + result - 0x2c)).d f< *(arg1 + 0x4e4)))
        *(arg1 + 0x4e2) = 0

if (arg3 == 0)
    return result

return sub_141f77550(arg1)
