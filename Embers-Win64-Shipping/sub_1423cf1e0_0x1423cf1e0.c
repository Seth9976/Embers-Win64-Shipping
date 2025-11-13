// 函数: sub_1423cf1e0
// 地址: 0x1423cf1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = *arg2
void* rax_1 = arg2[1]
arg1[3] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[4].d = arg2[2].d
__builtin_memset(&arg1[5], 0, 0x18)
arg1[8].d = 0x3f000000
*(arg1 + 0x44) = 0x40000000
arg1[9].d = 0x3f800000
*(arg1 + 0x4c) = 0x101
*(arg1 + 0x4e) = 1
arg1[0xa].d = 0xbf800000
*(arg1 + 0x54) = 1
arg1[0xb].w = 0x100
arg1[0xc] = 0
arg1[0xd].d = 0
arg1[0xe] = 0
arg1[0xf].d = 0
sub_140a96170(arg1 + 0x80)
arg1[0x13].b = 0
arg1[0x14] = 0
arg1[0x15].d = 0
arg1[0x16] = 0
arg1[0x17].d = 0
void var_28
int64_t* rax_3 = _vfprintf_p_l(&var_28, u"Show Log", u"EditorNotification")
arg1[0x18] = *rax_3
void* rcx_3 = rax_3[1]
arg1[0x19] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

arg1[0x1a].d = rax_3[2].d
arg1[0x1b].b = 1
arg1[0x1c] = 0
arg1[0x1d].d = 0
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rsi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rsi_1))

arg1[0x1e].b = 1
return arg1
