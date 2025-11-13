// 函数: sub_140eaf230
// 地址: 0x140eaf230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r15 = 0
float arg_8 = 0f
int32_t rax_1 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
float zmm2

if (rax_1 s<= 0)
    zmm2 = (zx.o(0)).d
else
    zmm2 = sub_140f02120(**(arg1 + 0x2b8)).d

void* rcx_2 = arg1 + 0x2e0
int32_t zmm3 = arg3[1]
void* rbp = *rcx_2
uint128_t zmm0

if (rbp == 0)
    zmm0 = zx.o(rax_1)
else
    zmm0 = zx.o(rax_1 + 1)

arg_8 = (*arg3 - zmm2) f/ _mm_cvtepi32_ps(zmm0).d + zmm2
int64_t* rdi_1
int64_t* var_20

if (rax_1 s<= 0)
    rdi_1 = var_20
else
    int64_t* rax_3 = *(arg1 + 0x2b8)
    rdi_1 = rax_3[1]
    rbp = *rax_3
    void* var_28 = rbp
    int64_t* var_20_1 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    rcx_2 = &var_28
    r15 = 1
int64_t* rbx_1 = *(rcx_2 + 8)

if (rbx_1 != 0)
    rbx_1[1].d += 1

if ((r15 & 1) != 0 && rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

float zmm1

if (rbp == 0)
    zmm0 = data_1439b3950
    zmm1 = data_1439b3954
else
    int32_t* rcx_6 = &data_1439b3950
    
    if (sub_140f053d0(rbp) == 0)
        rcx_6 = &data_1439b3958
    
    zmm0 = *rcx_6
    zmm1 = rcx_6[1]

zmm0 = __minss_xmmss_memss(zmm0.d, arg_8)
float temp0_3 = __minss_xmmss_memss(zmm1, zmm3)
*arg2 = zmm0.d
arg2[1] = temp0_3

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
