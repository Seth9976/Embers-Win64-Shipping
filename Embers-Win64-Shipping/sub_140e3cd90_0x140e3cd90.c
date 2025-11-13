// 函数: sub_140e3cd90
// 地址: 0x140e3cd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x368)

if (rdx == 0)
    sub_140e41c20(arg1, arg2)
    rdx = *(arg1 + 0x368)
    
    if (rdx == 0)
        int32_t rcx = *(arg1 + 0x36c)
        *(arg1 + 0x36c) = rcx ^ 1
        
        if (rcx != 0)
            return 0xd9
        
        return 0xff

char* rcx_1 = arg1[0x36].q
uint64_t result = zx.q(*rcx_1)
arg1[0x36].q = &rcx_1[1]
*(arg1 + 0x368) = rdx - 1
return result
