// 函数: sub_14141afd0
// 地址: 0x14141afd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x5240)
int32_t i_1 = 0
int64_t* r14

if (rax == 0)
    r14 = nullptr
else
    r14 = sub_141411c10(rax, arg4)

int64_t rbp_1 = sx.q(arg3[1].d)
int32_t rax_2 = (rbp_1 + 1).d
arg3[1].d = rax_2

if (rax_2 s> *(arg3 + 0xc))
    sub_1405a4d70(arg3)

*(*arg3 + (rbp_1 << 3)) = r14
int64_t* rcx_2 = arg3[3]
int32_t i = 0
int64_t var_28 = *(*(*rcx_2 + 8))(rcx_2)
int32_t var_20 = 0
int32_t var_1c = 0xffffffff
int16_t var_18 = 0x102
*(arg2 + 0xa0) = 1

do
    uint64_t i_2 = zx.q(i)
    i += 1
    uint64_t rcx_4 = i_2 * 3
    uint64_t rax_6 = i_2 * 3
    int64_t zmm1 = *(&var_18 + (rcx_4 << 3))
    *(arg2 + (rax_6 << 3) + 0xa8) = *(&var_28 + (rcx_4 << 3))
    *(arg2 + (rax_6 << 3) + 0xb8) = zmm1
while (i u< *(arg2 + 0xa0))

*(arg2 + 0x17a) = 0
int64_t var_30 = 0
*(arg2 + 0x168) = 0.o
void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_7 = &rdx_4[0x1d]

if (rax_7 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0xf0)
    rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_7 = &rdx_4[0x1d]

*(arg2 + 0x30) = rax_7
int64_t* rax_8 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_8 = rdx_4
*(arg2 + 8) = &rdx_4[1]
rdx_4[1] = 0
rdx_4[2].d = 1
*rdx_4 = &data_142f115b8
rdx_4[3] = 0
rdx_4[4].d = 0
*(rdx_4 + 0x24) = 0xffffffff
rdx_4[5].w = 0
rdx_4[6] = 0
rdx_4[7].d = 0
*(rdx_4 + 0x3c) = 0xffffffff
rdx_4[8].w = 0
rdx_4[9] = 0
rdx_4[0xa].d = 0
*(rdx_4 + 0x54) = 0xffffffff
rdx_4[0xb].w = 0
rdx_4[0xc] = 0
rdx_4[0xd].d = 0
*(rdx_4 + 0x6c) = 0xffffffff
rdx_4[0xe].w = 0
rdx_4[0xf] = 0
rdx_4[0x10].d = 0
*(rdx_4 + 0x84) = 0xffffffff
rdx_4[0x11].w = 0
rdx_4[0x12] = 0
rdx_4[0x13].d = 0
*(rdx_4 + 0x9c) = 0xffffffff
rdx_4[0x14].w = 0
rdx_4[0x15] = 0
rdx_4[0x16].d = 0
*(rdx_4 + 0xb4) = 0xffffffff
rdx_4[0x17].w = 0
rdx_4[0x18] = 0
rdx_4[0x19].d = 0
*(rdx_4 + 0xcc) = 0xffffffff
rdx_4[0x1a].w = 0
rdx_4[0x1b] = 0
rdx_4[0x1c] = 0

if (rdx_4[2].d u> 0)
    do
        uint64_t i_3 = zx.q(i_1)
        i_1 += 1
        uint64_t rcx_6 = i_3 * 3
        *(rdx_4 + (rcx_6 << 3) + 0x18) = *(&var_28 + (rcx_6 << 3))
        rdx_4[rcx_6 + 5] = *(&var_18 + (rcx_6 << 3))
    while (i_1 u< rdx_4[2].d)

int64_t* rcx_7 = **arg3
rcx_7[0x2b3].d = rcx_7[0x4b].d
*(rcx_7 + 0x159c) = *(rcx_7 + 0x25c)
rcx_7[0x2b4].d = rcx_7[0x4c].d
*(rcx_7 + 0x15a4) = *(rcx_7 + 0x264)
return sub_141420f20(rcx_7)
