// 函数: sub_14197b8a0
// 地址: 0x14197b8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg1[0x1f].b != 0 && *(arg2 + 0x34) u> 0 && *(arg2 + 0x38) u> 0 && *(arg2 + 0x68) == 0)
    int32_t rsi_1 = 0
    int16_t* var_58 = nullptr
    int32_t var_50_1 = 0
    int16_t* var_48 = nullptr
    int32_t var_40_1 = 0
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 2)
    int32_t rax = var_60_1 + 2
    var_60_1 = rax
    
    if (rax s> 0)
        sub_140594770(&var_68)
    
    int64_t rdi_1 = var_68
    UnDecorator::getReferenceType(rdi_1, &data_142d404d4, 4)
    char rax_1 = sub_14060a620(arg2 + 0x48, &var_68, &var_58, &var_48, 0, 0)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    uint64_t rcx_22
    int16_t* r12_2
    int16_t* r15_2
    
    if (rax_1 == 0)
        int32_t rax_13 = *(arg2 + 0x50)
        int16_t* rdi_2
        
        if (rax_13 == 0)
            rdi_2 = &data_142d40450
        else
            rdi_2 = *(arg2 + 0x48)
        
        int32_t rcx_24 = rax_13 - 1
        
        if (rax_13 == 0)
            rcx_24 = 0
        
        result = sub_14195cdb0(&arg1[0x14], sub_1405969c0(rcx_24, rdi_2), arg2 + 0x48)
        rcx_22 = zx.q(*(arg2 + 0x34))
        r15_2 = var_48
        r12_2 = var_58
    else
        r12_2 = var_58
        int32_t rcx_5
        int16_t* rdx_2
        
        if (var_50_1 == 0)
            rdx_2 = &data_142d40450
            rcx_5 = 0
        else
            rdx_2 = r12_2
            rcx_5 = var_50_1 - 1
        
        int32_t rax_2 = sub_1405969c0(rcx_5, rdx_2)
        int64_t* rax_5
        
        if (arg1[1].d == *(arg1 + 0x34))
        label_14197ba2f:
            rax_5 = sub_14195cbb0(arg1, rax_2, &var_58)
            r12_2 = var_58
        else
            void* rdx_3 = arg1[8]
            void* r9_2 = &arg1[7]
            
            if (rdx_3 != 0)
                r9_2 = rdx_3
            
            int32_t rbx_1 = *(r9_2 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
            
            if (rbx_1 == 0xffffffff)
                goto label_14197ba2f
            
            void* rdx_4 = *arg1
            int64_t r15_1
            
            while (true)
                r15_1 = sx.q(rbx_1) * 0x28
                void* rcx_9 = rdx_4 + r15_1
                int16_t* rdx_5 = &data_142d40450
                
                if (var_50_1 != 0)
                    rdx_5 = r12_2
                
                int16_t* const rcx_10
                
                if (*(rcx_9 + 8) == 0)
                    rcx_10 = &data_142d40450
                else
                    rcx_10 = *rcx_9
                
                if (sub_140a54510(rcx_10, rdx_5) == 0)
                    break
                
                rdx_4 = *arg1
                rbx_1 = *(r15_1 + rdx_4 + 0x20)
                
                if (rbx_1 == 0xffffffff)
                    goto label_14197ba2f
            
            if (rbx_1 == 0xffffffff)
                goto label_14197ba2f
            
            void* rax_6 = *arg1
            
            if (rax_6 == neg.q(r15_1))
                goto label_14197ba2f
            
            rax_5 = rax_6 + r15_1 + 0x10
        
        r15_2 = var_48
        *rax_5 += zx.q(*(arg2 + 0x34))
        rax_5[1].d += 1
        int16_t* rdx_7
        
        if (var_40_1 == 0)
            rdx_7 = &data_142d40450
        else
            rdx_7 = r15_2
            rsi_1 = var_40_1 - 1
        
        int32_t rax_8 = sub_1405969c0(rsi_1, rdx_7)
        
        if (arg1[0xb].d == *(arg1 + 0x84))
        label_14197bb0c:
            result = sub_14195cbb0(&arg1[0xa], rax_8, &var_48)
            r15_2 = var_48
            rcx_22 = zx.q(*(arg2 + 0x34))
        else
            void* r9_3 = &arg1[0x11]
            void* rdx_8 = *(r9_3 + 8)
            
            if (rdx_8 != 0)
                r9_3 = rdx_8
            
            int32_t rbx_2 = *(r9_3 + (((sx.q(arg1[0x13].d) - 1) & sx.q(rax_8)) << 2))
            
            if (rbx_2 == 0xffffffff)
                goto label_14197bb0c
            
            void* rdx_9 = arg1[0xa]
            int64_t rsi_2
            
            while (true)
                rsi_2 = sx.q(rbx_2) * 0x28
                int64_t* rcx_18 = rdx_9 + rsi_2
                int16_t* rdx_10 = &data_142d40450
                
                if (var_40_1 != 0)
                    rdx_10 = r15_2
                
                int16_t* const rcx_19
                
                if (rcx_18[1].d == 0)
                    rcx_19 = &data_142d40450
                else
                    rcx_19 = *rcx_18
                
                if (sub_140a54510(rcx_19, rdx_10) == 0)
                    break
                
                rdx_9 = arg1[0xa]
                rbx_2 = *(rsi_2 + rdx_9 + 0x20)
                
                if (rbx_2 == 0xffffffff)
                    goto label_14197bb0c
            
            if (rbx_2 == 0xffffffff)
                goto label_14197bb0c
            
            void* rax_11 = arg1[0xa]
            
            if (rax_11 == neg.q(rsi_2))
                goto label_14197bb0c
            
            result = rax_11 + rsi_2 + 0x10
            rcx_22 = zx.q(*(arg2 + 0x34))
    
    *result += rcx_22
    result[1].d += 1
    
    if (r15_2 != 0)
        result = sub_140a74f90(r15_2)
    
    if (r12_2 != 0)
        return sub_140a74f90(r12_2)

return result
