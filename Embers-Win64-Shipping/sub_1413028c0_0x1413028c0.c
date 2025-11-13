// 函数: sub_1413028c0
// 地址: 0x1413028c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
void var_290
sub_1419928d0(&var_290, arg3[8])
int64_t var_2e0
__builtin_memset(&var_2e0, 0, 0x19)
void*** var_2c0 = sub_141397b60(arg2, &var_290, 0, u"SceneColor")
int32_t var_2b8 = arg3[1].d
int32_t var_2b4 = *(arg3 + 0xc)
int32_t var_2b0 = arg3[2].d
int32_t var_2ac = *(arg3 + 0x14)
int64_t rax_7 = sub_14139b4b0(arg2, &var_290, 0, u"FrameBuffer")
void var_2a8
int64_t* rbx_1

if (rax_7 == 0)
    rbx_1 = *arg3
else
    var_2e0 = rax_7
    int128_t* rax_8 = sub_14139d4c0(arg3, &var_2a8, arg2)
    rbx_1 = *arg3
    int128_t var_2d8
    var_2d8.d = *rax_8
    var_2d8:4.d = *(rax_8 + 4)
    var_2d8:8.d = *(rax_8 + 8)
    var_2d8:0xc.d = *(rax_8 + 0xc)
    int64_t* rax_10
    rax_10.b = ***rbx_1 == rbx_1
    rax_10.b += 1
    char var_2c8_1 = rax_10.b

void* rax_11 = data_143f5b298
void* var_2f8
__builtin_memset(&var_2f8, 0, 0x18)
int64_t* rcx_8 = *(rax_11 + 0xb08)
int64_t* rax_13 = (*(*rcx_8 + 0x100))(rcx_8)
(*(*rax_13 + 0xc0))(rax_13, &var_290, rbx_1, &var_2e0, &var_2f8)
void* r9_1 = var_2f8
int128_t var_2f0

if (r9_1 == 0)
label_141302a2a:
    void** rax_16 = sub_141305b90(&var_2a8, &var_290, rbx_1, &var_2e0)
    r9_1 = *rax_16
    var_2f8 = r9_1
    var_2f0.d = rax_16[1].d
    var_2f0:4.d = *(rax_16 + 0xc)
    var_2f0:8.d = rax_16[2].d
    var_2f0:0xc.d = *(rax_16 + 0x14)
else if (var_2f0:8.d == var_2f0.d && var_2f0:0xc.d == var_2f0:4.d)
    goto label_141302a2a
sub_14139b300(arg2, &var_290, 0, r9_1)
sub_14199ef00(&var_290)
int64_t result = sub_1410eb9e0(&var_290)
__security_check_cookie(rax_1 ^ &var_328)
return result
