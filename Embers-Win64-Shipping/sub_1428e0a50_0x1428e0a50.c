// 函数: sub_1428e0a50
// 地址: 0x1428e0a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x20)
CryptDestroyKey(arg1[2])
CryptReleaseContext(arg1[1], 0)
int64_t rcx_2 = *arg1

if (rcx_2 != 0)
    CertFreeCertificateContext(rcx_2)

sub_1428a6780(arg1)
