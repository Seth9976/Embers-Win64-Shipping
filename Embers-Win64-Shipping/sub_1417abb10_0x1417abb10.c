// 函数: sub_1417abb10
// 地址: 0x1417abb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg2 + 0xc)
int64_t* rdi = nullptr
int64_t* r14 = nullptr

if (rax u>= 2)
    r14 = arg2

if (r14 == 0)
    if (rax u>= 1)
        rdi = arg2
    
    void* rdx_7
    
    if (rdi == 0)
        rdx_7 = arg1[1]
    else
        rdx_7 = arg1[3]
    
    sub_1417b1460(arg2, rdx_7)
else
    void* rax_1 = *r14
    int64_t rcx = sx.q(r14[1].d)
    int64_t temp0_1 = _mm_unpacklo_ps(zx.o(0), 0)
    int64_t* rbp_1 = nullptr
    int32_t var_10_1 = 0
    int32_t var_10_2 = 0
    *(rcx + *(rax_1 + 0x368)) = 1
    int64_t rdx = sx.q(r14[1].d) * 3
    int64_t rcx_1 = *(*r14 + 0x1b8)
    *(rcx_1 + (rdx << 2)) = temp0_1
    *(rcx_1 + (rdx << 2) + 8) = 0
    int64_t rax_5 = sx.q(r14[1].d)
    int64_t temp0_2 = _mm_unpacklo_ps(zx.o(0), 0)
    int64_t rdx_1 = rax_5 * 3
    int64_t rcx_2 = *(*r14 + 0x1d0)
    *(rcx_2 + (rdx_1 << 2)) = temp0_2
    *(rcx_2 + (rdx_1 << 2) + 8) = 0
    char result = *(arg2 + 0xc)
    
    if (result u>= 3)
        rbp_1 = arg2
    
    if (rbp_1 == 0)
        sub_1417b1460(arg2, arg1[6])
    else
        if (result == 6)
            arg1[0x11].b = 1
            return result
        
        sub_14179c500(rbp_1, &arg1[0x2a], &arg1[0x34])
        int64_t* rax_7 = nullptr
        
        if (*(arg2 + 0xc) u>= 1)
            rax_7 = arg2
        
        if (rax_7 != 0)
            if (*(rax_7 + 0xc) u>= 2)
                rdi = rax_7
            
            if (rdi != 0 && *(sx.q(rdi[1].d) + *(*rdi + 0x398)) == 4)
                sub_14179c500(rbp_1, &arg1[0x1e], &arg1[0x28])
    
    sub_14179c500(r14, &arg1[0x12], &arg1[0x1c])

return sub_14175b460(arg1)
