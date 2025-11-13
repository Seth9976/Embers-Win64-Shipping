// 函数: sub_14231ab40
// 地址: 0x14231ab40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* rax_1 = sub_1425881f0()
void* rcx = arg1[2]
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax << 3)) == rax_1 + 0x30)
    void* rcx_1 = arg1[0x18]
    
    if (rcx_1 != 0 && *(rcx_1 + 0xa0) == arg1[0x14] && (*(rcx_1 + 0x88) & 1) == 0)
        sub_14231ab40()

if ((arg1[0x11].b & 1) != 0 || (*(arg1 + 0x89) & 2) == 0)
    return 

int32_t rax_2 = *(arg1 + 0xc)
void* const rax_9

if (rax_2 s>= data_143e1d9b4)
    rax_9 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_2)
    uint32_t rdx_3 = zx.d(temp0_1)
    int32_t rax_4 = temp1_1 + rdx_3
    rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_3) * 0x18

if (((*(rax_9 + 8) u>> 0x1d).b & 1) == 0)
    sub_141ef1390(arg1)
