// 函数: sub_141e71780
// 地址: 0x141e71780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141fd7160(arg1, arg2)
*arg1 = &data_143250880
__builtin_memset(&arg1[7], 0, 0xc0)
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x26] = 0
arg1[0x27] = 0
int64_t arg_8
sub_140b58260(&arg_8, u"Audio", 1)
arg1[6] = arg_8
int64_t var_40
sub_140a96170(&var_40)
int32_t var_28 = 0x20
void var_58
int64_t* rax_1 = _vfprintf_p_l(&var_58, u"Default", u"AudioSettings")
int64_t rdx = var_40
var_40 = *rax_1
*rax_1 = rdx
int64_t* rcx_4 = rax_1[1]
int64_t var_38
rax_1[1] = var_38
int32_t rax_2 = rax_1[2].d
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t rax_5 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_50 + 8))(var_50, 1)

int64_t rdi_1 = sx.q(arg1[0x23].d)
int32_t rax_7 = (rdi_1 + 1).d
arg1[0x23].d = rax_7

if (rax_7 s> *(arg1 + 0x11c))
    sub_1405c4e40(&arg1[0x22])

int64_t* rcx_10 = &arg1[0x22][rdi_1 * 4]
*rcx_10 = var_40
rcx_10[1] = rcx_4

if (rcx_4 != 0)
    rcx_4[1].d += 1

rcx_10[2].d = rax_2
rcx_10[3].d = var_28
arg1[0x24].d |= 1
arg1[0x1f] = 0x3e80
*(arg1 + 0x124) = 8

if (rcx_4 != 0)
    rcx_4[1].d -= 1
    
    if (rcx_4[1].d == 1)
        (**rcx_4)(rcx_4)
        int32_t rsi_1 = *(rcx_4 + 0xc)
        *(rcx_4 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rcx_4 + 8))(rcx_4, zx.q(rsi_1))

arg1[0x24].d |= 1
arg1[0x28].b = 0
*(arg1 + 0x104) = 0x3ecccccd
arg1[0x21].d = 0x40000000
return arg1
