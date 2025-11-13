// 函数: sub_142956790
// 地址: 0x142956790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* const result = nullptr
int64_t* rax = sub_142892200()
int64_t* var_38

if (rax != 0)
    int32_t rax_2
    int512_t zmm1_1
    rax_2, zmm1_1 = sub_1428e3b10(*arg1, arg2, arg3, arg1[1], rax, arg8)
    
    if (rax_2 != 0)
        void* result_1 = sub_1428a6730(sx.q(sub_142890e90(rax) + arg5))
        result = result_1
        
        if (result_1 != 0)
            var_38.d = arg5
            int32_t var_28[0x4]
            
            if (sub_1428927c0(rax, result, &var_28, arg4, var_38.d) != 0)
                int64_t rsi_2 = sx.q(var_28[0])
                
                if (sub_142892450(rax, result + rsi_2, &var_28, zmm1_1) != 0)
                    if (arg7 != 0)
                        *arg7 = var_28[0] + rsi_2.d
                    
                    if (arg6 != 0)
                        *arg6 = result
                else
                    sub_1428a6780(result)
                    result = nullptr
                    var_38.d = 0x3f
                    sub_1428a5670(0x23, 0x77, 0x74, "crypto\pkcs12\p12_decr.c", var_38.d)
            else
                sub_1428a6780(result)
                result = nullptr
                var_38.d = 0x36
                sub_1428a5670(0x23, 0x77, 6, "crypto\pkcs12\p12_decr.c", var_38.d)
        else
            var_38.d = 0x2f
            sub_1428a5670(0x23, 0x77, 0x41, "crypto\pkcs12\p12_decr.c", var_38.d)
    else
        sub_1428a5670(rax_2 + 0x23, rax_2 + 0x77, rax_2 + 0x73, "crypto\pkcs12\p12_decr.c", 0x29)
else
    var_38.d = 0x21
    sub_1428a5670(0x23, 0x77, 0x41, "crypto\pkcs12\p12_decr.c", var_38.d)
sub_1428921c0(rax)
return result
