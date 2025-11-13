// 函数: sub_14177f830
// 地址: 0x14177f830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
*(arg1 + 0xcc) |= 0x200000
void* rax_2 = *(arg1 + 0x10)

if (rax_2 != 0)
    void* rcx = *(rax_2 + 8)
    
    if (rcx != 0)
        void* var_70 = rax_2
        void var_78
        sub_140946410(rcx + 8, &var_78, &var_70, nullptr)

int64_t* rcx_2 = arg2[1]
int64_t var_88 = *arg2
int64_t* var_80 = rcx_2

if (rcx_2 != 0)
    rcx_2[1].d += 1
    rcx_2 = var_80

int128_t zmm1

if (&var_88 != arg1 + 0x40)
    zmm1 = var_88.o
    int128_t var_38_1 = zmm1
    var_88.o = *(arg1 + 0x40)
    rcx_2 = var_80
    *(arg1 + 0x40) = zmm1

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1)
        (**var_80)(var_80)
        int32_t rax_6 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*var_80 + 8))(var_80, 1)

int128_t zmm0 = *(arg1 + 0x30)
float zmm3[0x4] = *(arg1 + 0x18)
zmm1 = zx.o(0)
void* rdx_1 = *(arg1 + 0x40)
float temp0_3[0x4] = _mm_unpacklo_ps(*(arg1 + 0x1c), zmm1.q)
int128_t var_68 = zmm0
float temp0_4[0x4] = _mm_unpacklo_ps(zmm3, (*(arg1 + 0x20)).q)
zmm0 = data_14399f670
float var_58[0x4] = _mm_unpacklo_ps(temp0_4, temp0_3[0].q)
float var_48[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
    _mm_unpacklo_ps(data_14399f66c, zmm1.q)[0].q)
sub_141700b70(arg1 + 0x50, rdx_1, &var_68)
int32_t result = sub_14177ab20(arg1)
int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_a8)
return result
