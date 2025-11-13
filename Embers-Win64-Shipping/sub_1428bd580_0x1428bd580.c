// 函数: sub_1428bd580
// 地址: 0x1428bd580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    void* rax_1 = *arg1
    
    if (rax_1 != 0 && *(rax_1 + 0xb8) != 0)
        arg1[4].d = 0x400
        int64_t rdx_1 = *(rax_1 + 0xb0)
        
        if (rdx_1 == 0)
            return zx.q((rdx_1 + 1).d)
        
        int32_t result = rdx_1()
        
        if (result s> 0)
            return result
        
        arg1[4].d = 0
        return result

sub_1428a5670(6, 0x9a, 0x96, "crypto\evp\pmeth_fn.c", 0xd1)
return -2
