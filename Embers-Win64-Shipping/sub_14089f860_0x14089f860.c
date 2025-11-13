// 函数: sub_14089f860
// 地址: 0x14089f860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int128_t* var_48 = arg2
int64_t (* var_f0)(void* arg1, void** arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, 
    int32_t arg7, int64_t arg8, int32_t arg9) = sub_140591ee0
int128_t zmm0 = *arg2
int128_t zmm1 = arg2[1]
arg2[1].q = 0
*(arg2 + 0x18) = 7
*arg2 = 0
int64_t (** var_f8)(void* arg1, void** arg2, int32_t arg3, int32_t arg4, int32_t arg5, 
    int32_t arg6, int32_t arg7, int64_t arg8, int32_t arg9) = &var_f0
int64_t var_50 = 0
void*** rax_4
int512_t zmm0_1
rax_4, zmm0_1 = j_sub_140a82f30(0x70)
*rax_4 = &data_142dfbf90
rax_4[1] = var_f0
rax_4[2].d = sx.d(arg9)
rax_4[3] = arg8
rax_4[4].d = zx.d(arg7)
rax_4[5].d = zx.d(arg6)
char var_c8
rax_4[6].b = var_c8
char var_c0
rax_4[7].b = var_c0
char var_b8
rax_4[8].b = var_b8
rax_4[0xb] = 0
rax_4[0xc] = 0
zmm0_1.o = zmm0
*(rax_4 + 0x48) = zmm0_1.o
*(rax_4 + 0x58) = zmm1
rax_4[0xd] = arg1
int128_t var_a0
var_a0.q = 0
var_a0:8.q = 7
int128_t var_b0
var_b0.w = 0
void var_88
int64_t result = sub_14089fa20(arg1, &var_88, arg3, arg4, zmm0_1, arg5)

if (rax_4 != 0)
    void* rdx_2
    rdx_2.b = rax_4 != &var_88
    result = (*rax_4)[4](rax_4, rdx_2)

int64_t rdx_3 = *(arg2 + 0x18)

if (rdx_3 u>= 8)
    void* rcx_12 = *arg2
    
    if ((rdx_3 << 1) + 2 u>= 0x1000)
        void* r8_1 = *(rcx_12 - 8)
        
        if (rcx_12 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_12 = r8_1
    
    result = j_sub_140a74f90(rcx_12)

arg2[1].q = 0
*(arg2 + 0x18) = 7
*arg2 = 0
__security_check_cookie(rax_1 ^ &var_128)
return result
