// 函数: sub_1428aa260
// 地址: 0x1428aa260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rbx = *(arg1 + 0x10)

if (arg2 != 2)
    return 0

if (arg4 != 3)
    return sub_1428aa880(rbx, arg3, arg4) __tailcall

char* rax_1 = getenv("SSL_CERT_DIR")

if (rax_1 == 0)
    rax_1 = sub_1428f3e00()

int32_t rax_2 = sub_1428aa880(rbx, rax_1, 1)

if (rax_2 == 0)
    sub_1428a5670(rax_2 + 0xb, rax_2 + 0x66, rax_2 + 0x67, "crypto\x509\by_dir.c", 0x54)

return zx.q(rax_2)
