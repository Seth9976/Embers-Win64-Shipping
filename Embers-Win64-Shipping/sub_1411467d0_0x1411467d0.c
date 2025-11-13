// 函数: sub_1411467d0
// 地址: 0x1411467d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int64_t* var_48
sub_1407453e0(&var_48, *(arg1 + 8) + 0xee8)
int64_t var_38
int32_t i_1

for (int32_t i = i_1; i s< *(var_38 + 0x18); i = i_1)
    void* rbx_1 = *(*var_48 + sx.q(i) * 0x30 + 0x20)
    void* rax_2 = *(rbx_1 + 0x20)
    float zmm0_1 = *(rax_2 + 0x30)
    
    if (zmm0_1 * zmm0_1 >= 9.99999975e-06f)
    label_14114686c:
        char rax_3
        
        if ((*(rax_2 + 0x138) & 4) != 0)
            rax_3 = sub_14122cc00(rbx_1)
        
        if ((*(rax_2 + 0x138) & 4) == 0 || rax_3 == 0)
            int64_t rcx_3 = 0
            void* rdx_5 = sx.q(*(rbx_1 + 0x28)) * 0x70 + *(arg1 + 0x2f0)
            int64_t rax_5 = sx.q(*(rdx_5 + 0x18))
            
            if (rax_5.d s> 0)
                int64_t* rdx_6 = *(rdx_5 + 0x10)
                
                do
                    if ((*(*rdx_6 + 0x570) & 0x200) != 0)
                        rsi.b = 1
                        break
                    
                    rcx_3 += 1
                    rdx_6 = &rdx_6[1]
                while (rcx_3 s< rax_5)
    else
        zmm0_1 = *(rax_2 + 0x34)
        
        if (zmm0_1 * zmm0_1 >= 9.99999975e-06f)
            goto label_14114686c
        
        zmm0_1 = *(rax_2 + 0x38)
        
        if (not(zmm0_1 * zmm0_1 < 9.99999975e-06f))
            goto label_14114686c
    
    int32_t var_3c
    int32_t var_30 = var_30 & not.d(var_3c)
    void var_40
    sub_14059bdd0(&var_40)

int64_t result

if ((*(arg1 + 0x3c) & 1) != 0 && rsi.b != 0)
    int64_t r8_2 = sx.q(*(*(arg1 + 8) + 8))
    
    if (data_1439b5c10 != 0)
        int32_t result_1 = data_1439b5c14
        
        if (result_1 s>= 0)
            result = 3
            
            if (result_1 s< 3)
                result = zx.q(result_1)
            
            if (result.d s> 0 && r8_2.d s>= 3 && sub_1410f5e80((*U"1111")[r8_2]).b != 0)
                result.b = 1
                return result

result.b = 0
return result
