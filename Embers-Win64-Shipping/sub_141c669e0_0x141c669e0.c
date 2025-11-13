// 函数: sub_141c669e0
// 地址: 0x141c669e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg3[1].d s>= 2 && data_143f34d7c != 1)
    uint32_t var_18_1[0x4] = arg4
    uint128_t var_58
    sub_141c30d00(&var_58)
    EnterCriticalSection(arg1 + 0xb0)
    
    if (*(arg1 + 0x78) != 0)
        int32_t rax = *(arg1 + 0xac)
        *(arg1 + 0x78) = 0
        int32_t var_28_1 = rax
        int128_t zmm1 = *(arg1 + 0x8c)
        var_58 = *(arg1 + 0x7c)
        int128_t var_48_1 = zmm1
        uint128_t var_38_1 = *(arg1 + 0x9c)
        
        if (arg1 != -0xb0)
            LeaveCriticalSection(arg1 + 0xb0)
        
        sub_141c46aa0(*(arg1 + 0x70), &var_58)
    else if (arg1 != -0xb0)
        LeaveCriticalSection(arg1 + 0xb0)
    
    CRITICAL_SECTION* rbx_1
    
    if (data_143f34d84 == 0)
        rbx_1.b = data_143f34d80 != 0
        rbx_1.b += 1
    else
        rbx_1.b = 0
    
    int128_t* rax_1 = sub_141c3a410(*(arg1 + 0x70))
    
    if (rax_1[3].b != rbx_1.b)
        void* rcx_6 = *(arg1 + 0x70)
        var_58 = *rax_1
        int128_t var_48_2 = rax_1[1]
        uint128_t var_38_2 = rax_1[2]
        int32_t var_28_2 = rax_1[3].d
        var_28_2.b = rbx_1.b
        sub_141c46aa0(rcx_6, &var_58)
    
    arg4 = *(arg1 + 0x110)
    EnterCriticalSection(arg1 + 0xe8)
    
    if (*(arg1 + 0xd8) != 0)
        uint128_t zmm0 = zx.o(*(arg1 + 0xdc))
        *(arg1 + 0xd8) = 0
        *(arg1 + 0x110) = zmm0.q
    
    if (arg1 != -0xe8)
        LeaveCriticalSection(arg1 + 0xe8)
    
    if (not(arg4[0] f>= zx.o(0).d))
        arg4 = *(arg1 + 0x110)
    
    *(arg1 + 0x120) = 0
    
    if (*(arg1 + 0x124) s<= 0xffffffff)
        sub_140775b10(arg1 + 0x118, 0)
    
    int32_t rdx_2 = *(*(arg2 + 0x20) + 8)
    
    if (rdx_2 s> 0)
        sub_14074a020(arg1 + 0x118, rdx_2)
        sub_141c3d420(*(arg2 + 0x20), arg1 + 0x118, arg4, *(arg1 + 0x110))
    
    int512_t zmm6
    result, zmm6 = sub_141c40490(*(arg1 + 0x70), arg1 + 0x118, *(arg2 + 0xc), *arg3, arg3[1].d)
    zmm6.o = var_18_1

return result
