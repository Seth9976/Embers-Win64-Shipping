// 函数: sub_1425fce00
// 地址: 0x1425fce00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
sub_141e70f00(arg1, arg2)
arg1[0x46] = arg2
arg1[0x48] = 0
*arg1 = &data_14344caa8
arg1[0x47] = 0
__builtin_memset(&arg1[0x49], 0, 0x28)

if ((*(arg2 + 0x352) & 4) != 0)
    sub_1425fd700(arg1)
    int32_t rbp_1 = data_143f711b8
    HRESULT rax_2 =
        CoCreateInstance(&data_14344cc48, 0, CLSCTX_INPROC_SERVER, &data_142d5fca8, &arg1[0x47])
    int64_t* rcx_1 = arg1[0x46]
    int64_t r9_1 = *rcx_1
    
    if ((*(r9_1 + 0xa8))(rcx_1, u"CreateReverbEffect", zx.q(rax_2), r9_1) != 0)
        int64_t var_78 = arg1[0x47]
        int32_t var_98
        int32_t* var_b0_1 = &var_98
        int64_t* var_94_1 = &var_78
        int64_t var_a4_1 = arg1[0x4a]
        int32_t var_a8
        int32_t* var_84_1 = &var_a8
        int64_t* rax_6 = arg1[0x46]
        int32_t var_70_1 = 1
        int32_t var_6c_1 = 2
        var_98 = 1
        var_a8 = 0
        int32_t var_88 = 1
        int64_t rbx_1 = *rax_6
        void* var_c8_1
        var_c8_1.d = 0
        int64_t* rcx_2 = *(rax_6[0xf6] + 8)
        int32_t rax_9 = (*(*rcx_2 + 0x48))(rcx_2, &arg1[0x4c], 2, zx.q(rbp_1), var_c8_1, 3, 
            &var_88, var_b0_1, var_a8)
        
        if ((*(rbx_1 + 0xa8))(arg1[0x46], u"CreateSubmixVoice (Reverb)", zx.q(rax_9)) != 0)
            int64_t* rax_11 = arg1[0x46]
            int128_t zmm0_1 = data_142d8c9b0
            int64_t* rcx_4 = arg1[0x4c]
            int64_t rdx_1 = arg1[0x4a]
            int128_t var_68 = zmm0_1
            int32_t var_c0_2 = 0
            int128_t var_58
            __builtin_strncpy(&var_58, "333?333?", 0x10)
            int128_t var_48_1 = zmm0_1
            int64_t rbx_2 = *rax_11
            int32_t rax_12 = (*(*rcx_4 + 0x80))(rcx_4, rdx_1, 2, 6, &var_68, var_c0_2)
            (*(rbx_2 + 0xa8))(arg1[0x46], u"SetOutputMatrix (Reverb)", zx.q(rax_12))
    
    sub_1425fdb70(arg1)

__security_check_cookie(rax_1 ^ &var_e8)
return arg1
