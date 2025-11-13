// 函数: sub_1428d6e70
// 地址: 0x1428d6e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t r14 = -1
int64_t rdi = 0
char* rsi = nullptr

if (sub_142890560(*(arg4 + 0x18)) s> 0x4000)
    sub_1428a5670(4, 0x68, 0x69, "crypto\rsa\rsa_ossl.c", 0x4c)
    return 0xffffffff

int32_t var_48_1

if (sub_1428909a0(*(arg4 + 0x18), *(arg4 + 0x20)) s> 0)
    int32_t rax_4 = sub_142890560(*(arg4 + 0x18))
    int32_t rax_5
    
    if (rax_4 s> 0xc00)
        rax_5 = sub_142890560(*(arg4 + 0x20))
    
    if (rax_4 s<= 0xc00 || rax_5 s<= 0x40)
        int64_t* rax_6 = sub_1428d8d60()
        
        if (rax_6 != 0)
            sub_1428d8e50(rax_6)
            int64_t* rax_7 = sub_1428d8ba0(rax_6)
            int64_t* rax_8 = sub_1428d8ba0(rax_6)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(sub_142890560(*(arg4 + 0x18)) + 7)
            rdi = sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
            char* rax_14 = sub_1428a6730(rdi)
            rsi = rax_14
            
            if (rax_8 == 0 || rax_14 == 0)
                sub_1428a5670(4, 0x68, 0x41, "crypto\rsa\rsa_ossl.c", 0x65)
            else
                int32_t var_48
                int32_t var_40
                int32_t rax_15
                
                if (arg5 == 1)
                    rax_15 = sub_1429234b0(rsi, rdi.d, arg2, arg1)
                label_1428d704a:
                    
                    if (rax_15 s> 0 && sub_14288fa60(rsi, rdi.d, rax_7) != 0)
                        if (sub_1428909a0(rax_7, *(arg4 + 0x18)) s< 0)
                            int32_t* rax_18
                            
                            if ((*(arg4 + 0x74) & 2) != 0)
                                rax_18 = sub_1428cc990(arg4 + 0x78, *(arg4 + 0xa8), *(arg4 + 0x18), 
                                    rax_6)
                            
                            if ((*(arg4 + 0x74) & 2) == 0 || rax_18 != 0)
                                var_40.q = *(arg4 + 0x78)
                                var_48.q = rax_6
                                
                                if ((*(*(arg4 + 8) + 0x30))(rax_8, rax_7, *(arg4 + 0x20), 
                                        *(arg4 + 0x18), var_48, var_40) != 0)
                                    r14 = sub_14288fbc0(rax_8, arg3, rdi.d)
                        else
                            sub_1428a5670(4, 0x68, 0x84, "crypto\rsa\rsa_ossl.c", 0x83)
                else
                    if (arg5 == 2)
                        rax_15 = sub_142924550(rsi, rdi.d, arg2, arg1)
                        goto label_1428d704a
                    
                    if (arg5 == 3)
                        rax_15 = sub_142924800(rsi, rdi.d, arg2, arg1)
                        goto label_1428d704a
                    
                    if (arg5 == 4)
                        var_40 = 0
                        var_48.q = 0
                        rax_15 = sub_142923ab0(rsi, rdi.d, arg2, arg1, 0, 0)
                        goto label_1428d704a
                    
                    sub_1428a5670(4, 0x68, 0x76, "crypto\rsa\rsa_ossl.c", 0x77)
            
            sub_1428d8a60(rax_6)
        
        sub_1428d8ae0(rax_6)
        sub_1428a6890(rsi, sx.q(rdi.d), "crypto\rsa\rsa_ossl.c", 0x99)
        return zx.q(r14)
    
    var_48_1 = 0x58
else
    var_48_1 = 0x51

sub_1428a5670(4, 0x68, 0x65, "crypto\rsa\rsa_ossl.c", var_48_1)
return 0xffffffff
