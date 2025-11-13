// 函数: sub_1417a99d0
// 地址: 0x1417a99d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg1
int64_t rsi = 0

while (true)
    int64_t rbx_1 = 0
    int64_t* rdi_1 = rbp
    
    while (true)
        int32_t result
        
        if (_finite(_mm_cvtps_pd(*rdi_1)) == 0)
            result.b = 1
        else
            rbx_1 += 1
            rdi_1 += 4
            
            if (rbx_1 s< 4)
                continue
            else
                rsi += 1
                rbp = &rbp[2]
                
                if (rsi s< 4)
                    break
                
                result.b = 0
        
        return result
