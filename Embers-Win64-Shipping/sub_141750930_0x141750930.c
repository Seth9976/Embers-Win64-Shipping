// 函数: sub_141750930
// 地址: 0x141750930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140b4e7c0(arg1, &data_1439a9538) s< 4)
label_141750ac8:
    void*** rax_6 = j_sub_140a82f30(0x98)
    
    if (rax_6 != 0)
        rax_6[1].w = 0x100
        *rax_6 = &data_142fc49a8
        rax_6[2] = 0
        rax_6[3] = 0
        __builtin_memset(&rax_6[0xc], 0, 0x30)
        rax_6[0xa] = 0
        rax_6[0xb].d = 0
        rax_6[0x12].d = 0x47c35000
        return rax_6
else
    uint32_t rax
    
    if ((arg1[5].b & 1) == 0)
        rax = zx.d(*(arg2 + 8))
    else
        rax.b = 0
    
    int64_t* rcx = arg1[1]
    char arg_18 = rax.b
    char* rdx = *rcx
    
    if (&rdx[1] u> rcx[1])
        (*(*arg1 + 0x150))(arg1, &arg_18, 1)
    else
        arg_18 = *rdx
        *rcx += 1
    
    int32_t rcx_2 = sx.d(arg_18)
    
    if (rcx_2 == 0)
        if ((arg1[5].b & 1) != 0)
            goto label_141750ac8
    else
        void*** rax_5
        void** const rcx_4
        
        if (rcx_2 != 1)
            if (rcx_2 != 2)
                return 0
            
            if ((arg1[5].b & 1) != 0)
                rax_5 = j_sub_140a82f30(0xc0)
                
                if (rax_5 != 0)
                    rax_5[1].w = 0x102
                    rcx_4 = &data_142fc5920
                    goto label_1417509ed
        else if ((arg1[5].b & 1) != 0)
            rax_5 = j_sub_140a82f30(0xc0)
            
            if (rax_5 != 0)
                rax_5[1].w = 0x101
                rcx_4 = &data_142fc58b0
            label_1417509ed:
                *rax_5 = rcx_4
                __builtin_memset(&rax_5[5], 0, 0x50)
                __builtin_memcpy(&rax_5[2], 
                    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\x"
                "ff\xff\x7f\xff", 
                    0x18)
                rax_5[0xf].d = 0xc
                *(rax_5 + 0x7c) = 0x10
                rax_5[0x10] = 0x47c35000
                __builtin_memset(&rax_5[0x12], 0, 0x30)
                return rax_5

return 0
