// 函数: sub_140a9b770
// 地址: 0x140a9b770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint64_t result = *arg1
void* i = *(result + 0x20)

for (void* rsi_2 = (sx.q(*(result + 0x28)) << 6) + i; i != rsi_2; i += 0x40)
    void var_50
    int32_t* rax_2 = sub_140ac5d00(i, &var_50)
    int64_t rcx_1 = *(arg2 + 8)
    void* i_1 = i
    result = (*arg2)(rcx_1, &i_1, rax_2)
    char var_28
    
    if (var_28 != 0)
        var_28 = 0
        int64_t* var_38
        
        if (var_38 != 0)
            result = zx.q(var_38[1].d)
            var_38[1].d -= 1
            
            if (result.d == 1)
                (**var_38)(var_38)
                result = zx.q(*(var_38 + 0xc))
                *(var_38 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*var_38 + 8))(var_38, 1)

__security_check_cookie(rax_1 ^ &var_78)
return result
