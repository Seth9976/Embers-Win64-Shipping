// 函数: sub_1428e1900
// 地址: 0x1428e1900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r15 = 1
void* rax = *(arg1 + 0x28)
void* const rbx = &data_14351356c

if (rax != 0)
    rbx = rax

sub_1428df6c0(arg1, "Listing certs for store %s\n", rbx)
int64_t result = sub_1428e2400(arg1, rbx)

if (result == 0)
    return result

if (arg3 == 0)
    int32_t rbx_2 = 0
    int64_t i_2 = CertEnumCertificatesInStore(result, 0)
    int64_t i_1 = i_2
    
    if (i_2 != 0)
        int64_t i
        
        do
            sub_1428b6f70(arg2, "Certificate %d\n", zx.q(rbx_2))
            sub_1428e0380(arg1, arg2, i_1)
            rbx_2 += 1
            i = CertEnumCertificatesInStore(result, i_1)
            i_1 = i
        while (i != 0)
else
    int64_t rax_1 = sub_1428e05b0(arg1, arg3, result)
    
    if (rax_1 != 0)
        sub_1428e0380(arg1, arg2, rax_1)
        CertFreeCertificateContext(rax_1)
    else
        r15 = rax_1.d

CertCloseStore(result, 0)
return zx.q(r15)
