// 函数: sub_142277740
// 地址: 0x142277740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x53]

if (rdi == 0)
    return 

void* rax_1 = sub_14254f450()
void* r8_1 = rdi[2]
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(r8_1 + 0x38) || *(*(r8_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int32_t var_18_1 = arg2[1].d
int128_t var_28 = *arg2
int64_t arg_8 = var_28.q
int16_t* var_38
sub_140b63b70(&arg_8, &var_38)
int64_t rbx_1 = *data_143f5b298
int64_t rax_5
int64_t r9_2
rax_5, r9_2 = sub_141dc9ff0(arg1)
r9_2.b = 1
(*(rbx_1 + 0x400))(data_143f5b298, rax_5, &var_38, r9_2)
int16_t* const rdx_2 = &data_142d40450
int32_t var_30

if (var_30 != 0)
    rdx_2 = var_38

int64_t arg_18
sub_140b58260(&arg_18, rdx_2, 1)
int16_t* rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

var_28.q = arg_18
sub_142157ac0(rdi, &var_28)
