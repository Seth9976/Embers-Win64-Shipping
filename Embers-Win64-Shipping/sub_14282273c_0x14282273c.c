// 函数: sub_14282273c
// 地址: 0x14282273c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14281f460(arg1, U"!", 1)
int64_t* rax = arg2

if (arg2[3] u>= 0x10)
    rax = *arg2

char* var_38 = nullptr
int64_t* var_48 = rax
int64_t rax_1 = arg2[2]
class std::wostream* result
wchar16 arg_10

if (rax_1 == 0)
label_1428227ef:
    sub_14281f460(arg1, U"!", 1)
    int64_t* rax_3 = arg3
    
    if (arg3[3] u>= 0x10)
        rax_3 = *arg3
    
    char* var_20_1 = nullptr
    int64_t* var_30 = rax_3
    result = arg3[2]
    class std::wostream* result_1 = result
    
    if (result != 0)
        char* rcx_4
        
        do
            sub_142821920()
            result = sub_14281f52c(&data_143f89740, &var_30)
            int32_t rbx_2 = result.d
            
            if (result.d s<= 0)
                goto label_14282287b
            
            rcx_4 = var_20_1
            
            while (true)
                int32_t temp1_1 = rbx_2
                rbx_2 -= 1
                
                if (temp1_1 - 1 s< 0)
                    break
                
                rcx_4.b = *(rcx_4 + var_30)
                arg_10.b = rcx_4.b
                sub_14281f460(arg1, &arg_10, 1)
                rcx_4 = &var_20_1[1]
                var_20_1 = rcx_4
        while (rcx_4 u< result_1)
    
    result.b = 1
else
    while (true)
        sub_142821b94()
        result = sub_14281f52c(&data_143f89718, &var_48)
        int32_t rbx_1 = result.d
        
        if (result.d s<= 0)
        label_14282287b:
            result.b = 0
            break
        
        char* rcx = var_38
        
        while (true)
            int32_t temp0_1 = rbx_1
            rbx_1 -= 1
            
            if (temp0_1 - 1 s< 0)
                break
            
            rcx.b = *(rcx + var_48)
            arg_10.b = rcx.b
            sub_14281f460(arg1, &arg_10, 1)
            rcx = &var_38[1]
            var_38 = rcx
        
        if (rcx u>= rax_1)
            goto label_1428227ef
return result
