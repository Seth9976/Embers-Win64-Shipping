// 函数: sub_14125c420
// 地址: 0x14125c420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 0x10) = 0
arg1[6] = 0
*(arg1 + 0x1c) = 0x3f800000
*(arg1 + 0x24) = 0
*(arg1 + 0x2c) = 0x3f800000
*(arg1 + 0x34) = 0
*(arg1 + 0x3c) = 0x3f800000
*(arg1 + 0x44) = 0
*(arg1 + 0x4c) = 0x3f800000
*(arg1 + 0x54) = 0
*(arg1 + 0x5c) = 0x3f800000
*(arg1 + 0x64) = 0
*(arg1 + 0x6c) = 0x3f800000
*(arg1 + 0x74) = 0
*(arg1 + 0x7c) = 0x3f800000
*(arg1 + 0x84) = 0
*(arg1 + 0x8c) = 0x3f800000
*(arg1 + 0x94) = 0
*(arg1 + 0x9c) = 0x3f800000
*(arg1 + 0xa4) = 0
*(arg1 + 0xac) = 0x3f800000
*(arg1 + 0xb4) = 0
*(arg1 + 0xbc) = 0x3f800000
*(arg1 + 0xc4) = 0
*(arg1 + 0xcc) = 0x3f800000
*(arg1 + 0xd4) = 0
*(arg1 + 0xdc) = 0x3f800000
*(arg1 + 0xe4) = 0
*(arg1 + 0xec) = 0x3f800000
*(arg1 + 0xf4) = 0
*(arg1 + 0xfc) = 0x3f800000
*(arg1 + 0x104) = 0
arg1[0x43] = 0x3f800000
TEB* gsbase

if (data_143ea8d38 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ea8d38)
    
    if (data_143ea8d38 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_33 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.MobileNumDynamicPointLights", r8_1)
        int64_t rax_34
        
        if (rax_33 == 0)
            rax_34 = 0
        else
            int64_t rdx_1 = *rax_33
            rax_34 = (*(rdx_1 + 0x58))(rax_33, rdx_1)
        
        data_143ea8d30 = rax_34
        _Init_thread_footer(&data_143ea8d38)

int32_t i = *(data_143ea8d30 + 4)

if (arg2 == 0)
    return arg1

int64_t* rsi = *(*(arg2 + 0x110) + 0xe0)

if (rsi == 0)
    return arg1

while (*arg1 s< i)
    int64_t* rdi_1 = *(*rsi + 0x20)
    char r14_1 = *(rdi_1 + 0x13c)
    
    if (((r14_1 - 1) & 0xfd) == 0)
    label_14125c5ef:
        
        if ((rdi_1[0x27].b & 2) != 0 && (*(arg2 + 0x3f) & *(rdi_1 + 0x13d)) != 0)
            int64_t var_40_1 = 0
            float var_98[0x4]
            (*(*rdi_1 + 0x68))(rdi_1, &var_98)
            float zmm0[0x4] = var_98
            float var_d8_1[0x4] = zmm0
            int32_t var_ac_1 = 0x3f800000
            *(arg1 + (sx.q(*arg1) + 1) * 0x10) = zmm0
            float var_88[0x4]
            float var_c8_1[0x4] = var_88
            *(arg1 + (sx.q(*arg1) + 5) * 0x10) = var_88
            int64_t rax_16 = sx.q(*arg1) + 9
            float var_b8[0x4]
            int32_t var_78
            var_b8[0] = var_78[0]
            float temp0_1[0x4] = _mm_shuffle_ps(var_b8, var_b8, 0xe1)
            int32_t var_74
            temp0_1[0] = var_74
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            int32_t var_70
            temp0_2[0] = var_70
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
            *(arg1 + rax_16 * 0x10) = temp0_3
            var_b8 = temp0_3
            arg1[sx.q(*arg1) * 4 + 0x27] = *(rdi_1 + 0xe4)
            int32_t zmm2
            
            if (r14_1 != 2)
                zmm2 = (zx.o(0)).d
            else
                zmm2 = 0x3f800000
            
            void* rax_22 = &arg1[(sx.q(*arg1) + 0xd) * 4]
            int32_t var_58
            *rax_22 = var_58[0]
            int32_t var_54
            *(rax_22 + 4) = var_54[0]
            *(rax_22 + 0xc) = zmm2
            *(rax_22 + 8) = 0
            
            if (r14_1 == 3)
                float var_a8_1[0x4] = var_88
                *(arg1 + (sx.q(*arg1) + 5) * 0x10) = var_88
            
            if ((*(*rdi_1 + 0x30))(rdi_1) != 0)
                arg1[sx.q(*arg1) * 4 + 0x17] = 0
            
            *arg1 += 1
    else if (r14_1 == 2 && *(data_143e8eb88 + 4) != 0)
        goto label_14125c5ef
    
    rsi = rsi[5]
    
    if (rsi == 0)
        break

return arg1
