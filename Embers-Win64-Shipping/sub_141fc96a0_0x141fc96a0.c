// 函数: sub_141fc96a0
// 地址: 0x141fc96a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg3 == 0 || (*(arg3 + 0xb0) & 0x4000) == 0 || *(arg1 + 0x98) s<= 0)
label_141fc9815:
    result = sub_14217be90(arg1, arg2)
    
    if (result.b == 0)
        return result
else
    void* rcx = **(arg1 + 0x90)
    
    if (rcx == 0 || *(rcx + 0x134) == 1)
        goto label_141fc9815
    
    int64_t r12
    r12.b = 1
    int64_t var_38
    sub_140d21e10(arg3, &var_38, 0)
    uint64_t rdi_1 = 0
    int64_t rbx_1 = var_38
    uint64_t var_48 = 0
    int32_t var_30
    
    if (var_30 != 0)
        sub_1405a4c70(&var_48, var_30, 0)
        rdi_1 = var_48
        memcpy(rdi_1, rbx_1, var_30 * 2)
    
    int64_t* r13_1 = *(arg1 + 0xc88)
    int64_t* rbx_2 = r13_1
    void* r14_2 = &r13_1[sx.q(*(arg1 + 0xc90)) * 3]
    
    if (r13_1 != r14_2)
        do
            uint64_t rdx_3 = &data_142d40450
            
            if (var_30 != 0)
                rdx_3 = rdi_1
            
            int16_t* const rcx_5
            
            if (rbx_2[1].d == 0)
                rcx_5 = &data_142d40450
            else
                rcx_5 = *rbx_2
            
            if (sub_140a54510(rcx_5, rdx_3).d == 0)
                int32_t rbx_6 = ((rbx_2 - r13_1) s/ 0x18).d
                
                if (rdi_1 != 0)
                    sub_140a74f90(rdi_1)
                
                if (rbx_6 != 0xffffffff)
                    void* rcx_10 = *(arg1 + 0x140)
                    char rax_4
                    
                    if (rcx_10 != 0)
                        rax_4 = sub_14243aea0(rcx_10)
                    
                    if (rcx_10 == 0 || rax_4 == 0)
                        r12.b = *(*(arg1 + 0xc88) + sx.q(rbx_6) * 0x18 + 0x10) == 0
                    else
                        r12.b = *(*(arg1 + 0xc88) + sx.q(rbx_6) * 0x18 + 0x11) == 0
                
                goto label_141fc97ce
            
            rbx_2 = &rbx_2[3]
        while (rbx_2 != r14_2)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
label_141fc97ce:
    int64_t rcx_7 = var_38
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    if (r12.b == 0)
        goto label_141fc9815

result.b = 1
return result
