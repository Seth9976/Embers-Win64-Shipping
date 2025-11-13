// 函数: sub_141f73e40
// 地址: 0x141f73e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
int64_t* result = sub_141f6b830(arg1)

if (rsi.d s>= 0 && rsi.d s< *(arg1 + 0x578))
    result = *(arg1 + 0x570)
    int64_t r8_1 = rsi * 5
    void* r9_1 = &result[r8_1]
    
    if (result[r8_1 + 1].d s> 0)
        int32_t rcx = 0
        int64_t rdx = 0
        uint32_t count
        
        do
            rdx += 1
            rcx += 1
            *(rdx + *r9_1 - 1) = 0
            count = *(r9_1 + 8)
        while (rcx s< count)
        
        result = *(arg1 + 0x5b0)
        
        if (result != 0)
            int64_t rdi_1 = *r9_1
            int64_t var_58 = 0
            int32_t var_4c
            
            if (count != 0)
                sub_1405da9e0(&var_58, count, 0)
                memcpy(var_58, rdi_1, count)
            else
                var_4c = 0
            
            int32_t var_48_1 = rsi.d
            
            if (sub_140a80f40() == 0)
                uint32_t rax_2
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_2.b = GetCurrentThreadId() == data_143de5470
                
                uint32_t var_50_1
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_2.b == 0))
                    void var_78
                    void** rax_8 = sub_141f5a7a0(&var_78, nullptr, 0xff)
                    void* rdx_5 = *rax_8
                    *(rdx_5 + 0x10) = result
                    *(rdx_5 + 0x18) = 0
                    *(rdx_5 + 0x18) = var_58
                    var_58 = 0
                    *(rdx_5 + 0x20) = count
                    *(rdx_5 + 0x24) = var_4c
                    var_50_1.q = 0
                    *(rdx_5 + 0x28) = var_48_1
                    void* rcx_11 = *rax_8
                    int32_t rax_10 = rax_8[2].d
                    int64_t* rdx_6 = rax_8[1]
                    int64_t* rbx_1 = *(rcx_11 + 0x38)
                    int64_t* arg_18 = rbx_1
                    int32_t* rdi_2 = &rbx_1[9]
                    
                    if (rbx_1 != 0)
                        *rdi_2 += 1
                        rbx_1 = arg_18
                    
                    result = sub_1407c96b0(rcx_11, rdx_6, rax_10, 1)
                    
                    if (rbx_1 != 0)
                        result = zx.q(*rdi_2)
                        *rdi_2 -= 1
                        
                        if (result.d == 1)
                            result = sub_140a2f6e0(arg_18)
                else
                    int64_t var_38 = var_58
                    uint32_t count_1 = count
                    int32_t var_2c_1 = var_4c
                    var_58 = 0
                    var_50_1.q = 0
                    result = sub_142346770(result, var_48_1, &var_38)
                    int64_t rcx_5 = var_38
                    
                    if (rcx_5 != 0)
                        result = sub_140a74f90(rcx_5)
            else
                result = sub_142346770(result, var_48_1, &var_58)
            
            int64_t rcx_13 = var_58
            
            if (rcx_13 != 0)
                return sub_140a74f90(rcx_13)

return result
