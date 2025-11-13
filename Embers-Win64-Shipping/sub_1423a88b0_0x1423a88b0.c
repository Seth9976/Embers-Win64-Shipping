// 函数: sub_1423a88b0
// 地址: 0x1423a88b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = *(arg1 + 0x80)
void* i = arg1 + 0x10

if (i_1 != 0)
    i = i_1

int64_t result = sx.q(*(arg1 + 0x88))

for (void* rdi = i + (result << 3); i != rdi; i += 8)
    int64_t* rcx = *i
    
    if (rcx != 0 && *(rcx + 0x63) == 0)
        *(rcx + 0x63) = 1
        rcx[0xc].b = 1
        
        if (*(rcx + 0x61) == 0)
            result = (*(*rcx + 0x10))()

return result
