// 函数: sub_140d177a0
// 地址: 0x140d177a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18) = arg2
uint32_t rax

if (data_143de5480 == 0)
    rax.b = 1
else
    rax.b = GetCurrentThreadId() == data_143de5470

int32_t rbx_1 = arg3 | 0x4000000
int32_t rax_1 = *(arg1 + 8)

if (rax.b != 0)
    rbx_1 = arg3

if (rax_1.b s< 0)
    rbx_1 |= 0x40000000
    rax_1 &= 0xffffff7f
    *(arg1 + 8) = rax_1

if ((rax_1.b & 4) != 0)
    rbx_1 |= 0x2000000
    *(arg1 + 8) = rax_1 & 0xfffffffb

sub_140d3a7f0(arg1)

if (rbx_1 != 0)
    int32_t rax_3 = *(arg1 + 0xc)
    void* const rax_10
    
    if (rax_3 s>= data_143e1d9b4)
        rax_10 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_3)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_5 = temp1_1 + rdx_1
        rax_10 =
            *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_1) * 0x18
    
    *(rax_10 + 8) |= rbx_1

return sub_140d3d660(arg1) __tailcall
