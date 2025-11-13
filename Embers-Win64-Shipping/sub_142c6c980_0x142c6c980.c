// 函数: sub_142c6c980
// 地址: 0x142c6c980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = -ffffffffffffffff
void* rbx = -ffffffffffffffff

do
    rbx += 1
while (*(arg2 + rbx) != 0)

char* result

if (sub_142c704d0(arg1, arg2, rbx).d == 0)
label_142c6ca4d:
    result.b = 0
else
    void* string = rbx + arg1
    char i = *string
    
    while (i != 0)
        if (isspace(zx.d(i)) == 0)
            break
        
        i = *(string + 1)
        string += 1
    
    result = strchr(string, 0xd)
    char* result_1 = result
    
    if (result == 0)
        result = strchr(string, (&result[0xa]).d)
        result_1 = result
        
        if (result == 0)
            result_1 = strchr(string, 0)
    
    int64_t rdi_1 = result_1 - string
    
    do
        rsi = &rsi[1]
    while (*(rsi + arg3) != 0)
    
    if (rdi_1 u< rsi)
    label_142c6ca4d_1:
        result.b = 0
    else
        while (true)
            if (sub_142c704d0(string, arg3, rsi).d != 0)
                result.b = 1
                break
            
            rdi_1 -= 1
            string += 1
            
            if (rdi_1 u< rsi)
                goto label_142c6ca4d_1

return result
