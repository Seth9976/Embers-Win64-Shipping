// 函数: sub_1412620c0
// 地址: 0x1412620c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg3 + 8)
void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t var_50 = 0
int64_t r14 = *(*(rsi + 0xc58) + 8)
void* rax_1 = &rdx_2[5]

if (rax_1 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rdx_2[5]

*(arg2 + 0x30) = rax_1
int64_t* rax_2 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_2 = rdx_2
*(arg2 + 8) = &rdx_2[1]
rdx_2[1] = 0
*rdx_2 = &data_142f115d8
rdx_2[2] = r14
*(rdx_2 + 0x18) = 0.o
void* var_48
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg1 + 0x3b0))]), &var_48, 
    &data_143e8feb0, 0)
void* rbp_1 = var_48
void* r14_1 = nullptr

if (rbp_1 != 0)
    int64_t rdx_6 = sx.q(*(rbp_1 + 0x10c))
    void* var_40
    int64_t* r14_2 = *(var_40 + 0x10)
    int64_t rax_7 = r14_2[3]
    
    if (*(rax_7 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(r14_2, rdx_6.d)
        rax_7 = r14_2[3]
    
    r14_1 = *(rax_7 + (rdx_6 << 3))

*(arg2 + 0x1b0) = r14_1
sub_14198aa60(r14_1)
void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_8 = &rcx_7[3]

if (rax_8 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_7[3]

*(arg2 + 0x30) = rax_8
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_7
*(arg2 + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142dd5b40
rcx_7[2] = r14_1
int64_t r14_3 = *(arg2 + 0x1b0)
int32_t arg_8 = *(arg3 + 0x15a0) - *(arg3 + 0x1598)
int32_t rax_14 = *(arg3 + 0x15a4) - *(arg3 + 0x159c)
bool cond:0 = *(rbp_1 + 0x11a) u<= 0
void* rax_15 = *(rsi + 0xc58)
int64_t arg_10 = r14_3
int64_t r12 = *(rax_15 + 8)

if (not(cond:0))
    uint32_t r15_2 = zx.d(*(rbp_1 + 0x118))
    void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_16 = &rcx_13[5]
    
    if (rax_16 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_16 = &rcx_13[5]
    
    *(arg2 + 0x30) = rax_16
    void**** rax_17 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_17 = rcx_13
    *(arg2 + 8) = &rcx_13[1]
    rcx_13[1] = 0
    *rcx_13 = &data_142da77b8
    rcx_13[3].d = r15_2
    rcx_13[4] = arg4
    rcx_13[2] = r14_3

sub_14077c4b0(arg2, &arg_10, rbp_1 + 0x11c, &arg_8, 0)

if (*(rbp_1 + 0x124) u> 0)
    uint32_t r15_3 = zx.d(*(rbp_1 + 0x122))
    void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_20 = &rcx_20[5]
    
    if (rax_20 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_20 = &rcx_20[5]
    
    *(arg2 + 0x30) = rax_20
    void**** rax_21 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_21 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    rcx_20[1] = 0
    rcx_20[3].d = r15_3
    *rcx_20 = &data_142da77d8
    rcx_20[2] = r14_3
    rcx_20[4] = r12

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_14 + 0x3f)
sub_1419cd1c0(arg2, rbp_1, ((temp0 & 0x3f) + temp1) s>> 6, 1, 1)
void* rbx = *(rsi + 0xc60)
char result

if (*(rsi + 0xc68) != 0)
    void* rcx_26 = *(rbx + 8)
    
    if (rcx_26 == 0)
    label_14126242f:
        uint64_t rcx_29 = zx.q(*sub_141978000(rbx, 4))
        *(rsi + 0xc54) = rcx_29.d
        data_143f5b27c = float.s(rcx_29) f* 9.99999997e-07f
        sub_14198a650(rbx)
        return sub_14196d720(rbx, arg2, **(rsi + 0xc58), 0)
    
    result = 0
    bool z_1
    
    if (0 == *(rcx_26 + 0x18))
        *(rcx_26 + 0x18) = 0
        z_1 = true
    else
        result = (*(rcx_26 + 0x18)).b
        z_1 = false
    
    if (z_1)
        int64_t* rcx_27 = *(rbx + 8)
        result = (*(*rcx_27 + 0x18))(rcx_27)
        
        if (result != 0)
            goto label_14126242f
else
    result = sub_14196d720(rbx, arg2, **(rsi + 0xc58), 0)
    *(rsi + 0xc68) = 1

return result
