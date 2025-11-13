// 函数: sub_1418c56c0
// 地址: 0x1418c56c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
EnterCriticalSection(&data_143efb2a8)

if (&arg1[0x15] != &arg1[0x25])
    int32_t r10_1 = data_14399fa54
    int32_t* rbx_1 = &arg1[0x16]
    
    while (true)
        int32_t r9_2 = *rbx_1
        int32_t rax_1 = 0
        
        if (r9_2 s> 0)
            int64_t* r11_1 = *(rbx_1 - 8)
            int64_t* rdx = r11_1
            
            while (true)
                int64_t* r8_1 = *rdx
                
                if (arg2 == 0 && r8_1[5].d + 0xa u>= r10_1)
                    rax_1 += 1
                    rdx = &rdx[1]
                    
                    if (rax_1 s>= r9_2)
                        break
                    
                    continue
                
                rsi = r8_1
                int32_t rcx_4 = r9_2 - rax_1 - 1
                
                if (rcx_4 s>= 1)
                    rcx_4 = 1
                
                if (rcx_4 != 0)
                    memcpy(&r11_1[sx.q(rax_1)], &r11_1[sx.q(r9_2 - rcx_4)], rcx_4 << 3)
                    r9_2 = *rbx_1
                
                *rbx_1 = r9_2 - 1
                r10_1 = data_14399fa54
                break
        
        rbx_1 = &rbx_1[4]
        
        if (&rbx_1[-2] == &arg1[0x25])
            break

int64_t result = LeaveCriticalSection(&data_143efb2a8)

if (rsi == 0)
    return result

(*(*rsi + 0x10))(rsi, *arg1)
sub_1418beb20(*arg1 + 0x10, &rsi[3])
return (**rsi)(rsi, 1)
