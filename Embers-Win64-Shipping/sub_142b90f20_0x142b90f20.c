// 函数: sub_142b90f20
// 地址: 0x142b90f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = -1

do
    rbx += 1
while (arg3[rbx] != 0)

int64_t rax = *arg1
int32_t rbp = (rbx + 0x12).d
int64_t rsi = 0

if (rbp s> 0)
    int64_t rax_1 = (*(rax + 8))(rax, zx.q(rbp))
    rsi = rax_1
    
    if (rax_1 == 0)
        return zx.q((rsi + 0x40).d)
    
    memset(rax_1, 0, sx.q(rbp))
else if (rbp s< 0)
    return 6

int64_t rbx_1 = sx.q(rbx.d)
memcpy(rsi, arg3, rbx_1.d)
__builtin_strcpy(rbx_1 + rsi, "/..namedfork/rsrc")
*arg4 = rsi
*arg5 = 0
return 0
