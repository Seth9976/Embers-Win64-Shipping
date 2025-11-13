// 函数: sub_140992100
// 地址: 0x140992100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141cdbec0(*(arg2 + 0x28))
void* const rdi = *(arg2 + 0x3c8)
void* rsi = nullptr
void* rax_1
int64_t rax_2
void* rdx

if (rdi != 0)
    rax_1 = sub_1409e9590()
    rdx = *(rdi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rdi == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rdi = nullptr

sub_1409c4a40(rdi, arg2, arg3, arg2 + 0x390)
void* rax_4 = *(arg2 + 0x28)
uint64_t result = zx.q(*(rax_4 + 8))

if (result.d == *(rax_4 + 0x34))
    void* const arg_10 = rdi
    sub_1409d7d20(arg2 + 0x3b8, &arg_10)
    int32_t rax_5 = *(rdi + 0xc)
    void* const rax_12
    
    if (rax_5 s>= data_143e1d9b4)
        rax_12 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_5)
        uint32_t rdx_4 = zx.d(temp0_1)
        int32_t rax_7 = temp1_1 + rdx_4
        rax_12 =
            *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_4) * 0x18
    
    *(rax_12 + 8) |= 0x20000000
    result = zx.q(*(arg2 + 0xc))
    
    if (result.d s< data_143e1d9b4)
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(result.d)
        uint32_t rdx_7 = zx.d(temp2_1)
        int32_t rax_14 = temp3_1 + rdx_7
        result = data_143e1d9a0
        rsi = *(result + (sx.q(rax_14 s>> 0x10) << 3)) + sx.q(zx.d(rax_14.w) - rdx_7) * 0x18
    
    *(rsi + 8) |= 0x20000000

return result
