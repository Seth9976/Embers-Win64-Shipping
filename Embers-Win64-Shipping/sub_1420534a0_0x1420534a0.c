// 函数: sub_1420534a0
// 地址: 0x1420534a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
void* var_48
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[sx.q(arg2)]), &var_48, &data_143f43080, 0)
void* r14 = var_48
void* rbx = nullptr

if (r14 != 0)
    int64_t rdx_1 = sx.q(*(r14 + 0x10c))
    void* var_40
    int64_t* rdi_1 = *(var_40 + 0x10)
    int64_t* rbx_1 = rdi_1[3]
    
    if (rbx_1[rdx_1] == 0)
        sub_1419ccf30(rdi_1, rdx_1.d)
        rbx_1 = rdi_1[3]
    
    rbx = rbx_1[rdx_1]

*(arg1 + 0x1b0) = rbx
sub_14198aa60(rbx)
void* rdi_2 = arg1 + 0x30
void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_6[3]

if (rax_3 u> *(rdi_2 + 8))
    sub_140b0e3d0(rdi_2, 0x20)
    rcx_6 = (*rdi_2 + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_6[3]

int32_t r13 = 0
*rdi_2 = rax_3
void**** rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
int64_t i_1 = 3
*rax_4 = rcx_6
*(arg1 + 8) = &rcx_6[1]
rcx_6[1] = 0
void** const result = &data_142dd5b40
*rcx_6 = &data_142dd5b40
rcx_6[2] = rbx

if (arg7 s> 0)
    int64_t r8 = arg5
    int32_t r15_1 = arg7
    int64_t rdi_3 = r8
    
    do
        int32_t rdx_2 = 3
        
        if (r15_1 s<= 3)
            rdx_2 = r15_1
        
        int32_t rbx_2 = *(r8 + (sx.q(rdx_2 + r13) << 2) - 4)
        sub_142069290(r14, arg1, arg3, arg_20, rdi_3, arg6, rdx_2)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_2 - arg6 + 0x3f)
        result = sub_1419cd1c0(arg1, r14, ((temp0_1 & 0x3f) + temp1_1) s>> 6, 1, 1)
        arg_20 += 0x18
        r13 += 3
        r8 = arg5
        r15_1 -= 3
        rdi_3 += 0xc
        arg6 = rbx_2
    while (r13 s< arg7)
    
    rdi_2 = arg1 + 0x30

int64_t r15_2 = *(arg1 + 0x1b0)

if (*(r14 + 0x120) u> 0)
    uint32_t rbx_3 = zx.d(*(r14 + 0x11e))
    void*** rcx_15 = (*rdi_2 + 7) & 0xfffffffffffffff8
    void* rax_12 = &rcx_15[5]
    
    if (rax_12 u> *(rdi_2 + 8))
        sub_140b0e3d0(rdi_2, 0x30)
        rcx_15 = (*rdi_2 + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_15[5]
    
    *rdi_2 = rax_12
    void**** rax_13 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_13 = rcx_15
    *(arg1 + 8) = &rcx_15[1]
    rcx_15[1] = 0
    result = &data_142d99560
    *rcx_15 = &data_142d99560
    rcx_15[2] = r15_2
    rcx_15[3].d = rbx_3
    rcx_15[4] = 0

void* rbx_4 = r14 + 0x122
int64_t i

do
    if (*(rbx_4 + 2) u> 0)
        uint32_t r14_1 = zx.d(*rbx_4)
        result = (*rdi_2 + 7) & 0xfffffffffffffff8
        void* rcx_19 = &result[5]
        
        if (rcx_19 u> *(rdi_2 + 8))
            sub_140b0e3d0(rdi_2, 0x30)
            result = (*rdi_2 + 7) & 0xfffffffffffffff8
            rcx_19 = &result[5]
        
        *rdi_2 = rcx_19
        void*** rcx_21 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rcx_21 = result
        *(arg1 + 8) = &result[1]
        result[1] = 0
        *result = &data_142da77d8
        result[2] = r15_2
        result[3].d = r14_1
        result[4] = 0
    
    rbx_4 += 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
