// 函数: sub_141d99460
// 地址: 0x141d99460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 0x170) == 0 && *(arg2 + 0xb8) != 0)
    sub_141d9b700(rcx, *(*(rcx + 0x118) + sx.q(arg1[1].d) * 0x50), arg2 + 0xb0)
    int64_t* r14_2 = *arg1 + 0x380
    
    if (r14_2 != arg2 + 0xb0)
        int64_t rcx_2 = *r14_2
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        *r14_2 = *(arg2 + 0xb0)
        *(arg2 + 0xb0) = 0
        r14_2[1].d = *(arg2 + 0xb8)
        *(r14_2 + 0xc) = *(arg2 + 0xbc)
        *(arg2 + 0xb8) = 0
    
    *(*arg1 + 0x390) = 0
    void* rdi_4 = sx.q(arg1[1].d) * 0x50 + *(*arg1 + 0x118)
    wchar16* _String
    
    if (*(rdi_4 + 0x30) == 0)
        _String = &data_142d40450
    else
        _String = *(rdi_4 + 0x28)
    
    int32_t rax_9 = _wtoi(_String)
    int64_t* rcx_3 = *arg1
    int64_t rbp_1 = sx.q(rax_9)
    
    if (rax_9 s>= 0 && rbp_1.d s< rcx_3[0x28].d)
        int64_t r9_1 = *rcx_3
        char rax_10 = (*(r9_1 + 0x78))(rcx_3, zx.q(*(rdi_4 + 0x38)), zx.q(rcx_3[0x2f].d), r9_1)
        void* rdx_4 = *arg1
        
        if (rax_10 != 0)
            *(rdx_4 + 0x2e8) = *(*(rdx_4 + 0x138) + rbp_1 * 0x28 + 0x20) - *(rdx_4 + 0x150)
            *(*arg1 + 0x2ec) = 0
        else
            *(rdx_4 + 0x2e0) = 0
            
            if (*(rdx_4 + 0x2e4) != 0)
                sub_1405c5510(rdx_4 + 0x2d8, 0)
            
            int32_t arg_8
            arg_8.q = 0
            *(*arg1 + 0x2e8) = 0
            *(*arg1 + 0x2ec) = 0
            *(*arg1 + 0x174) = 0
            void* rdx_5 = *arg1
            *(rdx_5 + 0x150) = *(*(rdx_5 + 0x138) + rbp_1 * 0x28 + 0x20)
            *(*arg1 + 0x148) = 0
            *(*arg1 + 0x158) = rbp_1.d
            *(*arg1 + 0x160) = 0
    else if (rcx_3[0x2f] s>= 0)
        int32_t rax_19 = *(rdi_4 + 0x38)
        int32_t arg_c = rax_19
        rcx_3[0x29] = rax_19.q
        *(*arg1 + 0x178) = -1
    
    int64_t* rcx_13 = *arg1
    int64_t rdx_6 = rcx_13[0x2f]
    
    if (rdx_6 s>= 0)
        (*(*rcx_13 + 0x70))(rcx_13, zx.q(*(rdi_4 + 0x38)), zx.q(rdx_6.d))
        void* rcx_14 = *arg1
        *(rcx_14 + 0x178) -= zx.q(*(rdi_4 + 0x38))
    
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = *(*arg1 + 0x178)
    *(arg2 + 0x1c) = arg1[1].d
    *(arg2 + 0x18) = *(rdi_4 + 0x38)
    sub_140926420(&arg1[2], arg2)
else
    sub_140926420(&arg1[2])

void* result = *arg1
*(result + 0x178) = -1
return result
