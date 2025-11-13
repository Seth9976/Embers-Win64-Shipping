// 函数: sub_140a61b80
// 地址: 0x140a61b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x80)
void* rbx = arg1
int32_t i_1 = *(arg1 + 0x88)

if (rsi != 0)
    rbx = rsi

if (i_1 != 0)
    int32_t i
    
    do
        sub_140a62960(rbx)
        rbx += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)
    rsi = *(arg1 + 0x80)

if (rsi == 0)
    return 

int64_t* rcx_1 = data_143ddb3f0

if (rcx_1 == 0)
    sub_140a750a0()
    rcx_1 = data_143ddb3f0

(*(*rcx_1 + 0x30))(rcx_1, rsi)
