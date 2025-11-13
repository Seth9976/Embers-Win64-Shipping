// 函数: sub_1426011c0
// 地址: 0x1426011c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t var_48
int64_t* rax_4
int64_t* rcx
int32_t zmm0
int32_t zmm1
int32_t var_44

if (((*(arg1 + 0x1ac) u>> 1).b & 1) == 0)
    char rax_5 = sub_141e631e0(*(arg1 + 0x10))
    zmm1 = arg2[1]
    rcx = *(arg1 + 0x98)
    rax_4 = *(arg1 + 0x80)
    var_48 = *arg2
    int128_t var_38
    int128_t var_28
    
    if (rax_5 == 0)
        zmm0 = arg2[3]
        var_38:8.d = zmm0
        var_38:0xc.d = zmm0
        var_28.d = arg2[4]
        zmm0 = arg2[5]
        var_28:0xc.d = zmm0
        int32_t var_3c_2 = zmm1
        var_38.q = 0
        var_28:4.q = 0
        var_44.q = 0
    else
        int32_t var_44_1 = arg2[8]
        int32_t var_3c_1 = arg2[9]
        int32_t var_40_1 = zmm1
        var_38:4.d = arg2[0xa]
        var_38.d = arg2[2]
        var_38:0xc.d = arg2[0xb]
        var_38:8.d = arg2[3]
        var_28:4.d = arg2[0xc]
        zmm0 = arg2[0xd]
        var_28.d = arg2[4]
        zmm1 = arg2[5]
        var_28:0xc.d = zmm0
        var_28:8.d = zmm1
else
    zmm1 = arg2[1]
    rax_4 = *(arg1 + 0x80)
    rcx = *(arg1 + 0x98)
    var_48 = *arg2
    zmm0 = (zx.o(0)).d
    int32_t var_3c = zmm1
    zmm1 = (zx.o(0)).d
    int128_t var_38_1
    __builtin_memset(&var_38_1, 0, 0x20)
    var_44.q = 0
int64_t rbx_1 = *rax_4
int32_t* var_58 = &var_48
int32_t rax_7 = (*(*rcx + 0x80))(rcx, zmm0, zmm1, 2, 6, 0)
int64_t result = (*(rbx_1 + 0xa8))(*(arg1 + 0x80), u"SetOutputMatrix (stereo)", zx.q(rax_7))
__security_check_cookie(rax_1 ^ &var_78)
return result
