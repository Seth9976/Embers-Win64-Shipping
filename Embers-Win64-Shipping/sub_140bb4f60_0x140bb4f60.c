// 函数: sub_140bb4f60
// 地址: 0x140bb4f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t arg_18 = rbx
int64_t* var_68 = nullptr
int32_t var_60 = 0
j_sub_140b3db50()
sub_140b3a840(&data_143de7d78, &data_142d6bbe8, &var_68)
int32_t rsi = 0
char result
int64_t* rcx_1

while (true)
    if (rsi s< 0 || rsi s>= var_60)
        result = 0
    else
        result = 1
    
    rcx_1 = var_68
    
    if (result == 0)
        break
    
    int64_t var_48
    int64_t* rax_2 = sub_140b63b70(&rcx_1[sx.q(rsi)], &var_48)
    int16_t* rdi_1
    
    if (rax_2[1].d == 0)
        rdi_1 = &data_142d40450
    else
        rdi_1 = *rax_2
    
    int64_t var_78 = 0
    int32_t rdx_2 = 0
    int32_t var_70_1 = 0
    int32_t rcx_3 = 0
    int32_t var_6c_1 = 0
    
    if (rdi_1 != 0 && *rdi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rdi_1[rbx_1] != 0)
        
        rbx = zx.q(rbx_1.d + 1)
        
        if (rbx.d s> 0)
            sub_1405947f0(&var_78, rbx.d)
            rcx_3 = var_6c_1
            rdx_2 = var_70_1
        
        int32_t rax_3 = rbx.d + rdx_2
        int32_t var_70_2 = rax_3
        
        if (rax_3 s> rcx_3)
            sub_140594770(&var_78)
        
        UnDecorator::getReferenceType(var_78, rdi_1, rbx.d * 2)
    
    void var_38
    uint128_t zmm0_1 = *sub_140a1dfc0(&var_78, &var_38)
    int16_t* rax_5 = zmm0_1.q
    void* rcx_9 = &rax_5[sx.q(_mm_bsrli_si128(zmm0_1, 8).d)]
    
    if (rax_5 == rcx_9)
    label_140bb5093:
        rbx.b = 1
    else
        while (*rax_5 != 0x2f)
            rax_5 = &rax_5[1]
            
            if (rax_5 == rcx_9)
                goto label_140bb5093
        
        rbx.b = 0
    
    int64_t rcx_10 = var_78
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int16_t* var_88
    int16_t* const rdx_10
    int32_t var_80
    
    if (rbx.b == 0)
        var_88 = nullptr
        int32_t rdx_7 = 0
        var_80 = 0
        int32_t rcx_12 = 0
        int32_t var_7c_1 = 0
        
        if (rdi_1 != 0 && *rdi_1 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (rdi_1[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_88, rbx_2.d + 1)
                rcx_12 = var_7c_1
                rdx_7 = var_80
            
            int32_t rax_6 = rbx_2.d + 1 + rdx_7
            var_80 = rax_6
            
            if (rax_6 s> rcx_12)
                sub_140594770(&var_88)
            
            UnDecorator::getReferenceType(var_88, rdi_1, (rbx_2.d + 1) * 2)
            goto label_140bb5126
        
        rdx_10 = &data_142d40450
    else
        sub_140a2e390(&var_88, u"/Script/%s", rdi_1)
    label_140bb5126:
        rdx_10 = var_88
        
        if (var_80 == 0)
            rdx_10 = &data_142d40450
    int64_t arg_10
    sub_140b58260(&arg_10, rdx_10, 1)
    int64_t* rbx_4 = var_68
    int32_t var_58
    sub_1405b3620(&data_1439a9800, &var_58)
    int64_t* var_50
    *var_50 = rbx_4[sx.q(rsi)]
    var_50[1] = arg_10
    var_50[2].d = 0xffffffff
    int64_t rbx_5 = *var_50
    void arg_8
    sub_1405b8300(&data_1439a9800, &arg_8, (rbx_5 u>> 0x20).d + sub_140b5ead0(rbx_5.d), var_50, 
        var_58, nullptr)
    int16_t* rcx_18 = var_88
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    int64_t rcx_19 = var_48
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    rsi += 1

if (rcx_1 == 0)
    return result

return sub_140a74f90(rcx_1)
