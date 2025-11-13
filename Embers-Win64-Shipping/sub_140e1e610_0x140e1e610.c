// 函数: sub_140e1e610
// 地址: 0x140e1e610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x768) != 0 && sub_140e19840(arg1, arg5) != 0)
    int64_t rbp_1 = data_143e1e008
    int64_t* rsi_1 = data_143e1e018
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    int64_t* r15_1 = *(arg4 + 0x30)
    int32_t rbx_1
    
    if (r15_1[1].d != *(r15_1 + 0x34))
        int32_t rax_4 = sub_140b5ead0(rbp_1.d) + rbp_1:4.d
        void* r9 = &r15_1[7]
        void* rcx_1 = *(r9 + 8)
        
        if (rcx_1 != 0)
            r9 = rcx_1
        
        rbx_1 = *(r9 + (((sx.q(r15_1[9].d) - 1) & sx.q(rax_4)) << 2))
    
    if (r15_1[1].d == *(r15_1 + 0x34) || rbx_1 == 0xffffffff)
    label_140e1e6c6:
        rbx_1 = -1
    else
        int64_t rcx_2 = *r15_1
        
        while (true)
            int64_t rax_7 = sx.q(rbx_1) << 5
            
            if (*(rax_7 + rcx_2) == rbp_1)
                break
            
            rbx_1 = *(rax_7 + rcx_2 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140e1e6c6
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp1_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    if (rbx_1 != 0xffffffff && *(arg1 + 0x718) != 0xa)
        float zmm0[0x4] = *(arg4 + 0x28)
        arg5.o = *(arg4 + 0x2c)
        zmm0[0] = zmm0[0] f+ *(arg1 + 0x790)
        arg5.d = arg5.d f+ *(arg1 + 0x794)
        sub_140e1c780(arg1, _mm_unpacklo_ps(zmm0, arg5.q)[0].q)
        sub_140e194c0(arg2)
        return arg2

*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
