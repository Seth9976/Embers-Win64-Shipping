// 函数: sub_14288e8f0
// 地址: 0x14288e8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rsi = 0
int64_t* r13 = nullptr
sub_1428a49e0()
char* r12
int64_t r15

if (arg1 == 0)
    r15 = *(arg2 + 0x16b8)
    r12 = *(arg2 + 0x16c0)
else
    r15 = arg1[0x15]
    r12 = arg1[0x16]

int64_t* rax = sub_14289a500(&data_143507b90)

if (rax != 0)
    if (sub_142899cf0(rax, 0x6c, 3, arg3) s> 0)
        int64_t* rax_2 = sub_1428c76f0(rax, 0, r15, r12, arg4)
        r13 = rax_2
        
        if (rax_2 != 0)
            int32_t rax_3
            int512_t zmm1
            
            if (arg1 == 0)
                rax_3, zmm1 = sub_14288e0c0(arg2, rax_2)
            else
                rax_3, zmm1 = sub_14288d760(arg1, rax_2)
            
            rsi = rax_3
            int32_t rax_4 = sub_1428a54c0()
            
            if (rax_4 != 0)
                rsi = 0
            else if (rsi != 0)
                uint64_t rdx_1 = zx.q(rax_4 + 0x58)
                int32_t rax_5
                
                if (arg1 == 0)
                    rax_5 = sub_14284eae0(arg2, rdx_1, 0, nullptr)
                else
                    rax_5 = sub_14284dc40(arg1, rdx_1, 0, nullptr)
                
                if (rax_5 == 0)
                    rsi = 0
                else
                    char* rax_6
                    int512_t zmm1_1
                    rax_6, zmm1_1 = sub_1428a3d00(rax, 0, r15, r12, zmm1)
                    char* rdi_1 = rax_6
                    
                    if (rax_6 == 0)
                    label_14288eabd:
                        int32_t rax_9 = sub_1428a5510()
                        
                        if ((rax_9 & 0xff000000) != 0x9000000 || (rax_9 & 0xfff) != 0x6c)
                            rsi = 0
                        else
                            sub_1428a49e0()
                    else
                        while (true)
                            int32_t rax_7
                            
                            if (arg1 == 0)
                                rax_7 = sub_14284eae0(arg2, 0x59, 0, rdi_1)
                            else
                                rax_7 = sub_14284dc40(arg1, 0x59, 0, rdi_1)
                            
                            if (rax_7 == 0)
                                sub_1428a2c50(rdi_1)
                                break
                            
                            char* rax_8
                            rax_8, zmm1_1 = sub_1428a3d00(rax, 0, r15, r12, zmm1_1)
                            rdi_1 = rax_8
                            
                            if (rax_8 == 0)
                                goto label_14288eabd
                        
                        rsi = 0
        else
            sub_1428a5670((rax_2 + 0x14).d, 0xdc, (rax_2 + 9).d, "ssl\ssl_rsa.c", 0x26e)
    else
        sub_1428a5670(0x14, 0xdc, 2, "ssl\ssl_rsa.c", 0x267)
else
    sub_1428a5670((rax + 0x14).d, 0xdc, (rax + 7).d, "ssl\ssl_rsa.c", 0x262)

sub_1428a2c50(r13)
sub_142899e70(rax)
return zx.q(rsi)
