// 函数: sub_14290ec90
// 地址: 0x14290ec90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0

if (sub_1428a96d0(*arg2) != 0x390)
    return 0

int64_t* rax_2 = sub_142910050(arg2)

if (rax_2 != 0)
    char* rax_3 = sub_14290f6d0(*rax_2)
    
    if (rax_3 != 0)
        char* rax_4 = sub_14290f6d0(rax_2[4])
        
        if (rax_4 != 0)
            int32_t* rcx_4 = rax_2[2]
            int32_t rsi_1
            
            if (rcx_4 == 0)
                rsi_1 = 0x14
            label_14290ed50:
                int32_t* rcx_5 = rax_2[3]
                int32_t rax_6
                
                if (rcx_5 != 0)
                    rax_6 = sub_1428e4860(rcx_5)
                
                if (rcx_5 == 0 || rax_6 == 1)
                    int32_t rax_7 = sub_1406938b0(rax_3)
                    
                    if (rax_7 - 0x2a0 u<= 2 && rax_7 == sub_1406938b0(rax_4)
                            && rsi_1 == sub_1428916c0(rax_3))
                        rbp = 2
                    
                    sub_1428a3a60(arg1, rax_7, 0x390, sub_1428916c0(rax_3) << 2, rbp)
                    rbp = 1
                else
                    sub_1428a5670(4, 0x97, 0x8b, "crypto\rsa\rsa_ameth.c", 0x2cc)
            else
                int32_t rax_5 = sub_1428e4860(rcx_4)
                rsi_1 = rax_5
                
                if (rax_5 s>= 0)
                    goto label_14290ed50
                
                sub_1428a5670(4, 0x97, 0x96, "crypto\rsa\rsa_ameth.c", 0x2c0)

sub_1428979d0(rax_2)
return zx.q(rbp)
