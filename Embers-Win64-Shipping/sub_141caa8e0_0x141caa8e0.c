// 函数: sub_141caa8e0
// 地址: 0x141caa8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t result
    result.b = 0
    return result

sub_140920c10(arg1 + 0x5a8, arg2)
int32_t rax = *(arg1 + 0x6c8)
int64_t rbx = arg2[4]
int64_t arg_10 = rbx
void* r8

if (rax != *(arg1 + 0x6f4))
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg_10:4.d
    r8 = arg1 + 0x6f8
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t i = *(r8 + (((sx.q(*(arg1 + 0x708)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx_3 = *(arg1 + 0x6c0)
        
        do
            int64_t rcx_4 = sx.q(i) * 2
            
            if (*(rdx_3 + (rcx_4 << 3)) == rbx)
                if (i != 0xffffffff)
                    int64_t rdx_4 = data_143e1a358
                    uint64_t var_38 = 0
                    int32_t var_30_1 = 0
                    sub_1408301c0(arg2, rdx_4, &var_38)
                    
                    if (var_30_1 s> 1)
                        int64_t var_18
                        sub_140ba5860(&var_18, &var_38)
                        int16_t* var_28
                        sub_140baf740(&var_28, &var_18)
                        int64_t rcx_8 = var_18
                        
                        if (rcx_8 != 0)
                            sub_140a74f90(rcx_8)
                        
                        int16_t* const rdx_7 = &data_142d40450
                        int32_t var_20
                        
                        if (var_20 != 0)
                            rdx_7 = var_28
                        
                        sub_140b58260(&arg_10, rdx_7, 1)
                        int16_t* rcx_10 = var_28
                        
                        if (rcx_10 != 0)
                            sub_140a74f90(rcx_10)
                        
                        sub_141caa060(arg1 + 0x350, arg_10)
                    
                    uint64_t rcx_12 = var_38
                    
                    if (rcx_12 != 0)
                        sub_140a74f90(rcx_12)
                
                break
            
            i = *(rdx_3 + (rcx_4 << 3) + 8)
        while (i != 0xffffffff)

r8.b = 1
return sub_141caa410(arg1 + 0x30, arg2, r8.b) __tailcall
