// 函数: sub_1427a6f00
// 地址: 0x1427a6f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x38) s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t rax_1 = *(arg1 + 0x30)
        int16_t* rdx
        
        if (arg2[1].d == 0)
            rdx = &data_142d40450
        else
            rdx = *arg2
        
        int16_t* const rcx
        
        if (*(rax_1 + rdi_1 + 0x20) == 0)
            rcx = &data_142d40450
        else
            rcx = *(rax_1 + rdi_1 + 0x18)
        
        if (sub_140a54510(rcx, rdx) == 0)
            return *(*(arg1 + 0x30) + sx.q(i) * 0x30)
        
        i += 1
        rdi_1 += 0x30
    while (i s< *(arg1 + 0x38))

return 0
