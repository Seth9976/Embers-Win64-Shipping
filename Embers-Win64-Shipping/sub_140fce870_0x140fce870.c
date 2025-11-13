// 函数: sub_140fce870
// 地址: 0x140fce870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t r14 = arg3
void* var_48
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(data_1439c7a08)]), &var_48, 
    &data_143f16440, 0)
void* r15 = var_48
void* rsi = nullptr

if (r15 != 0)
    int64_t rdx_1 = sx.q(*(r15 + 0x10c))
    void* var_40
    int64_t* rbx_1 = *(var_40 + 0x10)
    int64_t* rsi_1 = rbx_1[3]
    
    if (rsi_1[rdx_1] == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rsi_1 = rbx_1[3]
    
    rsi = rsi_1[rdx_1]
    r14 = arg_18

void* arg_8 = rsi
*(arg1 + 0x1b0) = rsi
sub_14198aa60(rsi)
void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_6[3]

if (rax_3 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_6[3]

*(arg1 + 0x30) = rax_3
int64_t* rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_4 = rcx_6
*(arg1 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142dd5b40
rcx_6[2] = rsi
sub_14077c870(arg1, &arg_8, r15 + 0x118, arg5, 0)
void* var_58 = nullptr
int64_t var_50 = 0
sub_14077c870(arg1, &arg_8, r15 + 0x11e, &var_58, 0)
int32_t arg_28
int32_t r13 = arg_28
var_58.d = r14
var_50:4.d = 0
var_58:4.d = arg4
var_50.d = r13
sub_14077c870(arg1, &arg_8, r15 + 0x124, &var_58, 0)
void* arg_38
void* r14_2 = arg_38
arg_28.b = 1
arg_8 = rsi
var_58 = r15 + 0x130
(*r14_2)(*(r14_2 + 8), &arg_8, r15 + 0x130, &arg_28)
void*** rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
uint32_t r12_3 = (arg_18 + 7) u>> 3
void* rax_7 = &rcx_16[4]

if (rax_7 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_7 = &rcx_16[4]

*(arg1 + 0x30) = rax_7
void**** rax_8 = *(arg1 + 8)
*(arg1 + 0x14) += 1
void* r8_4 = var_58
arg_18.b = 0
*rax_8 = rcx_16
*(arg1 + 8) = &rcx_16[1]
rcx_16[1] = 0
*rcx_16 = &data_142ef57a8
rcx_16[2].d = r12_3
*(rcx_16 + 0x14) = (arg4 + 7) u>> 3
rcx_16[3].d = r13
int64_t rcx_20 = *(r14_2 + 8)
arg_38 = rsi
return (*r14_2)(rcx_20, &arg_38, r8_4, &arg_18)
