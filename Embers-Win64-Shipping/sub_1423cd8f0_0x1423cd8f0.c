// 函数: sub_1423cd8f0
// 地址: 0x1423cd8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*arg2 == 0)
label_1423cd94d:
    int64_t var_18
    int64_t* rax_3 = sub_140d30800(arg1, &var_18)
    int16_t* const rdi_1 = &data_142d40450
    int16_t* rbp_1
    
    if (rax_3[1].d == 0)
        rbp_1 = &data_142d40450
    else
        rbp_1 = *rax_3
    
    void* rax_5 = sub_140d2f240(sub_142492900(), 0, rbp_1, 0, 0, 0)
    int64_t rcx_3 = var_18
    *arg2 = rax_5
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    if (*arg2 == 0)
    label_1423cd9d4:
        sub_140d1ffa0(arg1)
        int64_t* rax_9 = sub_140d30800(arg1, &var_18)
        
        if (rax_9[1].d != 0)
            rdi_1 = *rax_9
        
        void* rax_11 = sub_140d2f240(sub_142492900(), 0, rdi_1, 0, 0, 0)
        int64_t rcx_8 = var_18
        *arg2 = rax_11
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    else
        void* rax_6 = sub_142492900()
        
        if (rax_6 == 0)
            goto label_1423cd9d4
        
        void* rdx_2 = *arg2
        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
        
        if (rax_7.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30
                || rdx_2 == 0)
            goto label_1423cd9d4
    
    if (*arg2 == 0)
        result = sub_142492900()
        *arg2 = result
    else
        void* rax_12 = sub_142492900()
        
        if (rax_12 == 0)
            result = sub_142492900()
            *arg2 = result
        else
            void* rdx_4 = *arg2
            int64_t rax_13 = sx.q(*(rax_12 + 0x38))
            
            if (rax_13.d s> *(rdx_4 + 0x38))
                result = sub_142492900()
                *arg2 = result
            else
                result = *(rdx_4 + 0x30)
                
                if (*(result + (rax_13 << 3)) != rax_12 + 0x30 || rdx_4 == 0)
                    result = sub_142492900()
                    *arg2 = result
else
    void* rax_1 = sub_142492900()
    
    if (rax_1 == 0)
        goto label_1423cd94d
    
    void* rdx = *arg2
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38))
        goto label_1423cd94d
    
    result = *(rdx + 0x30)
    
    if (*(result + (rax_2 << 3)) != rax_1 + 0x30 || rdx == 0)
        goto label_1423cd94d

return result
