// 函数: sub_1428a8c10
// 地址: 0x1428a8c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t (* rdi)(char const* _Str1, char const* _Str2) = arg2
uint64_t (* rsi)(char* arg1) = arg1
int64_t* result = sub_1428a6a70(0x70)

if (result != 0)
    int64_t rax = sub_1428a6a70(0x80)
    *result = rax
    
    if (rax != 0)
        result[3].d = 8
        *(result + 0x1c) = 0x10
        
        if (rdi == 0)
            rdi = strcmp
        
        *(result + 0x24) = 8
        result[1] = rdi
        result[5].d = 0x200
        
        if (rsi == 0)
            rsi = sub_1428a8d60
        
        *(result + 0x2c) = 0x100
        result[2] = rsi
        return result
    
    sub_1428a6780(0)
    sub_1428a6780(result)

return 0
