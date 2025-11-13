// 函数: sub_1408abda0
// 地址: 0x1408abda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
char var_97 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_97, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_97)

int32_t var_80 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_80, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int32_t var_84 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_84, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_84)

char var_98 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_98, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

char arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_88, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int32_t var_8c = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_8c, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_8c)

int32_t var_90 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_90, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int32_t var_94 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_94, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_94)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &arg_10, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_21 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_21[4]
    sub_140d30490(arg2, &arg_8, r8_21)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_12 = *(arg2 + 0x20)
char rdx_22 = var_97
char r15 = arg_8
uint32_t r12 = zx.d(arg_10)
int64_t rcx_11
rcx_11.b = rax_12 != 0
int128_t zmm7 = var_94
int128_t zmm8 = var_90
int128_t zmm9 = var_8c
int32_t r13 = var_88
uint32_t r14 = zx.d(arg_20)
int128_t zmm6 = var_84
*(arg2 + 0x20) = rcx_11 + rax_12
uint32_t rbx_1 = zx.d(var_98)
sub_1408ab110(arg1, rdx_22)
sub_1408a2600(arg1 + 0x28, var_80)
*(arg1 + 0x42c) = zmm6.d

if (rbx_1.b == 0)
    *(arg1 + 0x430) = 0
else if (rbx_1 == 1)
    *(arg1 + 0x430) = 1
else
    *(arg1 + 0x430) = 2

if (r14.b == 0)
    *(arg1 + 0x444) = 0
else if (r14 == 1)
    *(arg1 + 0x444) = 1
else if (r14 != 2)
    *(arg1 + 0x444) = 0
else
    *(arg1 + 0x444) = 2

*(arg1 + 0x438) = r13
sub_1408a2170(arg1 + 0x28)
*(arg1 + 0x43c) = zmm9.d
*(arg1 + 0x440) = zmm8.d
sub_1408a2170(arg1 + 0x28)
*(arg1 + 0x468) = zmm7.d

if (r12.b == 0)
    *(arg1 + 0x44c) = 0
else if (r12 == 1)
    *(arg1 + 0x44c) = 1
else if (r12 != 2)
    *(arg1 + 0x44c) = 0
else
    *(arg1 + 0x44c) = 2

uint64_t result = sub_1408ab1d0(arg1, r15)
*(arg1 + 0x470) = 1
return result
