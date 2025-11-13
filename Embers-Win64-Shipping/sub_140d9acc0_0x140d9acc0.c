// 函数: sub_140d9acc0
// 地址: 0x140d9acc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
uint32_t r13 = zx.d(arg3)
int64_t var_c0
__builtin_memset(&var_c0, 0, 0x48)
char var_76 = 0
int16_t var_146 = r13.w
int128_t var_e8
__builtin_memset(&var_e8, 0, 0x25)
int16_t var_78 = 3
int32_t var_144 = 0x3f800000
int64_t* rax_3
int512_t zmm1
rax_3, zmm1 = sub_140da64e0(*(arg1[0x1b] + 0x28), &arg1[0xc], r13, &var_144)
int64_t* var_108
int16_t* rcx_2
int32_t zmm6_1
int128_t zmm7
rcx_2, zmm6_1, zmm7 =
    sub_140da70c0(*(arg1[0x1b] + 0x30), &var_108, rax_3, r13, zmm1, *(arg1 + 0xac))
int64_t* r12 = var_108
rcx_2.b = 0
uint8_t rax_6 = 0
int64_t* rbx
rbx.b = 0
uint64_t r14
r14.b = 0
char var_168
uint32_t var_140
int32_t var_138
int16_t* var_130
int16_t* var_100
int128_t var_88

if (r12 != 0)
    int128_t var_58_1 = zmm7
    
    if ((*(*r12 + 8) & 1) != 0)
        zmm6_1 = var_144
    
    zmm7.d = arg1[0x1a].d.d f* zmm6_1
    var_144 = 0
    sub_140d9a060(r12, rax_3, &var_144)
    uint32_t rax_10
    rax_10.b = (*(*r12 + 8) u>> 6).b & 1
    var_140 = rax_10
    bool rax_11 = sub_140a81220(r13.w)
    int32_t rax_12 = sub_142b91fc0(*r12)
    int32_t r9_2 = var_144
    void* rax_13 = arg1[0x1b]
    int32_t var_13c = 0
    r14 = 0
    var_168.d = arg1[0x15].d
    
    if (sub_140da12c0(*(rax_13 + 0x18), *r12, rax_12, r9_2, var_168, zmm7.d, &var_13c) != 0)
        r14 = zx.q((((var_13c + 0x200) s>> 0xa) + 0x20) s>> 6)
    
    void*** rax_16 = j_sub_140a82f30(0x30)
    void*** rbx_1 = rax_16
    
    if (rax_16 == 0)
        rbx_1 = nullptr
    else
        rax_16[1].d = 1
        *(rax_16 + 0xc) = 1
        *rbx_1 = &data_142ec7a78
        var_138.q = r12
        var_130 = var_100
        
        if (var_100 != 0)
            *(var_100 + 0xc) += 1
        
        var_168.d = zmm7.d
        sub_140d92930(&rbx_1[2], &var_138, var_144, arg1[0x15].d, var_168)
    
    uint128_t zmm0_1 = (&rbx_1[2]).o
    var_138.o = zmm0_1
    rbx = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx != 0)
        rbx[1].d += 1
        rbx = rbx_1
    
    rcx_2 = var_e8:8.q
    var_e8.q = var_138.q
    
    if (var_130 != 0)
        rcx_2 = var_130
    
    var_e8:8.q = rcx_2
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    var_88:8.q = rax_3
    bool var_c4_1 = rax_11 == 0
    char var_f0
    var_78.b = var_f0
    var_78:1.b = var_140.b
    int64_t var_d8
    var_d8.d = rax_12
    int64_t var_d0
    var_d0.w = r14.w
    
    if (var_146 == 0 || rax_12 != 0)
        rbx.b = 1
        var_76 = 1
        rcx_2 = 1
        rax_6 = 1
        r14 = 1
    else
        rbx.b = 0
        rcx_2.b = 0
        rax_6 = 0
        r14.b = 0
    
    r13 = zx.d(var_146)

if (var_100 != 0)
    int32_t temp0_2 = *(var_100 + 8)
    *(var_100 + 8) -= 1
    rax_6 = rcx_2.b
    
    if (temp0_2 == 1)
        (**var_100)(var_100)
        int32_t temp1_1 = *(var_100 + 0xc)
        *(var_100 + 0xc) -= 1
        rax_6 = rbx.b
        
        if (temp1_1 == 1)
            (*(*var_100 + 8))(var_100, 1)
            rax_6 = r14.b

if (rax_6 == 0)
    sub_140d91d10(arg2, &var_e8)
else
    sub_140da9d40(arg1[0x1b], &var_138, &var_e8, &arg1[0x16])
    
    if (zx.d(r13.w) s>= arg1[0x1c].d)
        sub_140d99540(arg1, &var_138)
        *var_130 = r13.w
        sub_140d924a0(&var_130[4], &var_e8)
        *(var_130 + 0x70) = var_88:8.q
        var_130[0x3c].b = var_78.b
        *(var_130 + 0x79) = var_78:1.b
        var_130[0x3d].b = var_76
        int32_t rax_35 = var_138
        *(var_130 + 0x80) = 0xffffffff
        int32_t var_160
        var_160.q = 0
        var_168.d = rax_35
        sub_140d9e530(arg1, &var_140, zx.d(*var_130), var_130, var_168, var_160)
        void* rbx_7 = sx.q(var_140) * 0x88 + *arg1
        sub_140d924a0(arg2, rbx_7 + 8)
        arg2[0xd] = *(rbx_7 + 0x70)
        arg2[0xe].b = *(rbx_7 + 0x78)
        *(arg2 + 0x71) = *(rbx_7 + 0x79)
        *(arg2 + 0x72) = *(rbx_7 + 0x7a)
    else
        int64_t rdi_1 = zx.q(r13.w) * 0x78
        int128_t* rbx_3 = arg1[0xa] + rdi_1
        sub_140d96180(rbx_3, &var_e8)
        *(rbx_3 + 0x68) = var_88:8.q
        rbx_3[7].b = var_78.b
        *(rbx_3 + 0x71) = var_78:1.b
        *(rbx_3 + 0x72) = var_76
        int64_t* rbx_5 = arg1[0xa] + rdi_1
        sub_140d924a0(arg2, rbx_5)
        arg2[0xd] = rbx_5[0xd]
        arg2[0xe].b = rbx_5[0xe].b
        *(arg2 + 0x71) = *(rbx_5 + 0x71)
        *(arg2 + 0x72) = *(rbx_5 + 0x72)

sub_140d95810(&var_e8)
__security_check_cookie(rax_1 ^ &var_188)
return arg2
