// 函数: sub_1413476d0
// 地址: 0x1413476d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
void var_290
sub_1419928d0(&var_290, arg3[8])
int64_t var_2f8
__builtin_memset(&var_2f8, 0, 0x19)
int64_t var_2c0
__builtin_memset(&var_2c0, 0, 0x18)
void*** var_2d8 = sub_141397b60(arg2, &var_290, 0, u"SceneColor")
int32_t var_2d0 = arg3[1].d
int32_t var_2cc = *(arg3 + 0xc)
int32_t var_2c8 = arg3[2].d
int32_t var_2c4 = *(arg3 + 0x14)
int64_t rax_7 = sub_14139b4b0(arg2, &var_290, 0, u"FrameBuffer")
void* var_2a8
int64_t* r8_1

if (rax_7 == 0)
    r8_1 = *arg3
else
    var_2f8 = rax_7
    int128_t* rax_8 = sub_14139d4c0(arg3, &var_2a8, arg2)
    r8_1 = *arg3
    int64_t var_2f0
    var_2f0.d = *rax_8
    var_2f0:4.d = *(rax_8 + 4)
    int64_t var_2e8
    var_2e8:4.d = *(rax_8 + 0xc)
    var_2e8.d = *(rax_8 + 8)
    int64_t** rax_10
    rax_10.b = ***r8_1 == r8_1
    rax_10.b += 1
    char var_2e0_1 = rax_10.b

sub_141349180(&var_2a8, &var_290, r8_1, &var_2f8)
sub_14139b300(arg2, &var_290, 0, var_2a8)
sub_14199ef00(&var_290)
int64_t result = sub_1410eb9e0(&var_290)
__security_check_cookie(rax_1 ^ &var_318)
return result
