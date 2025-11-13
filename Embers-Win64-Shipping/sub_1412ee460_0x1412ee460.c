// 函数: sub_1412ee460
// 地址: 0x1412ee460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int32_t rax_3 = arg3[2].d - arg3[1].d
void* rsi = *arg2
int32_t var_1d4 = *(arg3 + 0x14) - *(arg3 + 0xc)
void* rcx = *(*arg3 + 0x10)
void* var_1d0 = rcx
void* rax_7 = rcx

if (rcx != 0)
    *(rcx + 8) += 1
    rax_7 = var_1d0

int64_t var_1c0 = 0
void** const var_1c8 = &data_142f18ee0
void* var_1b8 = rax_7

if (rcx != 0)
    *(rcx + 8) += 1

int64_t var_1b0 = rax_3.q
sub_1405d1550(&var_1d0, &data_142f18ee0)
void var_148
int64_t r8 = sub_1423fa870(&var_148, &var_1c8, 0, *(rsi + 0x38), *(rsi + 0x30), *(rsi + 0x34), 
    arg2[0x2a9].d, 0x3f800000)
sub_142420170(&var_148, &arg3[1])
int16_t* var_1a8
sub_140a2e390(&var_1a8, u"GBufferHints", r8)
int16_t* const rsi_1 = &data_142d40450
int16_t* const rbx_1 = &data_142d40450
int16_t* rdi_1 = var_1a8
int32_t var_1a0

if (var_1a0 != 0)
    rbx_1 = rdi_1

int128_t var_178 = data_142d3f670
int32_t var_1e8
var_1e8.q = &data_14399f5e0
int32_t var_1f0
var_1f0.q = &var_178
int32_t var_1f8
var_1f8.q = sub_1423de050()
int16_t* var_198
sub_140a2e390(&var_198, 
    Yellow: Unrealistic material (In nature even black materials reflect a small amount of light)", 
    sub_142409910(&var_148, 0x41f00000, 0x41b00000, rbx_1, var_1f8, var_1f0, var_1e8))

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

int16_t* const rbx_2 = &data_142d40450
int16_t* rdi_2 = var_198
int32_t var_190

if (var_190 != 0)
    rbx_2 = rdi_2

int128_t var_168 = data_142f5cd40
var_1e8.q = &data_14399f5e0
var_1f0.q = &var_168
var_1f8.q = sub_1423de050()
int16_t* var_188
sub_140a2e390(&var_188, 
    Red: Impossible material (This material emits more light than it receives)", 
    sub_142409910(&var_148, 0x41f00000, 0x42480000, rbx_2, var_1f8, var_1f0, var_1e8))

if (rdi_2 != 0)
    sub_140a74f90(rdi_2)

int16_t* rbx_3 = var_188
int32_t var_180

if (var_180 != 0)
    rsi_1 = rbx_3

int128_t var_158 = data_142d8c9b0
var_1e8.q = &data_14399f5e0
var_1f0.q = &var_158
var_1f8.q = sub_1423de050()
sub_142409910(&var_148, 0x41f00000, 0x42800000, rsi_1, var_1f8, var_1f0, var_1e8)

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

sub_14240e4b0(&var_148, arg1, 0, 1)
sub_1423fef60(&var_148)
sub_1405d1550(&var_1b8)
var_1c8 = &data_142f18c08
int64_t result = sub_1405d1550(&var_1c0)
__security_check_cookie(rax_1 ^ &var_218)
return result
