// 函数: sub_142c71af0
// 地址: 0x142c71af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void buf
int32_t rax = recv(*(arg1 + 0x238), &buf, 1, MSG_PEEK)
int64_t rcx_1 = sx.q(rax)

if (rax != 0)
    if (rcx_1 == 1)
        return 1
    
    if (rcx_1 != -1)
        return 0xffffffff
    
    enum WSA_ERROR rax_2 = WSAGetLastError()
    
    if (rax_2 - 0x2733 u<= 1 || rax_2 == 0xb)
        return 1
    
    if (rax_2 - 0x2742 u> 0xa || not(test_bit(0x59d, rax_2 - 0x2742)))
        return 0xffffffff

return 0
