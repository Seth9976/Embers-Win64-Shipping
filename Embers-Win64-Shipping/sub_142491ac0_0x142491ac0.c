// 函数: sub_142491ac0
// 地址: 0x142491ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_d8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:3 = *(arg2 + 0x20) == 0
int32_t arg_8 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int128_t zmm0 = data_143264930
int32_t var_b8 = var_b8 & 0xfffffff8
int128_t var_48 = zmm0
int64_t var_38 = 0
int64_t var_30 = 0
int64_t var_b4 = 0
int32_t var_4c = 0xffffffff
void var_ac
memset(&var_ac, 0, 0x88)
int32_t var_a4 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_b8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int32_t* rax_6 = *(arg2 + 0x38)
int32_t* rcx_6 = &var_b8
int512_t zmm3
zmm3.o = arg_10
int512_t zmm2
zmm2.o = arg_20

if (rax_6 != 0)
    rcx_6 = rax_6

int64_t var_c8 = var_d8
int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
int32_t var_e8 = arg_8.d
*(arg2 + 0x20) = rdi + rax_7
int32_t var_d0
int32_t var_c0 = var_d0
return (*(*arg1 + 0x8b8))(arg1, &var_c8, zmm2, zmm3, var_e8, rcx_6)
