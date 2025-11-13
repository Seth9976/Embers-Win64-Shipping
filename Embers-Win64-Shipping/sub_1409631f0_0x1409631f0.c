// 函数: sub_1409631f0
// 地址: 0x1409631f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x40)
int32_t rdi = 0

for (void* rbp_1 = sx.q(*(arg1 + 0x48)) * 0x78 + i; i != rbp_1; i += 0x78)
    int16_t* rdx
    
    if (arg2[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *arg2
    
    int16_t* const rcx
    
    if (*(i + 0x68) == 0)
        rcx = &data_142d40450
    else
        rcx = *(i + 0x60)
    
    if (sub_140a54510(rcx, rdx) == 0)
        rdi += 1

return zx.q(rdi)
