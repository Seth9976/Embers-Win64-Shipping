// 函数: sub_141a698a0
// 地址: 0x141a698a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0xa0)
int64_t result = sx.q(*(arg1 + 0xa8))

for (void* rdi_1 = result * 0x88 + i; i != rdi_1; i = &i[0x11])
    result = zx.q(i[0x10].b)
    
    if ((result.b & 1) != 0)
        int64_t* i_1 = i
        
        if ((result.b & 2) == 0)
            i_1 = *i
        
        result = (*(*i_1 + 8))(i_1)

if ((*(arg1 + 0xe0) & 1) == 0)
    return result

void* rcx = arg1 + 0xb0

if ((*(arg1 + 0xe0) & 2) == 0)
    rcx = *rcx

return (*(*rcx + 8))(rcx)
