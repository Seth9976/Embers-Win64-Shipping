// 函数: sub_141141530
// 地址: 0x141141530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x40)
void* rdx = *(arg2 + 0x40)
int64_t r14 = *(rdx + 0x1a0)
sub_141080ac0(arg1, rdx, r14, *(arg3 + 0x10))
int64_t r12 = *(arg4 + 8)
int64_t* rax = sub_14139d440(&data_143ec4c60)
int64_t* rsi_1 = data_14395fa10
void* rbx = *(arg2 + 0x40)
void** const result = *(*rax + 8)
void** result_1 = result

if (*(arg1 + 0x11a) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_5 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_5[5]
    
    if (rax_1 u> *(rbx + 0x38))
        sub_140b0e3d0(rbx + 0x30, 0x30)
        rcx_5 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_5[5]
    
    *(rbx + 0x30) = rax_1
    void**** rax_2 = *(rbx + 8)
    *(rbx + 0x14) += 1
    *rax_2 = rcx_5
    *(rbx + 8) = &rcx_5[1]
    rcx_5[1] = 0
    result = &data_142d5a070
    *rcx_5 = &data_142d5a070
    rcx_5[2] = r14
    rcx_5[3].d = r15_1
    rcx_5[4] = r12

if (*(arg1 + 0x11e) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x11c))
    result = (*(*rsi_1 + 8))(rsi_1)
    
    if (result.b == 0)
        void*** rcx_12 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_5 = &rcx_12[5]
        
        if (rax_5 u> *(rbx + 0x38))
            sub_140b0e3d0(rbx + 0x30, 0x30)
            rcx_12 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
            rax_5 = &rcx_12[5]
        
        *(rbx + 0x30) = rax_5
        void**** rax_6 = *(rbx + 8)
        *(rbx + 0x14) += 1
        *rax_6 = rcx_12
        result = &rcx_12[1]
        *(rbx + 8) = result
        *result = nullptr
        *rcx_12 = &data_142d5a080
        rcx_12[2] = r14
        rcx_12[3].d = r15_2
        rcx_12[4] = rsi_1

void* rbx_1 = *(arg2 + 0x40)
int64_t* rsi_2 = data_14395f4d0

if (*(arg1 + 0x122) u> 0)
    uint32_t r15_3 = zx.d(*(arg1 + 0x120))
    void*** rcx_18 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_18[5]
    
    if (rax_7 u> *(rbx_1 + 0x38))
        sub_140b0e3d0(rbx_1 + 0x30, 0x30)
        rcx_18 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_18[5]
    
    *(rbx_1 + 0x30) = rax_7
    void**** rax_8 = *(rbx_1 + 8)
    *(rbx_1 + 0x14) += 1
    *rax_8 = rcx_18
    *(rbx_1 + 8) = &rcx_18[1]
    rcx_18[1] = 0
    *rcx_18 = &data_142d5a070
    result = result_1
    rcx_18[4] = result
    rcx_18[2] = r14
    rcx_18[3].d = r15_3

if (*(arg1 + 0x126) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x124))
    result = (*(*rsi_2 + 8))(rsi_2)
    
    if (result.b == 0)
        void*** rcx_25 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_11 = &rcx_25[5]
        
        if (rax_11 u> *(rbx_1 + 0x38))
            sub_140b0e3d0(rbx_1 + 0x30, 0x30)
            rcx_25 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_11 = &rcx_25[5]
        
        *(rbx_1 + 0x30) = rax_11
        void** rax_12 = *(rbx_1 + 8)
        *(rbx_1 + 0x14) += 1
        *rax_12 = rcx_25
        result = &rcx_25[1]
        *(rbx_1 + 8) = result
        *result = nullptr
        *rcx_25 = &data_142d5a080
        rcx_25[2] = r14
        rcx_25[3].d = rbp_1
        rcx_25[4] = rsi_2

return result
