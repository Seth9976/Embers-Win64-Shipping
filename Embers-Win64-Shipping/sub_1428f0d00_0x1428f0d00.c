// 函数: sub_1428f0d00
// 地址: 0x1428f0d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* arg_28
void* rsi = arg_28
int32_t rbx = -1
int64_t rbp = 0
int64_t var_30 = 0

if (rsi == 0)
    sub_1428a5670(0xd, 0xc5, 0x43, "crypto\asn1\a_verify.c", 0x5e)
else if (arg3[1] != 3 || (arg3[4].b & 7) == 0)
    int64_t* rax_1 = sub_142891ee0()
    int32_t var_38
    
    if (rax_1 != 0)
        if (sub_1428e38e0(sub_1428a96d0(*arg2), &arg_28, &var_38) != 0)
            int32_t rcx_3 = arg_28.d
            int32_t var_48
            
            if (rcx_3 != 0)
                int32_t* rax_8 = sub_14289b970(sub_1428a9620(rcx_3))
                
                if (rax_8 != 0)
                    if (sub_142896e20(var_38) == **(rsi + 0x10))
                        var_48.q = rsi
                        int32_t rax_11 = sub_1428935d0(rax_1, nullptr, rax_8, nullptr, var_48)
                        
                        if (rax_11 != 0)
                        label_1428f0e6f:
                            int32_t rax_6 = sub_1428c65a0(arg4, &var_30, arg1)
                            int64_t r9_1 = var_30
                            rbp = sx.q(rax_6)
                            
                            if (r9_1 != 0)
                                var_48.q = rbp
                                int32_t rax_12 =
                                    sub_142893300(rax_1, *(arg3 + 8), sx.q(*arg3), r9_1, var_48)
                                rbx = rax_12
                                
                                if (rax_12 s> 0)
                                    rbx = 1
                                else
                                    sub_1428a5670(0xd, 0xc5, 6, "crypto\asn1\a_verify.c", 0xa2)
                            else
                                sub_1428a5670(0xd, 0xc5, 0x41, "crypto\asn1\a_verify.c", 0x9b)
                                rbx = -1
                        else
                            sub_1428a5670(rax_11 + 0xd, 0xc5, rax_11 + 6, "crypto\asn1\a_verify.c", 
                                0x91)
                            rbx = 0
                    else
                        sub_1428a5670(0xd, 0xc5, 0xc8, "crypto\asn1\a_verify.c", 0x8c)
                else
                    sub_1428a5670(0xd, 0xc5, 0xa1, "crypto\asn1\a_verify.c", 0x86)
            else
                void* rax_4 = *(rsi + 0x10)
                int64_t r10_1
                
                if (rax_4 != 0)
                    r10_1 = *(rax_4 + 0xc8)
                
                if (rax_4 == 0 || r10_1 == 0)
                    sub_1428a5670(0xd, 0xc5, 0xc7, "crypto\asn1\a_verify.c", 0x75)
                else
                    var_48.q = arg3
                    int32_t rax_5 = r10_1(rax_1, arg1, arg4, arg2, var_48, rsi)
                    rbx = rax_5
                    
                    if (rax_5 == 2)
                        goto label_1428f0e6f
        else
            sub_1428a5670(0xd, 0xc5, 0xc7, "crypto\asn1\a_verify.c", 0x6f)
    else
        sub_1428a5670((rax_1 + 0xd).d, 0xc5, (rax_1 + 0x41).d, "crypto\asn1\a_verify.c", 0x69)
    sub_1428a6890(var_30, zx.q(rbp.d), "crypto\asn1\a_verify.c", 0xa7)
    sub_142891ea0(rax_1)
else
    sub_1428a5670(0xd, 0xc5, 0xdc, "crypto\asn1\a_verify.c", 0x63)

return zx.q(rbx)
