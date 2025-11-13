// 函数: sub_1410b70a0
// 地址: 0x1410b70a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg2[8]
int64_t rbp = *(rdx + 0x1a0)
int64_t arg_10 = rbp
j_sub_14137eb70(arg1 + 0x11a, rdx, rbp, arg2, data_14395fa10, 0, nullptr)
sub_141080ac0(arg1, arg2[8], rbp, *(*arg2 + 0x10))
void* rsi = arg2[8]
int32_t r8_2 = *(*arg2 + 0x1548)

if (*(arg1 + 0x118) != 0xffff)
    int64_t arg_8
    int64_t* rcx_2 = &arg_8
    
    if (r8_2 s< 3)
        sub_14137b650(rcx_2)
    else
        sub_14137b9a0(rcx_2, rsi, 0xf, r8_2)
    
    sub_141083500(rsi, &arg_10, arg1 + 0x118, arg_8)
    sub_1405d1550(&arg_8)

sub_1410804a0(arg1 + 0x212, arg2[8], *arg2, rbp, arg3.d, 1)
int64_t var_58_2 = rbp
sub_1410801c0(arg1 + 0x22c, arg2[8], *arg2, arg3)
int64_t* r15 = data_1439b54b8
void* rbx_1 = arg2[8]
int64_t r13 = *(data_1439b70f8 + 0x10)

if (*(arg1 + 0x21e) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x21c))
    void*** rcx_9 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_9[5]
    
    if (rax_3 u> *(rbx_1 + 0x38))
        sub_140b0e3d0(rbx_1 + 0x30, 0x30)
        rcx_9 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_9[5]
    
    *(rbx_1 + 0x30) = rax_3
    void**** rax_4 = *(rbx_1 + 8)
    *(rbx_1 + 0x14) += 1
    *rax_4 = rcx_9
    *(rbx_1 + 8) = &rcx_9[1]
    rcx_9[1] = 0
    *rcx_9 = &data_142d5a070
    rcx_9[2] = rbp
    rcx_9[3].d = r12_1
    rcx_9[4] = r13

if (*(arg1 + 0x222) u> 0)
    uint32_t r12_2 = zx.d(*(arg1 + 0x220))
    
    if ((*(*r15 + 8))(r15) == 0)
        void*** rcx_16 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_8 = &rcx_16[5]
        
        if (rax_8 u> *(rbx_1 + 0x38))
            sub_140b0e3d0(rbx_1 + 0x30, 0x30)
            rcx_16 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_8 = &rcx_16[5]
        
        *(rbx_1 + 0x30) = rax_8
        void**** rax_9 = *(rbx_1 + 8)
        *(rbx_1 + 0x14) += 1
        *rax_9 = rcx_16
        *(rbx_1 + 8) = &rcx_16[1]
        rcx_16[1] = 0
        *rcx_16 = &data_142d5a080
        rcx_16[2] = rbp
        rcx_16[3].d = r12_2
        rcx_16[4] = r15

arg2[8]
void** const result = sub_14139bee0()
int64_t* r15_1 = data_1439b54b8
void* rbx_2 = arg2[8]
int64_t r12_3 = *(data_143ec4d28 + 0x10)

if (*(arg1 + 0x226) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x224))
    void*** rcx_24 = (*(rbx_2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_24[5]
    
    if (rax_11 u> *(rbx_2 + 0x38))
        sub_140b0e3d0(rbx_2 + 0x30, 0x30)
        rcx_24 = (*(rbx_2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_24[5]
    
    *(rbx_2 + 0x30) = rax_11
    void**** rax_12 = *(rbx_2 + 8)
    *(rbx_2 + 0x14) += 1
    *rax_12 = rcx_24
    *(rbx_2 + 8) = &rcx_24[1]
    rcx_24[1] = 0
    result = &data_142d5a070
    *rcx_24 = &data_142d5a070
    rcx_24[2] = rbp
    rcx_24[3].d = r14_1
    rcx_24[4] = r12_3

if (*(arg1 + 0x22a) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x228))
    result = (*(*r15_1 + 8))(r15_1)
    
    if (result.b == 0)
        void*** rcx_31 = (*(rbx_2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_31[5]
        
        if (rax_15 u> *(rbx_2 + 0x38))
            sub_140b0e3d0(rbx_2 + 0x30, 0x30)
            rcx_31 = (*(rbx_2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_31[5]
        
        *(rbx_2 + 0x30) = rax_15
        void**** rax_16 = *(rbx_2 + 8)
        *(rbx_2 + 0x14) += 1
        *rax_16 = rcx_31
        result = &rcx_31[1]
        *(rbx_2 + 8) = result
        *result = nullptr
        *rcx_31 = &data_142d5a080
        rcx_31[2] = rbp
        rcx_31[3].d = rsi_1
        rcx_31[4] = r15_1

return result
