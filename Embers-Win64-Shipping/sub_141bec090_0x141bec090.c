// 函数: sub_141bec090
// 地址: 0x141bec090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
uint32_t result = sub_141beee70(arg1)
void* rcx = arg1[0x41]

if (rcx != 0)
    sub_140f8c010(rcx, *(arg1 + 0x114))
    float var_28[0x2]
    char var_20_1
    
    if (*(arg1 + 0x115) == 0)
        var_20_1 = 0
    else
        var_20_1 = 1
        var_28 = _mm_cvtps_pd(arg1[0x23].d)
    
    char var_30_1 = 0
    float var_38[0x2]
    
    if (var_20_1 != 0)
        var_38 = var_28
        char var_30_2 = 1
    
    result = sub_140f8ba90(arg1[0x41], &var_38)
    int64_t rdi_1 = data_143e24388
    int64_t rcx_2
    
    if (data_143de5480 == 0)
        rcx_2 = 0
    else
        result = GetCurrentThreadId()
        rcx_2.b = result != data_143de5470
    
    sub_140f8df10(arg1[0x41], *(rdi_1 + (rcx_2 << 2)) f* arg1[0x22].d)

__security_check_cookie(rax_1 ^ &var_58)
return result
