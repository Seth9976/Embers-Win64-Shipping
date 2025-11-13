// 函数: sub_140fc84f0
// 地址: 0x140fc84f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
SOCKET s = *(arg1 + 0x28)
int32_t namelen[0x4]
namelen[0] = 0x80
SOCKADDR name

if (getsockname(s, &name, &namelen) != 0)
    __security_check_cookie(rax_1 ^ &var_c8)
    return 0

uint16_t netshort
netshort.b = name.sa_data[0]
netshort:1.b = name.sa_data[1]
uint64_t result = zx.q(ntohs(netshort))
__security_check_cookie(rax_1 ^ &var_c8)
return result
