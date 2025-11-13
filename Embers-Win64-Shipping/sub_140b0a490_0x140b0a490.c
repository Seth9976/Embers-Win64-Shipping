// 函数: sub_140b0a490
// 地址: 0x140b0a490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439a4a38 == data_1439a4a64)
label_140b0a519:
    void* rax_6 = sub_140b195d0(arg2)
    void*** rax_7
    void* rdx_3
    rax_7, rdx_3 = sub_140a84c80(0, 0x60, 0)
    
    if (rax_7 != 0)
        *rax_7 = &data_142e768f8
        rax_7[2] = *arg3
        rax_7[4] = 0
        
        if (rax_7[2] != 0)
            void* rax_8 = arg3[2]
            void* rcx_4 = &arg3[4]
            
            if (rax_8 != 0)
                rcx_4 = rax_8
            
            (**rcx_4)(rcx_4)
        
        rax_7[0xb] = sub_140a387b0()
        *rax_7 = &data_142e76950
    
    if (rax_7 != 0)
        rdx_3.b = 1
        sub_140599630(rax_6, rdx_3.b)
        void var_28
        (*rax_7)[6](rax_7, &var_28)
        int64_t rbp_1 = sx.q(*(rax_6 + 8))
        int32_t rax_12 = (rbp_1 + 1).d
        *(rax_6 + 8) = rax_12
        
        if (rax_12 s> *(rax_6 + 0xc))
            sub_1405a4f90(rax_6)
        
        void**** rax_15 = (rbp_1 << 4) + *rax_6
        *rax_15 = rax_7
        rax_15[1].d = 6
else
    void* rcx = data_1439a4a70
    void* rax_4 = &data_1439a4a68
    
    if (rcx != 0)
        rax_4 = rcx
    
    int32_t rax_5 = *(rax_4 + ((sx.q(data_1439a4a78 - 1) & zx.q(arg2)) << 2))
    
    if (rax_5 == 0xffffffff)
        goto label_140b0a519
    
    int64_t r9_1 = data_1439a4a30
    int64_t rdx_2
    
    while (true)
        rdx_2 = sx.q(rax_5) * 3
        
        if (*(r9_1 + (rdx_2 << 2)) == arg2)
            break
        
        rax_5 = *(r9_1 + (rdx_2 << 2) + 4)
        
        if (rax_5 == 0xffffffff)
            goto label_140b0a519
    
    if (rax_5 == 0xffffffff)
        goto label_140b0a519
    
    void* rax_19 = arg3[2]
    void* rcx_9 = &arg3[4]
    
    if (rax_19 != 0)
        rcx_9 = rax_19
    
    (*arg3)((*(*rcx_9 + 8))(rcx_9, rdx_2))

if (*arg3 != 0)
    void* rax_16 = arg3[2]
    void* rcx_8 = &arg3[4]
    
    if (rax_16 != 0)
        rcx_8 = rax_16
    
    (*(*rcx_8 + 0x10))(rcx_8)

return arg1
