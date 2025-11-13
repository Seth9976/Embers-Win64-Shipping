// 函数: sub_142c64ac0
// 地址: 0x142c64ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SOCKET s = arg1[sx.q(arg2) + 0x47]
int64_t rax_1 = sub_142c64e90(arg1, arg2, arg3, arg4)

if (rax_1 s> 0)
    *arg6 = 0
    return rax_1

int64_t rbp = sx.q(recv(s, arg3, arg4.d, 0))
*arg6 = 0

if (rbp == -1)
    enum WSA_ERROR rax_3 = WSAGetLastError()
    
    if (rax_3 != WSAEWOULDBLOCK)
        char* rax_4
        int512_t zmm2
        rax_4, zmm2 = sub_142c55790(arg1, rax_3, arg5)
        sub_142c64760(*arg1, "Recv failure: %s", rax_4, zmm2)
        *(*arg1 + 0x4b14) = rax_3
        *arg6 = 0x38
    else
        *arg6 = 0x51

return rbp
