// 函数: sub_140e3b110
// 地址: 0x140e3b110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
void* r10 = *(arg1 + (rbp << 3) + 0x308)
int32_t rdx = *(r10 + 0x18)
int16_t* rsi_2 = sx.q(*(r10 + 8) * rdx * arg4) + sx.q(rdx * arg3) + *r10
int32_t rax_4 =
    sub_140e3cee0(arg1, *(arg1 + (sx.q(*(arg1 + (rbp << 2) + 0x244)) << 3) + 0x2c8), arg5)
int64_t rbx = sx.q(rax_4)

if (rax_4 != 0)
    int32_t rax_5 = sub_140e3cc80(arg1, rbx.d, arg5)
    
    if (rax_5 s>= *((rbx << 2) + 0x142ed66b0))
        rbx = zx.q(rax_5)
    else
        rbx = zx.q(*((rbx << 2) + 0x142ed66f0) + rax_5)

*(arg1 + (rbp << 2) + 0x2524) += rbx.d
int16_t result = (*(arg1 + (rbp << 2) + 0x2524)).w << (*(arg1 + 0x26c)).b
*rsi_2 = result
return result
