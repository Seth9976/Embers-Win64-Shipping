// 函数: sub_14279c610
// 地址: 0x14279c610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14279cb90(arg1)
arg1[0x10] = 0
*arg1 = &data_1434b76c0
arg1[0x13].w = 0
arg1[5] = &data_1434b7a20
int64_t temp0 = _mm_unpacklo_ps(zx.o(0), 0)
arg1[0x11] = &data_1434b7a38
arg1[0x12] = &data_1434b7a70
*(arg1 + 0x9c) = data_143dbb1f8.q
*(arg1 + 0xa4) = data_143dbb200
arg1[0x15] = temp0
int32_t var_30 = 0x3f800000
arg1[0x16].d = 0x3f800000
*arg1 = &data_1434b7d18
arg1[5] = &data_1434b80d0
arg1[0x11] = &data_1434b80e8
arg1[0x12] = &data_1434b8120
arg1[0x17] = 0
arg1[0x19].b = 0
arg1[0x29].d = 0xffffffff
*(arg1 + 0x14c) = 0
arg1[0x2a].d = 0xffffffff
*(arg1 + 0x154) = 0
arg1[0x2b].d = 0xffffffff
__builtin_memset(arg1 + 0x15c, 0, 0x14)
memset(&arg1[0x1d], 0, 0x88)
arg1[0x1e].d = 0x3f800000
*(arg1 + 0x174) = 0x7f7fffff
arg1[0x2f].d = 0xff7fffff
arg1[0x35] = 0
arg1[0x31].d = 0xffffffff
*(arg1 + 0x18c) = 0
__builtin_memset(&arg1[0x33], 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x1ac) s<= 0xffffffff)
    sub_1405947f0(&arg1[0x34], 0)

int16_t* rax_1 = arg1[0x34]

if (rax_1 != 0)
    *rax_1 = 0

arg1[0x32].d = 0
void* rax_2 = sub_1427bb630()

if (rax_2 == 0)
    arg1[0x31].d = 0xffffffff
    *(arg1 + 0x18c) = 0
    arg1[0x33] = 0
    int32_t rax_5 = *(arg1 + 0x1ac)
    int64_t arg_10 = 0
    arg1[0x35].d = 0
    
    if (rax_5 s< 0 && rax_5 != 0)
        sub_1405947f0(&arg1[0x34], 0)
    
    int16_t* rax_6 = arg1[0x34]
    
    if (rax_6 != 0)
        *rax_6 = 0
    
    arg1[0x32].d = 0
else
    void var_38
    sub_140b97b00(&arg1[0x33], sub_140d21d60(&var_38, rax_2))
    int64_t rcx_4 = var_30.q
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    sub_140d3a3a0(&arg1[0x31], rax_2)
    int32_t rax_4 = 0
    
    if (0 == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax_4 = data_1439aaa30
    
    arg1[0x32].d = rax_4

return arg1
