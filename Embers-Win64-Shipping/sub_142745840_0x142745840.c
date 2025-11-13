// 函数: sub_142745840
// 地址: 0x142745840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x680)

if (rcx == 0)
    int64_t rax
    rax.b = 0
    return rax

int16_t* rax_2 = (*(*rcx + 0x90))(rcx)
int64_t rdi
rdi.b = rax_2.b == 0

if (rax_2.b == 0)
label_1427458a0:
    
    if (rdi.b == 0)
        rax_2.b = 0
        return rax_2
else
    int64_t* rcx_1 = *(arg1 + 0x680)
    
    if ((*(*rcx_1 + 0xa0))(rcx_1).d == 1)
        int64_t* rcx_2 = *(arg1 + 0x680)
        
        if (*(*(*rcx_2 + 0xa8))(rcx_2) == 0)
            goto label_1427458a0

rax_2.b = 1
return rax_2
