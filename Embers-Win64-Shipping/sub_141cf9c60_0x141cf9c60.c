// 函数: sub_141cf9c60
// 地址: 0x141cf9c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
int64_t r10 = arg1[1]
int64_t r11 = arg1[4]
int64_t* rax_5 = (sx.q(not.d(*(r8 + 0x24))) & sx.q(arg2)) * 0x30 + *r8
int64_t rdi_3 = *rax_5 & 0xffffffffffff
int64_t r8_2 = rdi_3 - 1 + rax_5[1]

if (r10 u>= rdi_3)
    rdi_3 = r10

if (arg1[2] u<= r8_2)
    r8_2 = arg1[2]

if (rdi_3 u<= r8_2)
    char rcx = (arg1[3].d).b
    uint32_t rdi_5 = ((rdi_3 - r10) u>> rcx).d
    uint32_t r8_4 = ((r8_2 - r10) u>> rcx).d
    uint64_t r9_2 = zx.q(r8_4 u>> 6)
    uint64_t rsi_2 = zx.q(rdi_5 u>> 6)
    int64_t rax_7 = *(r11 + (rsi_2 << 3))
    int64_t* rbx_1 = r11 + (rsi_2 << 3)
    char r8_5 = r8_4.b & 0x3f
    int64_t r10_1 = -1 << (rdi_5.b & 0x3f)
    
    if (rsi_2.d == r9_2.d)
        int64_t rdx_2 = (-1 u>> (0x3f - r8_5) & r10_1) | rax_7
        rax_7.b = 1
        *rbx_1 = rdx_2
        return rax_7
    
    uint64_t rdi_7 = zx.q((rsi_2 + 1).d)
    *rbx_1 = rax_7 | r10_1
    
    if (rdi_7.d u< r9_2.d)
        __builtin_memset(r11 + (rdi_7 << 3), -1, zx.q(r9_2.d - rdi_7.d) << 3)
    
    *(r11 + (r9_2 << 3)) |= 0xffffffffffffffff u>> (0x3f - r8_5)

uint64_t rax_6
rax_6.b = 1
return rax_6
