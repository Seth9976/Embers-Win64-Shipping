// 函数: sub_140a846c0
// 地址: 0x140a846c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg4[2]
int16_t* var_48
sub_140a2e390(&var_48, u"%s::%s", *arg4)
int16_t* const rcx_1 = &data_142d40450
int16_t* rdi = var_48
int16_t* var_38 = rdi
int32_t var_40

if (var_40 != 0)
    rcx_1 = rdi

var_48 = nullptr
int32_t var_30 = var_40
int32_t var_3c
int32_t var_2c = var_3c
var_40.q = 0
int32_t var_28 = sub_140a5ff80(rcx_1, 0)
int32_t arg_8
sub_140a738a0(&arg1[0xb], &arg_8, &var_38)
int64_t rax_3 = sx.q(arg_8)
void* const rax_5

if (rax_3.d == 0xffffffff)
    rax_5 = nullptr
else
    rax_5 = rax_3 * 0xd8 + arg1[0xb]

char* rdx_1 = rax_5 + 0x18

if (rax_5 == 0)
    rdx_1 = nullptr

int64_t* rbx

if (rdx_1 == 0)
    rbx.b = 1
else
    var_48 = *arg3
    int32_t var_40_1 = arg3[1].d
    var_48.o = var_48.o
    sub_140a68db0(arg1, rdx_1, arg2, &var_48, arg5, arg6)
    rbx.b = 0

if (rdi != 0)
    int64_t* rcx_4 = data_143ddb3f0
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x30))(rcx_4, rdi)
    else
        sub_140a750a0()
        int64_t* rcx_5 = data_143ddb3f0
        int64_t r8_4 = *rcx_5
        (*(r8_4 + 0x30))(rcx_5, rdi, r8_4)

return zx.q(rbx.b)
