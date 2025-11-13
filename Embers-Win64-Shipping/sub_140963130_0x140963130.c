// 函数: sub_140963130
// 地址: 0x140963130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x58)
int32_t rdi = 0

for (void* r15_2 = sx.q(*(arg1 + 0x60)) * 0x50 + i; i != r15_2; i += 0x50)
    void* j = *(i + 0x30)
    
    for (void* rsi_3 = sx.q(*(i + 0x38)) * 0x50 + j; j != rsi_3; j += 0x50)
        int16_t* rdx
        
        if (arg2[1].d == 0)
            rdx = &data_142d40450
        else
            rdx = *arg2
        
        int16_t* const rcx
        
        if (*(j + 0x40) == 0)
            rcx = &data_142d40450
        else
            rcx = *(j + 0x38)
        
        if (sub_140a54510(rcx, rdx) == 0)
            rdi += 1

return zx.q(rdi)
