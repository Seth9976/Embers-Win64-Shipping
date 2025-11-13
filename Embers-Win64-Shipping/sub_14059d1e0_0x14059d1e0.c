// 函数: sub_14059d1e0
// 地址: 0x14059d1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if ((*u"Embers")[0] == 0)
    result.b = 0
else if (sub_140a54510(u"Embers", u"None") == 0)
    result.b = 0
else if (sub_140b1d450().b != 0)
    result.b = 0
else
    int16_t* var_18
    int64_t* rax = sub_140b26cf0(&var_18)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while ((*u"Embers")[rbx_1] != 0)
    
    int32_t rdx_1
    
    if (rax[1].d == 0)
        rdx_1 = 2
    
    if (rax[1].d != 0 || (rbx_1 + 1).d == 0)
        rdx_1 = 1
    
    int16_t* var_28 = *rax
    *rax = 0
    int32_t rax_3 = rax[1].d
    int32_t rax_4 = *(rax + 0xc)
    rax[1] = 0
    int32_t rdx_3 = rdx_1 + rbx_1.d + rax_3
    
    if (rdx_3 s> rax_4)
        sub_1405947f0(&var_28, rdx_3)
    
    sub_140a2cf70(&var_28, u"Embers", rbx_1.d)
    int16_t* rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t* rax_5 = __crt_deferred_errno_cache::get(&data_143db7b00)
    int16_t* const rsi_1 = &data_142d40450
    int16_t* const rdx_4 = &data_142d40450
    
    if (rax_3 != 0)
        rdx_4 = var_28
    
    int64_t r8_2 = *rax_5
    int32_t rcx_7
    result, rcx_7 = (*(r8_2 + 0xd8))(rax_5, rdx_4, r8_2)
    
    if (result.b != 0)
    label_14059d39c:
        int16_t* rcx_16 = var_28
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        result.b = 0
    else
        int16_t* rbx_2 = var_28
        var_18 = nullptr
        sub_1405a4c70(&var_18, sbb.d(rcx_7, rcx_7, rax_3 != 0) + 5 + rax_3, 0)
        memcpy(var_18, rbx_2, rax_3 * 2)
        sub_140a20ba0(&var_18, u"Game", 4)
        int64_t* rax_8 = __crt_deferred_errno_cache::get(&data_143db7b00)
        int16_t* rbx_3 = var_18
        
        if (rax_3 != 0)
            rsi_1 = rbx_3
        
        int64_t r8_5 = *rax_8
        
        if ((*(r8_5 + 0xd8))(rax_8, rsi_1, r8_5).b == 0)
            if (rbx_3 != 0)
                sub_140a74f90(rbx_3)
            
            goto label_14059d39c
        
        if (rbx_3 != 0)
            sub_140a74f90(rbx_3)
        
        int16_t* rcx_14 = var_28
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        result.b = 1

return result
