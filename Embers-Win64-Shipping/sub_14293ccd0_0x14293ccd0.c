// 函数: sub_14293ccd0
// 地址: 0x14293ccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result = nullptr

if (sub_1428a96d0(*arg1) != 0x16)
    sub_1428a5670(0x2e, 0x85, 0x6c, "crypto\cms\cms_sd.c", 0x1a)
    return 0

int32_t* rsi_1 = arg1[1]

if (rsi_1 == 0)
    return 0

if (*(*(rsi_1 + 0x10) + 0x10) != 0)
    sub_14293d160(rsi_1)

int32_t rdi = 0

if (sub_142898c70(*(rsi_1 + 8)) s> 0)
    int32_t rax_6
    
    do
        int64_t* result_1 = sub_14296bc40(sub_142898ea0(*(rsi_1 + 8), rdi))
        
        if (result_1 == 0)
            sub_142899f50(result)
            return 0
        
        if (result == 0)
            result = result_1
        else
            sub_14289a6f0(result, result_1)
        
        rdi += 1
        rax_6 = sub_142898c70(*(rsi_1 + 8))
    while (rdi s< rax_6)

return result
