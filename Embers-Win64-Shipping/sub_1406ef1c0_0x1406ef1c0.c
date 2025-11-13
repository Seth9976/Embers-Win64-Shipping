// 函数: sub_1406ef1c0
// 地址: 0x1406ef1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_11
void var_18

if (arg3[0x86].b == 0)
    void*** rax_14 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_14 != 0)
        rax_14[1] = arg1
        *rax_14 = &data_142da5c28
        rax_14[3] = sub_140a387b0()
        *rax_14 = &data_142da5c80
    
    rax_11 = &var_18
    
    if (&var_18 == arg4)
        goto label_1406ef3a2
    
    if (rax_14 != 0)
        rax_11 = (*rax_14)[8](rax_14, arg4)
    label_1406ef3a2:
        
        if (rax_14 != 0)
            (*rax_14)[7](rax_14, 0)
            rax_11 = sub_140a84c80(rax_14, 0, 0)
            
            if (rax_11 != 0)
                return sub_140a74f90(rax_11) __tailcall
    else if (arg4[1].d != 0)
        void* rcx_15 = *arg4
        
        if (rcx_15 != 0)
            void* rax_20 = (*(*rcx_15 + 0x38))(rcx_15, 0)
            void* rcx_16 = *arg4
            
            if (rcx_16 != 0)
                rax_20 = sub_140a84c80(rcx_16, 0, 0)
                *arg4 = rax_20
            
            arg4[1].d = 0
            return rax_20
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
            *rax_6 = &data_142da5b78
            rax_6[3] = sub_140a387b0()
            *rax_6 = &data_142da5bd0
    else if (rax_6 != 0)
        rax_6[1] = arg1
        *rax_6 = &data_142da5ac8
        rax_6[3] = sub_140a387b0()
        *rax_6 = &data_142da5b20
    
    rax_11 = &var_18
    
    if (&var_18 == arg4)
        goto label_1406ef2dc
    
    if (rax_6 != 0)
        rax_11 = (*rax_6)[8](rax_6, arg4)
    label_1406ef2dc:
        
        if (rax_6 != 0)
            (*rax_6)[7](rax_6, 0)
            rax_11 = sub_140a84c80(rax_6, 0, 0)
            
            if (rax_11 != 0)
                return sub_140a74f90(rax_11)
    else if (arg4[1].d != 0)
        void* rcx_8 = *arg4
        
        if (rcx_8 != 0)
            rax_11 = (*(*rcx_8 + 0x38))(rcx_8, 0)
            void* rcx_9 = *arg4
            
            if (rcx_9 != 0)
                rax_11 = sub_140a84c80(rcx_9, 0, 0)
                *arg4 = rax_11
            
            arg4[1].d = 0
return rax_11
