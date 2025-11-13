// 函数: sub_1422ba4f0
// 地址: 0x1422ba4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143a2fd9c == 0 || *(arg1 + 0x80) != 0)
    return 

int32_t rax_1 = *(arg1 + 0x30)
uint32_t rbp_2 = (rax_1 + 0x1f) u>> 5
uint64_t rcx_2 = zx.q((*(arg1 + 0xa4) + 0x1f) u>> 5)
*(arg1 + 0xa0) = rax_1
uint64_t rax

if (rbp_2 u<= rcx_2.d)
    rax = *(arg1 + 0x98)
    uint64_t rdi_2 = arg1 + 0x88
    
    if (rax != 0)
        rdi_2 = rax
    
    if (rcx_2.d u> 8)
        memset(rdi_2, 0, zx.q(rcx_2.d) << 2)
    else if (rcx_2.d != 0)
        __builtin_memset(rdi_2, 0, rcx_2 << 2)
else
    sub_1405a4a00(arg1 + 0x88, 0, rbp_2, 4)
    void* r14_1 = arg1 + 0x88
    *(arg1 + 0xa4) = rbp_2 << 5
    void* rax_4 = *(arg1 + 0x98)
    
    if (rax_4 != 0)
        r14_1 = rax_4
    
    if (rbp_2 u> 8)
        memset(r14_1, 0, zx.q(rbp_2) << 2)
    else if (rbp_2 != 0)
        __builtin_memset(r14_1, 0, zx.q(rbp_2) << 2)
    
    void* rdx = r14_1 + (zx.q(rbp_2 - 1) << 2)
    *rdx &= 0xffffffff u>> ((neg.d(*(arg1 + 0xa0))).b & 0x1f)

int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    int32_t rbp_3 = 1
    int64_t r14_2 = 0
    
    do
        int64_t* rdx_1 = *(arg1 + 0x28)
        int64_t* r10_1 = *(rdx_1 + r14_2)
        
        if (not(test_bit(zx.q(r10_1[8].d), 8)))
            int32_t var_38
            int32_t var_30
            int64_t* var_28
            
            if (r10_1 == 0 || ((zx.q(*(r10_1[1] + 0x10)) u>> 0x11).b & 1) == 0)
                rax = (*(*r10_1 + 0x80))(r10_1, 
                    sx.q(*(r10_1 + 0x4c)) + sx.q(*(r10_1 + 0x3c) * *(rdx_1 + r14_2 + 0x10)) + arg2, 
                    0, 0, var_38, var_30, var_28)
            
            if ((r10_1 != 0 && ((zx.q(*(r10_1[1] + 0x10)) u>> 0x11).b & 1) != 0) || rax.b == 0)
                void* rax_12 = *(arg1 + 0x98)
                void* rcx_13 = arg1 + 0x88
                
                if (rax_12 != 0)
                    rcx_13 = rax_12
                
                int32_t i_1 = i
                
                if (i s< 0)
                    i_1 = i + 0x1f
                
                int64_t rax_14 = sx.q(i_1 s>> 5)
                *(rcx_13 + (rax_14 << 2)) |= rbp_3
                int64_t rax_15 = *(arg1 + 0x28)
                var_28 = arg1 + 0x68
                var_30 = 0
                var_38 = 0
                sub_1422ba6e0(arg1, zx.d(*(rax_15 + r14_2 + 0x1c)), zx.d(*(rax_15 + r14_2 + 0x1e)), 
                    arg2, 0, 0, var_28)
        
        i += 1
        rbp_3 = rol.d(rbp_3, 1)
        r14_2 += 0x30
    while (i s< *(arg1 + 0x30))

*(arg1 + 0x80) = 1
