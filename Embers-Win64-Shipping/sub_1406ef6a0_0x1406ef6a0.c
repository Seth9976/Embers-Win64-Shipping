// 函数: sub_1406ef6a0
// 地址: 0x1406ef6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_10
void var_18

if (arg3[0x86].b == 0)
    void*** rax_13 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_13 != 0)
        rax_13[1] = arg1
        *rax_13 = &data_142da61a8
        rax_13[3] = sub_140a387b0()
        *rax_13 = &data_142da6200
    
    rax_10 = &var_18
    
    if (&var_18 == arg4)
        goto label_1406ef882
    
    if (rax_13 != 0)
        rax_10 = (*rax_13)[8](rax_13, arg4)
    label_1406ef882:
        
        if (rax_13 != 0)
            (*rax_13)[7](rax_13, 0)
            rax_10 = sub_140a84c80(rax_13, 0, 0)
            
            if (rax_10 != 0)
                return sub_140a74f90(rax_10) __tailcall
    else if (arg4[1].d != 0)
        void* rcx_15 = *arg4
        
        if (rcx_15 != 0)
            void* rax_19 = (*(*rcx_15 + 0x38))(rcx_15, 0)
            void* rcx_16 = *arg4
            
            if (rcx_16 != 0)
                rax_19 = sub_140a84c80(rcx_16, 0, 0)
                *arg4 = rax_19
            
            arg4[1].d = 0
            return rax_19
else
    void* rax = *(arg3 + 0x58)
    void* r15_1 = nullptr
    
    if (rax != 0)
        r15_1 = *(**(rax + 0x58) + (sx.q(arg3[0x1a]) << 3))
        void* rax_3 = sub_140d3c6e0(arg3)
        
        if (rax_3 != 0)
            void* rax_4 = sub_142591550()
            void* rcx_1 = *(rax_3 + 0x10)
            int64_t rdx_1 = sx.q(*(rax_4 + 0x38))
            
            if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == rax_4 + 0x30
                    && *(rax_3 + 0x430) != 0)
                sub_141f66050(rax_3, arg3[0x1a])
    
    char rbx_1 = *(r15_1 + 0xb0)
    void*** rax_6 = sub_140a84c80(0, 0x20, 0)
    
    if (rbx_1 == 0)
        if (rax_6 != 0)
            rax_6[1] = arg1
            *rax_6 = &data_142da61a8
            rax_6[3] = sub_140a387b0()
            *rax_6 = &data_142da6200
    else if (rax_6 != 0)
        rax_6[1] = arg1
        *rax_6 = &data_142da61a8
        rax_6[3] = sub_140a387b0()
        *rax_6 = &data_142da6200
    
    rax_10 = &var_18
    
    if (&var_18 == arg4)
        goto label_1406ef7bc
    
    if (rax_6 != 0)
        rax_10 = (*rax_6)[8](rax_6, arg4)
    label_1406ef7bc:
        
        if (rax_6 != 0)
            (*rax_6)[7](rax_6, 0)
            rax_10 = sub_140a84c80(rax_6, 0, 0)
            
            if (rax_10 != 0)
                return sub_140a74f90(rax_10)
    else if (arg4[1].d != 0)
        void* rcx_8 = *arg4
        
        if (rcx_8 != 0)
            rax_10 = (*(*rcx_8 + 0x38))(rcx_8, 0)
            void* rcx_9 = *arg4
            
            if (rcx_9 != 0)
                rax_10 = sub_140a84c80(rcx_9, 0, 0)
                *arg4 = rax_10
            
            arg4[1].d = 0
return rax_10
