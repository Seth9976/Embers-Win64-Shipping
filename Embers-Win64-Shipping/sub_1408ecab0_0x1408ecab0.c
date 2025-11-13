// 函数: sub_1408ecab0
// 地址: 0x1408ecab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
uint64_t result = zx.q(arg3[3]) | zx.q(arg3[2]) | zx.q(arg3[1]) | zx.q(*arg3)

if (result.d != 0)
    int64_t rbp_1 = 0
    int64_t* rdi_1 = arg5
    int32_t* rcx_6
    
    if (rdi_1[0x16].d == *(rdi_1 + 0xdc))
    label_1408ecb65:
        rcx_6 = nullptr
    else
        void* r8 = &rdi_1[0x1c]
        void* rdx = *(r8 + 8)
        int64_t r9_1 = sx.q(arg3[4])
        
        if (rdx != 0)
            r8 = rdx
        
        int32_t rax_4 = *(r8 + (((sx.q(rdi_1[0x1e].d) - 1) & r9_1) << 2))
        
        if (rax_4 == 0xffffffff)
        label_1408ecb65_1:
            rcx_6 = nullptr
        else
            while (true)
                rcx_6 = sx.q(rax_4) * 0xc0 + rdi_1[0x15]
                
                if (*rcx_6 == r9_1.d)
                    break
                
                rax_4 = rcx_6[0x2e]
                
                if (rax_4 == 0xffffffff)
                    goto label_1408ecb65_2
            
            if (rax_4 == 0xffffffff)
            label_1408ecb65_2:
                rcx_6 = nullptr
    
    void* rax_5 = &rcx_6[2]
    
    if (rcx_6 == 0)
        rax_5 = nullptr
    
    int32_t result_1
    void* r14_1
    void* var_48
    
    if (rax_5 == 0)
        result_1 = 0
        var_48 = nullptr
        int32_t var_40 = 0
        r14_1 = nullptr
    else
        sub_141a4a6a0(rax_5, &var_48, arg3, rdi_1)
        int32_t result_2
        result_1 = result_2
        r14_1 = var_48
    result = sx.q(result_1)
    void* rcx_8 = r14_1 + (result << 3)
    uint64_t r12_4 = (rcx_8 - r14_1 + 7) u>> 3
    
    if (r14_1 u> rcx_8)
        r12_4 = 0
    
    if (r12_4 != 0)
        do
            int64_t var_68 = *r14_1
            result = sub_140d3c6e0(&var_68)
            
            if (result != 0)
                int128_t zmm2_1
                result, zmm2_1 = sub_1408eced0(result)
                
                if (result != 0 && (*(result + 0x88) & 1) != 0)
                    int64_t rax_7
                    int64_t rbx_1
                    
                    if (*(rbx + 8) != 0)
                        rbx_1 = *(rbx + 8)
                        rax_7 = sub_1408e50d0(result)
                    
                    if (*(rbx + 8) == 0 || rbx_1 == rax_7)
                        *(rbx + 8) = sub_1408e50d0(result)
                    else
                        sub_1408e79b0(result, rbx_1, zmm2_1, arg4)
                    
                    void** const var_60 = &data_142e13518
                    int64_t rax_9 = data_143cec350
                    
                    if (rax_9 == 0)
                        rax_9 = sub_141a54240(&data_143cec350, 0)
                    
                    int32_t var_50_1 = rdi_1[0x5b].d
                    int64_t var_58 = rdi_1[0x5a]
                    sub_1405c5900(&rdi_1[0x1f], rax_9, &var_60, result, *(rdi_1 + 0x2dc), &var_58)
                    sub_1408e7e40(result, 1)
                    int32_t rax_10 = *(arg2 + 0x24)
                    int64_t rbx_2
                    
                    if (rax_10 == 0x80000000)
                        int64_t* rbx_3 = 0x10
                        
                        if (*(arg2 + 0x20) != 0)
                            rbx_3 = 4
                        
                        rbx_2 = *(rbx_3 + arg2)
                        int32_t arg_18
                        arg_18.q = rbx_2
                    else
                        int32_t arg_1c = 0
                        rbx_2 = rax_10.q
                    
                    int128_t zmm0_3 =
                        sub_1408ed8e0(rbx + 8, sub_1408e46e0(result), rbx_2, *(arg2 + 0x18))
                    rbx = arg1
                    result, arg4 = sub_1408e8130(result, zmm0_3, 1, *(rbx + 0x20) & 1, 1)
                    rdi_1 = arg5
            
            r14_1 += 8
            rbp_1 += 1
        while (rbp_1 != r12_4)

return result
