// 函数: sub_140ef7d30
// 地址: 0x140ef7d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xd8)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    rax[1] = 0
    rax[2] = 0
    *rdi = &data_142ee10d8
    rdi[3] = *arg2
    void* rax_2 = arg2[1]
    rdi[4] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 0xc) += 1
    
    uint128_t zmm0_1 = sub_140ee2240(&rdi[5], arg3)
    rdi[0x11] = *arg4
    void* rax_4 = arg4[1]
    rdi[0x12] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    rdi[0x13] = *arg6
    rdi[0x14] = *arg5
    void* rax_7 = arg5[1]
    rdi[0x15] = rax_7
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
    
    rdi[0x16].w = arg5[2].w
    *(rdi + 0xbc) = 0
    
    if (*(arg5 + 0x1c) != 0)
        zmm0_1 = zx.o(*(arg5 + 0x14))
        *(rdi + 0xb4) = zmm0_1.q
        *(rdi + 0xbc) = 1
    
    rdi[0x18] = 0
    rdi[0x19] = 0
    sub_140e258a0(rdi[0x14], zmm0_1)
    void arg_8
    rdi[0x1a] = *sub_140e13cf0(rdi[0x14], &arg_8)
    int64_t rsi_1 = sx.q(rdi[0x19].d)
    int32_t rax_10 = (rsi_1 + 1).d
    rdi[0x19].d = rax_10
    
    if (rax_10 s> *(rdi + 0xcc))
        sub_1405a4f90(&rdi[0x18])
    
    int64_t* rcx_8 = &rdi[0x18][rsi_1 * 2]
    *rcx_8 = rdi[0x14]
    void* rax_12 = rdi[0x15]
    rcx_8[1] = rax_12
    
    if (rax_12 != 0)
        *(rax_12 + 8) += 1

void*** rax_13 = j_sub_140a82f30(0x18)
void*** rbx_2 = rax_13

if (rax_13 == 0)
    rbx_2 = nullptr
else
    rax_13[1].d = 1
    *(rax_13 + 0xc) = 1
    *rbx_2 = &data_142d42ea8
    rbx_2[2] = rdi

*arg1 = rdi
void**** rsi_2 = &rdi[1]
arg1[1] = rbx_2

if (rdi == 0)
    rsi_2 = nullptr

if (rsi_2 != 0)
    void* rax_14
    
    if (*rsi_2 != 0)
        rax_14 = rsi_2[1]
    
    if (*rsi_2 == 0 || rax_14 == 0 || *(rax_14 + 8) s<= 0)
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        *rsi_2 = rdi
        int64_t* rcx_9 = rsi_2[1]
        
        if (rbx_2 != rcx_9)
            if (rbx_2 != 0)
                *(rbx_2 + 0xc) += 1
                rcx_9 = rsi_2[1]
            
            if (rcx_9 != 0)
                int32_t temp2_1 = *(rcx_9 + 0xc)
                *(rcx_9 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_9 + 8))(rcx_9, 1)
            
            rsi_2[1] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_2)[1](rbx_2, 1)

return arg1
