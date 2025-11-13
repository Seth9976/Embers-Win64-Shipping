// 函数: sub_1428b6990
// 地址: 0x1428b6990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char* _Buffer = arg2
int32_t i = 0
*arg2 = 0

if (fgets(_Buffer, arg3, *(arg1 + 0x38)) != 0 && *_Buffer != 0)
    while (i u< 0x80000000)
        _Buffer = &_Buffer[1]
        i += 1
        
        if (*_Buffer == 0)
            break
    
    i &= 0x7fffffff

return zx.q(i)
