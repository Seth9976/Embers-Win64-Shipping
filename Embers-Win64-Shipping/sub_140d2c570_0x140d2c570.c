// 函数: sub_140d2c570
// 地址: 0x140d2c570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* arg_10 = arg2
void var_898
int64_t rax_1 = __security_cookie ^ &var_898
uint64_t* result
int64_t var_868

if (arg2 != 0)
    void var_838
    int32_t rax_3 = sub_140b63d10(&arg_10, &var_838)
    void* var_878 = &var_838
    int128_t var_858 = var_878.o
    result = sub_140bacf40(&var_858)
    
    if (result.b == 0)
        uint64_t* var_848
        
        if (*var_878 != 0x2f)
            var_858 = var_878.o
            var_878.o = *sub_140ba58e0(&var_848, &var_858)
        
        if (sub_140a24010(&var_878, 0x3a, &var_868) == 0)
            uint64_t** rax_14
            
            if (var_878 != &var_838)
                rax_14 = sub_140b58050(&var_848, &var_878, 1)
            else
                var_848 = arg_10
                rax_14 = &var_848
            
            result = *rax_14
            *arg1 = result
            arg1[2].d = 0
            
            if (*(arg1 + 0x14) != 0)
                result = sub_1405947f0(&arg1[1], 0)
        else
            int32_t rax_7 = var_868.d
            int32_t rbx_1
            
            if (rax_7 s>= 0)
                rbx_1 = rax_3
                
                if (rax_7 s< rbx_1)
                    rbx_1 = rax_7
            else
                rbx_1 = 0
            
            var_858.q = var_878
            var_858:8.d = rbx_1
            uint64_t rcx_6 = *sub_140b58050(&var_848, &var_858, 1)
            int32_t rax_11 = var_868.d + 1
            *arg1 = rcx_6
            int32_t rcx_7 = rax_3
            
            if (rax_11 u< rax_3)
                rcx_7 = rax_11
            
            int32_t rdx_4 = rax_3 - rcx_7
            
            if (rdx_4 u> 0x7fffffff)
                rdx_4 = 0x7fffffff
            
            var_858:8.d = rdx_4
            var_858.q = var_878 + (sx.q(rcx_7) << 1)
            result = sub_140a1d810(&arg1[1], &var_858)
else
    *arg1 = 0
    var_868 = 0
    arg1[2].d = 0
    
    if (*(arg1 + 0x14) s<= 0xffffffff)
        sub_1405947f0(&arg1[1], arg2.d)
    
    result = arg1[1]
    
    if (result != 0)
        *result = 0
__security_check_cookie(rax_1 ^ &var_898)
return result
