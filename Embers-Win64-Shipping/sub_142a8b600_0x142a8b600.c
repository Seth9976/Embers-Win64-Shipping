// 函数: sub_142a8b600
// 地址: 0x142a8b600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int16_t var_ec
void* var_f8 = &var_ec:1
int32_t var_c0 = 0
int64_t rax_2 = -1
int32_t result_1 = 0
char var_104 = 0
int32_t var_f0 = 0x28
var_ec = 0

do
    rax_2 += 1
while (arg1[rax_2] != 0)

int32_t var_100 = rax_2.d

if (rax_2.d s<= 0)
    goto label_142a8b752

uint64_t result = sub_142a8cf40(&var_f8, rax_2.d, rax_2.d, &var_100, &result_1)
int32_t result_3 = result_1
uint64_t result_2 = result

if (result_3 s> 0)
label_142a8b710:
    *arg4 = result_3
else
    int32_t result_4
    
    while (true)
        result = sub_142a4cc30(arg1, result_2, var_100, &result_1)
        result_4 = result_1
        
        if (result_4 != 0xf)
            break
        
        var_100 = result.d
        int32_t* var_118_2 = &result_1
        result_1 = 0
        result = sub_142a8cf40(&var_f8, result.d, result.d, &var_100, var_118_2)
        result_3 = result_1
        result_2 = result
        
        if (result_3 s> 0)
            goto label_142a8b710
    
    if (result_4 s<= 0)
        sub_142a8cbd0(&var_f8, result_2, result.d, &result_1)
        result = zx.q(result_1)
        
        if (result.d != 0xffffff84)
            if (result.d s<= 0)
                goto label_142a8b752
            
            *arg4 = result.d
        else
            result_1 = 0
        label_142a8b752:
            int64_t rax_3 = sub_142a4cc10(var_f8)
            char* rcx_5 = var_f8
            
            if (rax_3 != rcx_5)
                goto label_142a8b869
            
            int128_t* rax_4 = sub_142a4da70(rcx_5, &result_1)
            
            if (result_1 s> 0)
            label_142a8b850:
                
                if (rax_4 != 0)
                    sub_142a92960(rax_4)
                
                rcx_5 = var_f8
            label_142a8b869:
                sub_142a89310(rcx_5, arg2, arg3, arg4)
                sub_142a89900(var_f8, arg2, arg3, arg4)
                sub_142a897c0(var_f8, arg2, arg3, arg4)
                sub_142a899d0(var_f8, arg2, arg3, &var_104, arg4)
                sub_142a87990(var_f8, arg2, arg3, var_104, arg4)
                int32_t* var_118_6 = arg4
                result = sub_142a89520(var_f8, arg2, arg3, zx.q(var_104))
            else
                if (sub_142a929a0(rax_4, &result_1) != 1)
                    goto label_142a8b850
                
                int32_t var_fc = 0
                char* rax_6 = sub_142a92a50(rax_4, &var_fc, &result_1)
                
                if (var_fc != 1 || *rax_6 != 0x78)
                    goto label_142a8b850
                
                int16_t var_b8 = 0x2d78
                char var_b6[0x6e]
                int512_t zmm0_1
                result, zmm0_1 = sub_142a4d040(arg1, rax_6, &var_b6, 0x62, &result_1)
                var_fc = result.d
                
                if (result_1 s> 0)
                    *arg4 = 1
                else
                    result = sub_142a89f70(sub_142a89f30, &var_b6, result.d, zmm0_1)
                    
                    if (result.b == 0)
                        if (arg3 == 0)
                            goto label_142a8b850
                        
                        *arg4 = 1
                    else
                        result = (*(*arg2 + 8))(arg2, &var_b8, zx.q(var_fc + 2))
                
                if (rax_4 != 0)
                    result = sub_142a92960(rax_4)
    else
        *arg4 = 1

if (var_ec.b != 0)
    result = sub_142a7dcd0(var_f8)

__security_check_cookie(rax_1 ^ &var_138)
return result
