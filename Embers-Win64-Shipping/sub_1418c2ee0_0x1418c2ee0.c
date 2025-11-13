// 函数: sub_1418c2ee0
// 地址: 0x1418c2ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[6])
int32_t rsi = 0

if (data_143efaf6c != 0)
    void*** rax_1 = j_sub_140a82f30(0x28)
    void*** rax_2
    
    if (rax_1 == 0)
        rax_2 = nullptr
    else
        rax_2 = sub_1418b8750(rax_1, *arg1)
    
    arg1[0x12] = rax_2

void* rdi_1

if (arg1[3].d s<= 0)
label_1418c2f83:
    rdi_1 = sub_1418bc9e0(&arg1[1], 0)
else
    void** r15_1 = nullptr
    
    while (true)
        rdi_1 = *(r15_1 + arg1[2])
        sub_1418c4d80(rdi_1)
        
        if ((*(rdi_1 + 0x2d) & 0x20) == 0 && *(rdi_1 + 0x2c) == 0)
            break
        
        rsi += 1
        r15_1 = &r15_1[1]
        
        if (rsi s>= arg1[3].d)
            goto label_1418c2f83

arg1[0xe] = rdi_1
int64_t result = sub_1418bc690(rdi_1)

if (arg1 == -0x30)
    return result

return LeaveCriticalSection(&arg1[6]) __tailcall
