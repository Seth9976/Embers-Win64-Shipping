// 函数: sub_141d9a710
// 地址: 0x141d9a710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg1

if (*(r14 + 0x170) == 0 && *(arg2 + 0xb8) != 0)
    if (r14 + 0x380 != arg2 + 0xb0)
        int64_t rcx_1 = *(r14 + 0x380)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        *(r14 + 0x380) = *(arg2 + 0xb0)
        *(arg2 + 0xb0) = 0
        *(r14 + 0x388) = *(arg2 + 0xb8)
        *(r14 + 0x38c) = *(arg2 + 0xbc)
        *(arg2 + 0xb8) = 0
    
    *(*arg1 + 0x390) = 0
    int64_t rcx_3 = sx.q(arg1[1].d) * 0xa
    int64_t rdx = *(*arg1 + 0x118)
    wchar16* _String
    
    if (*(rdx + (rcx_3 << 3) + 0x30) == 0)
        _String = &data_142d40450
    else
        _String = *(rdx + (rcx_3 << 3) + 0x28)
    
    int32_t rax_7 = _wtoi(_String)
    int64_t* rcx_4 = *arg1
    int64_t rdi_2 = sx.q(rax_7)
    int64_t r9_1 = *rcx_4
    char rax_8 = (*(r9_1 + 0x78))(rcx_4, zx.q(*(sx.q(arg1[1].d) * 0x50 + rcx_4[0x23] + 0x38)), 
        zx.q(rcx_4[0x2f].d), r9_1)
    void* rdx_3 = *arg1
    int64_t arg_8
    
    if (rax_8 != 0)
        *(rdx_3 + 0x2e8) = *(*(rdx_3 + 0x138) + rdi_2 * 0x28 + 0x20) - *(rdx_3 + 0x150)
        *(*arg1 + 0x2ec) = 0
    else
        *(rdx_3 + 0x2e0) = 0
        
        if (*(rdx_3 + 0x2e4) != 0)
            sub_1405c5510(rdx_3 + 0x2d8, 0)
        
        arg_8 = 0
        *(*arg1 + 0x2e8) = 0
        *(*arg1 + 0x2ec) = 0
        *(*arg1 + 0x174) = 0
        void* rdx_4 = *arg1
        *(rdx_4 + 0x150) = *(*(rdx_4 + 0x138) + rdi_2 * 0x28 + 0x20)
        *(*arg1 + 0x148) = 0
        *(*arg1 + 0x158) = rdi_2.d
        *(*arg1 + 0x160) = 0
    
    int64_t* rdx_5 = *arg1
    int64_t* rcx_12 = rdx_5
    
    if (rdx_5[0x2f] s>= 0 && rdx_5[0x2b].d s>= rdx_5[0x28].d && rax_8 == 0)
        int32_t rcx_15 = *(rdx_5[0x23] + sx.q(arg1[1].d) * 0x50 + 0x38)
        arg_8.d = rcx_15
        arg_8:4.d = rcx_15
        rdx_5[0x29] = arg_8
        *(*arg1 + 0x178) = -1
        rcx_12 = *arg1
    
    int64_t r8_2 = rcx_12[0x2f]
    
    if (r8_2 s>= 0)
        int64_t r9_2 = *rcx_12
        (*(r9_2 + 0x70))(rcx_12, zx.q(*(rcx_12[0x23] + sx.q(arg1[1].d) * 0x50 + 0x38)), r8_2, r9_2)
        void* rdx_9 = *arg1
        *(rdx_9 + 0x178) -= zx.q(*(*(rdx_9 + 0x118) + sx.q(arg1[1].d) * 0x50 + 0x38))
    
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = *(*arg1 + 0x178)
    sub_140926420(&arg1[2], arg2)
else
    sub_140926420(&arg1[2])

void* result = *arg1
*(result + 0x178) = -1
return result
