// 函数: sub_142955d60
// 地址: 0x142955d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
__chkstk(0x58)
int64_t* r12 = nullptr
int64_t* var_50 = nullptr
int64_t* var_58 = nullptr
int64_t* rbp = nullptr
void* rax = sub_142891590(arg5)
int64_t* rax_1 = sub_142896660(arg5)

if (rax == 0 || rax_1 == 0)
    sub_1428a5670(0x10, 0xf9, 0x43, "crypto\ec\ecdsa_ossl.c", 0xa6)
    return 0

if (sub_1428c0870(arg5) == 0)
    sub_1428a5670(0x10, 0xf9, 0x9f, "crypto\ec\ecdsa_ossl.c", 0xab)
    return 0

void** result_1 = sub_1428eea30()
void** result = result_1

if (result_1 == 0)
    sub_1428a5670((&result_1[2]).d, 0xf9, (result_1 + 0x41).d, "crypto\ec\ecdsa_ossl.c", 0xb1)
    return nullptr

*result = sub_142890500()
int64_t* rax_6 = sub_142890500()
result[1] = rax_6
int32_t rax_16
int32_t r8_2

if (*result == 0 || rax_6 == 0)
    rax_16 = 0xb7
    r8_2 = 0x41
else
    int64_t* rax_7 = sub_1428d8d60()
    rbp = rax_7
    int64_t* rax_8
    
    if (rax_7 != 0)
        rax_8 = sub_142890500()
        var_58 = rax_8
    
    if (rax_7 == 0 || rax_8 == 0)
        rax_16 = 0xbe
        r8_2 = 0x41
    else
        int64_t* rax_9 = sub_14060aa60(rax)
        int32_t rax_10 = sub_142890560(rax_9)
        uint64_t rax_11 = zx.q(arg_10)
        
        if ((rax_11 << 3).d s> rax_10)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_10 + 7)
            rax_11 = zx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
            arg_10 = rax_11.d
        
        if (sub_14288fa60(arg1, rax_11.d, var_58) != 0)
            uint64_t rcx_8 = zx.q(arg_10)
            
            if ((rcx_8 << 3).d s<= rax_10)
                while (true)
                    if (arg3 == 0)
                        goto label_142955f96
                    
                    if (arg4 == 0)
                        goto label_142955f96
                    
                    int64_t* rdi_3 = arg3
                    
                    if (sub_142890040(*result, arg4) == 0)
                        rax_16 = 0xdc
                        break
                    
                    while (true)
                        if (sub_1428cd160(rax_6, *result, *(rax + 0x90), rbp) != 0)
                            int32_t var_68
                            var_68.q = rbp
                            
                            if (sub_1428cd090(rax_6, rax_6, rax_1, *(rax + 0x90), var_68) != 0)
                                if (sub_142908540(rax_6, rax_6, var_58, rax_9) == 0)
                                    rax_16 = 0xee
                                    r8_2 = 3
                                    goto label_1429560d0
                                
                                if (sub_1428cd160(rax_6, rax_6, *(rax + 0x90), rbp) != 0)
                                    var_68.q = rbp
                                    
                                    if (sub_1428ccb60(rax_6, rax_6, rdi_3, *(rax + 0x90), var_68)
                                            != 0)
                                        if (sub_142890300(rax_6) == 0)
                                            goto label_1429560e2
                                        
                                        rcx_8 = zx.q(arg_10)
                                        
                                        if (arg3 != 0)
                                            if (arg4 == 0)
                                                break
                                            
                                            rax_16 = 0x101
                                            r8_2 = 0x9d
                                            goto label_1429560d0
                                        
                                    label_142955f96:
                                        var_68.q = arg1
                                        int32_t rax_21 = sub_142955890(arg5, rbp, &var_50, result, 
                                            var_68, rcx_8.d)
                                        r12 = var_50
                                        
                                        if (rax_21 != 0)
                                            rdi_3 = r12
                                            continue
                                        
                                        rax_16 = 0xd5
                                        r8_2 = 0x2a
                                        goto label_1429560d0
                                
                                rax_16 = 0xf7
                                r8_2 = 3
                                goto label_1429560d0
                        
                        rax_16 = 0xea
                        r8_2 = 3
                        goto label_1429560d0
                    
                label_142955f45:
                    rcx_8 = zx.q(arg_10)
                
                r8_2 = 0x41
            else
                if (sub_1428f5760(var_58, var_58, 8 - (rax_10 & 7)) != 0)
                    goto label_142955f45
                
                rax_16 = 0xcf
                r8_2 = 3
        else
            rax_16 = 0xca
            r8_2 = 3

label_1429560d0:
sub_1428a5670(0x10, 0xf9, r8_2, "crypto\ec\ecdsa_ossl.c", rax_16)
sub_1428ee9c0(result)
result = nullptr
label_1429560e2:
sub_1428d8ae0(rbp)
sub_14288fbf0(var_58)
sub_14288fbf0(r12)
return result
