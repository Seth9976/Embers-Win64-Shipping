// 函数: sub_142c4fc50
// 地址: 0x142c4fc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*arg2)
int64_t r11 = rdi * 0x624
int64_t rdx = sx.q(*arg1)
int64_t r10 = rdx * 0x624

if ((sx.q(*(r11 + arg4 + 0x10c)) << 0x20 | sx.q(*(r11 + arg4 + 0x108)))
        u< (sx.q(*(r10 + arg4 + 0x10c)) << 0x20 | sx.q(*(r10 + arg4 + 0x108))))
    *arg2 = rdx.d
    *arg1 = rdi.d
    rdi = zx.q(*arg2)

int64_t r10_1 = sx.q(*arg3)
int64_t r8_3 = r10_1 * 0x624
int64_t rcx_3 = sx.q(rdi.d) * 0x624
int64_t result = sx.q(*(r8_3 + arg4 + 0x108))

if ((sx.q(*(r8_3 + arg4 + 0x10c)) << 0x20 | result)
        u< (sx.q(*(rcx_3 + arg4 + 0x10c)) << 0x20 | sx.q(*(rcx_3 + arg4 + 0x108))))
    *arg3 = rdi.d
    *arg2 = r10_1.d
    int64_t r8_4 = r10_1 * 0x624
    int64_t r11_2 = sx.q(*arg1)
    int64_t rcx_7 = r11_2 * 0x624
    result = sx.q(*(r8_4 + arg4 + 0x108))
    
    if ((sx.q(*(r8_4 + arg4 + 0x10c)) << 0x20 | result)
            u< (sx.q(*(rcx_7 + arg4 + 0x10c)) << 0x20 | sx.q(*(rcx_7 + arg4 + 0x108))))
        *arg2 = r11_2.d
        *arg1 = r10_1.d

return result
