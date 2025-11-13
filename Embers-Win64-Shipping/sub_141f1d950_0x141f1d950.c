// 函数: sub_141f1d950
// 地址: 0x141f1d950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
TEB* gsbase
void* result = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143cd80cc s> *(0x14 + result))
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    result = *(arg1 + 0x48)
    
    if (result != 0 && *(result + 0x40) s> 0)
        int32_t rdx_2 = *(result + 0x44)
        
        if (rdx_2 s> 0 && data_1439c7a08 s>= 3)
            char rcx = (data_1439c7a34).b
            int128_t var_68
            int128_t* var_80_1 = &var_68
            var_68 = zx.o(0)
            int32_t i = 0
            int64_t* rcx_1 = data_143f0f180
            int32_t var_88_1 = 0
            int32_t var_90_1 = 1
            int128_t var_54_1 = data_143dbb1e0
            int32_t var_58_1 = 1
            int32_t var_44_1 = (1 << rcx) - 1
            char var_40_1 = 0
            int64_t var_38_1 = 0
            int32_t var_30_1 = 0
            int32_t var_98_1 = 1
            char var_a0_1 = 0x15
            int32_t var_a8_1 = rdx_2
            void* var_70
            (*(*rcx_1 + 0x560))(rcx_1, &var_70, &data_143f02b98)
            sub_1408c8cf0(arg1 + 0x10, var_70)
            int64_t* rcx_3 = data_143f0f180
            void* r8_1 = var_70
            var_90_1.b = 1
            int32_t var_78 = 0
            var_98_1.b = 0
            var_a0_1.q = &var_78
            int64_t rax_7 = (*(*rcx_3 + 0x510))(rcx_3, &data_143f02b98, r8_1, 0, 1, var_a0_1, 
                var_98_1, var_90_1, var_88_1, var_80_1, var_78)
            void* r8_2 = *(arg1 + 0x48)
            uint32_t count = *(r8_2 + 0x40) * data_1439c893c
            
            if (*(r8_2 + 0x44) s> 0)
                do
                    memcpy(zx.q(i * var_78) + rax_7, zx.q(i * count) + *(r8_2 + 0x48), count)
                    r8_2 = *(arg1 + 0x48)
                    i += 1
                while (i s< *(r8_2 + 0x44))
            
            int64_t* rcx_7 = data_143f0f180
            int32_t var_a8_2
            var_a8_2.b = 0
            (*(*rcx_7 + 0x518))(rcx_7, &data_143f02b98, var_70, 0, var_a8_2, 1)
            result = sub_1405d1550(&var_70)

__security_check_cookie(rax_1 ^ &var_c8)
return result
