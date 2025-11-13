// 函数: sub_141cbcb30
// 地址: 0x141cbcb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* result = (*(*arg1 + 0x48))()
int64_t* rcx = data_143f0f180

if (rcx != 0)
    int128_t zmm0 = data_142d3f800
    int128_t var_48
    __builtin_memset(&var_48, 0xff, 0x20)
    int512_t zmm1
    zmm1.o = zmm0
    int32_t rsi_1 = 0
    int128_t var_28
    __builtin_memset(&var_28, 0, 0x1c)
    (*(*rcx + 0x1f0))(zx.o(0), zmm1)
    int64_t rax_3
    int32_t rdx
    rdx:rax_3 = sx.o(var_48.q)
    int16_t* var_58 = nullptr
    int32_t var_50_1 = 0
    sub_140a20c40(&var_58, (((zx.q(rdx) & 0xfffff) + rax_3) s>> 0x14).d)
    int16_t* rbx_1 = arg2 + 0x820
    memset(rbx_1, 0, 0x208)
    int16_t* r10_1 = var_58
    int32_t r8 = 0
    int16_t* rdx_4 = r10_1
    
    while (true)
        int32_t rcx_3 = var_50_1 - 1
        
        if (var_50_1 == 0)
            rcx_3 = 0
        
        int32_t rax_4 = 0x103
        
        if (rcx_3 s<= 0x103)
            rax_4 = rcx_3
        
        if (r8 s>= rax_4)
            break
        
        r8 += 1
        *rbx_1 = *rdx_4
        rbx_1 = &rbx_1[1]
        rdx_4 = &rdx_4[1]
    
    if (r10_1 != 0)
        sub_140a74f90(r10_1)
    
    int64_t* rcx_5 = data_143f0f180
    result = (*(*rcx_5 + 0x20))(rcx_5)
    int16_t* result_1 = result
    
    if (*arg3 != result)
        int32_t rbx_3
        
        if (result == 0 || *result == 0)
            rbx_3 = 0
        else
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (result[rbx_2] != 0)
            
            rbx_3 = rbx_2.d + 1
        
        arg3[1].d = 0
        
        if (*(arg3 + 0xc) != rbx_3)
            sub_1405947f0(arg3, rbx_3)
            rsi_1 = arg3[1].d
        
        result = zx.q(rsi_1 + rbx_3)
        arg3[1].d = result.d
        
        if (result.d s> *(arg3 + 0xc))
            result = sub_140594770(arg3)
        
        if (rbx_3 != 0)
            return memcpy(*arg3, result_1, rbx_3 * 2)

return result
