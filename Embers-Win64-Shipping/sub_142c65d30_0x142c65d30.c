// 函数: sub_142c65d30
// 地址: 0x142c65d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t optval = 1
int32_t rax_1
int64_t r8
rax_1, r8 = setsockopt(arg2, 6, 1, &optval, 4)

if (rax_1 s>= 0)
    return sub_142c64850(rbx, "TCP_NODELAY set\n", r8, arg3)

char* rax_3
int512_t zmm2
rax_3, zmm2 = sub_142c55790(arg1, WSAGetLastError(), arg3)
return sub_142c64850(rbx, "Could not set TCP_NODELAY: %s\n", rax_3, zmm2)
