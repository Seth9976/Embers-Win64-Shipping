// 函数: sub_141ab53c0
// 地址: 0x141ab53c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[3].d)
int32_t rax_1 = (*(*arg1 + 0xd0))()
int64_t r9 = *arg1
int64_t rbx = sx.q(rax_1)
int64_t var_28
(*(r9 + 0xd8))(arg1, &var_28, arg2, r9)
int64_t rcx_2 = arg1[0xb]
float zmm2[0x2] = _mm_cvtps_pd(*(arg1[4] + (rbx << 2)))
float zmm0[0x2] = *(rcx_2 + (rbx << 2))
zmm0[0] = zmm0[0] * 100f
float var_40[0x2] = zmm2
int64_t var_48 = _mm_cvtps_pd(zmm0)
int64_t var_38
sub_140a2e390(&var_38, u"(Active: (%i/%i) Weight: %.1f%% Time %.3f)", zx.q((rbx + 1).d))
int32_t var_30
int32_t r8_3

if (var_30 == 0)
    r8_3 = 0
else
    r8_3 = var_30 - 1

sub_140a20ba0(&var_28, var_38, r8_3)
int64_t rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rdi = var_28
var_38 = 0
int32_t var_20
int32_t var_30_1 = var_20

if (var_20 != 0)
    sub_1405a4c70(&var_38, var_20, 0)
    memcpy(var_38, rdi, var_20 * 2)
else
    int32_t var_2c_1 = 0

int64_t result = sub_141e14220(arg2, &var_38, 0)
int32_t rsi = 0

if (rbp s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t rax_2 = arg1[0xb]
        int64_t rbx_2 = arg1[2]
        var_38 = 0
        var_30_1.q = 0
        result = sub_141e21d10((sx.q(rsi) << 4) + rbx_2, 
            UnDecorator::getTemplateArgumentList(arg2, *(rax_2 + (rdi_1 << 2)), &var_38))
        rsi += 1
        rdi_1 += 1
    while (rdi_1 s< rbp)

int64_t rcx_13 = var_28

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
