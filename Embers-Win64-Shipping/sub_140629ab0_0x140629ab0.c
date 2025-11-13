// 函数: sub_140629ab0
// 地址: 0x140629ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx

if (arg1 != 0)
    rcx = *(arg1 + 0x298)

uint64_t result
int64_t rcx_5

if (arg1 == 0 || rcx == 0)
    rcx_5 = *arg2
label_140629d31:
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    result.b = 0
else
    result = sub_140cbe180(rcx)
    
    if (result == 0)
    label_140629b33:
        rcx_5 = *arg2
        goto label_140629d31
    
    int64_t* rsi_1 = result + 0x48
    
    if (rsi_1 == 0)
        goto label_140629b33
    
    void* rcx_1 = *(arg1 + 0x298)
    uint64_t var_88 = 0
    int32_t var_80_1 = 0
    result = zx.q(*(rcx_1 + 0xe0))
    
    if (result.b == 0)
        result = sub_1405d9520(zx.d(*(rcx_1 + 0xdb)))
    
    if (result.d != 2)
        goto label_140629b33
    
    int64_t var_58_1 = 6
    int128_t var_68 = zx.o(0)
    char var_50_1 = 1
    float zmm1[0x4] = var_58_1.o
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x93)
    temp0_1[0] = 0x467a0000
    int32_t var_28_1 = 0.d
    float var_38[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
    result = sub_1423eb890(rsi_1, &var_88, &var_38, &var_68, arg4)
    
    if (result.b == 0)
    label_140629b8e:
        uint64_t rcx_4 = var_88
        
        if (rcx_4 == 0)
            goto label_140629b33
        
        sub_140a74f90(rcx_4)
        rcx_5 = *arg2
        goto label_140629d31
    
    char arg_8
    sub_140ae16d0(arg3, &arg_8, 0)
    uint64_t rcx_7 = var_88
    int64_t i = rcx_7 + (sx.q(var_80_1) << 2)
    
    if (rcx_7 != i)
        char* rcx_8 = rcx_7 + 2
        
        do
            char rax_2 = rcx_8[-2]
            char rdx_2 = *rcx_8
            *rcx_8 = rax_2
            rcx_8[-2] = rdx_2
            
            if (rax_2 != arg6 || rcx_8[-1] != arg5 || rdx_2 != arg_8)
                rax_2 = 0xff
            else
                rax_2 = 0
            
            rcx_8[1] = rax_2
            rcx_8 = &rcx_8[4]
        while (&rcx_8[-2] != i)
    
    int64_t* var_78
    sub_14062fa40(&var_78, sub_140596d10(&var_68, arg2))
    int64_t* rcx_11 = var_78
    void* rdx_5 = *(arg1 + 0x298)
    
    if (rcx_11 != 0)
        result = (*(*rcx_11 + 8))(rcx_11, var_88, sx.q(var_80_1) << 2, zx.q(*(rdx_5 + 0xc0)), 
            *(rdx_5 + 0xc4), 0, 8)
    
    int64_t* var_70
    
    if (rcx_11 == 0 || result.b == 0)
        if (var_70 == 0)
            goto label_140629b8e
        
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp1_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
        
        goto label_140629b8e
    
    int64_t* r14_1 = var_78
    int16_t* const rsi_2
    
    if (arg2[1].d == 0)
        rsi_2 = &data_142d40450
    else
        rsi_2 = *arg2
    
    sub_140a464c0()
    int64_t r8_3 = *r14_1
    sub_140b27000((*(r8_3 + 0x18))(r14_1, 0, r8_3), rsi_2, &data_14399ea08, 0)
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp3_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    uint64_t rcx_16 = var_88
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int64_t rcx_17 = *arg2
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    result.b = 1
return result
