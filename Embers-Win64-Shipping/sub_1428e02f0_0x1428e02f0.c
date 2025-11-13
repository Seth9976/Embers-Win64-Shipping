// 函数: sub_1428e02f0
// 地址: 0x1428e02f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rax = sub_1428d58f0(arg1, data_143b85e38)

if (rax != 0)
    CryptDestroyKey(rax[2])
    CryptReleaseContext(rax[1], 0)
    int64_t rcx_2 = *rax
    
    if (rcx_2 != 0)
        CertFreeCertificateContext(rcx_2)
    
    sub_1428a6780(rax)

sub_1428d5cc0(arg1, data_143b85e38, 0)
return 1
