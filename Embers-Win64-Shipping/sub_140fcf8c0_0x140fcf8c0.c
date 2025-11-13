// 函数: sub_140fcf8c0
// 地址: 0x140fcf8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_38
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(data_1439c7a08)]), &var_38, 
    &data_143f15100, 0)
void* r15 = var_38
void* r14 = nullptr

if (r15 != 0)
    int64_t rdx_1 = sx.q(*(r15 + 0x10c))
    void* var_30
    int64_t* rbx_1 = *(var_30 + 0x10)
    int64_t* r14_1 = rbx_1[3]
    
    if (r14_1[rdx_1] == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        r14_1 = rbx_1[3]
    
    r14 = r14_1[rdx_1]

void* arg_8 = r14
*(arg1 + 0x1b0) = r14
sub_14198aa60(r14)
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
rcx_6[2] = r14
sub_14077c870(arg1, &arg_8, r15 + 0x118, arg5, 0)
void* var_48 = nullptr
int64_t var_40 = 0
sub_14077c870(arg1, &arg_8, r15 + 0x11e, &var_48, 0)
int32_t arg_28
int32_t rbx_2 = arg_28
var_48.d = arg3
var_40:4.d = 0
var_48:4.d = arg4
var_40.d = rbx_2
sub_14077c870(arg1, &arg_8, r15 + 0x124, &var_48, 0)
arg_28.b = 1
void* arg_38
void* r15_1 = arg_38
arg_8 = r14
var_48 = r15 + 0x130
(*r15_1)(*(r15_1 + 8), &arg_8, r15 + 0x130, &arg_28)
void*** rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_7 = &rcx_16[4]

if (rax_7 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_7 = &rcx_16[4]

*(arg1 + 0x30) = rax_7
void**** rax_8 = *(arg1 + 8)
*(arg1 + 0x14) += 1
void* r8_4 = var_48
arg_28.b = 0
*rax_8 = rcx_16
*(arg1 + 8) = &rcx_16[1]
rcx_16[1] = 0
*rcx_16 = &data_142ef57a8
rcx_16[2].d = (arg3 + 3) u>> 2
*(rcx_16 + 0x14) = (arg4 + 3) u>> 2
rcx_16[3].d = (rbx_2 + 3) u>> 2
int64_t rcx_20 = *(r15_1 + 8)
arg_38 = r14
return (*r15_1)(rcx_20, &arg_38, r8_4, &arg_28)
