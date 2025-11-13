// 函数: sub_140af5fd0
// 地址: 0x140af5fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t** r14 = arg5
int16_t* const rbp = &data_142d40450
int16_t* rbx

if (r14[1].d == 0)
    rbx = &data_142d40450
else
    rbx = *r14

sub_140b3ac40(&data_1439a90f0, rbx)
int64_t* result = sub_140aefb30(arg1, r14, 0)

if (result == 0)
    result.b = 0
else
    int64_t var_38 = 0
    int64_t rsi_1 = 0
    int64_t var_30_1 = 0
    int32_t rdx_2 = 0
    int32_t rcx_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_38, rbx_1.d + 1)
            rcx_1 = var_30_1:4.d
            rdx_2 = var_30_1.d
            rsi_1 = var_38
        
        int32_t rax = rdx_2 + rbx_1.d + 1
        var_30_1.d = rax
        
        if (rax s> rcx_1)
            sub_140594770(&var_38)
            rsi_1 = var_38
        
        UnDecorator::getReferenceType(rsi_1, arg2, (rbx_1.d + 1) * 2)
    
    sub_140a452d0(result, &arg5, &var_38)
    int64_t rax_1 = sx.q(arg5.d)
    
    if (rax_1.d == 0xffffffff)
        result = nullptr
    else
        result = rax_1 * 0xb8 + *result
    
    void* rbx_3 = &result[2]
    
    if (result == 0)
        rbx_3 = nullptr
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rbx_3 == 0)
        result.b = 0
    else
        sub_14093f560(rbx_3, &arg5, *sub_140b58260(&var_38, arg3, 1))
        int64_t rax_4 = sx.q(arg5.d)
        
        if (rax_4.d == 0xffffffff)
            result = nullptr
        else
            result = rax_4 * 0x30 + *rbx_3
        
        wchar16** rdx_8 = &result[1]
        
        if (result == 0)
            rdx_8 = nullptr
        
        if (rdx_8 == 0)
            result.b = 0
        else
            int32_t rax_7 = rdx_8[3].d
            int32_t rcx_9 = rax_7 - 1
            
            if (rax_7 == 0)
                rcx_9 = 0
            
            wchar16** rax_8 = &rdx_8[2]
            
            if (rcx_9 s<= 0)
                rax_8 = rdx_8
            
            wchar16* rcx_10
            
            if (rax_8[1].d == 0)
                rcx_10 = &data_142d40450
            else
                rcx_10 = *rax_8
            
            if (sub_140abc1e0(rcx_10, arg4, arg2, 0, 0) == 0)
                result.b = 0
            else
                if (r14[1].d != 0)
                    rbp = *r14
                
                sub_140aeb480(&data_14399feb0, rbp, arg2, arg3)
                result.b = 1

return result
