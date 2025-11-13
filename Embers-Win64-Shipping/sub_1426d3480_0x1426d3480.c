// 函数: sub_1426d3480
// 地址: 0x1426d3480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426ae270(arg1, arg2, arg3, arg4, arg5)
void* rbp = *(arg2 + 0xb8)
int32_t r14 = 0
int16_t* rbx_1 = nullptr
int64_t var_38

if (rbp != 0)
    int64_t* rax_2 = sub_1426ad380(rbp, &var_38, arg1[0x11].b, 0)
    void var_28
    
    if (&var_28 != rax_2)
        rbx_1 = *rax_2
        *rax_2 = 0
        r14 = rax_2[1].d
        rax_2[1] = 0
    
    int64_t rcx_1 = var_38
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    sub_1426d5230(arg1, rbp)

int16_t* const r8_1 = &data_142d40450

if (r14 != 0)
    r8_1 = rbx_1

sub_140a2e390(&var_38, u"value: %s (%s)", r8_1)
int64_t rsi_1 = sx.q(arg5[1].d)
int32_t rax_3 = (rsi_1 + 1).d
arg5[1].d = rax_3

if (rax_3 s> *(arg5 + 0xc))
    sub_1405a4f90(arg5)

int64_t* rdx_5 = (rsi_1 << 4) + *arg5
*rdx_5 = 0
*rdx_5 = var_38
var_38 = 0
int32_t var_30
rdx_5[1].d = var_30
int32_t result_1
int32_t result = result_1
*(rdx_5 + 0xc) = result
int64_t rcx_5 = var_38
var_30.q = 0

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
