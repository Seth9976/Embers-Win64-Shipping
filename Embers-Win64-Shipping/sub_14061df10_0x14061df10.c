// 函数: sub_14061df10
// 地址: 0x14061df10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = 0
int64_t var_60 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* r12 = &var_68
int32_t i_2 = 0

if (rax_2 != 0)
    r12 = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &i_2, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &i_2)

int32_t arg_8 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t var_78 = 0
int64_t var_70 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_78, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t* rax_6 = *(arg2 + 0x38)
int64_t* rdi = &var_78
int128_t zmm7 = arg_8
int64_t i_1 = sx.q(i_2)

if (rax_6 != 0)
    rdi = rax_6

int64_t rax_7 = *(arg2 + 0x20)
int64_t rcx_4
rcx_4.b = rax_7 != 0
*(arg2 + 0x20) = rcx_4 + rax_7
void* result = *(arg1 + 0xa8)

if (result == 0)
    result = sub_141ee69e0(arg1)

int128_t zmm6 = *(result + 0x520)
rdi[1].d = 0

if (*(rdi + 0xc) != 0)
    result = sub_14061cd70(rdi, 0)

int64_t rbx_2 = i_1 << 4
int64_t i = i_1

while (i s>= 0)
    if (i_1.d s>= r12[1].d)
        break
    
    int128_t* r14_1 = *r12
    float zmm1 = *(r14_1 + rbx_2 + 8)
    
    if (zmm1 f>= zmm6.d)
        break
    
    int128_t zmm0_1
    zmm0_1.d = zmm6.d f- zmm7.d
    
    if (not(zmm1 f+ *(r14_1 + rbx_2 + 0xc) f<= zmm0_1.d))
        int64_t r15_1 = sx.q(rdi[1].d)
        int32_t rax_8 = (r15_1 + 1).d
        rdi[1].d = rax_8
        
        if (rax_8 s> *(rdi + 0xc))
            sub_140610660(rdi)
        
        result = *rdi
        *(result + r15_1 * 0x10) = *(r14_1 + rbx_2)
    
    i_1 = zx.q(i_1.d + 1)
    i += 1
    rbx_2 += 0x10

int64_t rcx_11 = var_78
*arg3 = i_1.d

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_68

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
