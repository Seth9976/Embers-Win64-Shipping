// 函数: sub_1428bdc70
// 地址: 0x1428bdc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    void* rax_1 = *arg1
    
    if (rax_1 != 0 && *(rax_1 + 0x58) != 0)
        arg1[4].d = 0x10
        int64_t rdx_1 = *(rax_1 + 0x50)
        
        if (rdx_1 == 0)
            return zx.q((rdx_1 + 1).d)
        
        int32_t result = rdx_1()
        
        if (result s> 0)
            return result
        
        arg1[4].d = 0
        return result

sub_1428a5670(6, 0x8f, 0x96, "crypto\evp\pmeth_fn.c", 0x4a)
return -2
