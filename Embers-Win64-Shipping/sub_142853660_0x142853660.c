// 函数: sub_142853660
// 地址: 0x142853660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rdi

if (arg1 == 0)
    rdi = *(arg2 + 0x130)
else
    rdi = *(arg1 + 0x488)

int64_t* rsi = *rdi
int32_t* rbp = nullptr
int64_t* r12 = nullptr
uint64_t rbx = 0
int32_t r14 = 0

if (*rsi != 0)
    if ((arg3 & 4) == 0)
        rbp = rdi[0x3b]
        
        if (rbp == 0)
            if (arg1 == 0)
                rbp = *(arg2 + 0x20)
            else
                rbp = *(*(arg1 + 0x598) + 0x20)
        
        if ((arg3 & 1) != 0)
            rbx = rsi[2]
        
        goto label_142853771
    
    int32_t* rax_1 = sub_14289db80()
    rbp = rax_1
    
    if (rax_1 != 0)
        if (sub_142898c70(rsi[2]) s<= 0)
        label_142853733:
            
            if (sub_14289d850(rbp, *rsi) != 0)
                rbx = 0
            label_142853771:
                int64_t* rax_8 = sub_14289e400()
                r12 = rax_8
                
                if (rax_8 != 0)
                    int32_t rax_9 = sub_14289e160(r12, rbp, *rsi, rbx)
                    
                    if (rax_9 != 0)
                        sub_14289e5a0(r12, *(rdi + 0x1c) & 0x30000)
                        int32_t rax_10 = sub_14289e8e0(r12)
                        int32_t rbx_1 = rax_10
                        
                        if (rax_10 s> 0)
                        label_14285381d:
                            int32_t* rax_11 = sub_14289e120(r12)
                            
                            if (rbx_1 s<= 0)
                                goto label_142853846
                            
                            sub_1428a2c50(sub_142898e20(rax_11))
                            
                            if ((arg3 & 2) != 0 && sub_142898c70(rax_11) s> 0 && test_bit(
                                    sub_1428aea30(sub_142898ea0(rax_11, 
                                        sub_142898c70(rax_11) - 1)), 
                                    0xd))
                                sub_1428a2c50(sub_142898c80(rax_11))
                            
                            int32_t rbx_2 = 0
                            
                            if (sub_142898c70(rax_11) s<= 0)
                            label_14285391a:
                                sub_142898cb0(rsi[2], sub_1428a2c50)
                                rsi[2] = rax_11
                                
                                if (r14 == 0)
                                    r14 = 1
                            else
                                while (true)
                                    int32_t var_48_1 = 0
                                    int32_t rax_22 =
                                        sub_1428636a0(arg1, arg2, sub_142898ea0(rax_11, rbx_2), 0)
                                    r14 = rax_22
                                    
                                    if (rax_22 != 1)
                                        sub_1428a5670(0x14, 0x14c, rax_22, "ssl\ssl_cert.c", 0x36d)
                                        sub_142898cb0(rax_11, sub_1428a2c50)
                                        r14 = 0
                                        break
                                    
                                    rbx_2 += 1
                                    
                                    if (rbx_2 s>= sub_142898c70(rax_11))
                                        goto label_14285391a
                        else
                            if ((arg3 & 8) != 0)
                                if ((arg3 & 0x10) != 0)
                                    sub_1428a49e0()
                                
                                rbx_1 = 1
                                r14 = 2
                                goto label_14285381d
                            
                        label_142853846:
                            sub_1428a5670(0x14, 0x14c, 0x86, "ssl\ssl_cert.c", 0x351)
                            sub_1428b85a0(sub_14289e150(r12))
                            sub_1428a4880(2)
                    else
                        sub_1428a5670(rax_9 + 0x14, 0x14c, rax_9 + 0xb, "ssl\ssl_cert.c", 0x340)
                else
                    sub_1428a5670((rax_8 + 0x14).d, 0x14c, (rax_8 + 0x41).d, "ssl\ssl_cert.c", 
                        0x33c)
        else
            while (sub_14289d850(rbp, sub_142898ea0(rsi[2], rbx.d)) != 0)
                rbx = zx.q(rbx.d + 1)
                
                if (rbx.d s>= sub_142898c70(rsi[2]))
                    goto label_142853733
else
    sub_1428a5670(0x14, 0x14c, 0xb3, "ssl\ssl_cert.c", 0x31e)

if ((arg3 & 4) != 0)
    sub_14289da60(rbp)

sub_14289e0e0(r12)
return zx.q(r14)
