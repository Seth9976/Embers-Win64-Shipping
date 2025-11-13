// 函数: sub_142713ef0
// 地址: 0x142713ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* i_1 = nullptr
*(arg1 + 0xe8) = arg2
*(arg1 + 0xf8) = 0

if (arg2 == 0)
    return 

*(arg1 + 0x110) = *(arg2 + 0xf4) * 0.100000001f
void* rax_2 = sub_140d21950(arg1, sub_14255c120())
void* rsi_1 = nullptr

if (rax_2 != 0)
    int64_t rdx_1 = *rax_2
    void* rax_3 = (*(rdx_1 + 8))(rax_2, rdx_1)
    void* rax_4 = sub_140d41340()
    void* rcx_2 = *(rax_3 + 0x10)
    int64_t rdx_2 = sx.q(*(rax_4 + 0x38))
    
    if (rdx_2.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_2 << 3)) == rax_4 + 0x30)
        rsi_1 = rax_3

*(arg2 + 0x128) = rsi_1
int64_t* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)
    
    if (rax != 0)
        goto label_142713fac
    
    return 

label_142713fac:
int64_t* rsi_2 = rax[0x24]

if (rsi_2 == 0)
    return 

void* rax_6 = sub_14269bba0()
void* rdx_3 = rsi_2[2]
rax = sx.q(*(rax_6 + 0x38))

if (rax.d s> *(rdx_3 + 0x38) || (*(rdx_3 + 0x30))[rax] != rax_6 + 0x30)
    return 

void* rax_7 = *(arg2 + 0xb0)
float var_38_1
float var_30_1

if (rax_7 == 0)
    var_38_1 = 3.40282347e+38f
    int32_t var_34_2 = 0x7f7fffff
    var_30_1 = 3.40282347e+38f
else
    float zmm1[0x4] = *(rax_7 + 0x1d0)
    var_38_1 = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_30_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    float var_34_1 = temp0_1[0]

int64_t rax_9 = *rsi_2
int64_t var_28 = var_38_1.q
rax = (*(rax_9 + 0x2b0))(rsi_2, arg2 + 0xf0, &var_28, &data_143dbb1f8, var_38_1, var_30_1, var_28, 
    var_30_1)
*(arg1 + 0xf8) = rax

if (rax != 0)
    return 

int32_t var_20_2 = 0
int64_t arg_8

if ((*(rsi_2 + 0x39a) & 4) != 0)
    var_28 = sub_142705050
    var_28.o = var_28.o
    
    for (wchar16* i = wcsstr(&UPathFollowingComponent::OnNavDataRegistered", ::"); i != 0; 
            i = wcsstr(&i[1], ::"))
        i_1 = i
    
    sub_140b58260(&arg_8, &i_1[2], 1)
    sub_140741f70(&rsi_2[0x18], arg1, &var_28, arg_8)
    return 

var_28 = sub_1426f44d4
rax = sub_140a84c80(0, 0x30, 0)
int64_t* rbx = rax

if (rax == 0)
    return 

*rbx = &data_142e33ea8
sub_140d3a3a0(&rbx[1], arg1)
*(rbx + 0x10) = var_28.o
rbx[5] = sub_140a387b0()
*rbx = &data_142e33f00
sub_140599630(&rsi_2[0x1c], 1)
(*(*rbx + 0x30))(rbx, &arg_8)
int64_t rdi_1 = sx.q(rsi_2[0x1d].d)
int32_t rax_12 = (rdi_1 + 1).d
rsi_2[0x1d].d = rax_12

if (rax_12 s> *(rsi_2 + 0xec))
    sub_1405a4f90(&rsi_2[0x1c])

rax = (rdi_1 << 4) + rsi_2[0x1c]
*rax = rbx
rax[1].d = 3
