// 函数: sub_1428bcb30
// 地址: 0x1428bcb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg1 != 0)
    int32_t* rax_1 = *arg1
    
    if (rax_1 != 0)
        int64_t r10_1 = *(rax_1 + 0xc0)
        
        if (r10_1 != 0)
            if (arg2 != 0xffffffff && *rax_1 != arg2)
                return 0xffffffff
            
            if (*(rax_1 + 0xf8) == 0)
                int32_t rax_2 = arg1[4].d
                
                if (rax_2 == 0)
                    sub_1428a5670(rax_2 + 6, 0x89, 0x95, "crypto\evp\pmeth_lib.c", 0x17f)
                    return 0xffffffff
                
                if (arg3 != 0xffffffff && (arg3 & rax_2) == 0)
                    sub_1428a5670(6, 0x89, 0x94, "crypto\evp\pmeth_lib.c", 0x184)
                    return 0xffffffff
            
            int32_t rax_5 = r10_1(arg1, zx.q(arg4), zx.q(arg5), arg6)
            
            if (rax_5 == 0xfffffffe)
                sub_1428a5670(rax_5 + 8, 0x89, 0x93, "crypto\evp\pmeth_lib.c", 0x18c)
            
            return zx.q(rax_5)

sub_1428a5670(6, 0x89, 0x93, "crypto\evp\pmeth_lib.c", 0x174)
return 0xfffffffe
