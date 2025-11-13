// 函数: sub_1424fc950
// 地址: 0x1424fc950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rcx_2 = *(arg2 + 0x20)
float zmm1[0x4] = arg_20
int64_t rax_3
rax_3.b = rcx_2 != 0
bool cond:3 = zmm1[0] != 0f
*(arg2 + 0x20) = rax_3 + rcx_2

if (cond:3)
    int64_t rax_7
    int32_t zmm0_1
    rax_7, zmm0_1 = sub_1420c1ca0(arg_10, zmm1)
    *arg3 = zmm0_1
    return rax_7

int64_t var_30
int64_t* rax_5
int32_t zmm6
rax_5, zmm6 = sub_140d22270(arg2, &var_30)
int16_t* const rbx_1 = &data_142d40450

if (rax_5[1].d != 0)
    *rax_5

int16_t* var_40
sub_140a2e390(&var_40, u"Modulo by zero detected: %f %% 0\n%s", _mm_cvtps_pd(arg_10))
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
