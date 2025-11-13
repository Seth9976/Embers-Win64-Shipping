// 函数: sub_140fe6900
// 地址: 0x140fe6900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0x20)
int64_t* rax = rbx + 0x138

if (rbx == 0)
    rax = 0x150

int64_t* rcx = *rax
(*(*rcx + 0x198))(rcx, *(*(arg1 + 0x10) + 0x18), *(arg1 + 0x18))
char* result = rbx + 0x17d00

if (rbx == 0)
    result = 0x17d18

if (*result != 0)
    result = rbx + 0x17d18
    
    if (rbx == 0)
        result = 0x17d30
    
    void* rcx_1 = *result
    
    if (rcx_1 != 0)
        *(rcx_1 + 0x10) += 1
        result = *result
        *(result + 0x14) += 1

return result
