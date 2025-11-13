// 函数: png_destroy_write_struct
// 地址: 0x1403c2380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool result
void* const rdi
int64_t r15

if (arg1 != 0)
    rdi = *arg1
    *(rdi + 0x420)
    r15 = *(rdi + 0x430)
    result = rdi != 0
    
    if (arg2 != 0)
        goto label_1403c23c6
    
    goto label_1403c2422

result = false
rdi = nullptr
r15 = 0

if (arg2 == 0)
label_1403c2422:
    
    if (result != 0)
    label_1403c2429:
        sub_1403c2470(rdi)
        result = sub_1403cc660(rdi, r15)
        *arg1 = 0
else
label_1403c23c6:
    void* rsi_1 = *arg2
    
    if (rsi_1 == 0)
        goto label_1403c2422
    
    if (result != 0)
        png_free_data(rdi, rsi_1, 0x7fff, 0xffffffff)
        
        if (*(rdi + 0x400) != 0)
            png_free(rdi, *(rdi + 0x408))
            *(rdi + 0x400) = 0
        
        sub_1403cc660(rsi_1, r15)
        *arg2 = nullptr
        goto label_1403c2429
    
    result = sub_1403cc660(rsi_1, r15)
    *arg2 = nullptr

return result
