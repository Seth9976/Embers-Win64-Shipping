// 函数: sub_14285f5d0
// 地址: 0x14285f5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = *(arg1 + 0xa8)

if (*(rax + 0x198) == 0 || *(rax + 0x220) == 0)
    int32_t arg_8
    void arg_10
    int32_t result = sub_14285f240(arg1, &arg_10, &arg_8, nullptr)
    
    if (result != 0)
        return result
    
    void* rax_1 = *(arg1 + 8)
    int32_t rdx_2 = arg_8
    *arg1 = rdx_2
    
    if ((*(*(rax_1 + 0xc0) + 0x60) & 8) == 0 && rdx_2 s> 0x303)
        rdx_2 = 0x303
    
    arg1[0x179] = rdx_2

return 0
