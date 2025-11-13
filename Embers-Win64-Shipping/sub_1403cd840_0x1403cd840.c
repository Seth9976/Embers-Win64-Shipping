// 函数: sub_1403cd840
// 地址: 0x1403cd840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_58 = zmm6
int32_t r15 = 0

if (arg1 != 0)
    void* rsi_1 = arg2
    
    if (arg2 != 0 && arg4 != 0)
        int32_t* rdi_1 = arg3
        void* r13_1 = arg1
        int64_t rbp_1 = sx.q(arg4)
        int64_t rax_2 = sx.q(*(rsi_1 + 0x3c)) + rbp_1
        int32_t r12_1 = *(rsi_1 + 0x40)
        
        if (rax_2.d s<= r12_1)
            goto label_1403cd8d9
        
        int64_t r14_1 = *(rsi_1 + 0x48)
        
        if (r14_1 == 0)
            *(rsi_1 + 0x40) = arg4 + 8
            *(rsi_1 + 0x3c) = 0
            int64_t rax_28 = png_malloc_warn(r13_1, sx.q(arg4 + 8) * 0x38)
            *(rsi_1 + 0x48) = rax_28
            
            if (rax_28 == 0)
            label_1403cdbb1:
                r15 = 1
            else
                *(rsi_1 + 0xed) |= 0x40
                
                if (arg4 s> 0)
                    goto label_1403cd8e4
        else
            *(rsi_1 + 0x40) = (rax_2 + 8).d
            int64_t rax_4 = png_malloc_warn(r13_1, (rax_2 + 8) * 0x38)
            *(rsi_1 + 0x48) = rax_4
            
            if (rax_4 == 0)
                png_free(r13_1, r14_1)
            label_1403cdbb1_1:
                r15 = 1
            else
                memcpy(rax_4, r14_1, r12_1 * 0x38)
                png_free(r13_1, r14_1)
            label_1403cd8d9:
                
                if (arg4 s> 0)
                label_1403cd8e4:
                    int64_t r15_1 = 0
                    void* var_80_1 = r13_1
                    void* var_70_1 = rsi_1
                    int64_t var_78_1 = rbp_1
                    
                    do
                        uint8_t* lpMultiByteStr = *(rdi_1 + 8)
                        
                        if (lpMultiByteStr != 0)
                            if (*rdi_1 + 1 u< 4)
                                void* r14_2 = *(rsi_1 + 0x48)
                                int64_t r12_2 = sx.q(*(rsi_1 + 0x3c)) * 0x38
                                int32_t rax_8 = MultiByteToWideChar(0, 0, lpMultiByteStr, 
                                    0xffffffff, nullptr, 0)
                                int64_t var_88_1
                                int64_t rcx_4
                                
                                if (*rdi_1 s<= 0)
                                    var_88_1 = 0
                                    rcx_4 = 0
                                else
                                    uint8_t* lpMultiByteStr_1 = *(rdi_1 + 0x28)
                                    int64_t rax_10
                                    
                                    if (lpMultiByteStr_1 == 0)
                                        rax_10 = 0
                                    else
                                        rax_10 = sx.q(MultiByteToWideChar(0, 0, lpMultiByteStr_1, 
                                            0xffffffff, nullptr, 0))
                                    
                                    var_88_1 = rax_10
                                    uint8_t* lpMultiByteStr_2 = *(rdi_1 + 0x30)
                                    
                                    if (lpMultiByteStr_2 == 0)
                                        rcx_4 = 0
                                    else
                                        rcx_4 = sx.q(MultiByteToWideChar(0, 0, lpMultiByteStr_2, 
                                            0xffffffff, nullptr, 0))
                                
                                int32_t* r13_2 = r14_2 + r12_2
                                int64_t rbp_2 = sx.q(rax_8)
                                char* lpMultiByteStr_3 = *(rdi_1 + 0x10)
                                int64_t rsi_4
                                
                                if (lpMultiByteStr_3 == 0 || *lpMultiByteStr_3 == 0)
                                    if (*rdi_1 s<= 0)
                                        *r13_2 = 0xffffffff
                                    else
                                        *r13_2 = 1
                                    
                                    rsi_4 = 0
                                else
                                    rsi_4 = sx.q(MultiByteToWideChar(0, 0, lpMultiByteStr_3, 
                                        0xffffffff, nullptr, 0))
                                    *r13_2 = *rdi_1
                                
                                int64_t rax_17 =
                                    png_malloc_warn(r13_1, rsi_4 + var_88_1 + rbp_2 + rcx_4 + 4)
                                *(r14_2 + r12_2 + 8) = rax_17
                                
                                if (rax_17 == 0)
                                    goto label_1403cdbb1_1
                                
                                void* r13_4 = r14_2 + r12_2 + 8
                                memcpy(rax_17, *(rdi_1 + 8), rbp_2.d)
                                (*r13_4)[rbp_2] = 0
                                int64_t rbx_4
                                
                                if (*rdi_1 s<= 0)
                                    *(r14_2 + r12_2 + 0x28) = zx.o(0)
                                    rbx_4 = rbp_2
                                else
                                    int64_t rcx_8 = *r13_4 + rbp_2 + 1
                                    *(r14_2 + r12_2 + 0x28) = rcx_8
                                    memcpy(rcx_8, *(rdi_1 + 0x28), var_88_1.d)
                                    (*(r14_2 + r12_2 + 0x28))[var_88_1] = 0
                                    int64_t rcx_10 = *(r14_2 + r12_2 + 0x28) + var_88_1 + 1
                                    r13_4 = r14_2 + r12_2 + 0x30
                                    *(r14_2 + r12_2 + 0x30) = rcx_10
                                    rbx_4 = rcx_4
                                    memcpy(rcx_10, *(rdi_1 + 0x30), rbx_4.d)
                                    (*(r14_2 + r12_2 + 0x30))[rbx_4] = 0
                                
                                char* rcx_12 = *r13_4 + rbx_4 + 1
                                *(r14_2 + r12_2 + 0x10) = rcx_12
                                
                                if (rsi_4 != 0)
                                    memcpy(rcx_12, *(rdi_1 + 0x10), rsi_4.d)
                                    rcx_12 = *(r14_2 + r12_2 + 0x10)
                                
                                r13_1 = var_80_1
                                rcx_12[rsi_4] = 0
                                int32_t temp0_1 = *r13_2
                                int64_t rax_25 = rsi_4
                                
                                if (temp0_1 s> 0)
                                    rax_25 = 0
                                
                                if (temp0_1 s<= 0)
                                    rsi_4 = 0
                                
                                *(r14_2 + r12_2 + 0x18) = rax_25
                                *(r14_2 + r12_2 + 0x20) = rsi_4
                                rsi_1 = var_70_1
                                *(rsi_1 + 0x3c) += 1
                                rbp_1 = var_78_1
                            else
                                png_warning(r13_1, "text compression mode is out of range", 
                                    lpMultiByteStr)
                        
                        r15_1 += 1
                        rdi_1 = &rdi_1[0xe]
                    while (r15_1 s< rbp_1)
                    
                    r15 = 0

return zx.q(r15)
