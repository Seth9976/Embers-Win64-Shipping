// 函数: sub_140a5d4f0
// 地址: 0x140a5d4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg1

for (void* rsi_2 = &i[sx.q(arg1[1].d) * 2]; i != rsi_2; i = &i[2])
    void* rax_1 = *i
    int16_t* rdx
    
    if (arg2[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *arg2
    
    int16_t* const rcx
    
    if (*(rax_1 + 0x30) == 0)
        rcx = &data_142d40450
    else
        rcx = *(rax_1 + 0x28)
    
    if (sub_140a54510(rcx, rdx) == 0)
        return i

return 0
