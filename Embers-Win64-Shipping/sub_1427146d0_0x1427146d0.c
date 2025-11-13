// 函数: sub_1427146d0
// 地址: 0x1427146d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (*(arg1 + 0x1b9) s>= 0)
label_142714746:
    
    if ((*(arg1 + 0x275) & 0x20) != 0 && (*(arg1 + 0x274) & 4) == 0)
        void* rcx_2 = *(arg1 + 0x100)
        
        if (rcx_2 != 0)
            int32_t rdx_1 = *(rcx_2 + 0x98)
            
            if (((rdx_1 u>> 2).b & 1) == 0 && test_bit(rdx_1, 0xa)
                    && sub_140d3c6e0(rcx_2 + 0x40) != 0)
                uint64_t var_18[0x2]
                uint64_t* rax_2 = sub_142657860(*(arg1 + 0x100), &var_18)
                *arg2 = *rax_2
                arg2[1].d = rax_2[1].d
                int32_t rax_3
                rax_3.b = 1
                return rax_3
else
    void* rdi_1 = *(arg1 + 0x100)
    
    if (rdi_1 == 0)
        goto label_142714746
    
    int32_t* rcx
    
    if (*(rdi_1 + 0x70) != data_143b580b8)
        rcx = *(rdi_1 + 0x78)
        
        if (rcx != 0)
            rax = sub_14268a5a0(rcx, &data_143b580b8)
    
    if (*(rdi_1 + 0x70) == data_143b580b8 || (rcx != 0 && rax.b != 0))
        rax.b = 1
    else
        rax.b = 0
    
    void* const rcx_1 = nullptr
    
    if (rax.b != 0)
        rcx_1 = rdi_1
    
    if (rcx_1 == 0)
        goto label_142714746
    
    int32_t rdx = *(rcx_1 + 0x150)
    
    if (*(rcx_1 + 0x160) == rdx - 1 && rdx s> 0)
        goto label_142714746

rax.b = 0
return rax
