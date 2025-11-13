// 函数: sub_1428e3700
// 地址: 0x1428e3700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (data_143feccf0 == 0)
    data_143feccf0 = 1
    memset(&data_143fecd00, 0, 0x198)
    
    if (WSAStartup(0x202, &data_143fecd00) != 0)
        sub_1428a5670(2, 9, WSAGetLastError(), "crypto\bio\b_sock.c", 0x87)
        sub_1428a5670(0x20, 0x70, 0x7a, "crypto\bio\b_sock.c", 0x88)
        return 0xffffffff

return 1
