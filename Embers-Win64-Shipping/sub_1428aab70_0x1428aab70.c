// 函数: sub_1428aab70
// 地址: 0x1428aab70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = 0

if (arg2 == 1)
    if (arg4 != 3)
        if (arg4 == 1)
            rbx.b = sub_1428aac50(arg1, arg3, arg4, arg5) != 0
            return zx.q(rbx)
        
        rbx.b = sub_1428aadd0(arg1, arg3, arg4, arg5) != 0
    else
        char* rax_1 = getenv("SSL_CERT_FILE")
        
        if (rax_1 == 0)
            rax_1 = sub_1428f3e20()
        
        rbx.b = sub_1428aac50(arg1, rax_1, 1, arg5) != 0
        
        if (rbx == 0)
            sub_1428a5670(rbx + 0xb, rbx + 0x65, rbx + 0x68, "crypto\x509\by_file.c", 0x3c)

return zx.q(rbx)
