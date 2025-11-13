// 函数: sub_141edc540
// 地址: 0x141edc540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x5c0))() == 0 || (*(arg1 + 0x8a) & 1) == 0)
    *arg3 = &data_143258940
    sub_140596d80(&arg3[3])
    return sub_140596d80(&arg3[1])

int64_t rdx_1 = *arg1
int32_t var_50_1 = arg8.d
int64_t var_58 = (_mm_unpacklo_ps(zx.o(0), 0)).q
int32_t var_40_2 = arg6[1].d
int64_t var_48 = *arg6
(*(rdx_1 + 0xa58))(arg1, rdx_1, &var_48, &var_58, arg9, arg10, arg11, arg12, arg13)
void* rsi_1 = arg1[0x97]

if (rsi_1 == 0)
    void* rax_10 = (*(arg1[0x28] + 0x28))(&arg1[0x28])
    rsi_1 = rax_10
    arg1[0x97] = rax_10

void* rax_11 = *(rsi_1 + 0x48)

if (rax_11 == 0 || arg2[0] f!= *(rax_11 + 0x1c))
    *arg3 = &data_143258940
    sub_140596d80(&arg3[3])
    return sub_140596d80(&arg3[1])

float zmm3[0x4] = *arg7
int64_t zmm2 = *(arg7 + 4)
void* rcx_3 = arg1[0x29]
int64_t zmm0
zmm0.d = (*(arg7 + 8)).d f* 180f
zmm3[0] = zmm3[0] * 180f
zmm2.d = zmm2.d f* 180f
int32_t var_50_2 = zmm0.d
var_48 = (_mm_unpacklo_ps(zmm3, zmm2)).q
int32_t var_40_3 = var_50_2
int128_t zmm6_1
int128_t zmm7_1
zmm6_1, zmm7_1 = sub_141dd7190(rcx_3, &var_48, 0)
uint64_t var_38[0x2]
sub_14200cce0(&var_38, arg6, arg1[0x16])

if (arg4 != 0)
    void* rcx_5 = arg1[0x29]
    int128_t var_18_1 = zmm6_1
    zmm6_1 = arg5
    
    if ((*(rcx_5 + 0x330) & 0x20) != 0 || not(zmm6_1.d f== *(*(rsi_1 + 0x48) + 0x210)))
        void* rax_14 = sub_141ea47f0(rcx_5)
        
        if (rax_14 != 0 && *(rax_14 + 0x188) s<= 0)
            *(rax_14 + 0x128) = zmm6_1.d
            *(rax_14 + 0x30) = 0xfffffffe
            *(rax_14 + 0x38) = 0xfffffffe
            void* rax_15 = arg1[0x29]
            *(rax_15 + 0x330) |= 0x20

sub_141ede080(arg1, *(rsi_1 + 0x48) + 0x260, arg3, zmm7_1)
sub_142001510(arg3)
char rax_17

if ((*(arg1[0x29] + 0x330) & 0x40) == 0)
    rax_17 = sub_141ff7d00(arg3, *(rsi_1 + 0x48) + 0x260)

if ((*(arg1[0x29] + 0x330) & 0x40) != 0 || rax_17 != 0)
    sub_141ff71c0(arg1[0x29] + 0x390, arg3)
    void* rax_18 = arg1[0x29]
    *(rax_18 + 0x330) |= 0x40

return sub_141e91230(arg3)
