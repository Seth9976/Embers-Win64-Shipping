// 函数: sub_141950600
// 地址: 0x141950600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t arg_18 = arg3
void* var_48
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(data_1439c7a08)]), &var_48, 
    &data_143f14a20, 0)
void* r13 = var_48
void* r14 = nullptr

if (r13 != 0)
    int64_t rdx_1 = sx.q(*(r13 + 0x10c))
    void* var_40
    int64_t* rbx_1 = *(var_40 + 0x10)
    int64_t* r14_1 = rbx_1[3]
    
    if (r14_1[rdx_1] == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        r14_1 = rbx_1[3]
    
    r14 = r14_1[rdx_1]

void* var_60 = r14
*(arg1 + 0x1b0) = r14
sub_14198aa60(r14)
void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_6[3]

if (rax_3 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_6[3]

*(arg1 + 0x30) = rax_3
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_6
*(arg1 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142dd5b40
rcx_6[2] = r14
uint64_t r15 = zx.q(*(r13 + 0x11c))

if (r15.d u>= 4)
    r15 = 4

void* arg_8

if (r15.d != 0)
    uint32_t rax_6 = zx.d(*(r13 + 0x11a))
    int64_t rsi_4 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
    arg_8.d = zx.d(*(r13 + 0x118))
    int64_t rax_8 = r15 + rsi_4
    
    if (rax_8 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, (r15 + 0x10).d)
        rsi_4 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_8 = r15 + rsi_4
    
    *(arg1 + 0x30) = rax_8
    memcpy(rsi_4, arg6, r15.d)
    void*** rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_14[6]
    
    if (rax_9 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_14[6]
    
    *(arg1 + 0x30) = rax_9
    void** rax_10 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_10 = rcx_14
    *(arg1 + 8) = &rcx_14[1]
    rcx_14[1] = 0
    *rcx_14 = &data_142d99550
    rcx_14[4].d = arg_8.d
    rcx_14[3] = rsi_4
    *(rcx_14 + 0x24) = rax_6
    rcx_14[2] = r14
    rcx_14[5].d = r15.d

int64_t var_58 = 0
int64_t var_50 = 0
sub_14077c870(arg1, &var_60, r13 + 0x11e, &var_58, 0)
int32_t r15_1 = arg_18
var_58:4.d = arg_20
var_58.d = r15_1
var_50.d = arg5
var_50:4.d = 0
sub_14077c870(arg1, &var_60, r13 + 0x124, &var_58, 0)
void* arg_38
void* rsi_7 = arg_38
arg_18.b = 1
arg_8 = r14
(*rsi_7)(*(rsi_7 + 8), &arg_8, r13 + 0x130, &arg_18)
void*** rcx_23 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_15 = &rcx_23[4]

if (rax_15 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_23 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = &rcx_23[4]

*(arg1 + 0x30) = rax_15
void**** rax_16 = *(arg1 + 8)
*(arg1 + 0x14) += 1
arg_38 = r14
*rax_16 = rcx_23
*(arg1 + 8) = &rcx_23[1]
rcx_23[1] = 0
*rcx_23 = &data_142ef57a8
*(rcx_23 + 0x14) = arg_20
rcx_23[2].d = (r15_1 + 0x3f) u>> 6
rcx_23[3].d = arg5
arg_20.b = 0
return (*rsi_7)(*(rsi_7 + 8), &arg_38, r13 + 0x130, &arg_20)
