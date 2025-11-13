// 函数: sub_1418a3070
// 地址: 0x1418a3070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
void* r14 = arg5
TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143efae28 s> *rbx_1)
    _Init_thread_header(&data_143efae28)
    
    if (data_143efae28 == 0xffffffff)
        _vfprintf_p_l(&data_143efae10, 
            There is not enough space at {Location}\n{RequiredBytes} is required.\n{AvailableBytes} is "
        "available.\nYou need an additional {SpaceAdditional} to perform the installation.", 
            BuildPatchInstallError")
        atexit(sub_142cec6b0)
        _Init_thread_footer(&data_143efae28)

if (data_143efae48 s> *rbx_1)
    _Init_thread_header(&data_143efae48)
    
    if (data_143efae48 == 0xffffffff)
        void var_c8
        int16_t* rax_46 = sub_140a95a00(&var_c8)
        *(rax_46 + 0x10) = 2
        *(rax_46 + 0x14) = 2
        data_143efae30 = *rax_46
        data_143efae40 = *(rax_46 + 0x10)
        _Init_thread_footer(&data_143efae48)

int32_t var_7c = 0x80

if (r14 == 0)
    r14 = &data_143efae30

int32_t var_78 = 0xffffffff
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
void var_138
int64_t* var_1e0 = sub_140aae420(&var_138, arg2)
wchar16 const* const var_1e8 = u"Location"
int32_t var_1d8
sub_140749df0(&var_a8, &var_1d8)
int64_t* var_1d0
sub_14189b740(&var_1e8, var_1d0)
var_1d0[8].d = 0xffffffff
int16_t* const rsi = &data_142d40450
int16_t* rcx_4

if (var_1d0[1].d == 0)
    rcx_4 = &data_142d40450
else
    rcx_4 = *var_1d0

void var_1f8
sub_140aa7840(&var_a8, &var_1f8, sub_140a5ff80(rcx_4, 0), var_1d0, var_1d8, nullptr)
int64_t* var_130

if (var_130 != 0)
    var_130[1].d -= 1
    
    if (var_130[1].d == 1)
        (**var_130)(var_130)
        int32_t rax_10 = *(var_130 + 0xc)
        *(var_130 + 0xc) -= 1
        
        if (rax_10 == 1)
            (*(*var_130 + 8))(var_130, 1)

int32_t var_208_1 = 1
int128_t var_1a8 = zx.o(0)
void var_120
int64_t* var_1c0 = sub_140aa0560(&var_120, arg3, r14, &var_1a8, var_208_1)
wchar16 const* const var_1c8 = u"RequiredBytes"
int32_t var_1b8
sub_140749df0(&var_a8, &var_1b8)
int64_t* var_1b0
sub_14189b740(&var_1c8, var_1b0)
var_1b0[8].d = 0xffffffff
int16_t* rcx_11

if (var_1b0[1].d == 0)
    rcx_11 = &data_142d40450
else
    rcx_11 = *var_1b0

void var_1f4
sub_140aa7840(&var_a8, &var_1f4, sub_140a5ff80(rcx_11, 0), var_1b0, var_1b8, nullptr)
int64_t* var_118

if (var_118 != 0)
    var_118[1].d -= 1
    
    if (var_118[1].d == 1)
        (**var_118)(var_118)
        int32_t rax_17 = *(var_118 + 0xc)
        *(var_118 + 0xc) -= 1
        
        if (rax_17 == 1)
            (*(*var_118 + 8))(var_118, 1)

int64_t* rdi_5 = var_1a8:8.q

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t rax_21 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (rax_21 == 1)
            (*(*rdi_5 + 8))(rdi_5, 1)

int32_t var_208_3 = 1
int128_t var_178 = zx.o(0)
void var_108
int64_t* var_190 = sub_140aa0560(&var_108, arg4, r14, &var_178, var_208_3)
wchar16 const* const var_198 = u"AvailableBytes"
int32_t var_188
sub_140749df0(&var_a8, &var_188)
int64_t* var_180
sub_14189b740(&var_198, var_180)
var_180[8].d = 0xffffffff
int16_t* rcx_20

if (var_180[1].d == 0)
    rcx_20 = &data_142d40450
else
    rcx_20 = *var_180

void var_1f0
sub_140aa7840(&var_a8, &var_1f0, sub_140a5ff80(rcx_20, 0), var_180, var_188, nullptr)
int64_t* var_100

if (var_100 != 0)
    var_100[1].d -= 1
    
    if (var_100[1].d == 1)
        (**var_100)(var_100)
        int32_t rax_28 = *(var_100 + 0xc)
        *(var_100 + 0xc) -= 1
        
        if (rax_28 == 1)
            (*(*var_100 + 8))(var_100, 1)

int64_t* rdi_8 = var_178:8.q

if (rdi_8 != 0)
    rdi_8[1].d -= 1
    
    if (rdi_8[1].d == 1)
        (**rdi_8)(rdi_8)
        int32_t rax_32 = *(rdi_8 + 0xc)
        *(rdi_8 + 0xc) -= 1
        
        if (rax_32 == 1)
            (*(*rdi_8 + 8))(rdi_8, 1)

int32_t var_208_5 = 1
int128_t var_148 = zx.o(0)
void var_f0
int64_t* var_160 = sub_140aa0560(&var_f0, arg3 - arg4, r14, &var_148, var_208_5)
wchar16 const* const var_168 = u"SpaceAdditional"
int32_t var_158
sub_140749df0(&var_a8, &var_158)
int16_t** var_150
sub_14189b740(&var_168, var_150)
var_150[8].d = 0xffffffff

if (var_150[1].d != 0)
    rsi = *var_150

void var_1ec
sub_140aa7840(&var_a8, &var_1ec, sub_140a5ff80(rsi, 0), var_150, var_158, nullptr)
int64_t* var_e8

if (var_e8 != 0)
    var_e8[1].d -= 1
    
    if (var_e8[1].d == 1)
        (**var_e8)(var_e8)
        int32_t rax_39 = *(var_e8 + 0xc)
        *(var_e8 + 0xc) -= 1
        
        if (rax_39 == 1)
            (*(*var_e8 + 8))(var_e8, 1)

int64_t* rdi_11 = var_148:8.q

if (rdi_11 != 0)
    rdi_11[1].d -= 1
    
    if (rdi_11[1].d == 1)
        (**rdi_11)(rdi_11)
        int32_t rbx_2 = *(rdi_11 + 0xc)
        *(rdi_11 + 0xc) -= 1
        
        if (rbx_2 == 1)
            (*(*rdi_11 + 8))(rdi_11, zx.q(rbx_2))

char* var_d8
sub_140aaca20(arg1, sub_140a96390(&var_d8, &data_143efae10), &var_a8)
int32_t var_60_1 = 0

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_140acd610(&var_a8)
__security_check_cookie(rax_1 ^ &var_228)
return arg1
