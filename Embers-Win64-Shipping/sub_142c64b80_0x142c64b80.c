// 函数: sub_142c64b80
// 地址: 0x142c64b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SOCKET s = arg1[sx.q(arg2) + 0x47]
sub_142c65060(arg1, arg2)
int64_t result = sx.q(send(s, arg3, arg4, 0))
*arg6 = 0

if (result == -1)
    enum WSA_ERROR rax_2 = WSAGetLastError()
    
    if (rax_2 == WSAEWOULDBLOCK)
        *arg6 = 0x51
        return 0
    
    char* rax_4
    int512_t zmm2
    rax_4, zmm2 = sub_142c55790(arg1, rax_2, arg5)
    sub_142c64760(*arg1, "Send failure: %s", rax_4, zmm2)
    *(*arg1 + 0x4b14) = rax_2
    *arg6 = 0x37

return result
