// 函数: sub_1426ae270
// 地址: 0x1426ae270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 1 || (arg1[0xb].b & 8) == 0)
    return 

uint32_t rax_3 = zx.d((*(*arg1 + 0x298))())
void* const rbx_2

if (rax_3 == 0)
    rbx_2 = nullptr
else
    rbx_2 = arg3 - (zx.q(rax_3 + 3) & 0xfffffffffffffffc)

int16_t* var_18
int16_t** rax_4 = sub_140a31300(&var_18, _mm_cvtps_pd(*(rbx_2 + 4)), 1)
int16_t* r8

if (rax_4[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_4

int64_t var_28
sub_140a2e390(&var_28, u"next tick: %ss", r8)
int64_t rdi_1 = sx.q(arg5[1].d)
int32_t rax_5 = (rdi_1 + 1).d
arg5[1].d = rax_5

if (rax_5 s> *(arg5 + 0xc))
    sub_1405a4f90(arg5)

int64_t* rcx_7 = (rdi_1 << 4) + *arg5
*rcx_7 = 0
*rcx_7 = var_28
var_28 = 0
int32_t var_20
rcx_7[1].d = var_20
int32_t var_1c
*(rcx_7 + 0xc) = var_1c
int64_t rcx_8 = var_28
var_20.q = 0

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int16_t* rcx_9 = var_18

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)
