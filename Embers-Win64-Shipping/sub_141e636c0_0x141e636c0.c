// 函数: sub_141e636c0
// 地址: 0x141e636c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t result = __security_cookie ^ &var_c8
uint64_t result_1 = result
int64_t rdx = *(arg1 + 0x30)

if (rdx != 0)
    char result_2 = *(arg1 + 0xc)
    
    if (result_2 != 4)
        result = zx.q(result_2)
    else
        result = zx.q(data_1439c7a08)
    
    if (result.d s>= 3)
        int32_t r9_1 = *(arg1 + 0x20)
        int32_t r8_1 = *(arg1 + 0x24)
        int128_t zmm0 = data_143dbb1e0
        int32_t rcx = *(arg1 + 0x10)
        void** const var_70 = &data_14324c650
        int64_t var_68_1 = rdx
        int32_t var_48_1 = 1
        int128_t var_44_1 = zmm0
        wchar16 const* const r8_2
        void* var_78
        void** const* var_58
        
        if (rcx == 1)
            void** const** var_80_3 = &var_58
            int32_t var_88_3 = 8
            int32_t var_90_3 = 1
            int64_t var_50_2 = 0
            int32_t var_60_3 = (r9_1 * r8_1) << 2
            int64_t* rcx_10 = data_143f0f180
            int32_t var_34_3 = (1 << (data_1439c7a34).b) - 1
            var_58 = &var_70
            char var_30_2 = 0
            int64_t var_28_2 = 0
            int32_t var_20_2 = 0
            int32_t var_98_2 = 1
            char var_a0_2 = 2
            int32_t var_a8_3 = r8_1
            (*(*rcx_10 + 0x560))(rcx_10, &var_78, &data_143f02b98)
            sub_1408c8cf0(arg1 + 0x18, var_78)
            sub_1405d1550(&var_78)
            r8_2 = u"E_Irradiance"
        else
            int32_t rax_2 = r9_1 * r8_1
            int64_t var_50_1 = 0
            char rcx_2 = (data_1439c7a34).b
            char var_30_1 = 0
            int64_t var_28_1 = 0
            int32_t var_20_1 = 0
            
            if (rcx == 2)
                int32_t rdx_3 = *(arg1 + 0x28)
                void** const** var_80_2 = &var_58
                int32_t var_88_2 = 8
                int32_t var_90_2 = 1
                int32_t var_98
                var_98.b = 0xa
                int32_t var_60_2 = (rax_2 * rdx_3) << 3
                int64_t* rcx_6 = data_143f0f180
                int32_t var_34_2 = (1 << rcx_2) - 1
                char var_a0
                var_a0.d = rdx_3
                var_58 = &var_70
                int32_t var_a8_2 = r8_1
                (*(*rcx_6 + 0x580))(rcx_6, &var_78, &data_143f02b98)
                sub_1408c8cf0(arg1 + 0x18, var_78)
                sub_14081c9d0(&var_78)
                r8_2 = u"E_Inscatter"
            else
                void** const** var_80_1 = &var_58
                int32_t var_60_1 = rax_2 << 2
                int64_t* rcx_3 = data_143f0f180
                int32_t var_88_1 = 8
                int32_t var_34_1 = (1 << rcx_2) - 1
                int32_t var_90_1 = 1
                var_58 = &var_70
                int32_t var_98_1 = 1
                char var_a0_1 = 2
                int32_t var_a8_1 = r8_1
                (*(*rcx_3 + 0x560))(rcx_3, &var_78, &data_143f02b98)
                sub_1408c8cf0(arg1 + 0x18, var_78)
                sub_1405d1550(&var_78)
                r8_2 = u"E_Transmittance"
        int64_t* rcx_13 = data_143f0f180
        (*(*rcx_13 + 0x2e8))(rcx_13, *(arg1 + 0x18), r8_2)
        result = sub_140a74f90(*(arg1 + 0x30))
        *(arg1 + 0x30) = 0

__security_check_cookie(result_1 ^ &var_c8)
return result
