// 函数: sub_14248bd10
// 地址: 0x14248bd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_108 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_108, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_108)

void** var_78
sub_141ff42b0(&var_78)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = arg_20 != 0
int32_t var_10c = 0
int64_t r15
r15.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_10c, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_10c)

int64_t var_e0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_e0, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e0)

int64_t var_f0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_f0, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_f0)

int32_t var_110 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_110, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_110)

int64_t var_f8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_f8, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_f8)

int64_t var_100 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_100, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_100)

int32_t var_118 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &var_118, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_118)

bool cond:3 = var_118 != 0
int32_t var_114 = 0
int64_t r14
r14.b = cond:3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_21 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_21[4]
    sub_140d30490(arg2, &var_114, r8_21)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_114)

bool cond:4 = var_114 != 0
char arg_10 = 0
int64_t rsi
rsi.b = cond:4
int64_t rdx_23

if (*(arg2 + 0x20) == 0)
    int64_t* r8_23 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_23[4]
    rdx_23 = sub_140d30490(arg2, &arg_10, r8_23)
else
    rdx_23 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_13 = *(arg2 + 0x20)
int32_t i_6
int32_t i_2 = i_6
int64_t rcx_13
rcx_13.b = rax_13 != 0
int64_t var_98 = var_f0
int64_t zmm0 = var_e0
int32_t var_e8
int32_t var_90 = var_e8
int32_t var_d8
int32_t var_80 = var_d8
*(arg2 + 0x20) = rcx_13 + rax_13
int64_t* var_70
int64_t* rbx_1 = var_70
void** var_d0 = &data_143258940
int64_t var_88 = zmm0
uint64_t var_c8 = 0
int32_t i_4 = i_2

if (i_2 != 0)
    rdx_23 = sub_1405a4be0(&var_c8, i_2, 0)
    uint64_t rcx_16 = var_c8
    int32_t i
    
    do
        *rcx_16 = *rbx_1
        void* rax_17 = rbx_1[1]
        *(rcx_16 + 8) = rax_17
        
        if (rax_17 != 0)
            *(rax_17 + 8) += 1
        
        rcx_16 += 0x10
        rbx_1 = &rbx_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    int32_t var_bc_1 = 0

int32_t i_7
int32_t i_3 = i_7
int64_t* var_60
int64_t* rbx_2 = var_60
uint64_t var_b8 = 0
int32_t i_5 = i_3

if (i_3 != 0)
    rdx_23 = sub_1405a4be0(&var_b8, i_3, 0)
    uint64_t rcx_18 = var_b8
    int32_t i_1
    
    do
        *rcx_18 = *rbx_2
        void* rax_19 = rbx_2[1]
        *(rcx_18 + 8) = rax_19
        
        if (rax_19 != 0)
            *(rax_19 + 8) += 1
        
        rcx_18 += 0x10
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
else
    int32_t var_ac_1 = 0

int512_t zmm1
zmm1.o = var_108
int64_t var_4c
int64_t var_a4 = var_4c
char var_4f
char var_a7 = var_4f
int32_t var_44
int32_t var_9c = var_44
char var_a8
char var_50
char var_a8_1 = var_a8 ^ ((var_a8 ^ var_50) & 0xf)
sub_141e97e40(arg1, rdx_23, &var_d0, r15.b, var_10c.d, &var_88, &var_98, var_110.d, var_f8, 
    var_100, r14.b, rsi.b, arg_10)
var_78 = &data_143258940
sub_140596d80(&var_60)
return sub_140596d80(&var_70)
