// 函数: sub_140b07ec0
// 地址: 0x140b07ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int16_t* _String1 = arg2[4]
int64_t rcx = arg2[2]

if (_String1 u>= rcx && _String1 u<= arg2[3] - 6 && *_String1 == 0x66)
    int32_t var_98_1 = 0
    int32_t var_94_1 = ((_String1 - rcx) s>> 1).d
    
    if (wcsncmp(_String1, &data_142e72278, 3) == 0)
        void* var_a0_1 = &_String1[3]
        char var_78_1 = 1
        int64_t var_80_1 = var_98_1.q
        int128_t var_90 = _String1.o
        sub_140b1b690()
        int128_t zmm0_1 = data_143de69f8.o
        void** const var_58 = &data_142e769c8
        int128_t var_68 = zmm0_1
        sub_140b0e240(arg2, &var_90, &var_68)
        void** const* rcx_3 = &var_58
        
        if ((var_68.d | var_68:4.d | var_68:8.d | var_68:0xc.d) == 0)
            rcx_3 = nullptr
        
        if (rcx_3 != 0)
            void** const r8_2 = *rcx_3
            (*r8_2)(rcx_3, 0, r8_2)

*(arg1 + 0x18) = 0
__security_check_cookie(rax_1 ^ &var_c8)
return arg1
