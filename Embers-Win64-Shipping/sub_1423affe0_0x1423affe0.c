// 函数: sub_1423affe0
// 地址: 0x1423affe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = *(arg1 + 0x120)
void* i = arg1 + 0x110

if (i_1 != 0)
    i = i_1

for (void* rdi = i + (sx.q(*(arg1 + 0x128)) << 3); i != rdi; i += 8)
    int64_t* rcx = *i
    int32_t rax_2 = (*(*rcx + 0x38))(rcx)
    
    if (rax_2 == 0)
        return 2
    
    if (rax_2 == 1)
        return 1

int64_t* rcx_1 = *(arg1 + 0x108)

if (rcx_1 != 0)
    int32_t rax_4 = (*(*rcx_1 + 0x20))(rcx_1)
    
    if (rax_4 != 0 && rax_4 == 1)
        return 1

return 2
