// 函数: sub_1428bd610
// 地址: 0x1428bd610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    void* rax_1 = *arg1
    
    if (rax_1 != 0 && (*(rax_1 + 0xb8) != 0 || *(rax_1 + 0x98) != 0 || *(rax_1 + 0xa8) != 0))
        int64_t r10_1 = *(rax_1 + 0xc0)
        
        if (r10_1 != 0)
            int32_t rcx = arg1[4].d
            
            if (((rcx - 0x100) & 0xfffffcff) != 0 || rcx == 0x300)
                sub_1428a5670(6, 0x9b, 0x97, "crypto\evp\pmeth_fn.c", 0xeb)
                return 0xffffffff
            
            int32_t rax_3 = r10_1(arg1, 2, 0, arg2)
            
            if (rax_3 s<= 0)
                return rax_3
            
            if (rax_3 != 2)
                int32_t* rcx_2 = arg1[2]
                
                if (rcx_2 == 0)
                    sub_1428a5670(6, 0x9b, 0x9a, "crypto\evp\pmeth_fn.c", 0xf8)
                    return 0xffffffff
                
                if (*rcx_2 != *arg2)
                    sub_1428a5670(6, 0x9b, 0x65, "crypto\evp\pmeth_fn.c", 0xfd)
                    return 0xffffffff
                
                if (sub_1428968c0(arg2) == 0)
                    int32_t rax_8 = sub_142896420(arg1[2], arg2)
                    
                    if (rax_8 == 0)
                        sub_1428a5670(rax_8 + 6, 0x9b, 0x99, "crypto\evp\pmeth_fn.c", 0x10a)
                        return 0xffffffff
                
                sub_1428965a0(arg1[3])
                int64_t rax_10 = *arg1
                arg1[3] = arg2
                int32_t rax_11 = (*(rax_10 + 0xc0))(arg1, 2, 1, arg2)
                
                if (rax_11 s<= 0)
                    arg1[3] = 0
                    return rax_11
                
                sub_142896e70(arg2)
            
            return 1

sub_1428a5670(6, 0x9b, 0x96, "crypto\evp\pmeth_fn.c", 0xe4)
return -2
