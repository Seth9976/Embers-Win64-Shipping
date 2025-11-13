// 函数: sub_140cfeb30
// 地址: 0x140cfeb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t rax = (*arg4)(arg4[1], &arg_10)
int64_t* arg_28
int64_t* rcx_1 = arg_28
int64_t r9 = *rcx_1
int64_t* rcx_2

if (r9 == 0)
    rcx_2 = arg_28
else
    rcx_2 = rcx_1[1]

int64_t var_48
int64_t* var_40

if (arg1[1].d != *(arg1 + 0x34))
    int64_t* rax_2 = var_40
    var_48 = r9
    
    if (r9 != 0)
        rax_2 = rcx_2
    
    var_40 = rax_2
    int32_t rax_3 = sub_140cfea80(arg1, arg2, arg3, rax, &var_48)
    
    if (rax_3 != 0xffffffff)
        return rax_3

int64_t r14_1 = *arg5
int64_t* rbp_1

if (r14_1 == 0)
    rbp_1 = arg_28
else
    rbp_1 = arg5[1]

int64_t rsi_1 = *arg4
int64_t* rdi_1

if (rsi_1 == 0)
    rdi_1 = arg_28
else
    rdi_1 = arg4[1]

int32_t rax_5 = sub_140cf1c20(arg1, &arg3[3])
int64_t* r13_2 = sx.q(arg3[4] * rax_5) + *arg1
arg_28 = r13_2
r14_1(rbp_1, &arg_28)
int32_t rax_7 = arg1[1].d - *(arg1 + 0x34)
int32_t rax_11

if (rax_7 u< 4)
    rax_11 = 1
else
    uint32_t rax_8 = rax_7 u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_8 + 8)
    int32_t rcx_6
    
    if (rax_8 == 0xfffffff8)
        rcx_6 = 0x20
    else
        rcx_6 = 0x1f - temp0_2
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_8 + 7)
    
    if (rax_8 == 0xfffffff9)
        rax_11 = 1
    else
        rax_11 = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))

int64_t rdx_8 = sx.q(arg1[9].d)

if (rdx_8.d == 0 || rdx_8.d s< rax_11)
    int64_t* rax_15 = var_40
    var_48 = rsi_1
    
    if (rsi_1 != 0)
        rax_15 = rdi_1
    
    int64_t* var_40_1 = rax_15
    sub_140d0c0d0(arg1, arg3, &var_48)
else
    void* rcx_11 = arg1[8]
    int32_t r9_5 = (rdx_8 - 1).d & rax
    void* r8_3 = &arg1[7]
    int64_t rdx_10 = (rdx_8 - 1) & sx.q(r9_5)
    
    if (rcx_11 != 0)
        r8_3 = rcx_11
    
    *(sx.q(arg3[1]) + r13_2) = r9_5
    *(sx.q(*arg3) + r13_2) = *(r8_3 + (rdx_10 << 2))
    *(r8_3 + (rdx_10 << 2)) = rax_5

return rax_5
