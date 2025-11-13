// 函数: sub_1417fbc30
// 地址: 0x1417fbc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
sub_1417fb380(arg1)
char var_128 = 1
uint64_t result = sub_140af2fd0(data_143ddb400, &data_142fe1150, bUsePlatformProvidedCertificates", 
    &var_128, &data_143de5780)

if (result.b == 0 || var_128 != 0)
    result = CertOpenSystemStoreW(0, u"ROOT")
    
    if (result != 0)
        int64_t i_2 = CertEnumCertificatesInStore(result, 0)
        int64_t i_1 = i_2
        
        if (i_2 != 0)
            int64_t i
            
            do
                int64_t* rax_2
                
                if ((*i_1 & 1) != 0)
                    rax_2 = sub_1428a2d00(nullptr, i_1 + 8, *(i_1 + 0x10))
                
                void var_118
                
                if ((*i_1 & 1) == 0 || rax_2 == 0)
                    CertGetNameStringW(i_1, 4, 0, 0, &var_118, 0x80)
                else
                    sub_1417fb230(arg1, rax_2)
                i = CertEnumCertificatesInStore(result, i_1)
                i_1 = i
            while (i != 0)
        
        result = CertCloseStore(result, 0)

__security_check_cookie(rax_1 ^ &var_158)
return result
