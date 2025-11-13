// 函数: sub_141cfaa70
// 地址: 0x141cfaa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
int32_t r8 = rdi
int32_t rcx = *(arg1 + 0xc)

if (rdi + 1 s> rcx)
    int64_t rdx = 4
    uint64_t rsi_2 = zx.q((rdi + 0x20) u>> 5)
    
    if (rcx + 0x1f u>= 0x20 || rsi_2 u> 4)
        rdx = rsi_2 + 0x10 + ((rsi_2 * 3) u>> 3)
    
    int64_t rax_4 = sub_140a846a0(rdx << 2, 0)
    int32_t rdx_2 = arg1[1].d
    uint32_t rax_5 = (rax_4 u>> 2).d
    
    if (rsi_2.d s> rax_5)
        rax_5 = 0x7fffffff
    
    *(arg1 + 0xc) = rax_5 << 5
    sub_141d0cad0(arg1, rdx_2)
    r8 = arg1[1].d

arg1[1].d = r8 + 1
void* r8_1 = *arg1

if ((r8_1.b & 1) != 0)
    r8_1 = (r8_1 s>> 1) + arg1

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi)
void* rax_12 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
int32_t rdx_5 = 1 << (rdi.b & 0x1f)
int32_t rcx_6 = *rax_12

if (arg2 == 0)
    *rax_12 = not.d(rdx_5) & rcx_6
    return zx.q(rdi)

*rax_12 = rdx_5 | rcx_6
return zx.q(rdi)
