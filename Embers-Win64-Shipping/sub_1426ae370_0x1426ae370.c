// 函数: sub_1426ae370
// 地址: 0x1426ae370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 1)
    return 

int64_t var_18
sub_140a2e390(&var_18, u"current child: %d", zx.q(sx.d(*arg3)))
int64_t rdi_1 = sx.q(arg5[1].d)
int32_t rax_1 = (rdi_1 + 1).d
arg5[1].d = rax_1

if (rax_1 s> *(arg5 + 0xc))
    sub_1405a4f90(arg5)

int64_t* rcx_4 = (rdi_1 << 4) + *arg5
*rcx_4 = 0
*rcx_4 = var_18
var_18 = 0
int32_t var_10
rcx_4[1].d = var_10
int32_t var_c
*(rcx_4 + 0xc) = var_c
int64_t rcx_5 = var_18
var_10.q = 0

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140a2e390(&var_18, u"override child: %d", zx.q(sx.d(arg3[1])))
int64_t rdi_2 = sx.q(arg5[1].d)
int32_t rax_5 = (rdi_2 + 1).d
arg5[1].d = rax_5

if (rax_5 s> *(arg5 + 0xc))
    sub_1405a4f90(arg5)

int64_t* rcx_10 = (rdi_2 << 4) + *arg5
*rcx_10 = 0
*rcx_10 = var_18
var_18 = 0
rcx_10[1].d = var_10
*(rcx_10 + 0xc) = var_c
int64_t rcx_11 = var_18
var_10.q = 0

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)
