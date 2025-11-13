// 函数: sub_140b63e00
// 地址: 0x140b63e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
uint32_t rdi_1 = rax u>> 0x10
uint32_t arg_c = zx.d(rax.w)
void* rdx

if (data_143e05168 == 0)
    rdx = sub_140b58510(&data_143e05180)
    data_143e05168 = 1
else
    rdx = &data_143e05180

int16_t* rdi_3 = zx.q((rdi_1.q u>> 0x20).d * 2) + *(rdx + (zx.q(rdi_1) << 3) + 0x10)
uint32_t rdx_2 = zx.d(*rdi_3) u>> 6
arg2[1].d = 0
int32_t rcx_1 = *(arg2 + 0xc)

if (arg1[1] == 0)
    if (rcx_1 != rdx_2)
        sub_1405947f0(arg2, rdx_2)
    
    return sub_140b5c5e0(rdi_3, arg2)

if (rcx_1 != rdx_2 + 6)
    sub_1405947f0(arg2, rdx_2 + 6)

sub_140b5c5e0(rdi_3, arg2)
int32_t rdx_6 = arg2[1].d
int32_t rax_6
rax_6.b = rdx_6 s<= 0
int32_t rdi_4 = rdx_6 - 1

if (rdx_6 s<= 0)
    rdi_4 = 0

int32_t rax_8 = rax_6 + 1 + rdx_6
arg2[1].d = rax_8

if (rax_8 s> *(arg2 + 0xc))
    sub_140594770(arg2)

int64_t rcx_7 = sx.q(rdi_4)
*(*arg2 + (rcx_7 << 1)) = 0x5f
*(*arg2 + (rcx_7 << 1) + 2) = 0
return sub_140a20c40(arg2, arg1[1] - 1)
