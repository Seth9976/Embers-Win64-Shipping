// 函数: sub_142763a20
// 地址: 0x142763a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t arg_18 = arg3
int64_t arg_10 = arg2
int64_t arg_8 = arg1
int32_t arg_50
int32_t rax = arg_50
int32_t rcx = rax
int32_t r8 = data_143b6d9e8
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax)

if (r8 s<= rax)
    rcx = r8

bool cond:1 = data_143b6d9e0 == 0
int32_t var_a0 = rcx
char rax_3

if (not(cond:1))
    rax_3 = sub_140b011d0()

int32_t var_a4
int32_t rcx_1

if (cond:1 || rax_3 == 0)
    rcx_1 = divs.dp.d(temp2:temp3, r8) + 1
    var_a4 = divs.dp.d(temp2:temp3, r8) + 1
else
    rcx_1 = data_143b6d9e4
    var_a4 = rcx_1

int32_t temp0_1 = divs.dp.d(sx.q(divs.dp.d(temp2:temp3, r8) + rcx_1), rcx_1)
bool var_a8 = temp0_1 s> 1
int32_t rax_7

if (arg_10 == 0 || data_143b6d9f4 == 0)
    rax_7.b = 0
else
    rax_7.b = 1

char var_a7 = rax_7.b
int32_t* var_88 = &arg_18
int32_t* var_80 = &arg_20
void arg_28
void* var_78 = &arg_28
void arg_30
void* var_70 = &arg_30
void arg_40
void* var_68 = &arg_40
void arg_48
void* var_60 = &arg_48
int64_t var_58 = arg5
int32_t* var_50 = &var_a0
bool* var_48 = &var_a8
int32_t* var_40 = &var_a4
int32_t* var_38 = &arg_50
char* var_30 = &var_a7
int64_t* var_28 = &arg_10
int64_t* var_20 = &arg_8

if (temp0_1 s<= 1)
    return sub_14274adb0(&var_88, 0)

int32_t r8_1

if (data_143b6d9e0 == 0 || temp0_1 s<= 1)
    r8_1 = 1
else
    r8_1 = 0

int64_t (* var_98)(int64_t* arg1, int32_t* arg2) = sub_14274cc60
int32_t** var_90 = &var_88
return sub_14077b750(temp0_1, &var_98, r8_1)
