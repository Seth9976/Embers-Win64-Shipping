// 函数: sub_141a4b380
// 地址: 0x141a4b380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x460)

if (rcx == 0)
    return zx.q((rcx - 1).d)

void* rax_2 = (*(*rcx + 0x280))(rcx)
int32_t i = 0

if (*(rax_2 + 0x140) s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t rcx_1 = *(rax_2 + 0x138)
        int16_t* rdx
        
        if (arg2[1].d == 0)
            rdx = &data_142d40450
        else
            rdx = *arg2
        
        int16_t* const rcx_2
        
        if (*(rcx_1 + rdi_1 + 0x10) == 0)
            rcx_2 = &data_142d40450
        else
            rcx_2 = *(rcx_1 + rdi_1 + 8)
        
        if (sub_140a54510(rcx_2, rdx) == 0)
            return zx.q(i)
        
        i += 1
        rdi_1 += 0x18
    while (i s< *(rax_2 + 0x140))

return -1
