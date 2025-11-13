// 函数: sub_1405e1210
// 地址: 0x1405e1210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = j_sub_140a82f30(0x138)

if (result == 0)
    return result

sub_1419c1ef0(result, arg1)
__builtin_memset(result + 0x118, 0, 0x18)
int32_t rsi = arg1[0xd].d
int64_t r14 = arg1[0xc]
*(result + 0x130) = rsi

if (rsi != 0)
    sub_1405e3e80(result + 0x128, rsi, 0)
    void* rcx_2 = *(result + 0x128)
    
    if ((rcx_2.b & 1) != 0)
        rcx_2 = (rcx_2 s>> 1) + result + 0x128
    
    memcpy(rcx_2, r14, rsi * 2)
else
    *(result + 0x134) = 0

int64_t* rbx_1 = arg1[3]
sub_1419c7530(result + 0x118, rbx_1, u"InputTexture", 0)
sub_1419c7530(result + 0x11c, rbx_1, u"InputTextureSampler", 0)
sub_1419c7530(result + 0x120, rbx_1, data_14395f3f0, 0)
sub_1419c7530(result + 0x124, rbx_1, u"ociolut3d_0Sampler", 0)
return result
