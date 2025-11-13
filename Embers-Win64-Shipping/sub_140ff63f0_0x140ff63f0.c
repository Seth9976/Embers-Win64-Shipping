// 函数: sub_140ff63f0
// 地址: 0x140ff63f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (arg2 != 0)
    rax = (*(*arg2 + 0x48))(arg2)
else
    rax = nullptr

int64_t* rcx_1 = *(arg1 + 0x150)
int64_t r8 = *rcx_1
void* result = (*(r8 + 0x1b0))(rcx_1, *(rax + 0x40), r8)

if (*(arg1 + 0x17d18) != 0)
    result = *(arg1 + 0x17d30)
    
    if (result != 0)
        *(result + 0x10) += 1

return result
