// 函数: sub_1428b9b50
// 地址: 0x1428b9b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t count = zx.q(arg2)

if (arg4 != 0)
    uint64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (*(arg4 + rbx_1) != 0)
    
    if (rbx_1.d s> count.d)
        rbx_1 = zx.q(count.d)
    
    memcpy(arg1, arg4, rbx_1.d)
    return zx.q(rbx_1.d)

char* rax_1 = sub_142908b80()
char const* const r9 = "Enter PEM pass phrase:"

if (rax_1 != 0)
    r9 = rax_1

if (sub_142908ba0(arg1, sbb.d(arg2, arg2, arg3 != 0) & 4, count.d, r9, arg3) != 0)
    sub_1428a5670(9, 0x64, 0x6d, "crypto\pem\pem_lib.c", 0x3b)
    memset(arg1, 0, count)
    return -1

int64_t rbx_2 = -1

do
    rbx_2 += 1
while (arg1[rbx_2] != 0)

return zx.q(rbx_2.d)
