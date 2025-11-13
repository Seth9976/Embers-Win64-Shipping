// 函数: sub_141d0e380
// 地址: 0x141d0e380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x88)
*(arg1 + 0x88) += 1

if (rax != 0)
    return rax + 1

if (*(arg1 + 0x63) == 0 && (*(arg1 + 0x8c) & 0x100) == 0)
    if (*(arg1 + 0x65) == 0)
        *(arg1 + 0x10) = sub_140a82f30(*(arg1 + 0x78), 0)
    
    int64_t r14_1 = *(arg1 + 0x70)
    void* rdi_1 = *(arg1 + 0x68)
    int64_t r15_1 = *(arg1 + 0x78)
    int64_t r13_1 = *(arg1 + 0x10)
    uint64_t rcx_1 = zx.q(*(rdi_1 + 0x70))
    int32_t i_1 = divs.dp.q(sx.o(r14_1), rcx_1)
    int64_t i = sx.q(i_1)
    int32_t i_2 = i_1
    int64_t rax_8
    int64_t rdx_1
    rdx_1:rax_8 = sx.o(r15_1 - 1 + r14_1)
    arg2 = mods.dp.q(rdx_1:rax_8, rcx_1)
    
    while (i s<= divs.dp.q(rdx_1:rax_8, rcx_1))
        int64_t rax_12 = *(rdi_1 + 0xd0)
        
        if (*(rax_12 + (i << 3)) == 0)
            void* const rax_10 = j_sub_140a82f30(0x38)
            
            if (rax_10 == 0)
                rax_10 = nullptr
            else
                __builtin_memset(rax_10, 0, 0x30)
                *(rax_10 + 0x30) = 0xffffffff
                *(rax_10 + 0x34) = 0
                *(rax_10 + 0x36) = 0
            
            *(*(rdi_1 + 0xd0) + (i << 3)) = rax_10
            *(*(*(rdi_1 + 0xd0) + (i << 3)) + 0x30) = i_2
            rax_12 = *(rdi_1 + 0xd0)
        
        void* r11_1 = *(rax_12 + (i << 3))
        int64_t r10_1 = 0
        int64_t rcx_5 = zx.q(*(rdi_1 + 0x70)) * sx.q(i_2)
        int64_t rcx_6 = rcx_5 - r14_1
        
        if (rcx_5 - r14_1 s< 0)
            r10_1 = neg.q(rcx_6)
        
        int64_t r9_1 = 0
        int64_t rdx_2 = sx.q(*(r11_1 + 0x28))
        
        if (rcx_6 s>= 0)
            r9_1 = rcx_6
        
        int64_t rcx_8 = r15_1 - r9_1
        
        if (r9_1 + rdx_2 s<= r15_1)
            rcx_8 = rdx_2
        
        uint32_t count = rdx_2.d - r10_1.d
        
        if (rcx_8 + r10_1 s<= rdx_2)
            count = rcx_8.d
        
        memcpy(r9_1 + r13_1, *(r11_1 + 0x10) + r10_1, count)
        i_2 += 1
        i += 1
        arg2 = 0

*(arg1 + 0x60) = 1

if (*(arg1 + 0x20) != 0)
    void* rcx_10 = arg1 + 0x40
    char arg_8 = *(arg1 + 0x63)
    void* rax_17 = *(arg1 + 0x30)
    void* arg_10 = arg1
    
    if (rax_17 != 0)
        rcx_10 = rax_17
    
    (*(arg1 + 0x20))((*(*rcx_10 + 8))(rcx_10, arg2), &arg_8, &arg_10)

EnterCriticalSection(&data_143f366b8)
int64_t* rcx_12 = *(arg1 + 0x80)
*(arg1 + 0x90) = 0

if (rcx_12 != 0)
    (*(*rcx_12 + 0x10))(rcx_12)

*(arg1 + 0x61) = 1
return LeaveCriticalSection(&data_143f366b8) __tailcall
