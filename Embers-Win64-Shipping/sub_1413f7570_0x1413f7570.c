// 函数: sub_1413f7570
// 地址: 0x1413f7570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags
uint32_t temp0
temp0, rflags = _bit_scan_reverse(arg3)
uint32_t arg_18 = temp0
uint64_t rflags_1
uint32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(arg3 - 1)
bool cond:0 = *arg4 != 0
arg_18 = temp0_1
int64_t temp1_1
bool cond:2_1

if (not(cond:0) && *(arg4 + 8) == 0)
    temp1_1 = *(arg4 + 0x10)
    cond:2_1 = temp1_1 == 0

if (cond:0 || *(arg4 + 8) != 0 || temp1_1 != 0)
    int64_t r15_1 = *(arg4 + 8)
    int64_t* r14_1 = data_1439b5ec0
    int64_t r13_1 = *(arg2 + 0x1a0)
    
    if (*(arg1 + 0x11a) u> 0)
        int64_t rcx_1 = *(arg2 + 0x30) + 7
        arg_18 = zx.d(*(arg1 + 0x118))
        void*** rcx_2 = rcx_1 & 0xfffffffffffffff8
        void* rax_3 = &rcx_2[5]
        
        if (rax_3 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_3 = &rcx_2[5]
        
        *(arg2 + 0x30) = rax_3
        int64_t* rax_4 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_4 = rcx_2
        *(arg2 + 8) = &rcx_2[1]
        rcx_2[1] = 0
        *rcx_2 = &data_142d5a070
        rcx_2[3].d = arg_18
        rcx_2[2] = r13_1
        rcx_2[4] = r15_1
    
    int16_t temp0_2 = *(arg1 + 0x11e)
    cond:2_1 = temp0_2 == 0
    
    if (temp0_2 u> 0)
        uint32_t r15_2 = zx.d(*(arg1 + 0x11c))
        char rax_8 = (*(*r14_1 + 8))(r14_1)
        cond:2_1 = rax_8 == 0
        
        if (rax_8 == 0)
            void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_9 = &rcx_9[5]
            
            if (rax_9 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_9 = &rcx_9[5]
            
            *(arg2 + 0x30) = rax_9
            void**** rax_10 = *(arg2 + 8)
            int32_t temp3_1 = *(arg2 + 0x14)
            *(arg2 + 0x14) += 1
            cond:2_1 = temp3_1 == 0xffffffff
            *rax_10 = rcx_9
            *(arg2 + 8) = &rcx_9[1]
            rcx_9[1] = 0
            *rcx_9 = &data_142d5a080
            rcx_9[2] = r13_1
            rcx_9[3].d = r15_2
            rcx_9[4] = r14_1

uint64_t rflags_2
int32_t temp0_3
temp0_3, rflags_2 = _bit_scan_reverse(arg3)
int32_t rax_12

rax_12 = cond:2_1 ? 0x20 : 0x1f - temp0_3

int32_t rax_14 = rax_12 << 0x1a s>> 0x1f
uint64_t rflags_3
int32_t temp0_4
temp0_4, rflags_3 = _bit_scan_reverse(arg3 - 1)
int32_t rdx

if (rax_14 == 0)
    rdx = 0x20
else
    rdx = 0x1f - temp0_4

uint64_t rbp_1 = zx.q(*(arg1 + 0x124))
void** const result = 4
arg_18 = ((0x20 - rdx) & not.d(rax_14)) + 1

if (rbp_1.d u>= 4)
    rbp_1 = 4

if (rbp_1.d != 0)
    uint32_t r15_3 = zx.d(*(arg1 + 0x122))
    uint32_t r12_1 = zx.d(*(arg1 + 0x120))
    int64_t r13_2 = *(arg2 + 0x1a0)
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_16 = rbx_3 + rbp_1
    
    if (rax_16 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp_1 + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_16 = rbx_3 + rbp_1
    
    *(arg2 + 0x30) = rax_16
    memcpy(rbx_3, &arg_18, rbp_1.d)
    void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_17 = &rcx_20[6]
    
    if (rax_17 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_20[6]
    
    *(arg2 + 0x30) = rax_17
    void**** rax_18 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_18 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    rcx_20[1] = 0
    result = &data_142d549d8
    *rcx_20 = &data_142d549d8
    rcx_20[2] = r13_2
    rcx_20[3] = rbx_3
    rcx_20[4].d = r12_1
    *(rcx_20 + 0x24) = r15_3
    rcx_20[5].d = rbp_1.d

return result
