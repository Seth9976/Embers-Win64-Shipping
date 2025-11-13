// 函数: sub_14207c830
// 地址: 0x14207c830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg3 + 0x20)

if (arg1[8].d != 0)
    int32_t i = 0
    int64_t rax_13
    
    if (rcx == 0)
        rax_13 = 0
    else
        rax_13 = (*(*rcx + 0x260))(rcx)
    
    int32_t rdi_1 = -1
    
    if (rax_13 != 0 && arg1[8].d s> 0)
        int64_t* r14_2 = nullptr
        
        do
            int512_t zmm2
            zmm2.o = arg2
            int32_t rax_15 = (*(*arg1 + 0x288))(arg1, *(r14_2 + arg1[7]), zmm2, arg3, arg4)
            
            if (rdi_1 s> rax_15 || rdi_1 == 0xffffffff)
                rdi_1 = rax_15
            
            i += 1
            r14_2 = &r14_2[1]
        while (i s< arg1[8].d)
    
    return zx.q(rdi_1)

if (rcx != 0 && (*(*rcx + 0x260))(rcx) != 0)
    int32_t rax_3
    uint128_t zmm6_1
    rax_3, zmm6_1 = sub_141fda9f0(&arg1[0xe], arg2, &data_143dbb1f8)
    int64_t r14_1 = sx.q(rax_3)
    *(r14_1 * 0x2c + arg1[0xe] + 0x28) = arg4.b
    int32_t rax_4
    int32_t i_1
    rax_4, i_1 = sub_141fda9f0(&arg1[0x11], zmm6_1, &data_143dbb1f8)
    int32_t rbx_1 = 0
    *(sx.q(rax_4) * 0x2c + arg1[0x11] + 0x28) = arg4.b
    int64_t rax_5 = sx.q(arg1[0x15].d)
    
    if (rax_5.d s> 0)
        int64_t rcx_6 = 0
        int32_t* rax_7 = arg1[0x14] + 8
        
        while (not(i_1 f<= *rax_7))
            rbx_1 += 1
            rcx_6 += 1
            rax_7 = &rax_7[3]
            
            if (rcx_6 s>= rax_5)
                break
    
    sub_142075310(&arg1[0x14], rbx_1, 1)
    int64_t r8 = sx.q(rbx_1) * 3
    *(arg1[0x14] + (r8 << 2) + 8) = i_1
    *(arg1[0x14] + (r8 << 2)) = 0
    (*(*arg1 + 0x2a0))(arg1, zx.q(r14_1.d), arg3)
    sub_141f55fe0(&arg1[0xe], arg1[0x17].d, 1)
    sub_141f55fe0(&arg1[0x11], *(arg1 + 0xbc), 1)
    return zx.q(r14_1.d)

return 0xffffffff
