// 函数: sub_142c5b310
// 地址: 0x142c5b310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)

if (*(r9 + arg1 + 0x411) != 0)
    sub_142c5bc00(arg1, r9.d)

void* rcx = *arg1
int32_t rdx_1 = *(rcx + 0x448)
char* rdx_2

if (rdx_1 u> 7)
    rdx_2 = "Unrecognized parameter value passed via CURLOPT_SSLVERSION"
else
    int32_t rax_2 = *(rcx + 0x44c)
    
    if ((rax_2 & 0xfffeffff) == 0 || rax_2 s>> 0x10 s>= rdx_1)
        arg1[r9 * 5 + 0x58].b = 1
        int32_t rax_5 = sub_142c71c50(arg1, r9.d, arg3, arg4)
        
        if (rax_5 == 0 && *arg3 != rax_5.b)
            sub_142c6f300(*arg1, rax_5 + 5)
        
        return zx.q(rax_5)
    
    rdx_2 = "CURL_SSLVERSION_MAX incompatible with CURL_SSLVERSION"

sub_142c64760(rcx, rdx_2, arg3, arg4)
return 0x23
