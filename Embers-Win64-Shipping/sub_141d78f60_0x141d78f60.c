// 函数: sub_141d78f60
// 地址: 0x141d78f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d78ca0(arg1)
int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

int64_t r8
r8.b = 1
int64_t* rax_1
int64_t r8_1
rax_1, r8_1 = (*(*rcx + 0xb0))(rcx, u"r.HDR.Display.ColorGamut", r8)
int64_t* rcx_1 = data_143db18d0

if (rcx_1 == 0)
    sub_140a53c40()
    rcx_1 = data_143db18d0

int64_t r9 = *rcx_1
r8_1.b = 1
int64_t* rax_2 = (*(r9 + 0xb0))(rcx_1, u"r.HDR.Display.OutputDevice", r8_1, r9)
int16_t* var_18
sub_140a2e390(&var_18, u"%d", zx.q(*(arg1 + 0xdc)))
int16_t* const rdi = &data_142d40450
int64_t r9_1 = *rax_1
int16_t* const rdx = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx = var_18

(*(r9_1 + 0x80))(rax_1, rdx, 0x8000000, r9_1)
int16_t* rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140a2e390(&var_18, u"%d", zx.q(*(arg1 + 0xe0)))

if (var_10 != 0)
    rdi = var_18

int64_t result = (*(*rax_2 + 0x80))(rax_2, rdi, 0x8000000)
int16_t* rcx_7 = var_18

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
