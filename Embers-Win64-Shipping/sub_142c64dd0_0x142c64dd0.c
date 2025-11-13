// 函数: sub_142c64dd0
// 地址: 0x142c64dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax
rax.b = arg2 == arg1[0x48]
uint64_t rdx = zx.q(rax)
SOCKET s = arg1[rdx + 0x47]
sub_142c65060(arg1, rdx.d)
int64_t rdi_1 = sx.q(send(s, arg3, arg4, 0))
uint64_t result

if (rdi_1 != -1)
    result = 0
    *arg6 = rdi_1
else
    enum WSA_ERROR rax_2 = WSAGetLastError()
    
    if (rax_2 != WSAEWOULDBLOCK)
        char* rax_3
        int512_t zmm2
        rax_3, zmm2 = sub_142c55790(arg1, rax_2, arg5)
        sub_142c64760(*arg1, "Send failure: %s", rax_3, zmm2)
        *(*arg1 + 0x4b14) = rax_2
        result = 0x37
        *arg6 = rdi_1
    else
        result = zx.q((rdi_1 + 0x52).d)
        *arg6 = 0

return result
