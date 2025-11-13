// 函数: sub_142c5b250
// 地址: 0x142c5b250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2)

if (*(r8 + arg1 + 0x411) != 0)
    sub_142c5bc00(arg1, r8.d)

void* rcx = *arg1
int32_t rdx_1 = *(rcx + 0x448)

if (rdx_1 u> 7)
    sub_142c64760(rcx, "Unrecognized parameter value passed via CURLOPT_SSLVERSION", r8, arg3)
    return 0x23

int32_t rax_2 = *(rcx + 0x44c)

if ((rax_2 & 0xfffeffff) != 0 && rax_2 s>> 0x10 s< rdx_1)
    sub_142c64760(rcx, "CURL_SSLVERSION_MAX incompatible with CURL_SSLVERSION", r8, arg3)
    return 0x23

int64_t rax_5 = r8 * 5
arg1[rax_5 + 0x58].b = 1
*(&arg1[rax_5] + 0x2c4) = 1
int32_t rax_6 = sub_142c71c30(arg1, r8.d, arg3)

if (rax_6 == 0)
    sub_142c6f300(*arg1, rax_6 + 5)

return zx.q(rax_6)
