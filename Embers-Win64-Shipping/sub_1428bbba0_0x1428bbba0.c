// 函数: sub_1428bbba0
// 地址: 0x1428bbba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = arg3
int64_t* rax = sub_14289a660(arg1)

if (arg2 != 0 && rbp != 0)
    void* rax_1 = sub_14289a060(arg1)
    
    if (*(rax_1 + 0x84) == 0)
        sub_142899cc0(arg1, 0xf)
        
        if (*(rax_1 + 0x68) != 0)
            goto label_1428bbca9
        
        int64_t rax_2 = sub_1428a6730(sx.q(*(rax_1 + 0x70)))
        *(rax_1 + 0x68) = rax_2
        
        if (rax_2 != 0)
            int32_t rdx_2 = *(rax_1 + 0x88)
            *(rax_1 + 0x78) = rax_2
            *(rax_1 + 0x80) = 0
            sub_14036ebd0(rax_1 + 0x90, rdx_2, "1.2.8", 0x58)
            *(rax_1 + 0xa0) = *(rax_1 + 0x68)
            *(rax_1 + 0xa8) = *(rax_1 + 0x70)
        label_1428bbca9:
            *(rax_1 + 0x90) = arg2
            *(rax_1 + 0x98) = rbp
            int32_t rax_6 = *(rax_1 + 0x80)
            int32_t rax_10
            
            while (true)
                if (rax_6 != 0)
                    int64_t rdx_3 = *(rax_1 + 0x78)
                    int32_t i
                    int64_t rdi_1
                    
                    do
                        int32_t rax_7 = sub_14289aa40(rax, rdx_3, rax_6)
                        rdi_1 = sx.q(rax_7)
                        
                        if (rax_7 s<= 0)
                            rbp -= *(rax_1 + 0x98)
                            sub_142899cd0(arg1)
                            
                            if (rdi_1.d s>= 0)
                                goto label_1428bbd7f
                            
                            if (rbp s> 0)
                                rdi_1 = zx.q(rbp)
                            
                            return zx.q(rdi_1.d)
                        
                        *(rax_1 + 0x78) += rdi_1
                        i = *(rax_1 + 0x80)
                        rdx_3 = *(rax_1 + 0x78)
                        rax_6 = i - rdi_1.d
                        *(rax_1 + 0x80) = rax_6
                    while (i != rdi_1.d)
                
                if (*(rax_1 + 0x98) == 0)
                label_1428bbd7f:
                    return zx.q(rbp)
                
                int64_t rax_8 = *(rax_1 + 0x68)
                *(rax_1 + 0x78) = rax_8
                *(rax_1 + 0xa0) = rax_8
                *(rax_1 + 0xa8) = *(rax_1 + 0x70)
                rax_10 = sub_14036f750(rax_1 + 0x90, 0)
                
                if (rax_10 != 0)
                    break
                
                rax_6 = *(rax_1 + 0x70) - *(rax_1 + 0xa8)
                *(rax_1 + 0x80) = rax_6
            
            sub_1428a5670(0x29, 0x66, 0x63, "crypto\comp\c_zlib.c", 0x1e6)
            sub_140374310(rax_10)
            sub_1428a4880(2)
        else
            sub_1428a5670((rax_2 + 0x29).d, (rax_2 + 0x66).d, (rax_2 + 0x41).d, 
                "crypto\comp\c_zlib.c", 0x1bd)

return 0
