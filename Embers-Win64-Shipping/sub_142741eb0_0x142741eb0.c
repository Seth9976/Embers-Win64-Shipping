// 函数: sub_142741eb0
// 地址: 0x142741eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t* rdi = *(*arg2 + 8)
int64_t* rdi_1

if (rdi == 0 || *rdi != 5)
    rdi_1 = nullptr
else
    rdi_1 = *(rdi + 8)
    
    if (rdi_1 == 0)
        rdi_1 = nullptr
    else
        void* rax_1 = sub_142748e90()
        void* rdx = rdi_1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdi_1 = nullptr

int32_t rax_4 = *(rdi_1 + 0xc)
void* const rax_11

if (rax_4 s>= data_143e1d9b4)
    rax_11 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_4)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_6 = temp1_1 + rdx_2
    rax_11 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18

uint8_t result = (*(rax_11 + 8) u>> 0x1d).b

if ((result & 1) == 0 && arg2[2].d u> 0)
    do
        int64_t rax_13 = arg2[1]
        uint64_t i_1 = zx.q(i)
        result =
            sub_1427470e0(rdi_1, zx.d(*(rax_13 + (i_1 << 2))), *(rax_13 + (i_1 << 2) + 2) u>> 1 & 1)
        i += 1
    while (i u< arg2[2].d)

return result
