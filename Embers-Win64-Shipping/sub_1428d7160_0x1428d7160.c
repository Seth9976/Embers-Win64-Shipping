// 函数: sub_1428d7160
// 地址: 0x1428d7160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t r14 = 0
int32_t rsi = -1
char* r13 = nullptr
int32_t var_48 = 0
int64_t* var_40 = nullptr
int64_t* var_38 = nullptr
int64_t* rax = sub_1428d8d60()

if (rax != 0)
    sub_1428d8e50(rax)
    int64_t* rax_1 = sub_1428d8ba0(rax)
    int64_t* rsi_1 = sub_1428d8ba0(rax)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(sub_142890560(*(arg4 + 0x18)) + 7)
    r14 = sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
    char* rax_8 = sub_1428a6730(r14)
    r13 = rax_8
    int32_t var_58_1
    
    if (rsi_1 == 0 || rax_8 == 0)
        var_58_1 = 0x101
    label_1428d7488:
        sub_1428a5670(4, 0x66, 0x41, "crypto\rsa\rsa_ossl.c", var_58_1)
        rsi = -1
    else
        int32_t rax_9
        
        if (arg5 == 1)
            rax_9 = sub_142923400(r13, r14.d, arg2, arg1)
        label_1428d727e:
            
            if (rax_9 s<= 0)
                rsi = -1
            else if (sub_14288fa60(r13, r14.d, rax_1) == 0)
                rsi = -1
            else if (sub_1428909a0(rax_1, *(arg4 + 0x18)) s>= 0)
                sub_1428a5670(4, 0x66, 0x84, "crypto\rsa\rsa_ossl.c", 0x11d)
                rsi = -1
            else if ((*(arg4 + 0x74) & 0x80) != 0)
            label_1428d7338:
                bool cond:0_1
                
                if ((*(arg4 + 0x74) & 0x20) != 0 || *(arg4 + 4) == 1 || (*(arg4 + 0x30) != 0
                        && *(arg4 + 0x38) != 0 && *(arg4 + 0x40) != 0 && *(arg4 + 0x48) != 0
                        && *(arg4 + 0x50) != 0))
                    cond:0_1 = (*(*(arg4 + 8) + 0x28))(rsi_1, rax_1, arg4, rax) == 0
                label_1428d7414:
                    
                    if (cond:0_1)
                        rsi = -1
                    else if (var_38 == 0)
                    label_1428d743b:
                        
                        if (arg5 != 5)
                            rsi = sub_14288fbc0(rsi_1, arg3, r14.d)
                        else if (sub_1428d9010(rax_1, *(arg4 + 0x18), rsi_1) == 0)
                            rsi = -1
                        else
                            if (sub_14288fc80(rsi_1, rax_1) s> 0)
                                rsi_1 = rax_1
                            
                            rsi = sub_14288fbc0(rsi_1, arg3, r14.d)
                    else
                        if (sub_1428d6b80(rsi_1, var_40, var_38, rax) != 0)
                            goto label_1428d743b
                        
                        rsi = -1
                else
                    int64_t* rax_15 = sub_142890500()
                    
                    if (rax_15 == 0)
                        var_58_1 = 0x13c
                        goto label_1428d7488
                    
                    sub_142890a00(rax_15, *(arg4 + 0x28), 4)
                    int32_t* rax_16
                    
                    if ((*(arg4 + 0x74) & 2) != 0)
                        rax_16 = sub_1428cc990(arg4 + 0x78, *(arg4 + 0xa8), *(arg4 + 0x18), rax)
                    
                    if ((*(arg4 + 0x74) & 2) == 0 || rax_16 != 0)
                        int32_t var_58
                        var_58.q = rax
                        int32_t rax_18 = (*(*(arg4 + 8) + 0x30))(rsi_1, rax_1, rax_15, 
                            *(arg4 + 0x18), var_58, *(arg4 + 0x78))
                        sub_1428901a0(rax_15)
                        cond:0_1 = rax_18 == 0
                        goto label_1428d7414
                    
                    sub_1428901a0(rax_15)
                    rsi = -1
            else
                int64_t* rax_12 = sub_1428d8670(arg4, &var_48, rax)
                var_38 = rax_12
                
                if (rax_12 != 0)
                    int64_t* rax_13
                    
                    if (var_48 != 0)
                        rax_13 = var_40
                    else
                        rax_13 = sub_1428d8ba0(rax)
                        var_40 = rax_13
                        
                        if (rax_13 == 0)
                            var_58_1 = 0x12b
                            goto label_1428d7488
                    
                    if (sub_1428d85f0(rax_12, rax_1, rax_13, rax) != 0)
                        goto label_1428d7338
                    
                    rsi = -1
                else
                    sub_1428a5670(4, 0x66, (rax_12 + 0x44).d, "crypto\rsa\rsa_ossl.c", 0x124)
                    rsi = -1
        else
            if (arg5 == 3)
                rax_9 = sub_142924800(r13, r14.d, arg2, arg1)
                goto label_1428d727e
            
            if (arg5 == 5)
                rax_9 = sub_1429248c0(r13, r14.d, arg2, arg1)
                goto label_1428d727e
            
            sub_1428a5670(4, 0x66, 0x76, "crypto\rsa\rsa_ossl.c", 0x111)
            rsi = -1
    sub_1428d8a60(rax)

sub_1428d8ae0(rax)
sub_1428a6890(r13, sx.q(r14.d), "crypto\rsa\rsa_ossl.c", 0x169)
return zx.q(rsi)
