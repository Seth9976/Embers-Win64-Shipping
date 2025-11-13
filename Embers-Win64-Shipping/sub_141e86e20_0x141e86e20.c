// 函数: sub_141e86e20
// 地址: 0x141e86e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (rdi.d == 0xffffffff)
    return 

uint128_t zmm0

if (sub_140a80ea0().b != 0)
    if (rdi.d s< *(arg1 + 0x138))
        zmm0 = zx.o(*arg3)
        uint32_t rax = arg3[1].d
        void* rdx_3 = rdi * 0xc0 + *(arg1 + 0x130)
        char rcx_2 = *(rdx_3 + 0x48)
        *(rdx_3 + 0x48) |= 1
        *(rdx_3 + 0x3c) = zmm0.q
        *(rdx_3 + 0x44) = rax
        
        if ((rcx_2 & 1) == 0)
            rdx_3.b = 1
            sub_141e8cc70(arg1, rdx_3.b)
else if (rdi.d s< *(arg1 + 0x88))
    int64_t rcx = *(arg1 + 0x80)
    zmm0 = zx.o(*arg3)
    int32_t rax_1 = arg3[1].d
    int64_t r8_1 = rdi << 6
    int32_t var_60_1 = rdi.d
    *(rcx + r8_1 + 0x30) = zmm0.q
    *(rcx + r8_1 + 0x38) = rax_1
    int64_t rax_2 = *(arg1 + 0x80)
    int64_t var_38_1 = 0
    uint128_t var_20_1 = arg1.o
    *(rax_2 + r8_1 + 0x3c) |= 1
    int32_t var_54_1 = arg3[1].d
    void** const var_28_1 = &data_142e345d8
    int64_t (* var_48)(int64_t* arg1) = sub_141e764c0
    uint64_t var_10_1 = zmm0.q
    sub_141e85cb0(&var_48, arg4)
