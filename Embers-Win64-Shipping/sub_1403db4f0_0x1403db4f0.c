// 函数: sub_1403db4f0
// 地址: 0x1403db4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg3
int32_t rax = *(arg1 + 0x464)

if (rax == 0)
label_1403db538:
    int32_t rax_2 = *(arg1 + 0x154)
    
    if ((rax_2.b & 4) != 0 && *(arg1 + 0x254) != 0x54414449)
        *(arg1 + 0x154) = rax_2 | 8
    
    if ((*(arg1 + 0x254) & 0x20) == 0)
        rax_2 = png_handle_as_unknown(arg1, arg1 + 0x254)
    
    if ((*(arg1 + 0x254) & 0x20) == 0 && rax_2 != 3 && *(arg1 + 0x3f8) == 0)
    label_1403db683:
        png_chunk_error(arg1, "unknown critical chunk")
        noreturn
    
    if (*(arg1 + 0x158) s< 0 || *(arg1 + 0x3f8) != 0)
        rax_2.b = *(arg1 + 0x258)
        *(arg1 + 0x474) = rax_2.b
        *(arg1 + 0x470) = *(arg1 + 0x254)
        *(arg1 + 0x474) = 0
        uint64_t rdi_1 = zx.q(rbp)
        *(arg1 + 0x480) = rdi_1
        
        if (rbp == 0)
            *(arg1 + 0x478) = 0
        else
            void* rax_4 = png_malloc(arg1, rdi_1)
            *(arg1 + 0x478) = rax_4
            sub_1403cc480(arg1, rax_4, rdi_1)
            sub_1403be770(arg1, rax_4, rdi_1.d)
        
        int64_t rax_5 = *(arg1 + 0x3f8)
        
        if (rax_5 == 0)
            png_set_unknown_chunks(arg1, arg2, arg1 + 0x470, 1)
        else
            int32_t rax_6 = rax_5(arg1, arg1 + 0x470)
            
            if (rax_6 s< 0)
                png_chunk_error(arg1, "error in user chunk")
                noreturn
            
            if (rax_6 == 0)
                if ((*(arg1 + 0x254) & 0x20) != 0)
                    png_set_unknown_chunks(arg1, arg2, arg1 + 0x470, 1)
                else
                    if (png_handle_as_unknown(arg1, arg1 + 0x254) != 3)
                        goto label_1403db683
                    
                    png_set_unknown_chunks(arg1, arg2, arg1 + 0x470, 1)
        
        png_free(arg1, *(arg1 + 0x478))
        *(arg1 + 0x478) = 0
        rbp = 0
else if (rax != 1)
    *(arg1 + 0x464) = rax - 1
    
    if (rax != 2)
        goto label_1403db538
    
    png_warning(arg1, "No space in chunk cache for unknown chunk")

return sub_1403d8880(arg1, rbp) __tailcall
