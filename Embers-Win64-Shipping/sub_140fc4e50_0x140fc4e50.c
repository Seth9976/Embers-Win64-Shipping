// 函数: sub_140fc4e50
// 地址: 0x140fc4e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t addrlen = 0x80
SOCKET rax = accept(*(arg1 + 0x28), &arg2[1], &addrlen)

if (rax == -1)
    return 0

int64_t r8_1 = *arg2
int64_t* rbx = *(arg1 + 0x38)
int64_t rdi = *rbx
void arg_10
int64_t rax_1 = (*(r8_1 + 0xa0))(arg2, &arg_10, r8_1)
return (*(rdi + 0x158))(rbx, rax, zx.q(*(arg1 + 8)), arg3, rax_1)
