// 函数: sub_14238f580
// 地址: 0x14238f580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x638))(arg1, 0) == 0)
    return 0

if (*(arg1 + 0x207) == 2)
    return 1

void* rcx = arg1[0x88]
int32_t i = 0

if (*(*(rcx + 0x50) + 8) s<= 0)
    return 0

int64_t* rsi = nullptr

do
    int64_t rax_5 = *arg1
    void* rbp_1 = *(rsi + **(rcx + 0x50))
    int32_t arg_8 = 0
    int32_t arg_10 = 0
    (*(rax_5 + 0x648))(arg1, &arg_8, &arg_10)
    
    if (arg_8 s> 0 && arg_10 s> 0)
        int32_t rcx_3 = *(arg1[0x88] + 0x80)
        
        if (rcx_3 s>= 0 && rcx_3 u< *(rbp_1 + 0xe8))
            return 2
    
    rcx = arg1[0x88]
    i += 1
    rsi = &rsi[1]
while (i s< *(*(rcx + 0x50) + 8))

return 0
