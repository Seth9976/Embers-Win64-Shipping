// 函数: sub_142748700
// 地址: 0x142748700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = *(arg1 + 0x680)
int64_t* r14 = arg4

if (r10 == 0)
    void* const* rax_8
    rax_8.b = 0
    return rax_8

int32_t zmm4 = arg3[1]
int32_t zmm3 = *arg3
int32_t zmm5 = arg3[2]
uint128_t zmm1
zmm1.d = (*arg4).d f- zmm3
int32_t arg_8 = 0
uint128_t zmm0
zmm0.d = (*(arg4 + 4)).d f- zmm4
int32_t var_a4 = zmm1.d
data_142d4cc00
int32_t rcx = *arg6
int32_t var_a0 = zmm0.d
zmm0.d = (*(arg4 + 8)).d f- zmm5
int128_t var_68
__builtin_memcpy(&var_68, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x24)
int32_t var_9c = zmm0.d
int32_t zmm2

if (rcx == 1)
    zmm0 = arg6[1]
    zmm1 = arg6[2]
    zmm2 = arg6[3]
else if (rcx == 2)
    zmm0 = arg6[1]
    zmm1 = zmm0
    zmm2 = zmm0.d
else if (rcx == 3)
    zmm0 = arg6[1]
    zmm2 = arg6[2]
    zmm1 = zmm0
else
    zmm0 = data_143dbb1f8
    zmm1 = data_143dbb1fc
    zmm2 = data_143dbb200

int32_t var_98 = zmm0.d
int32_t var_94 = zmm1.d
int32_t var_90 = zmm2
int32_t var_88 = zmm3
int32_t var_84 = zmm4
int32_t var_80 = zmm5
void var_78
int64_t rax_1 = (*(*r10 + 0x1a8))(r10, &arg_8, &var_78, &var_88, &var_98, &var_68, &var_a4, 3)
int32_t r12 = rax_1.d

if (rax_1.d == 0xffffffff || arg_8.d f> 1f)
    rax_1.b = 0
else
    int64_t* rcx_4 = *(arg1 + 0x680)
    rax_1 = (*(*rcx_4 + 0xd0))(rcx_4, zx.q(r12))
    
    if (rax_1 != 0)
        int32_t rax_3 = *(arg1 + 0x2a8)
        int64_t r13_1 = *(arg1 + 0x398)
        
        if (*(arg1 + 0xa8) == 0)
            sub_141ee69e0(arg1)
        
        int32_t var_80_1 = r14[1].d
        int32_t var_90_1 = arg3[2]
        int32_t* var_b8
        var_b8.b = arg7
        var_88.q = *r14
        zmm0 = zx.o(*arg3)
        *(arg1 + 0x398) = rax_1
        *(arg1 + 0x2a8) = r12
        var_98.q = zmm0.q
        rax_1 = sub_141f28450(arg1, arg2, &var_98, &var_88, arg5, arg6, var_b8.b)
        *(arg1 + 0x398) = r13_1
        *(arg1 + 0x2a8) = rax_3

return rax_1
