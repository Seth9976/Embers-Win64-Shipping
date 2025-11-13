// 函数: sub_1428ed6c0
// 地址: 0x1428ed6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint32_t count = *arg2

if (count s< 0 || count s> arg3)
    return 0

if (count s> 0)
    memcpy(arg1, *(arg2 + 8), count)
    int32_t rcx_1 = arg2[4] & 7
    
    if (rcx_1 != 0)
        int64_t rax_1 = sx.q(*arg2)
        char rdx_1 = (0xff s>> (8 - rcx_1.b)).b
        void* rcx_3 = rax_1 + arg1
        char rax_2 = *(rax_1 + arg1 - 1)
        
        if (arg4 != 0)
            *(rcx_3 - 1) = rax_2 | rdx_1
        else
            *(rcx_3 - 1) = not.b(rdx_1) & rax_2

int64_t rax_3 = sx.q(*arg2)
memset(arg1 + rax_3, zx.d(arg4), sx.q(arg3 - rax_3.d))
return 1
