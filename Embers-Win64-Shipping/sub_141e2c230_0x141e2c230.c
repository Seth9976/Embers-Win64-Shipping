// 函数: sub_141e2c230
// 地址: 0x141e2c230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x34]

if (rcx == 0)
    return 

int128_t zmm1 = rcx[0x25].d
uint32_t zmm0[0x4] = arg1[0x25].d
zmm0[0] = zmm0[0] f- zmm1.d

if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f<= 9.99999975e-05f))
    arg1[0x25].d = zmm1.d
    arg1[6].d = 0xfffffffe
    arg1[7].d = 0xfffffffe

*(arg1 + 0x12c) = *(rcx + 0x12c)
void* rbx_1 = *rcx
int64_t arg_8
int32_t rax_2

if (rbx_1 != 0)
    rax_2 = sub_141e21e70(rbx_1, rcx[0x25].d, &arg_8)

int32_t arg_10
int32_t rcx_3
int64_t rbx_3
uint32_t rsi_2

if (rbx_1 == 0 || rax_2 s< 0 || rax_2 s>= *(rbx_1 + 0x150))
    rcx_3 = 0
    int32_t arg_14 = 0
    arg_10 = 0
    rsi_2 = 0
    rbx_3 = arg_10.q
else
    rbx_3 = *(sx.q(rax_2) * 0x58 + *(rbx_1 + 0x148) + 0x30)
    arg_10.q = rbx_3
    rcx_3 = arg_10
    rsi_2 = (rbx_3 u>> 0x20).d

rcx_3.b = sub_140b5b8a0(rcx_3, 0).b == 0
int64_t rax
rax.b = rsi_2 != 0
rcx_3.b |= rax.b

if (rcx_3.b == 0)
    return 

void* rsi_3 = *arg1
int32_t rax_4

if (rsi_3 != 0)
    rax_4 = sub_141e21e70(rsi_3, arg1[0x25].d, &arg_8)

if (rsi_3 == 0 || rax_4 s< 0 || rax_4 s>= *(rsi_3 + 0x150))
    arg_8 = 0
    rax = 0
else
    rax = *(sx.q(rax_4) * 0x58 + *(rsi_3 + 0x148) + 0x30)

if (rax != rbx_3)
    return 

int64_t* rax_7 = arg1[0x34]
void* rbx_4 = *rax_7
int32_t rax_8

if (rbx_4 != 0)
    rax_8 = sub_141e21e70(rbx_4, rax_7[0x25].d, &arg_8)

if (rbx_4 == 0 || rax_8 s< 0 || rax_8 s>= *(rbx_4 + 0x150))
    arg_8 = 0
else
    arg_8 = *(sx.q(rax_8) * 0x58 + *(rbx_4 + 0x148) + 0x3c)

sub_141e30fc0(arg1, &arg_10, &arg_8)
