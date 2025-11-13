// 函数: sub_1428c1e00
// 地址: 0x1428c1e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0x20
__chkstk(0x20)
int64_t rsi = data_143fecb80

if (rsi != 0)
    int64_t i = 0
    
    if (data_143fecb88 u> 0)
        int64_t* r14_1 = nullptr
        
        do
            sub_1428a6780(*(r14_1 + rsi))
            int64_t j = 0
            
            if (*(r14_1 + rsi + 0x10) u> 0)
                int64_t rbx_1 = 0
                
                do
                    sub_1428a6780(*(*(r14_1 + rsi + 8) + rbx_1))
                    sub_1428a6780(*(*(r14_1 + rsi + 8) + rbx_1 + 8))
                    j += 1
                    rbx_1 += 0x10
                while (j u< *(r14_1 + rsi + 0x10))
            
            sub_1428a6780(*(r14_1 + rsi + 8))
            rsi = data_143fecb80
            i += 1
            r14_1 = &r14_1[3]
        while (i u< data_143fecb88)
    
    result = sub_1428a6780(rsi)
    data_143fecb80 = 0
    data_143fecb88 = 0

return result
