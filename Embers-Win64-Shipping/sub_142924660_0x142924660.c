// 函数: sub_142924660
// 地址: 0x142924660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
char* r10 = arg3

if (arg4 s< 0xa)
    sub_1428a5670(4, 0x72, 0x6f, "crypto\rsa\rsa_ssl.c", 0x3f)
    return 0xffffffff

if (arg4 != arg5)
    goto label_1429246eb

char rax_2 = *r10
r10 = &r10[1]
int32_t var_18

if (rax_2 == 0)
    arg4 -= 1
label_1429246eb:
    
    if (arg5 == arg4 + 1)
        void* r10_1 = &r10[1]
        
        if (*r10 == 2)
            int32_t i = 0
            
            if (arg4 - 1 s> 0)
                do
                    char rax_6 = *r10_1
                    r10_1 += 1
                    
                    if (rax_6 == 0)
                        break
                    
                    i += 1
                while (i s< arg4 - 1)
            
            int32_t var_18_1
            int32_t r8_1
            
            if (i == arg4 - 1 || i s< 8)
                var_18_1 = 0x57
                r8_1 = 0x71
            else
                int32_t rdx = -9
                char* rax_7 = -fffffffffffffff7
                
                while (*(rax_7 + r10_1) == 3)
                    rdx += 1
                    rax_7 = &rax_7[1]
                    
                    if (rax_7 s>= -1)
                        break
                
                if (rdx != 0xffffffff)
                    uint32_t count = arg4 - 1 + 0xffffffff - i
                    
                    if (count s<= arg2)
                        memcpy(arg1, r10_1, count)
                        return zx.q(count)
                    
                    var_18_1 = 0x66
                    r8_1 = 0x6d
                else
                    var_18_1 = 0x5f
                    r8_1 = 0x73
            
            sub_1428a5670(4, 0x72, r8_1, "crypto\rsa\rsa_ssl.c", var_18_1)
            return 0xffffffff
    
    var_18 = 0x4b
else
    var_18 = 0x45

sub_1428a5670(4, 0x72, 0x6b, "crypto\rsa\rsa_ssl.c", var_18)
return 0xffffffff
