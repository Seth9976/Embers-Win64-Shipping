// 函数: sub_142094250
// 地址: 0x142094250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg3 + 0x20)

if (rcx == 0)
    return 

uint64_t rax = (*(*rcx + 0x260))(rcx)

if (rax == 0)
    return 

int32_t rax_2 = *(rax + 0xc)
int32_t i = 0
void* const rax_8

if (rax_2 s>= data_143e1d9b4)
    rax_8 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_2)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_4 = temp1_1 + rdx_1
    rax_8 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_1) * 0x18

if (((*(rax_8 + 8) u>> 0x1d).b & 1) != 0)
    return 

void* rax_10 = sub_1425428f0()
void* rdx_3 = *(rax + 0x10)
int64_t rax_11 = sx.q(*(rax_10 + 0x38))

if (rax_11.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
    sub_14207cd90(arg1, arg2, rax)
else if (*(rax + 0x228) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        sub_14207cd90(arg1, arg2, *(rsi_1 + *(rax + 0x220)))
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(rax + 0x228))
