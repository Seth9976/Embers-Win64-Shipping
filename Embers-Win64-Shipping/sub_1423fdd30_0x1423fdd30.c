// 函数: sub_1423fdd30
// 地址: 0x1423fdd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t arg_8 = 0
*arg1 = &data_143344e50
sub_1405d9400()
sub_1420767c0(&arg1[0x13], &arg_8, &data_143cd6fd8, 0, &data_14399f5c0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_1 = zx.q(data_14401b1a0)
arg1[0x48].d = data_143dbb1f0.d.d
*(arg1 + 0x244) = data_143dbb1f0:4.d.d
int64_t rcx_2 = *(ThreadLocalStoragePointer + (rcx_1 << 3))
arg1[0x49] = 0
arg1[0x4a].d = data_143dbb1f0.d.d
*(arg1 + 0x254) = data_143dbb1f0:4.d.d
arg1[0x4b] = 0
arg1[0x22].d = 0x3f800000
*(arg1 + 0x114) = 0x3f800000
arg1[0x1b].d |= 2
*(arg1 + 0x100) = data_14399f5e0

if (data_143f5d360 s> *(0x14 + rcx_2))
    _Init_thread_header(&data_143f5d360)
    
    if (data_143f5d360 == 0xffffffff)
        sub_142105750(&data_143f5d300, u"/Engine/EngineResources/WhiteSquareTexture", 0)
        sub_1423fa670(&data_143f5d318, u"/Engine/EngineResources/WhiteSquareTexture.", 0)
        sub_142105750(&data_143f5d330, u"/Engine/EngineResources/GradientTexture0", 0)
        sub_1423fa670(&data_143f5d348, u"/Engine/EngineResources/GradientTexture0.", 0)
        atexit(sub_142d107e0)
        _Init_thread_footer(&data_143f5d360)

*(arg1 + 0x50) = data_142d3f670
arg_8.d = 0xff7f7f7f
arg1[7].d = arg_8.d
arg1[0xc] = data_143f5d310
arg1[0xd] = data_143f5d340
*(arg1 + 0x2b0) = data_14399f720
*(arg1 + 0x270) = data_14399f6e0
*(arg1 + 0x280) = data_14399f6f0
int128_t zmm1 = data_14399f700
*(arg1 + 0x290) = zmm1
*(arg1 + 0x2a0) = data_14399f710
__builtin_memset(&arg1[0xf], 0, 0x20)
arg1[0x4d] = 0
arg1[0x4c] = 0
sub_1424251d0(arg1, zmm1.d)
int64_t* rax_4 = sub_140a84c80(0, 0x30, 0)

if (rax_4 != 0)
    *rax_4 = &data_142d57800
    sub_140d3a3a0(&rax_4[1], arg1)
    rax_4[2] = sub_1424251d0
    rax_4[4] = sub_140a387b0()
    *rax_4 = &data_142d57858

if (rax_4 != 0)
    sub_140599630(&data_14399fb68, 1)
    (*(*rax_4 + 0x30))(rax_4, &arg_8)
    int64_t rsi_1 = sx.q(data_14399fb70)
    int32_t rax_7 = (rsi_1 + 1).d
    bool cond:0_1 = rax_7 s<= data_14399fb74
    data_14399fb70 = rax_7
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_14399fb68)
    
    void** rax_10 = (rsi_1 << 4) + data_14399fb68
    *rax_10 = rax_4
    rax_10[1].d = 3

return arg1
