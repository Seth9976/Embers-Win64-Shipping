// 函数: sub_1423bc410
// 地址: 0x1423bc410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
char* result

if ((*(arg1 + 0xa) & 2) == 0)
    result = *(arg1 + 0x20)

if ((*(arg1 + 0xa) & 2) == 0 && (result == 0 || (*result & 1) == 0))
    arg1.b = 0
else
    arg1.b = 1

if ((arg3[0xa] & 2) == 0)
    result = *(arg3 + 0x20)

if ((arg3[0xa] & 2) == 0 && (result == 0 || (*result & 1) == 0))
    result.b = 0
else
    result.b = 1

if (arg1.b != 0 && result.b != 0)
    int128_t var_18
    sub_140d3a3a0(&var_18, arg2)
    int32_t* rbp_1 = *(rsi + 0x10)
    void* rdi_3 = &rbp_1[sx.q(*(rsi + 0x18)) * 4]
    int32_t* rbx_1 = rbp_1
    
    if (rbp_1 != rdi_3)
        while (true)
            if (sub_140664af0(rbx_1, &var_18) != 0)
                result = arg3
                
                if (*(rbx_1 + 8) == result)
                    break
            
            rbx_1 = &rbx_1[4]
            
            if (rbx_1 == rdi_3)
                goto label_1423bc4d3
    
    if (rbp_1 == rdi_3 || ((rbx_1 - rbp_1) s>> 4).d == 0xffffffff)
    label_1423bc4d3:
        int64_t rbx_4 = sx.q(*(rsi + 0x18))
        int32_t rax_1 = (rbx_4 + 1).d
        *(rsi + 0x18) = rax_1
        
        if (rax_1 s> *(rsi + 0x1c))
            sub_1405a4f90(rsi + 0x10)
        
        result = *(rsi + 0x10)
        *(result + rbx_4 * 0x10) = var_18

return result
