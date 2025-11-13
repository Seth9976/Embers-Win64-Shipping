// 函数: sub_1428e05b0
// 地址: 0x1428e05b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r9 = *(arg1 + 0x3c)

if (r9 == 1)
    return CertFindCertificateInStore(arg3, 1, 0, 0x70007, arg2, 0)

if (r9 != 2)
    return 0

int64_t result_1
int64_t r8
result_1, r8 = CertEnumCertificatesInStore(arg3, 0)
int64_t result = result_1

if (result_1 != 0)
    int64_t i
    
    do
        sub_1428df6c0(arg1, "capi_cert_get_fname\n", r8)
        int64_t var_28
        int32_t arg_8
        
        if (CertGetCertificateContextProperty(result, 0xb, 0, &arg_8, var_28) != 0)
            wchar16* rax_2 = sub_1428a6730(zx.q(arg_8))
            
            if (rax_2 != 0)
                if (CertGetCertificateContextProperty(result, 0xb, rax_2, &arg_8) == 0)
                    int32_t rax_6 = data_143fecca8
                    
                    if (rax_6 == 0)
                        rax_6 = sub_1428a5060()
                        data_143fecca8 = rax_6
                    
                    var_28.d = 0x53d
                    sub_1428a5670(rax_6, 0x63, 0x6f, "engines\e_capi.c", 0x53d)
                    sub_1428df7e0()
                    sub_1428a6780(rax_2)
                else
                    PSTR rax_4 = sub_1428e2e00(rax_2)
                    sub_1428a6780(rax_2)
                    
                    if (rax_4 != 0)
                        PSTR rcx_7 = rax_4
                        uint32_t j
                        uint32_t rbx_2
                        
                        do
                            rbx_2 = zx.d(*rcx_7)
                            j = zx.d(rcx_7[arg2 - rax_4])
                            
                            if (rbx_2 != j)
                                break
                            
                            rcx_7 = &rcx_7[1]
                        while (j != 0)
                        
                        sub_1428a6780(rax_4)
                        
                        if (rbx_2 - j == 0)
                            return result
        
        i, r8 = CertEnumCertificatesInStore(arg3, result)
        result = i
    while (i != 0)

return 0
