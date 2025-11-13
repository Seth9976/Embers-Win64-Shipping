// 函数: sub_1422c1380
// 地址: 0x1422c1380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x10)

if (rax == 0)
    rax = nullptr
else
    *rax = 0
    rax[1] = 0

*arg2 = rax
int64_t rax_1 = *arg4
int64_t var_78

if (rax_1 != 0)
    int16_t* rax_2 = j_sub_140a82f30(0x4c0)
    int16_t* rax_3
    
    if (rax_2 == 0)
        rax_3 = nullptr
    else
        rax_3 = sub_1422b48c0(rax_2)
    
    int64_t* rcx_2 = *arg2
    void* rdx = rcx_2[1]
    
    if (rdx != rax_3)
        rcx_2[1] = rax_3
        sub_1422b8150(&rcx_2[1], rdx)
        rcx_2 = *arg2
    
    int64_t* rdi_1 = arg4[1]
    int128_t* rcx_4 = rcx_2[1] + 0x20
    var_78 = *arg4
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    if (&var_78 != rcx_4)
        var_78.o = *rcx_4
        *rcx_4 = var_78.o
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* rdx_1 = *arg2
    int32_t var_58 = 0
    sub_1422cc7a0(arg1, rdx_1[1], &var_58)
    int32_t rax_8 = *(arg1 + 0x30)
    void* r14_2 = (*arg2)[1] + 0x470
    int32_t* r12_1 = r14_2 + 0x18
    *r12_1 = rax_8
    uint32_t rbp_2 = (rax_8 + 0x1f) u>> 5
    uint64_t rcx_10 = zx.q((*(r14_2 + 0x1c) + 0x1f) u>> 5)
    
    if (rbp_2 u<= rcx_10.d)
        void* rax_14 = *(r14_2 + 0x10)
        
        if (rax_14 != 0)
            r14_2 = rax_14
        
        if (rcx_10.d u> 8)
            memset(r14_2, 0, zx.q(rcx_10.d) << 2)
        else if (rcx_10.d != 0)
            __builtin_memset(r14_2, 0, rcx_10 << 2)
    else
        sub_1405a4a00(r14_2, 0, rbp_2, 4)
        *(r14_2 + 0x1c) = rbp_2 << 5
        void* rax_11 = *(r14_2 + 0x10)
        
        if (rax_11 != 0)
            r14_2 = rax_11
        
        if (rbp_2 u> 8)
            memset(r14_2, 0, zx.q(rbp_2) << 2)
        else if (rbp_2 != 0)
            __builtin_memset(r14_2, 0, zx.q(rbp_2) << 2)
        
        void* rdx_3 = r14_2 + (zx.q(rbp_2 - 1) << 2)
        *rdx_3 &= 0xffffffff u>> ((neg.d(*r12_1)).b & 0x1f)

if ((arg5 & 1) == 0)
    int64_t* rdi_4 = *(arg1 + 0x18)
    int64_t rbp_3 = 0
    
    if (rdi_4 != 0)
        int32_t rax_15 = rdi_4[1].d
        
        if (rax_15 != 0)
            rdi_4[1].d = rax_15 + 1
            rax_15.b = 1
        
        if (rax_15.b == 0)
            rdi_4 = nullptr
        
        if (rdi_4 != 0)
            rbp_3 = *(arg1 + 0x10)
    
    var_78 = 0
    int64_t r14_3 = 0
    int64_t var_70_2 = 0
    int32_t r12_2 = 0
    int32_t r13_1 = 0
    
    if (rdi_4 != 0)
        int32_t rax_16 = rdi_4[1].d
        rdi_4[1].d = rax_16
        
        if (rax_16 == 0)
            (**rdi_4)(rdi_4)
            int32_t temp0_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    if (rax_1 == 0)
        sub_1422ca6c0(arg1, &var_78, arg3)
        r13_1 = var_70_2:4.d
        r12_2 = var_70_2.d
        r14_3 = var_78
    
    int64_t* rax_19 = j_sub_140a82f30(0xd0)
    int64_t* rdx_5 = rax_19
    
    if (rax_19 == 0)
        rdx_5 = nullptr
    else
        *rax_19 = r14_3
        rax_19[1].d = r12_2
        *(rax_19 + 0xc) = r13_1
        rax_19[2] = rbp_3
        rax_19[3] = rdi_4
        var_78 = 0
        int64_t var_70_3 = 0
        
        if (rdi_4 != 0)
            rdi_4[1].d += 1
        
        rax_19[4] = 0
        void* rcx_21 = &rax_19[6]
        rax_19[5] = 0
        *(rcx_21 + 0x10) = 0
        *(rcx_21 + 0x18) = 0
        *(rcx_21 + 0x1c) = 0x80
        void* rax_20 = *(rcx_21 + 0x10)
        
        if (rax_20 != 0)
            rcx_21 = rax_20
        
        *rcx_21 = 0
        *(rcx_21 + 8) = 0
        void* rcx_22 = &rdx_5[0x12]
        rdx_5[0xa].d = 0xffffffff
        *(rdx_5 + 0x54) = 0
        rdx_5[0xc] = 0
        rdx_5[0xd].d = 0
        __builtin_memset(&rdx_5[0xe], 0, 0x20)
        *(rcx_22 + 0x1c) = 0x80
        void* rax_21 = *(rcx_22 + 0x10)
        
        if (rax_21 != 0)
            rcx_22 = rax_21
        
        __builtin_memset(rcx_22, 0, 0x1c)
        rdx_5[0x16].d = 0xffffffff
        *(rdx_5 + 0xb4) = 0
        rdx_5[0x18] = 0
        rdx_5[0x19].d = 0
    
    int64_t* rcx_23 = *arg2
    int64_t* rax_22 = *rcx_23
    
    if (rax_22 != rdx_5)
        *rcx_23 = rdx_5
        sub_141fa8b80(rcx_23, rax_22)
    
    sub_1422b53f0(&var_78)

return arg2
