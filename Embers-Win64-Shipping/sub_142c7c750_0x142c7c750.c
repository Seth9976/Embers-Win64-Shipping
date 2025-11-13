// 函数: sub_142c7c750
// 地址: 0x142c7c750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const* const rdx_1 = "RCPT TO:%s"
char* r8 = **(*(*arg1 + 0x250) + 0x10)

if (*r8 != 0x3c)
    rdx_1 = "RCPT TO:<%s>"

int512_t entry_zmm2
int32_t result = gzprintf(&arg1[0xd3], rdx_1, r8, entry_zmm2)

if (result == 0)
    arg1[0xe1].d = 9

return result
