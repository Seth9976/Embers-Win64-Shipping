// 函数: sub_1426f1cb0
// 地址: 0x1426f1cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_14347d950
arg1[0x44] = &data_14347df78
arg1[0x45] = &data_14347df98
arg1[0x46] = 0
arg1[0x47] = 0
arg1[0x48] = 0
arg1[0x49] = 0
arg1[0x4c] = 0
arg1[0x4d] = 0
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"PositionComponent", 1)
int64_t* rax_1 = sub_1425881f0()
arg1[0x26] = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
sub_141dd84c0(arg1, 1)
uint64_t rbx_1 = *sub_140b58260(&arg_8, u"SmartLinkComp", 1)
int64_t* rax_4 = sub_14269ff60()
void* rax_5
int512_t zmm0
int512_t zmm1
rax_5, zmm0, zmm1 = sub_140cd9110(arg1, rbx_1, rax_4, rax_4, 1, 0)
arg1[0x4a] = rax_5
sub_14269b9a0(rax_5, 0, zmm0, zmm1)
void* r14 = arg1[0x4a]
void (* var_78)(int64_t* arg1, int64_t arg2, void* arg3, int64_t* arg4) = sub_142704d80
int32_t var_70 = 0
void*** var_88 = nullptr
void*** rax_6 = sub_140a84c80(0, 0x30, 0)
var_88 = rax_6
int32_t var_80 = 3

if (rax_6 != 0)
    *rax_6 = &data_1432a4d58
    sub_140d3a3a0(&rax_6[1], arg1)
    *(rax_6 + 0x10) = var_78.o
    rax_6[5] = sub_140a387b0()
    *rax_6 = &data_1432a4db0

sub_142668860(r14, &var_88)
void*** rax_9

if (var_80 == 0)
    rax_9 = var_88
label_1426f1e6e:
    
    if (rax_9 != 0)
        sub_140a74f90(rax_9)
else
    void*** rcx_8 = var_88
    
    if (rcx_8 != 0)
        (*rcx_8)[7](rcx_8, 0)
        rax_9 = var_88
        
        if (rax_9 != 0)
            rax_9 = sub_140a84c80(rax_9, 0, 0)
            var_88 = rax_9
        
        int32_t var_80_1 = 0
        goto label_1426f1e6e
arg1[0x4b].b = 0
uint128_t var_68
sub_141db75d0(&var_68)
int128_t var_38
__builtin_memcpy(&var_38, 
    "\x00\x00\x00\x00\x00\x00\x48\xc2\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x48\x42", 0x14)
int32_t var_24 = 0
sub_141dd7500(&var_68, sub_14269c0f0())
int64_t rbx_3 = sx.q(arg1[0x47].d)
int32_t rax_11 = (rbx_3 + 1).d
arg1[0x47].d = rax_11

if (rax_11 s> *(arg1 + 0x23c))
    sub_140775520(&arg1[0x46])

int64_t rcx_14 = rbx_3 * 9
int64_t rax_12 = arg1[0x46]
*(rax_12 + (rcx_14 << 3)) = var_68
int128_t var_58
*(rax_12 + (rcx_14 << 3) + 0x10) = var_58
uint128_t var_48
*(rax_12 + (rcx_14 << 3) + 0x20) = var_48
*(rax_12 + (rcx_14 << 3) + 0x30) = var_38
int32_t var_28
*(rax_12 + (rcx_14 << 3) + 0x40) = var_28.q
sub_141dd6600(arg1, 0)
sub_141dd7d00(arg1, 0)
return arg1
