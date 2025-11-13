// 函数: sub_140ac1090
// 地址: 0x140ac1090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockShared(arg1 + 0x98)
int64_t* rdi = *(arg1 + 0xa0)
int64_t rax = sx.q(*(arg1 + 0xa8))
void* var_68 = arg2
void* r12 = &rdi[rax]
int32_t rbp_1

if (rdi == r12)
label_140ac1129:
    rbp_1 = 1
else
    rbp_1 = 0
    
    while (true)
        void* r14_1 = *rdi
        int32_t arg_8
        sub_140aaae20(r14_1 + 8, &arg_8, arg2 + 0x11c)
        int64_t rax_2 = sx.q(arg_8)
        void* const rcx_4
        
        if (rax_2.d == 0xffffffff)
            rcx_4 = nullptr
        else
            rcx_4 = (rax_2 << 5) + *(r14_1 + 8)
        
        char* rdx_1 = rcx_4 + 0xc
        
        if (rcx_4 == 0)
            rdx_1 = nullptr
        
        if (rdx_1 != 0)
            int64_t var_60_1 = *(r14_1 + 0x58)
            int64_t var_48_1 = *(r14_1 + 0x60)
            int64_t r8_2 = *(arg2 + 0x128)
            int64_t rcx_15 = ((((zx.q(*rdx_1) << 8 | zx.q(rdx_1[1])) << 8 | zx.q(rdx_1[2])) << 8
                | zx.q(rdx_1[3])) << 8 | zx.q(rdx_1[4])) + r8_2
            uint64_t rsi_9 = (((zx.q(rdx_1[5]) << 8 | zx.q(rdx_1[6])) << 8 | zx.q(rdx_1[7])) << 8
                | zx.q(rdx_1[8])) << 8 | zx.q(rdx_1[9])
            int64_t var_50_1
            int64_t rsi_10
            
            if (r8_2 u<= rsi_9)
                int64_t rax_14 = *(arg2 + 0x130)
                rsi_10 = rsi_9 - r8_2
                
                if (rax_14 u<= rsi_10)
                    rsi_10 = rax_14
                
                var_50_1 = rsi_10
            else
                rsi_10 = 0
                var_50_1 = 0
            
            *(arg2 + 0x150) = 0
            
            if (rsi_10 != 0)
                int64_t r14_2 = *(arg2 + 0x138)
                
                if (r14_2 != 0)
                    int64_t* rax_15 = j_sub_140a82f30(0x20)
                    int64_t* rdi_1 = rax_15
                    
                    if (rax_15 == 0)
                        rdi_1 = nullptr
                    else
                        *(rax_15 + 0xc) = 0
                        rax_15[2] = 0
                        rax_15[1].d = rsi_10.d
                        rax_15[3].b = (rsi_10 u>> 0x20).b
                        *rax_15 = r14_2
                        *(rax_15 + 0x19) = 0
                    
                    if (rdi_1 != 0)
                        *(rdi_1 + 0xc) += 1
                    
                    void arg_10
                    
                    if (var_68 + 0x148 != &arg_10)
                        int64_t* rcx_16 = *(var_68 + 0x148)
                        *(var_68 + 0x148) = rdi_1
                        
                        if (rcx_16 != 0)
                            sub_140abfb60(rcx_16)
                    else if (rdi_1 != 0)
                        int32_t rax_18 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (rax_18 == 1)
                            if ((*(rdi_1 + 0x19) & rax_18.b) != 0)
                                sub_140a74f90(*rdi_1)
                            
                            int64_t* rcx_18 = rdi_1[2]
                            
                            if (rcx_18 != 0)
                                sub_140abfb60(rcx_18)
                            
                            j_sub_140a74f90(rdi_1)
                
                sub_140a3f590(arg1, &var_68)
                int64_t r8_3 = *(arg1 + 0x1b0)
                uint32_t temp0_2 = (divu.dp.q(0:rcx_15, r8_3)).d
                uint32_t temp0_3 = (divu.dp.q(0:(var_50_1 + rcx_15 - 1), r8_3)).d
                sub_140ab9aa0(arg1, temp0_2, &var_68)
                
                if (temp0_3 - temp0_2 + 1 u> 1)
                    if (temp0_3 - temp0_2 + 1 u> 2)
                        sub_140ab9d70(arg1, temp0_2 + 1, temp0_3 - temp0_2 - 1, &var_68)
                    
                    sub_140ab9aa0(arg1, temp0_3, &var_68)
            
            break
        
        rdi = &rdi[1]
        
        if (rdi == r12)
            goto label_140ac1129

ReleaseSRWLockShared(arg1 + 0x98)
return zx.q(rbp_1)
