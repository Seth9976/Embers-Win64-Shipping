// 函数: sub_14244ea30
// 地址: 0x14244ea30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d21d80(arg1)
void* result_1 = result

if (result != 0 && *(arg1 + 0xb8) != 0)
    void var_128
    sub_14244c000(&var_128)
    uint64_t* rdi_1 = nullptr
    void* rdx_1 = *(*(arg1 + 0xb8) + 0x560)
    
    if (rdx_1 != 0)
        int64_t rcx_2 = sx.q(*(rdx_1 + 0x40))
        int32_t r11_1 = 0
        int64_t i = *(result_1 + 0x18)
        
        if (rcx_2.d s> 0)
            int64_t* rbp_1 = *(rdx_1 + 0x38)
            int64_t r10_1 = 0
            int64_t* r9_1 = rbp_1
            
            while (true)
                if (*r9_1 != i)
                    int64_t* rdx_2 = r9_1[1]
                    void* r8_1 = &rdx_2[sx.q(r9_1[2].d)]
                    
                    if (rdx_2 == r8_1)
                    label_14244ead4:
                        r11_1 += 1
                        r10_1 += 1
                        r9_1 = &r9_1[0x16]
                        
                        if (r10_1 s>= rcx_2)
                            break
                        
                        continue
                    else
                        while (*rdx_2 != i)
                            rdx_2 = &rdx_2[1]
                            
                            if (rdx_2 == r8_1)
                                goto label_14244ead4
                
                if (r11_1 == 0xffffffff)
                    break
                
                void* rdx_3 = sx.q(r11_1) * 0xb0
                
                if (rdx_3 != neg.q(rbp_1))
                    sub_14244c280(&var_128, rdx_3 + rbp_1 + 0x18)
                
                break
    
    void var_98
    result = sub_14244c5a0(&var_128, sub_14244c000(&var_98))
    char rbx_2 = result.b
    int64_t var_20
    
    if (var_20 != 0)
        result = sub_140a74f90(var_20)
    
    int64_t var_30
    
    if (var_30 != 0)
        result = sub_140a74f90(var_30)
    
    int64_t var_60
    
    if (var_60 != 0)
        result = sub_140a74f90(var_60)
    
    if (rbx_2 == 0)
        uint64_t* rax_2 = j_sub_140a82f30(0x90)
        
        if (rax_2 != 0)
            rdi_1 = sub_14244bef0(rax_2, &var_128)
        
        result = result_1 + 0x90
        void arg_10
        
        if (result != &arg_10)
            uint64_t* rbx_3 = *result
            *result = rdi_1
            
            if (rbx_3 != 0)
                int64_t rcx_11 = rbx_3[0xf]
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                int64_t rcx_12 = rbx_3[0xd]
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                int64_t rcx_13 = rbx_3[7]
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                result = j_sub_140a74f90(rbx_3)
        else if (rdi_1 != 0)
            int64_t rcx_14 = rdi_1[0xf]
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            int64_t rcx_15 = rdi_1[0xd]
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            int64_t rcx_16 = rdi_1[7]
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            result = j_sub_140a74f90(rdi_1)
    
    int64_t var_b0
    
    if (var_b0 != 0)
        result = sub_140a74f90(var_b0)
    
    int64_t var_c0
    
    if (var_c0 != 0)
        result = sub_140a74f90(var_c0)
    
    int64_t var_f0
    
    if (var_f0 != 0)
        return sub_140a74f90(var_f0)

return result
