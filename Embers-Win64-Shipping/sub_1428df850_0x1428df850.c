// 函数: sub_1428df850
// 地址: 0x1428df850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
sub_1428df6c0(arg1, "capi_cert_get_fname\n", arg3)
int32_t arg_18

if (CertGetCertificateContextProperty(arg2, 0xb, 0, &arg_18) != 0)
    wchar16* rax_1 = sub_1428a6730(zx.q(arg_18))
    
    if (rax_1 != 0)
        if (CertGetCertificateContextProperty(arg2, 0xb, rax_1, &arg_18) != 0)
            PSTR result = sub_1428e2e00(rax_1)
            sub_1428a6780(rax_1)
            return result
        
        int32_t rax_4 = data_143fecca8
        
        if (rax_4 == 0)
            rax_4 = sub_1428a5060()
            data_143fecca8 = rax_4
        
        sub_1428a5670(rax_4, 0x63, 0x6f, "engines\e_capi.c", 0x53d)
        sub_1428df7e0()
        sub_1428a6780(rax_1)

return 0
