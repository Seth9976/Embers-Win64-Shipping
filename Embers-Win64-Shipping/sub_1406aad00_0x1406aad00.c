// 函数: sub_1406aad00
// 地址: 0x1406aad00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg5
char* rsi = arg2
int32_t* result_1 = *rdi
int32_t* result

if (result_1 == 0)
label_1406aad53:
    result = j_sub_140a82f30(0x20)
    
    if (result == 0)
        result = nullptr
    else
        *result = arg4
        *(result + 8) = 0
        *(result + 0x10) = 0
    
    *rdi = result
    *(result + 0x18) = result_1
    result_1 = *rdi
else
    result = result_1
    int32_t temp0_1
    
    while (true)
        result_1 = result
        temp0_1 = *result
        
        if (arg4 u>= temp0_1)
            break
        
        result_1 = *(result + 0x18)
        rdi = &result[6]
        result = result_1
        
        if (result_1 == 0)
            goto label_1406aad53
    
    if (arg4 != temp0_1)
        goto label_1406aad53

if (rsi != arg3)
    result = zx.q(result_1[3])
    
    do
        char rbp_1 = *rsi
        
        if (result_1[2] u<= result.d)
            int32_t rdi_1 = (&result[4]).d
            int64_t rax_1 = realloc(*(result_1 + 0x10), zx.q(rdi_1))
            
            if (rax_1 == 0)
                std::_Xbad_alloc()
                noreturn
            
            *(result_1 + 0x10) = rax_1
            result_1[2] = rdi_1
        
        rsi = &rsi[1]
        *(zx.q(result_1[3]) + *(result_1 + 0x10)) = rbp_1
        result_1[3] += 1
        result = zx.q(result_1[3])
    while (rsi != arg3)

return result
