// 函数: sub_1428d7500
// 地址: 0x1428d7500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
uint32_t count_1 = -1
int64_t rbp = 0
char* r14 = nullptr

if (sub_142890560(*(arg4 + 0x18)) s> 0x4000)
    sub_1428a5670(4, 0x67, 0x69, "crypto\rsa\rsa_ossl.c", 0x1f9)
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
            rbp = sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
            char* rax_14 = sub_1428a6730(rbp)
            r14 = rax_14
            
            if (rax_8 == 0 || rax_14 == 0)
                sub_1428a5670(4, 0x67, 0x41, "crypto\rsa\rsa_ossl.c", 0x212)
            else if (arg1 s<= rbp.d)
                if (sub_14288fa60(arg2, arg1, rax_7) != 0)
                    if (sub_1428909a0(rax_7, *(arg4 + 0x18)) s< 0)
                        int32_t* rax_18
                        
                        if ((*(arg4 + 0x74) & 2) != 0)
                            rax_18 =
                                sub_1428cc990(arg4 + 0x78, *(arg4 + 0xa8), *(arg4 + 0x18), rax_6)
                        
                        if ((*(arg4 + 0x74) & 2) == 0 || rax_18 != 0)
                            int32_t var_48
                            var_48.q = rax_6
                            
                            if ((*(*(arg4 + 8) + 0x30))(rax_8, rax_7, *(arg4 + 0x20), 
                                    *(arg4 + 0x18), var_48, *(arg4 + 0x78)) != 0)
                                if (arg5 != 5)
                                label_1428d7738:
                                    uint32_t count = sub_14288fbc0(rax_8, r14, rbp.d)
                                    uint32_t count_2
                                    
                                    if (arg5 == 1)
                                        count_2 = sub_1429235b0(arg3, rbp.d, r14, count, rbp.d)
                                    label_1428d7798:
                                        count_1 = count_2
                                    label_1428d779a:
                                        
                                        if (count_1 s< 0)
                                            sub_1428a5670(4, 0x67, 0x72, "crypto\rsa\rsa_ossl.c", 
                                                0x246)
                                    else
                                        if (arg5 == 3)
                                            count_1 = count
                                            memcpy(arg3, r14, count)
                                            goto label_1428d779a
                                        
                                        if (arg5 == 5)
                                            count_2 =
                                                sub_142924980(arg3, zx.q(rbp.d), r14, count, rbp.d)
                                            goto label_1428d7798
                                        
                                        sub_1428a5670(4, 0x67, 0x76, "crypto\rsa\rsa_ossl.c", 0x242)
                                else
                                    if ((*sub_140687ad0(rax_8) & 0xf) == 0xc)
                                        goto label_1428d7738
                                    
                                    if (sub_1428d9010(rax_8, *(arg4 + 0x18), rax_8) != 0)
                                        goto label_1428d7738
                    else
                        sub_1428a5670(4, 0x67, 0x84, "crypto\rsa\rsa_ossl.c", 0x224)
            else
                sub_1428a5670(4, 0x67, 0x6c, "crypto\rsa\rsa_ossl.c", 0x21b)
            
            sub_1428d8a60(rax_6)
        
        sub_1428d8ae0(rax_6)
        sub_1428a6890(r14, sx.q(rbp.d), "crypto\rsa\rsa_ossl.c", 0x24c)
        return zx.q(count_1)
    
    var_48_1 = 0x205
else
    var_48_1 = 0x1fe

sub_1428a5670(4, 0x67, 0x65, "crypto\rsa\rsa_ossl.c", var_48_1)
return 0xffffffff
