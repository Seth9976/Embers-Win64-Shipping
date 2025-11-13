// 函数: sub_142ad0270
// 地址: 0x142ad0270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t var_148[0x8]
var_148[0] = 0
void var_128
sub_142a49a60(arg1, &var_128, 0x81, &var_148)
int32_t rax_2 = var_148[0]
int32_t rcx_3

if (rax_2 s<= 0 && rax_2 != 0xffffff84)
    char rax_4
    
    if (data_144016620 != 2)
        rax_4 = sub_142a85f00(&data_144016620)
    
    if (data_144016620 == 2 || rax_4 == 0)
        int32_t rax_6 = data_144016624
        rcx_3 = var_148[0]
        
        if (rax_6 s> 0)
            rcx_3 = rax_6
        
        var_148[0] = rcx_3
    else
        sub_142aa75d0(0x11, sub_142ad0de0)
        int64_t* rax_5 = sub_142a86f30(sub_142a86d10, sub_142a86ba0, 0, &var_148)
        int32_t rcx = var_148[0]
        data_144016618 = rax_5
        
        if (rcx s<= 0)
            std::ios_base::precision(rax_5, j_sub_142a7dcd0)
            std::ios_base::width(data_144016618, sub_140a4f210)
            rcx = var_148[0]
        else
            data_144016618 = 0
        
        data_144016624 = rcx
        sub_142a85e80(&data_144016620)
        rcx_3 = var_148[0]

int64_t* result

if (rax_2 s<= 0 && rax_2 != 0xffffff84 && rcx_3 s<= 0)
    sub_142acf850()
    sub_142a860a0(&data_1440165b0)
    int64_t* result_1 = sub_142a86c30(data_144016618, &var_128)
    sub_142acf850()
    sub_142a860d0(&data_1440165b0)
    
    if (result_1 == 0)
        result = sub_142acf250(arg1)
        
        if (result != 0)
            sub_142acf850()
            sub_142a860a0(&data_1440165b0)
            int64_t* result_3 = sub_142a86c30(data_144016618, &var_128)
            int64_t* result_2 = result_3
            
            if (result_3 != 0)
                (**result)(result, 1)
            else
                int16_t rax_7 = *(arg1 + 8)
                int32_t rax_9
                
                if (rax_7 s< 0)
                    rax_9 = *(arg1 + 0xc)
                else
                    rax_9 = sx.d(rax_7) s>> 5
                
                int64_t rax_10 = sub_142a7dd00(sx.q(rax_9 + 1) * 2)
                
                if (rax_10 != 0)
                    sub_142a49a60(arg1, rax_10, rax_9 + 1, &var_148)
                    sub_142a86f50(data_144016618, rax_10, result, &var_148)
                
                if (rax_10 == 0 || var_148[0] s> 0)
                    result_2 = nullptr
                    (**result)(result, 1)
                else
                    result_2 = result
            
            sub_142acf850()
            sub_142a860d0(&data_1440165b0)
            result = result_2
    else
        result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_168)
return result
