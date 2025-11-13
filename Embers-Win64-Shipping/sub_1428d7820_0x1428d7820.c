// 函数: sub_1428d7820
// 地址: 0x1428d7820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t var_48 = 0
int64_t* var_30 = nullptr
int64_t rdi = 0
char* rbp = nullptr
uint32_t count_1 = -1
int64_t* r12 = nullptr
int64_t* rax = sub_1428d8d60()

if (rax != 0)
    sub_1428d8e50(rax)
    int64_t* rax_1 = sub_1428d8ba0(rax)
    int64_t* rax_2 = sub_1428d8ba0(rax)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(sub_142890560(*(arg4 + 0x18)) + 7)
    rdi = sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
    char* rax_8 = sub_1428a6730(rdi)
    rbp = rax_8
    
    if (rax_2 == 0 || rax_8 == 0)
        sub_1428a5670(4, 0x65, 0x41, "crypto\rsa\rsa_ossl.c", 0x185)
    else if (arg1 s<= rdi.d)
        if (sub_14288fa60(arg2, arg1, rax_1) != 0)
            if (sub_1428909a0(rax_1, *(arg4 + 0x18)) s>= 0)
                sub_1428a5670(4, 0x65, 0x84, "crypto\rsa\rsa_ossl.c", 0x199)
            else if ((*(arg4 + 0x74) & 0x80) != 0)
            label_1428d79b0:
                int64_t* rbx_2
                
                if ((*(arg4 + 0x74) & 0x20) != 0 || *(arg4 + 4) == 1 || (*(arg4 + 0x30) != 0
                        && *(arg4 + 0x38) != 0 && *(arg4 + 0x40) != 0 && *(arg4 + 0x48) != 0
                        && *(arg4 + 0x50) != 0))
                    rbx_2 = rax_2
                    
                    if ((*(*(arg4 + 8) + 0x28))(rbx_2, rax_1, arg4, rax) != 0)
                        goto label_1428d7aa9
                else
                    int64_t* rax_14 = sub_142890500()
                    
                    if (rax_14 != 0)
                        sub_142890a00(rax_14, *(arg4 + 0x28), 4)
                        int32_t* rax_15
                        
                        if ((*(arg4 + 0x74) & 2) != 0)
                            rax_15 = sub_1428cc990(arg4 + 0x78, *(arg4 + 0xa8), *(arg4 + 0x18), rax)
                        
                        if ((*(arg4 + 0x74) & 2) == 0 || rax_15 != 0)
                            int32_t var_68
                            var_68.q = rax
                            int32_t rax_17 = (*(*(arg4 + 8) + 0x30))(rax_2, rax_1, rax_14, 
                                *(arg4 + 0x18), var_68, *(arg4 + 0x78))
                            sub_1428901a0(rax_14)
                            
                            if (rax_17 != 0)
                                rbx_2 = rax_2
                            label_1428d7aa9:
                                int32_t rax_20
                                
                                if (r12 != 0)
                                    rax_20 = sub_1428d6b80(rbx_2, var_30, r12, rax)
                                
                                if (r12 == 0 || rax_20 != 0)
                                    uint32_t count = sub_14288fbc0(rbx_2, rbp, rdi.d)
                                    uint32_t count_2
                                    
                                    if (arg5 == 1)
                                        count_2 = sub_142923730(arg3, rdi.d, rbp, count, rdi.d)
                                    label_1428d7b60:
                                        count_1 = count_2
                                    label_1428d7b63:
                                        
                                        if (count_1 s< 0)
                                            sub_1428a5670(4, 0x65, 0x72, "crypto\rsa\rsa_ossl.c", 
                                                0x1e5)
                                    else
                                        if (arg5 == 2)
                                            count_2 = sub_142924660(arg3, rdi.d, rbp, count, rdi.d)
                                            goto label_1428d7b60
                                        
                                        if (arg5 == 3)
                                            count_1 = count
                                            memcpy(arg3, rbp, count)
                                            goto label_1428d7b63
                                        
                                        if (arg5 == 4)
                                            count_2 =
                                                sub_142923fa0(arg3, rdi.d, rbp, count, rdi.d, 0, 0)
                                            goto label_1428d7b60
                                        
                                        sub_1428a5670(4, 0x65, 0x76, "crypto\rsa\rsa_ossl.c", 0x1e1)
                        else
                            sub_1428901a0(rax_14)
                    else
                        sub_1428a5670(4, 0x65, 0x41, "crypto\rsa\rsa_ossl.c", 0x1b9)
            else
                int64_t* rax_11 = sub_1428d8670(arg4, &var_48, rax)
                r12 = rax_11
                
                if (rax_11 == 0)
                    sub_1428a5670(4, 0x65, (rax_11 + 0x44).d, "crypto\rsa\rsa_ossl.c", 0x1a0)
                else
                    int64_t* rax_12
                    
                    if (var_48 != 0)
                        rax_12 = var_30
                    label_1428d79a3:
                        
                        if (sub_1428d85f0(r12, rax_1, rax_12, rax) != 0)
                            goto label_1428d79b0
                    else
                        rax_12 = sub_1428d8ba0(rax)
                        var_30 = rax_12
                        
                        if (rax_12 != 0)
                            goto label_1428d79a3
                        
                        sub_1428a5670(4, 0x65, 0x41, "crypto\rsa\rsa_ossl.c", 0x1a7)
    else
        sub_1428a5670(4, 0x65, 0x6c, "crypto\rsa\rsa_ossl.c", 0x18f)
    
    sub_1428d8a60(rax)

sub_1428d8ae0(rax)
sub_1428a6890(rbp, sx.q(rdi.d), "crypto\rsa\rsa_ossl.c", 0x1eb)
return zx.q(count_1)
