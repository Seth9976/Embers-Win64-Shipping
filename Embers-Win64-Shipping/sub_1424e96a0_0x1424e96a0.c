// 函数: sub_1424e96a0
// 地址: 0x1424e96a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
float arg_10 = 0f

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = *(arg2 + 0x20) == 0
float arg_20 = 0f

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rcx_2 = *(arg2 + 0x20)
float zmm1 = arg_20
int64_t rax_3
rax_3.b = rcx_2 != 0
int64_t rax_4 = rax_3 + rcx_2
*(arg2 + 0x20) = rax_4

if (zmm1 != 0f)
    *arg3 = arg_10 / zmm1
    return rax_4

int64_t var_30
int64_t* rax_5
float zmm6
rax_5, zmm6 = sub_140d22270(arg2, &var_30)
int16_t* const rbx_1 = &data_142d40450

if (rax_5[1].d != 0)
    *rax_5

int16_t* var_40
sub_140a2e390(&var_40, u"Divide by zero detected: %f / 0\n%s", _mm_cvtps_pd(arg_10))
int32_t var_38

if (var_38 != 0)
    rbx_1 = var_40

int64_t rax_6 = sub_140d23f50(rbx_1, 3)
int16_t* rcx_6 = var_40

if (rcx_6 != 0)
    rax_6 = sub_140a74f90(rcx_6)

int64_t rcx_7 = var_30

if (rcx_7 != 0)
    rax_6 = sub_140a74f90(rcx_7)

*arg3 = zmm6
return rax_6
