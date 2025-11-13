// 函数: sub_141f07480
// 地址: 0x141f07480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x38))(arg2, arg1 + 0x410, arg1, 0)
int32_t i = 0

if (*(arg1 + 0x440) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t rdi_1 = *(r14_1 + *(arg1 + 0x438))
        (*(*arg2 + 0x38))(arg2, rdi_1 + 8, arg1, 0)
        (*(*arg2 + 0x38))(arg2, rdi_1 + 0x10, arg1, 0)
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x440))

return sub_140594850() __tailcall
