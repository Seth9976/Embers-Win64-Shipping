// 函数: sub_142924980
// 地址: 0x142924980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg5 == arg4)
    char r10_1 = *arg3
    
    if (r10_1 - 0x6a u<= 1)
        void* rdx = &arg3[1]
        uint32_t count
        
        if (r10_1 != 0x6b)
            count = arg4 - 2
        else
            int32_t rax_2 = 0
            
            if (arg4 - 3 s> 0)
                while (true)
                    char rcx = *rdx
                    rdx += 1
                    
                    if (rcx == 0xba)
                        goto label_1429249da
                    
                    if (rcx != 0xbb)
                        break
                    
                    rax_2 += 1
                    
                    if (rax_2 s>= arg4 - 3)
                        goto label_1429249da
                
                sub_1428a5670(4, 0x80, 0x8a, "crypto\rsa\rsa_x931.c", 0x48)
                return 0xffffffff
            
        label_1429249da:
            count = arg4 - 3 - rax_2
            
            if (rax_2 == 0)
                sub_1428a5670(4, 0x80, 0x8a, "crypto\rsa\rsa_x931.c", 0x50)
                return 0xffffffff
        
        if (*(sx.q(count) + rdx) == 0xcc)
            memcpy(arg1, rdx, count)
            return zx.q(count)
        
        sub_1428a5670(4, 0x80, 0x8b, "crypto\rsa\rsa_x931.c", 0x59)
        return 0xffffffff

sub_1428a5670(4, 0x80, 0x89, "crypto\rsa\rsa_x931.c", 0x3d)
return 0xffffffff
