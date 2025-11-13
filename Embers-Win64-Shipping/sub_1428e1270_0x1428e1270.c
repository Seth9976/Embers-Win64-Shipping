// 函数: sub_1428e1270
// 地址: 0x1428e1270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t arg_18

if (CertGetCertificateContextProperty(arg2, 2, 0, &arg_18) == 0)
    return 0

int64_t result = sub_1428a6730(zx.q(arg_18))

if (result == 0)
    int32_t rax_2 = data_143fecca8
    
    if (rax_2 == 0)
        rax_2 = sub_1428a5060()
        data_143fecca8 = rax_2
    
    sub_1428a5670(rax_2, 0x69, 0x41, "engines\e_capi.c", 0x506)
    return 0

if (CertGetCertificateContextProperty(arg2, 2, result, &arg_18) != 0)
    return result

int32_t rax_5 = data_143fecca8

if (rax_5 == 0)
    rax_5 = sub_1428a5060()
    data_143fecca8 = rax_5

sub_1428a5670(rax_5, 0x69, 0x70, "engines\e_capi.c", 0x50c)
sub_1428df7e0()
sub_1428a6780(result)
return 0
