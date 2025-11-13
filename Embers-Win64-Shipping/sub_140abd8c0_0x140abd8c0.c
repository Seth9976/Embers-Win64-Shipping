// 函数: sub_140abd8c0
// 地址: 0x140abd8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)
int128_t zmm1 = arg3[1]
int128_t var_38 = *arg3
int128_t var_28 = zmm1
void* rax = sub_140a9e8b0(rdi, arg2, &var_38)

if (rax + 0x160 != arg4)
    int128_t zmm2 = *(rax + 0x160)
    int128_t zmm3 = *(rax + 0x170)
    int128_t zmm4_1 = *(rax + 0x180)
    int128_t zmm5_1 = *(rax + 0x190)
    *(rax + 0x160) = *arg4
    *(rax + 0x170) = arg4[1]
    *(rax + 0x180) = arg4[2]
    *(rax + 0x190) = arg4[3]
    *arg4 = zmm2
    arg4[1] = zmm3
    arg4[2] = zmm4_1
    arg4[3] = zmm5_1

EnterCriticalSection(rdi + 0x258)
*(rax + 8) = 0
void* rax_2 = *(rdi + 0x288)

if (rax_2 != 0)
    *(rax_2 + 8) = rax
else
    *(rdi + 0x280) = rax

*(rdi + 0x288) = rax

if (rdi != -0x258)
    LeaveCriticalSection(rdi + 0x258)

return sub_140a4c340(rdi + 8) __tailcall
