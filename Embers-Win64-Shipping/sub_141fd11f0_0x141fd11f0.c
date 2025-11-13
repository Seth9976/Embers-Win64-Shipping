// 函数: sub_141fd11f0
// 地址: 0x141fd11f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i_1 = sub_140bdcf70(*(*(*(arg1 + 0x50) + 0x58) + 0x160), *(arg1 + 0x40))
void* const r9 = nullptr
int32_t* i = i_1

if (i_1 != 0)
    do
        int32_t arg_8
        sub_140865c40(&i[0xc], &arg_8, arg3)
        int64_t rcx_2 = sx.q(arg_8)
        void* r9_1
        
        if (rcx_2.d != 0xffffffff)
            r9_1 = *(i + 0x30) + rcx_2 * 0x18
        
        if (rcx_2.d == 0xffffffff || r9_1 == 0)
            r9 = nullptr
        else
            r9 = *(r9_1 + 8)
            
            if (r9 != 0)
                break
        
        i = *(i + 8)
    while (i != 0)

return sub_141fa07b0(*(arg1 + 0x58), arg5, i_1, r9, arg4, arg6, 0)
