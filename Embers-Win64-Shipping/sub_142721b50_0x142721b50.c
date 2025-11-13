// 函数: sub_142721b50
// 地址: 0x142721b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = data_143b57fe0
int32_t arg_8 = *(arg2 + 0xc)
int128_t var_48
sub_140d3a3a0(&var_48, nullptr)
int64_t var_40 = 0
uint64_t result = zx.q(*(arg1 + 0x88))
char var_38 = rbx
int32_t var_34 = 0xffffffff

if (result.d != *(arg1 + 0xb4))
    void* rcx_1 = *(arg1 + 0xc0)
    void* r8_1 = arg1 + 0xb8
    int64_t r10_1 = sx.q(arg_8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rdx_3 = *(r8_1 + (((sx.q(*(arg1 + 0xc8)) - 1) & r10_1) << 2))
    
    if (rdx_3 != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x80)
        int64_t rcx_2
        
        while (true)
            rcx_2 = sx.q(rdx_3)
            result = rcx_2 * 5
            
            if (*(r8_2 + (result << 3)) == r10_1.d)
                break
            
            rdx_3 = *(r8_2 + (result << 3) + 0x20)
            
            if (rdx_3 == 0xffffffff)
                return result
        
        if (rdx_3 != 0xffffffff)
            int64_t rax_1 = rcx_2 * 5
            var_48 = *(r8_2 + (rax_1 << 3) + 8)
            var_38.q = *(r8_2 + (rax_1 << 3) + 0x18)
            sub_1419826a0(arg1 + 0x80, rdx_3)
            result = zx.q(*(arg1 + 0x140) + *(arg1 + 0x130))
            
            if (result.d s> 0)
                result = sub_140d3c6e0(&var_48)
                uint64_t result_1 = result
                
                if (result != 0)
                    int64_t rax_4 = *(arg1 + 0x38) + 0x38
                    void* var_30 = arg1
                    int64_t var_28_1 = rax_4
                    int32_t* var_20_1 = &arg_8
                    uint64_t* var_18_1 = &result_1
                    sub_142719fb0(arg1 + 0x138, &var_30)
                    result = sub_142719fb0(arg1 + 0x128, &var_30)
                    
                    if (result.b == 1)
                        *(arg1 + 0x124) = result.b

return result
