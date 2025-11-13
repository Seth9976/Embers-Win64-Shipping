// 函数: sub_141c97ed0
// 地址: 0x141c97ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c97c90(arg1 + 0x30, arg2)
sub_140920c10(arg1 + 0x590, arg2)
int32_t result = *(arg1 + 0x6c8)
int64_t rbx = arg2[4]
int64_t arg_8 = rbx

if (result != *(arg1 + 0x6f4))
    int32_t rax_1 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8_1 = arg1 + 0x6f8
    void* rcx_3 = *(r8_1 + 8)
    
    if (rcx_3 != 0)
        r8_1 = rcx_3
    
    result = *(r8_1 + (((sx.q(*(arg1 + 0x708)) - 1) & sx.q(rax_1)) << 2))
    
    if (result != 0xffffffff)
        int64_t rdx_4 = *(arg1 + 0x6c0)
        
        while (true)
            int64_t rcx_5 = sx.q(result) * 2
            
            if (*(rdx_4 + (rcx_5 << 3)) == rbx)
                break
            
            result = *(rdx_4 + (rcx_5 << 3) + 8)
            
            if (result == 0xffffffff)
                return result
        
        if (result != 0xffffffff)
            int64_t rdx_5 = data_143e1a358
            int64_t var_58 = 0
            int32_t var_50_1 = 0
            sub_1408301c0(arg2, rdx_5, &var_58)
            int64_t rdx_6 = data_143e1a360
            int64_t var_68 = 0
            int32_t var_60_1 = 0
            result = sub_1408301c0(arg2, rdx_6, &var_68)
            
            if (var_50_1 s> 1 && var_60_1 s> 1)
                int64_t var_38
                sub_140ba5860(&var_38, &var_58)
                int16_t* var_48
                sub_140baf740(&var_48, &var_38)
                int64_t rcx_10 = var_38
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                int16_t* const rbx_1 = &data_142d40450
                int16_t* const rdx_9 = &data_142d40450
                int32_t var_40
                
                if (var_40 != 0)
                    rdx_9 = var_48
                
                int64_t arg_10
                sub_140b58260(&arg_10, rdx_9, 1)
                int16_t* rcx_12 = var_48
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                sub_140ba5860(&var_38, &var_68)
                sub_140baf740(&var_48, &var_38)
                int64_t rcx_15 = var_38
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                if (var_40 != 0)
                    rbx_1 = var_48
                
                int64_t arg_18
                sub_140b58260(&arg_18, rbx_1, 1)
                int16_t* rcx_17 = var_48
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                sub_1405b3620(arg1 + 0x350, &var_38)
                int64_t* var_30
                *var_30 = arg_10
                var_30[1] = arg_18
                var_30[2].d = 0xffffffff
                int64_t rbx_2 = *var_30
                result = sub_1405b8300(arg1 + 0x350, &arg_8, 
                    (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d), var_30, var_38.d, nullptr)
            
            int64_t rcx_21 = var_68
            
            if (rcx_21 != 0)
                result = sub_140a74f90(rcx_21)
            
            int64_t rcx_22 = var_58
            
            if (rcx_22 != 0)
                return sub_140a74f90(rcx_22)

return result
