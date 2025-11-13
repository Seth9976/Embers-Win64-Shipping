// 函数: sub_14268d180
// 地址: 0x14268d180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = 0
int32_t arg_8 = 0

if (arg1 == 0 || *(arg1 + 0x4a8) == 0)
    *arg4 = *arg2
    arg4[1].d = arg2[2]
    int64_t* rdi_1 = *(arg5 + 8)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rbx_3 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_3 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_3))
    
    uint64_t result
    result.b = 1
    return result

int64_t* r12_1 = arg5
int64_t* rsi_1 = r12_1[1]
int64_t rcx = *r12_1
arg_8.q = rcx

if (rsi_1 != 0)
    rsi_1[1].d += 1

int64_t* rdi

if (rcx == 0)
    rdi = *(arg1 + 0x340)
    arg_8.q = *(arg1 + 0x338)
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rax = 1
else
    rdi = arg_8.q

if ((rax & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_4 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t rbx_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (rbx_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, zx.q(rbx_1))

int64_t var_58_1 = 0
sub_142690270(*(arg1 + 0x4a8), arg2, arg3, arg_8.q, arg6, arg7)
float zmm4_1 = *(arg7 + 0x604)
int32_t* rax_10

if (zmm4_1 == 3.40282347e+38f)
    int32_t var_34_1 = arg3[1].d
    int64_t var_3c
    rax_10 = &var_3c
    var_3c = *arg3
else
    int32_t var_48
    rax_10 = &var_48
    int64_t zmm0_1
    zmm0_1.d = (*arg3).d f- *arg2
    zmm0_1.d = zmm0_1.d f* zmm4_1
    zmm0_1.d = zmm0_1.d f+ *arg2
    float zmm1_1 = (*(arg3 + 4) f- arg2[1]) * zmm4_1 f+ arg2[1]
    var_48 = zmm0_1.d
    zmm0_1.d = arg3[1].d.d f- arg2[2]
    float var_44_1 = zmm1_1
    zmm0_1.d = zmm0_1.d f* zmm4_1
    zmm0_1.d = zmm0_1.d f+ arg2[2]
    int32_t var_40_1 = zmm0_1.d

int32_t rax_12 = rax_10[2]
*arg4 = *rax_10
arg4[1].d = rax_12
void* rbx_2

if (3.40282347e+38f f== *(arg7 + 0x604))
    rbx_2.b = 0
else
    rbx_2.b = 1

sub_1405970a0(r12_1)
return zx.q(rbx_2.b)
