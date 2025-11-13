// 函数: sub_142c7dd40
// 地址: 0x142c7dd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
SOCKET s = arg1[0x48]
void* rsi = *arg1
int32_t var_a8[0x4]
var_a8[0] = 0x80
SOCKET rdi = -1
SOCKADDR var_98[0x8]

if (getsockname(s, &var_98, &var_a8) == 0)
    var_a8[0] = 0x80
    rdi = accept(s, &var_98, &var_a8)

int64_t r8_2 = sub_142c65200(arg1, s)
uint64_t result
int512_t entry_zmm2

if (rdi != -1)
    sub_142c64850(rsi, "Connection accepted from server\n", r8_2, entry_zmm2)
    *(arg1 + 0x3fc) = 0
    arg1[0x48] = rdi
    sub_142c892b0(rdi, 1)
    *(arg1 + 0x259) = 1
    int64_t rax_4 = *(rsi + 0x320)
    int32_t rax_5
    
    if (rax_4 != 0)
        rax_5 = rax_4(*(rsi + 0x328), rdi, 1)
    
    if (rax_4 == 0 || rax_5 == 0)
        result = 0
    else
        sub_142c7e390(arg1)
        result = 0x2a
else
    sub_142c64760(rsi, "Error accept()ing server connect", r8_2, entry_zmm2)
    result = zx.q((rdi + 0x1f).d)
__security_check_cookie(rax_1 ^ &var_c8)
return result
