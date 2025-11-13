// 函数: sub_140b06c10
// 地址: 0x140b06c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140b06e50(arg1, arg2, arg3)
int32_t r11 = rax.d
int32_t rdx = (rax << 2).d
int64_t r9 = sx.q(rdx)

if (rdx s> 0)
    int64_t r10_1 = 0
    void* r8_1 = &arg1[2 + r9]
    void* rcx = &arg1[2]
    
    do
        int32_t rdx_1 = *(rcx - 8)
        r10_1 += 4
        int32_t rax_1 = *(r8_1 - 8)
        r8_1 -= 0x10
        *(rcx - 8) = rax_1
        rcx += 0x10
        int32_t rax_2 = *(r8_1 + 0xc)
        r9 -= 4
        *(r8_1 + 8) = rdx_1
        int32_t rdx_2 = *(rcx - 0x14)
        *(rcx - 0x14) = rax_2
        int32_t rax_3 = *(r8_1 + 0x10)
        *(r8_1 + 0xc) = rdx_2
        int32_t rdx_3 = *(rcx - 0x10)
        *(rcx - 0x10) = rax_3
        int32_t rax_4 = *(r8_1 + 0x14)
        *(r8_1 + 0x10) = rdx_3
        int32_t rdx_4 = *(rcx - 0xc)
        *(rcx - 0xc) = rax_4
        *(r8_1 + 0x14) = rdx_4
    while (r10_1 s< r9)

if (r11 s> 1)
    void* rbx_1 = arg1 + 2
    uint64_t i_1 = zx.q(r11 - 1)
    uint64_t i
    
    do
        uint64_t rax_5 = zx.q(*(rbx_1 + 0xe))
        rbx_1 += 0x10
        int32_t r8_5 = *((zx.q((*"cccc||||wwww{{{{")[rax_5 << 2]) << 2) + 0x142e702a0)
            ^ *((zx.q((*"cccc||||wwww{{{{")[zx.q(*(rbx_1 - 1)) << 2]) << 2) + 0x142e6fea0)
            ^ *((zx.q((*"cccc||||wwww{{{{")[zx.q(*(rbx_1 + 1)) << 2]) << 2) + 0x142e6f6a0)
            ^ *((zx.q((*"cccc||||wwww{{{{")[zx.q(*rbx_1) << 2]) << 2) + 0x142e6faa0)
        *(rbx_1 - 2) = r8_5
        int32_t r8_6 = *(rbx_1 + 2)
        int32_t r8_8 = *(rbx_1 + 6)
        int32_t rdx_9 = *((zx.q((*"cccc||||wwww{{{{")[zx.q(r8_6.b) << 2]) << 2) + 0x142e702a0)
            ^ *((zx.q((*"cccc||||wwww{{{{")[zx.q(r8_6) u>> 0x18 << 2]) << 2) + 0x142e6f6a0)
            ^ *((zx.q((*"cccc||||wwww{{{{")[zx.q((r8_6 u>> 0x10).b) << 2]) << 2) + 0x142e6faa0)
            ^ *((zx.q((*"cccc||||wwww{{{{")[zx.q((r8_6 u>> 8).b) << 2]) << 2) + 0x142e6fea0)
        uint64_t rcx_7 = zx.q((*"cccc||||wwww{{{{")[zx.q(r8_8.b) << 2])
        *(rbx_1 + 2) = rdx_9
        int32_t rdx_12 = *((rcx_7 << 2) + 0x142e702a0)
            ^ *((zx.q((*"cccc||||wwww{{{{")[zx.q(r8_8) u>> 0x18 << 2]) << 2) + 0x142e6f6a0)
            ^ *((zx.q((*"cccc||||wwww{{{{")[zx.q((r8_8 u>> 0x10).b) << 2]) << 2) + 0x142e6faa0)
        int32_t r8_10 = *(rbx_1 + 0xa)
        uint64_t rcx_10 = zx.q((*"cccc||||wwww{{{{")[zx.q(r8_10.b) << 2])
        *(rbx_1 + 6) =
            rdx_12 ^ *((zx.q((*"cccc||||wwww{{{{")[zx.q((r8_8 u>> 8).b) << 2]) << 2) + 0x142e6fea0)
        int32_t rdx_16 = *((rcx_10 << 2) + 0x142e702a0)
            ^ *((zx.q((*"cccc||||wwww{{{{")[zx.q(r8_10) u>> 0x18 << 2]) << 2) + 0x142e6f6a0)
            ^ *((zx.q((*"cccc||||wwww{{{{")[zx.q((r8_10 u>> 0x10).b) << 2]) << 2) + 0x142e6faa0)
        *(rbx_1 + 0xa) =
            rdx_16 ^ *((zx.q((*"cccc||||wwww{{{{")[zx.q((r8_10 u>> 8).b) << 2]) << 2) + 0x142e6fea0)
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(r11)
