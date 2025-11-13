// 函数: sub_140d16fd0
// 地址: 0x140d16fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t rax = (*arg4)(arg4[1], &arg_10)
int64_t* arg_28
int64_t* rcx_1 = arg_28
int64_t r9 = sx.q(rax)
int64_t r14 = *rcx_1
int64_t* rcx_2

if (r14 == 0)
    rcx_2 = arg_28
else
    rcx_2 = rcx_1[1]

if (arg1[1].d != *(arg1 + 0x34))
    int64_t* r15_1 = arg_28
    void* r8 = &arg1[7]
    
    if (r14 != 0)
        r15_1 = rcx_2
    
    void* rcx_3 = *(r8 + 8)
    
    if (rcx_3 != 0)
        r8 = rcx_3
    
    int64_t* rdi_2
    
    for (int32_t i = *(r8 + (((sx.q(arg1[9].d) - 1) & r9) << 2)); i != 0xffffffff; 
            i = *(sx.q(*arg3) + rdi_2))
        int32_t rax_3 = arg3[4] * i
        int64_t arg_20 = arg2
        rdi_2 = sx.q(rax_3) + *arg1
        arg_28 = rdi_2
        
        if (r14(r15_1, &arg_20, &arg_28) != 0)
            if (i == 0xffffffff)
                break
            
            int64_t* rbx_2 = sx.q(arg3[4] * i) + *arg1
            arg_28 = rbx_2
            (*arg6)(*(arg6 + 8), &arg_28)
            arg_28 = rbx_2
            return (*arg5)(arg5[1], &arg_28)

int64_t r15_2 = *arg5
int64_t* rdi_3

if (r15_2 == 0)
    rdi_3 = arg_28
else
    rdi_3 = arg5[1]

int64_t rbx_3 = *arg4
int64_t* r14_1

if (rbx_3 == 0)
    r14_1 = arg_28
else
    r14_1 = arg4[1]

int32_t rax_11 = sub_140cf1c20(arg1, &arg3[3])
int64_t* r12_2 = sx.q(arg3[4] * rax_11) + *arg1
arg_28 = r12_2
r15_2(rdi_3, &arg_28)
int32_t rax_13 = arg1[1].d - *(arg1 + 0x34)
int32_t rax_17

if (rax_13 u< 4)
    rax_17 = 1
else
    uint32_t rax_14 = rax_13 u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_14 + 8)
    int32_t rcx_9
    
    if (rax_14 == 0xfffffff8)
        rcx_9 = 0x20
    else
        rcx_9 = 0x1f - temp0_2
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_14 + 7)
    
    if (rax_14 == 0xfffffff9)
        rax_17 = 1
    else
        rax_17 = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))

int64_t rdx_12 = sx.q(arg1[9].d)

if (rdx_12.d == 0 || rdx_12.d s< rax_17)
    int64_t* var_40
    int64_t* rax_20 = var_40
    int64_t var_48 = rbx_3
    
    if (rbx_3 != 0)
        rax_20 = r14_1
    
    int64_t* var_40_1 = rax_20
    return sub_140d0c0d0(arg1, arg3, &var_48)

void* rcx_14 = arg1[8]
int32_t r9_4 = (rdx_12 - 1).d & r9.d
void* r8_4 = &arg1[7]
int64_t rdx_14 = (rdx_12 - 1) & sx.q(r9_4)

if (rcx_14 != 0)
    r8_4 = rcx_14

*(sx.q(arg3[1]) + r12_2) = r9_4
int32_t result = *(r8_4 + (rdx_14 << 2))
*(sx.q(*arg3) + r12_2) = result
*(r8_4 + (rdx_14 << 2)) = rax_11
return result
