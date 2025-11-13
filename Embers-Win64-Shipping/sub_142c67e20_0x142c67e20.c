// 函数: sub_142c67e20
// 地址: 0x142c67e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xf3] == 0)
    void* rax_1
    int64_t r8
    rax_1, r8 = data_143ccb8b8(1, 0x4028)
    
    if (rax_1 == 0)
        return 0x1b
    
    arg6 = sub_142c64850(*arg1, "allocate connect buffer!\n", r8, arg6)
    arg1[0xf3] = rax_1
    *(rax_1 + 0x4024) = 0
    *(rax_1 + 0x4018) = 0
    *(rax_1 + 0x4004) = 1
    *(rax_1 + 0x4008) = rax_1
    *(rax_1 + 0x4010) = rax_1

int32_t rax_2
int64_t r8_2
int512_t zmm2
rax_2, r8_2, zmm2 = sub_142c67310(arg1, arg2, arg3, arg4, arg5, arg6)

if (rax_2 != 0)
    *(arg1[0xf3] + 0x4024) = 2
    sub_142c64850(*arg1, "CONNECT phase completed!\n", r8_2, zmm2)
else
    void* rcx_2 = arg1[0xf3]
    
    if (rcx_2 != 0 && *(rcx_2 + 0x4024) == 2)
        *(arg1[0xf3] + 0x4024) = 2
        sub_142c64850(*arg1, "CONNECT phase completed!\n", r8_2, zmm2)

return zx.q(rax_2)
