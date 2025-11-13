// 函数: sub_142a9e730
// 地址: 0x142a9e730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg2 + 8)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(arg2 + 0xc)
else
    rax_2 = sx.d(rax) s>> 5

if (rax_2 != 0 && *(arg1 + 0x28) == 0 && *(arg1 + 0x58) == 0 && (*(arg1 + 0x20) & 1) == 0)
    int32_t rax_3 = sub_142a9fa90(arg2)
    
    if (rax_3 s>= 0)
        sub_142a9e7d0(arg1, rax_3)
    else
        void* rcx_1 = *(arg1 + 0x50)
        int32_t rax_4
        
        if (rcx_1 != 0)
            rax_4 = sub_142ae7470(rcx_1, arg2, 0)
        
        if (rcx_1 == 0 || rax_4 s< 0)
            sub_142a9de00(arg1, arg2)
            sub_142aa0000(arg1)

return arg1
