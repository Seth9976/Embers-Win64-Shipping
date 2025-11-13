// 函数: sub_141e76b60
// 地址: 0x141e76b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (rdi.d == 0xffffffff)
    return 

if (sub_140a80ea0().b != 0)
    if (rdi.d s< *(arg1 + 0x138))
        void* rcx_4 = rdi * 0xc0 + *(arg1 + 0x130)
        uint32_t rax = *(rcx_4 + 0x48)
        
        if ((rax.b & 1) != 0)
            *(rcx_4 + 0x48) = rax & 0xfffffffe
            sub_141e8cc70(arg1, 1)
else if (rdi.d s< *(arg1 + 0x88))
    int64_t rcx = *(arg1 + 0x80)
    int64_t r8_1 = rdi << 6
    int32_t var_50 = rdi.d
    int64_t var_38 = 0
    *(rcx + r8_1 + 0x30) = data_143dbb1f8.q
    *(rcx + r8_1 + 0x38) = data_143dbb200
    int64_t rax_2 = *(arg1 + 0x80)
    uint128_t var_20 = arg1.o
    *(r8_1 + rax_2 + 0x3c) &= 0xfffffffe
    void** const var_28 = &data_142d42ed8
    int64_t (* var_48)(int64_t* arg1) = sub_141e763d0
    sub_141e85cb0(&var_48, arg3)
