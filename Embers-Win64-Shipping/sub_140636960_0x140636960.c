// 函数: sub_140636960
// 地址: 0x140636960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140b21590(&arg_8)
int64_t r10 = arg_8
*arg2 = (r10 s/ 0x2710 s% 0x3e8).d
*arg3 = (r10 s/ 0x989680 s% 0x3c).d
*arg4 = (r10 s/ 0x23c34600 s% 0x3c).d
*arg5 = sub_140b19fc0(&arg_8)
int64_t temp0 = divs.dp.q(sx.o(arg_8), 0x861c46800)
*arg6 = temp0.d - (temp0 s/ 0x18 * 0x18).d
*arg7 = sub_140b19270(&arg_8)
*arg8 = sub_140b1a320(&arg_8)
*arg9 = sub_140b1b790(&arg_8)
sub_140b29020(&arg_8, arg1)
int64_t var_38 = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 2)
int32_t r15 = var_30:4.d
int32_t rdi_1 = var_30.d + 2
var_30.d = rdi_1

if (rdi_1 s> r15)
    sub_140594770(&var_38)
    r15 = var_30:4.d
    rdi_1 = var_30.d

int64_t rbx_1 = var_38
sub_1405a7220(rbx_1, 2, U".", 2, 0x3f)
int32_t rdx_20 = *arg2
int64_t var_48 = 0
int32_t var_40 = 0
sub_140a20c40(&var_48, rdx_20)
int32_t rax_27
int64_t rdi_2

if (rdi_1 s> 1)
    int32_t rsi_2
    
    if (var_40 == 0)
        rsi_2 = 0
    else
        rsi_2 = var_40 - 1
    
    int32_t rax_28
    
    if (rdi_1 == 0)
        rax_28 = rdi_1 + 1
    
    if (rdi_1 != 0 || rsi_2 == 0)
        rax_28 = 0
    
    var_38 = rbx_1
    int32_t rdx_22 = rax_28 + rdi_1 + rsi_2
    var_30.d = rdi_1
    var_30:4.d = r15
    rbx_1 = 0
    
    if (rdx_22 s> r15)
        sub_1405947f0(&var_38, rdx_22)
    
    sub_140a20ba0(&var_38, var_48, rsi_2)
    rax_27 = var_30.d
    rdi_2 = var_38
    int64_t var_30_1 = 0
    var_38 = 0
else
    rdi_2 = var_48
    rax_27 = var_40
    var_48 = 0
    int64_t var_40_1 = 0

int32_t r8_11 = rax_27 - 1

if (rax_27 == 0)
    r8_11 = 0

sub_140a20ba0(arg1, rdi_2, r8_11)

if (rdi_2 != 0)
    sub_140a74f90(rdi_2)

int64_t rcx_25 = var_48

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return arg1
