// 函数: sub_1428e9e50
// 地址: 0x1428e9e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t count = arg2
char* r10 = arg1
uint64_t count_1 = arg2

if (test_bit(arg5, 0xf))
    if (arg2 u> arg4)
        do
            char rdx = *r10
            
            if (rdx == 0)
                break
            
            if ((arg5.b & 0x10) != 0 && rdx == 0x2e)
                break
            
            r10 = &r10[1]
            count_1 -= 1
        while (count_1 u> arg4)
    
    if (count_1 == arg4)
        arg1 = r10
        count = count_1

if (count != arg4)
    return 0

int32_t rcx
rcx.b = memcmp(arg1, arg3, count) == 0
return zx.q(rcx)
