// 函数: sub_1408dcf20
// 地址: 0x1408dcf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rcx_1 = *arg1 + 0x40
rcx_1[1].d = 0

if (*(rcx_1 + 0xc) != 0)
    sub_1405c5570(rcx_1, 0)

uint64_t* rcx_3 = *arg1 + 0x30
rcx_3[1].d = 0

if (*(rcx_3 + 0xc) != 0)
    sub_1405c5570(rcx_3, 0)

int64_t var_158
_vfprintf_p_l(&var_158, 
    Geometry Cache asset has been emptied as it does not support backwards compatibility", 
    GeometryCache")
int64_t var_128 = var_158
int128_t var_138 = zx.o(0)
int64_t* var_150
int64_t* var_120 = var_150

if (var_150 != 0)
    var_150[1].d += 1

int32_t var_f8 = 0x3f000000
int32_t var_f0 = 0x3f800000
int32_t var_e8 = 0xbf800000
int32_t var_f4 = 0x40000000
int32_t var_148
int32_t var_118 = var_148
int64_t var_110
__builtin_memset(&var_110, 0, 0x18)
int16_t var_ec = 0x101
char var_ea = 1
char var_e4 = 1
int16_t var_e0 = 0x100
int64_t var_d8 = 0
int32_t var_d0 = 0
int64_t var_c8 = 0
int32_t var_c0 = 0
void var_b8
sub_140a96170(&var_b8)
char var_a0 = 0
int64_t var_98 = 0
int32_t var_90 = 0
int64_t var_88 = 0
int32_t var_80 = 0
void var_28
int64_t* rax_3 = _vfprintf_p_l(&var_28, u"Show Log", u"EditorNotification")
int64_t var_78 = *rax_3
void* rcx_8 = rax_3[1]
void* var_70 = rcx_8

if (rcx_8 != 0)
    *(rcx_8 + 8) += 1

int64_t var_58 = 0
int32_t var_50 = 0
int32_t var_68 = rax_3[2].d
char var_60 = 1
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rax_7 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*var_20 + 8))(var_20, 1)

int32_t var_f0_1 = 0x40a00000
char var_48 = 1
void var_38
sub_140ee80a0(sub_140eff820(), &var_38, &var_138)
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp2_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

int32_t result = sub_1408daf60(&var_138)

if (var_150 != 0)
    result = var_150[1].d
    var_150[1].d -= 1
    
    if (result == 1)
        result = (**var_150)(var_150)
        int32_t rdi_1 = *(var_150 + 0xc)
        *(var_150 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_150 + 8))(var_150, zx.q(rdi_1))

return result
