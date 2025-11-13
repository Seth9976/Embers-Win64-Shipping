// 函数: sub_1407a5dd0
// 地址: 0x1407a5dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t var_a8 = 1
int64_t* var_b0 = nullptr
int64_t var_a0 = 0
int32_t var_98 = 0
int64_t var_90 = 0
int64_t var_80
__builtin_memset(&var_80, 0, 0x2c)
int32_t var_54 = 0x80
int32_t var_50 = 0xffffffff
int32_t var_4c = 0
int64_t var_40 = 0
int32_t var_38 = 0
int64_t var_138
sub_140b58260(&var_138, u"GetNextValue", 1)
int64_t var_b8 = var_138
int32_t var_88
int32_t var_88_1 = (var_88 & 0xffffffda) | 0x1a
int64_t var_130
sub_140b58260(&var_130, u"Counter", 1)
int64_t var_120 = var_130
int64_t var_118 = *(arg1 + 0x10)
int32_t var_110 = 0xffff0001
int16_t var_10c = 0xffff
int64_t var_108 = 0
int64_t var_100 = 0
sub_1405c4ec0(&var_b0)
sub_140745220(var_b0, &var_120)

if (var_108 != 0)
    sub_140a74f90(var_108)

int64_t var_128
sub_140b58260(&var_128, u"Value", 1)
int64_t rbx_1 = sx.q(var_98)
int64_t var_f8 = var_128
int64_t var_f0 = data_14396f0a8
int16_t var_e8 = data_14396f0b0
int32_t rax_11 = (rbx_1 + 1).d
int32_t var_e6 = 0xffffffff
int64_t var_e0 = 0
int64_t var_d8 = 0
var_98 = rax_11

if (rax_11 s> 0)
    sub_1405c4ec0(&var_a0)

sub_140745220(var_a0 + rbx_1 * 0x28, &var_f8)

if (var_e0 != 0)
    sub_140a74f90(var_e0)

void var_d0
_vfprintf_p_l(&var_d0, 
    Increment the internal counter. Note that it is possible for this counter to roll over eventually, "
"so make sure that your particles do not live", NiagaraDataInterfaceSimpleCounter")
int64_t* var_c8

if (var_c8 != 0)
    var_c8[1].d -= 1
    
    if (var_c8[1].d == 1)
        (**var_c8)(var_c8)
        int32_t rdi_1 = *(var_c8 + 0xc)
        *(var_c8 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_c8 + 8))(var_c8, 1)

int64_t rbx_3 = sx.q(arg2[1].d)
int32_t rax_16 = (rbx_3 + 1).d
arg2[1].d = rax_16

if (rax_16 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_3 * 0x88 + *arg2, &var_b8)
sub_1405ae080(&var_80)
sub_140745ac0(&var_a0)
int64_t result = sub_140745ac0(&var_b0)
__security_check_cookie(rax_1 ^ &var_158)
return result
