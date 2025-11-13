// 函数: sub_14231a860
// 地址: 0x14231a860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = data_143f393d0
sub_140b34200("ClothInit", r12)

if (*(arg1 + 0x8b0) != 0)
    sub_141f3e8a0(arg1)
    int64_t* rcx_1 = *(arg1 + 0x8b0)
    (*(*rcx_1 + 0x70))(rcx_1)
    
    if (*(arg1 + 0x8b0) != 0)
        sub_141f3e8a0(arg1)
        int64_t* rcx_3 = *(arg1 + 0x8b0)
        (*(*rcx_3 + 0x48))(rcx_3)

int64_t rax_4 = *(arg1 + 0x430)

if (rax_4 != 0 && (*(arg1 + 0x88) & 1) != 0)
    if (*(rax_4 + 0x300) s<= 0)
        int64_t* rax_22 = sub_141f3bd70(arg1)
        int64_t* rcx_18 = *(arg1 + 0x8b0)
        
        if (rcx_18 != 0 && rax_22 != 0)
            int64_t r8_2 = *rcx_18
            (*(r8_2 + 0x50))(rcx_18, *(arg1 + 0x8b8), r8_2)
            int64_t* rcx_19 = *(arg1 + 0x8b0)
            (*(*rcx_19 + 0x48))(rcx_19)
            int64_t* rcx_20 = *(arg1 + 0x8b0)
            (*(*rcx_20 + 0x30))(rcx_20)
            (*(*rax_22 + 0x268))(rax_22, *(arg1 + 0x8b0))
            *(arg1 + 0x8b0) = 0
            *(arg1 + 0x8b8) = 0
    else
        if (*(arg1 + 0x780) != 0)
            void* rax_5 = sub_141d43b90()
            
            if (rax_5 == 0)
                goto label_14231a9cb
            
            int64_t* rdi_1 = *(arg1 + 0x780)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s<= rdi_1[7].d && *(rdi_1[6] + (rax_6 << 3)) == rax_5 + 0x30 && rdi_1 != 0)
                int64_t* rsi_1 = rdi_1[0x23]
                
                if (rsi_1 == 0)
                    (*(*rdi_1 + 0x390))(rdi_1)
                    rsi_1 = rdi_1[0x23]
                
                if (*(arg1 + 0x8b0) != 0)
                    goto label_14231a9d9
                
                int64_t* rax_10 = (*(*rsi_1 + 0x260))(rsi_1)
                *(arg1 + 0x8b0) = rax_10
                
                if (rax_10 != 0)
                    int64_t rdx_2 = *rax_10
                    (*(rdx_2 + 0x28))(rax_10, rdx_2)
                    int64_t* rcx_8 = *(arg1 + 0x8b0)
                    *(arg1 + 0x8b8) = (*(*rcx_8 + 0x18))(rcx_8)
                    
                    if ((*(*rsi_1 + 0x278))(rsi_1) != 0)
                        *(arg1 + 0x8c0) = (*(*rsi_1 + 0x280))(rsi_1)
        
    label_14231a9cb:
        
        if (*(arg1 + 0x8b0) != 0)
        label_14231a9d9:
            void* rcx_11 = *(arg1 + 0x430)
            int32_t rsi_2 = 0
            uint64_t var_28 = 0
            int32_t var_20_1 = 0
            sub_142312c10(rcx_11, &var_28)
            uint64_t rbp_1 = var_28
            int64_t r14_1 = sx.q(*(*(arg1 + 0x430) + 0x300))
            
            if (r14_1 s> 0)
                int64_t rdi_2 = 0
                
                do
                    int64_t r8_1 = *(*(*(arg1 + 0x430) + 0x2f8) + (rdi_2 << 3))
                    
                    if (r8_1 != 0)
                        uint64_t rax_19 = rbp_1
                        int64_t rdx_5 = (sx.q(var_20_1) << 3) + rbp_1
                        
                        if (rbp_1 != rdx_5)
                            do
                                if (*rax_19 == r8_1)
                                    int64_t* rcx_13 = *(arg1 + 0x8b0)
                                    (*(*rcx_13 + 8))(rcx_13, arg1, r8_1, zx.q(rsi_2))
                                    break
                                
                                rax_19 += 8
                            while (rax_19 != rdx_5)
                    
                    rsi_2 += 1
                    rdi_2 += 1
                while (rdi_2 s< r14_1)
            
            int64_t* rcx_14 = *(arg1 + 0x8b0)
            (*(*rcx_14 + 0x10))(rcx_14)
            sub_141f4f330(arg1)
            
            if (rbp_1 != 0)
                sub_140a74f90(rbp_1)

return sub_140b38680("ClothInit", r12) __tailcall
