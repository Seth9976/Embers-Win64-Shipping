// 函数: sub_140d9fe70
// 地址: 0x140d9fe70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* rax_2 = *(arg1 + 0x128)
void* r9 = arg1 + 8
int32_t var_f8 = 0

if (rax_2 != 0)
    r9 = rax_2

void* r8 = r9
void* rdx = r9 + sx.q(*(arg1 + 0x130)) * 0x48
int32_t rdx_3

if (r9 != rdx)
    while (*(r8 + 0x38) != *arg3)
        r8 += 0x48
        
        if (r8 == rdx)
            goto label_140d9fee3
    
    rdx_3 = ((r8 - r9) s/ 0x48).d

int64_t* var_a8
int64_t* var_98
int64_t* var_48
int64_t* var_38
int128_t* rcx_1
int32_t rsi
uint128_t zmm1

if (r9 == rdx || rdx_3 == 0xffffffff)
label_140d9fee3:
    sub_140da8da0()
    zmm1 = data_143e242e0
    int128_t var_e8 = data_143e242d0
    uint128_t var_d8_1 = zmm1
    int64_t var_b0_1 = data_143e24308
    int64_t* rax_6 = data_143e24310
    int128_t var_c8_1 = data_143e242f0
    uint64_t var_b8_1 = data_143e24300
    var_a8 = rax_6
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    int64_t var_a0_1 = 0
    rcx_1 = &var_e8
    var_98 = nullptr
    rsi = 2
else
    int64_t rax_23 = sx.q(rdx_3)
    int64_t* rdx_6 = (rax_23 << 4) + *(arg1 + 0x150)
    int64_t rax_24 = rax_23 * 9
    void* rcx_14 = r9 + (rax_24 << 3)
    zmm1 = *(rcx_14 + 0x10)
    int64_t rax_25 = *(rcx_14 + 0x38)
    int128_t var_88 = *(r9 + (rax_24 << 3))
    int64_t var_50_1 = rax_25
    int64_t* rax_26 = *(rcx_14 + 0x40)
    uint128_t var_78_1 = zmm1
    int128_t var_68_1 = *(rcx_14 + 0x20)
    uint64_t var_58_1 = *(rcx_14 + 0x30)
    var_48 = rax_26
    
    if (rax_26 != 0)
        rax_26[1].d += 1
    
    int64_t var_40_1 = *rdx_6
    int64_t* rax_28 = rdx_6[1]
    var_38 = rax_28
    
    if (rax_28 != 0)
        rax_28[1].d += 1
    
    rcx_1 = &var_88
    rsi = 1

int64_t rax_7 = *(rcx_1 + 0x38)
zmm1 = rcx_1[1]
*arg2 = *rcx_1
int128_t zmm0 = rcx_1[2]
arg2[1] = zmm1
zmm1 = zx.o(rcx_1[3].q)
arg2[2] = zmm0
arg2[3].q = zmm1.q
*(arg2 + 0x38) = rax_7
void* rax_8 = rcx_1[4].q
arg2[4].q = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

*(arg2 + 0x48) = *(rcx_1 + 0x48)
arg2[5].q = rcx_1[5].q
rcx_1[5].q = 0
*(arg2 + 0x58) = 1
*(rcx_1 + 0x48) = 0

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (var_98 != 0)
        var_98[1].d -= 1
        
        if (var_98[1].d == 1)
            (**var_98)(var_98)
            int32_t temp4_1 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_98 + 8))(var_98, 1)
    
    if (var_a8 != 0)
        var_a8[1].d -= 1
        
        if (var_a8[1].d == 1)
            (**var_a8)(var_a8)
            int32_t temp8_1 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_a8 + 8))(var_a8, 1)

if ((rsi.b & 1) != 0)
    if (var_38 != 0)
        var_38[1].d -= 1
        
        if (var_38[1].d == 1)
            (**var_38)(var_38)
            int32_t temp7_1 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_38 + 8))(var_38, 1)
    
    if (var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t temp9_1 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_48 + 8))(var_48, 1)

int64_t* rbx_5 = arg3[1]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        int64_t r8_1 = *rbx_5
        (*r8_1)(rbx_5, zmm1, r8_1)
        int32_t temp5_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_2 = *rbx_5
            (*(r8_2 + 8))(rbx_5, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
