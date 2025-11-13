// 函数: sub_140b20c40
// 地址: 0x140b20c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t arg_8 = rbx
int32_t rax = arg1[1].d
int32_t rdx = rax - 1

if (rax == 0)
    rdx = 0

uint64_t result

if (rdx != 0)
    uint64_t result_1
    sub_140a300d0(arg1, &result_1, &(*U"{}[\nt")[3], &data_142d5a024, 0)
    int16_t* rax_2 = sub_140a4fcd0()
    int16_t* var_48 = nullptr
    int32_t rdx_4 = 0
    int32_t var_40_1 = 0
    int32_t rcx_5 = 0
    int32_t var_3c_1 = 0
    
    if (rax_2 != 0 && *rax_2 != 0)
        int64_t rbx_3 = -1
        
        do
            rbx_3 += 1
        while (rax_2[rbx_3] != 0)
        
        rbx = zx.q(rbx_3.d + 1)
        
        if (rbx.d s> 0)
            sub_1405947f0(&var_48, rbx.d)
            rcx_5 = var_3c_1
            rdx_4 = var_40_1
        
        int32_t rax_3 = rbx.d + rdx_4
        var_40_1 = rax_3
        
        if (rax_3 s> rcx_5)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, rax_2, rbx.d * 2)
    
    char rax_4 = sub_140a32ae0(arg1, &data_142d84ee8, 0)
    int32_t rcx_10 = arg1[1].d
    int32_t rdx_7 = rcx_10 - 1
    
    if (rcx_10 == 0)
        rdx_7 = 0
    
    char rax_5
    
    if (rdx_7 s> 1 && *(*arg1 + 2) == 0x3a)
        rax_5 = sub_140a32a50(&result_1, &var_48, 1)
    
    if (rdx_7 s<= 1 || *(*arg1 + 2) != 0x3a || rax_5 != 0)
        rbx.b = 0
    else
        rbx.b = 1
    
    result = result_1
    rbx.b |= rax_4
    
    if (*result != 0x2f)
    label_140b20e0a:
        
        if (rbx.b == 0)
            int64_t var_28
            sub_140b11c80(&var_28, arg1)
            sub_140b25f50(&var_28)
            void* rax_6 = sub_140b1ad00()
            int16_t* r8_5 = &data_142d40450
            int16_t* const r9_1
            
            if (*(rax_6 + 8) == 0)
                r9_1 = &data_142d40450
            else
                r9_1 = *rax_6
            
            if (var_40_1 != 0)
                r8_5 = var_48
            
            int64_t var_18
            result = sub_140a300d0(&var_28, &var_18, r8_5, r9_1, 1)
            uint64_t result_2 = result
            
            if (arg1 != result)
                int64_t rcx_17 = *arg1
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                *arg1 = *result_2
                *result_2 = 0
                arg1[1].d = *(result_2 + 8)
                result = zx.q(*(result_2 + 0xc))
                *(arg1 + 0xc) = result.d
                *(result_2 + 8) = 0
            
            int64_t rcx_19 = var_18
            
            if (rcx_19 != 0)
                result = sub_140a74f90(rcx_19)
            
            int64_t rcx_20 = var_28
            
            if (rcx_20 != 0)
                result = sub_140a74f90(rcx_20)
    else
        result = sub_140a32a50(&result_1, &var_48, 1)
        
        if (result.b != 0)
            goto label_140b20e0a
    
    int16_t* rcx_21 = var_48
    
    if (rcx_21 != 0)
        result = sub_140a74f90(rcx_21)
    
    uint64_t result_3 = result_1
    
    if (result_3 != 0)
        return sub_140a74f90(result_3)
else
    sub_140b65060()
    
    if (*arg1 != &data_143e189c0)
        int32_t rbx_2
        
        if (data_143e189c0 == 0)
            rbx_2 = 0
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while ((&data_143e189c0)[rbx_1] != 0)
            
            rbx_2 = rbx_1.d + 1
        
        int32_t rdx_1 = 0
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != rbx_2)
            sub_1405947f0(arg1, rbx_2)
            rdx_1 = arg1[1].d
        
        int32_t rax_1 = rdx_1 + rbx_2
        arg1[1].d = rax_1
        
        if (rax_1 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        if (rbx_2 != 0)
            memcpy(*arg1, &data_143e189c0, rbx_2 * 2)
    
    result = zx.q(arg1[1].d)
    int32_t rcx_3 = (result - 1).d
    
    if (result.d == 0)
        rcx_3 = 0
    
    if (rcx_3 != 0)
        return sub_140b20c40(arg1)

return result
