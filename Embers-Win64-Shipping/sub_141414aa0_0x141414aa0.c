// 函数: sub_141414aa0
// 地址: 0x141414aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 1 << *(arg2 + 0x19)
void* var_58 = nullptr
int64_t r10 = *(*(arg2 + 0x28) + 0x44)
void* rdx_2 = *arg1
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(r11 - 1 + r10.d), r11)))
void* rdx_3 = *(rdx_2 + 0x10)
int128_t zmm1
zmm1.d = 1f f/ zmm0.d
int64_t rax_9 = data_14395fa10
zmm0 = _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(r11 - 1 + (r10 u>> 0x20).d), r11)))
int32_t var_70 = zmm1.d
zmm1 = *arg4
float var_6c = 1f f/ zmm0.d
uint64_t var_78 = arg5
sub_1405d16e0(&var_58, rdx_3)
int32_t r8 = 1 << arg3.b
int64_t rcx_3 = *arg1[1]
arg5.d = divs.dp.d(sx.q(r8 - 1 + rcx_3.d), r8)
arg5:4.d = divs.dp.d(sx.q(r8 - 1 + (rcx_3 u>> 0x20).d), r8)
int64_t* rdx_7 = *(arg1[4] + 8)
void* rsi_1
void*** rdi_1
int128_t var_98
void arg_18
int128_t zmm7

if (*arg1[2] == 0)
    int128_t* rax_38 = sub_14081d830(0xd0, rdx_7, 1, 0)
    int128_t* rbx_2 = rax_38
    
    if (rax_38 == 0)
        rbx_2 = nullptr
    else
        rax_38[3].q = 0
        rax_38[4].q = 0
        *(rax_38 + 0x48) = 0
        *(rax_38 + 0x4a) = 0
        *(rax_38 + 0x4c) = 0xffffffff
        rax_38[5].q = 0
        *(rax_38 + 0x58) = 0
        *(rax_38 + 0x5a) = 0
        *(rax_38 + 0x5c) = 0xffffffff
        rax_38[6].q = 0
        *(rax_38 + 0x68) = 0
        *(rax_38 + 0x6a) = 0
        *(rax_38 + 0x6c) = 0xffffffff
        rax_38[7].q = 0
        *(rax_38 + 0x78) = 0
        *(rax_38 + 0x7a) = 0
        *(rax_38 + 0x7c) = 0xffffffff
        rax_38[8].q = 0
        *(rax_38 + 0x88) = 0
        *(rax_38 + 0x8a) = 0
        *(rax_38 + 0x8c) = 0xffffffff
        rax_38[9].q = 0
        *(rax_38 + 0x98) = 0
        *(rax_38 + 0x9a) = 0
        *(rax_38 + 0x9c) = 0xffffffff
        rax_38[0xa].q = 0
        *(rax_38 + 0xa8) = 0
        *(rax_38 + 0xaa) = 0
        *(rax_38 + 0xac) = 0xffffffff
        rax_38[0xb].q = 0
        *(rax_38 + 0xb8) = 0
        *(rax_38 + 0xba) = 0
        *(rax_38 + 0xbc) = 0xffffffff
        rax_38[0xc].q = 0
        *(rax_38 + 0xc8) = 0
        *(rax_38 + 0xca) = 0
        *(rax_38 + 0xcc) = 0
    
    memset(&rbx_2[3], 0, 0xa0)
    void* rdx_18 = var_58
    rbx_2[2].q = arg2
    *(rbx_2 + 0x28) = rax_9
    *rbx_2 = zmm1
    rbx_2[1] = var_78.o
    sub_1405d16e0(&rbx_2[3], rdx_18)
    int16_t var_c0_1 = 0
    char var_be_1 = arg3.b
    int32_t var_bc_1 = 0xffffffff
    rbx_2[4] = (*arg1[5]).o
    char rcx_21 = sub_1419a2ec0(*(*arg1 + 0x5150), &var_98, &data_143ed3530, 0)
    zmm7 = var_98
    int512_t zmm6_2
    zmm6_2.o = zx.o(0)
    int64_t var_c8_2
    var_c8_2.o = sub_1414200f0(rcx_21)
    sub_141998c50(zmm7.q, &data_143ed4bd0, rbx_2)
    rsi_1 = arg1[4]
    var_c0_1.q = *arg1
    void*** rax_44
    char rcx_23
    rax_44, rcx_23 = sub_14081d830(0x60, *(rsi_1 + 8), 1, 0)
    rdi_1 = rax_44
    
    if (rax_44 == 0)
        rdi_1 = nullptr
    else
        var_98.q = rbx_2
        sub_1414200f0(rcx_23)
        var_98:8.q = &data_143ed4c00
        char r9_2 = 9
        var_98 = var_98
        
        if (arg3 == 0)
            r9_2 = 1
        
        sub_141992bd0(rdi_1, &arg_18, &var_98, r9_2)
        *rdi_1 = &data_142f7eb28
        *(rdi_1 + 0x38) = rbx_2.o
        *(rdi_1 + 0x48) = zmm7
        rdi_1[0xb] = arg5
else
    int32_t r12_1 = *arg1[3]
    
    if (arg3 + 4 s<= r12_1)
        r12_1 = arg3 + 4
    
    int128_t* rax_22 = sub_14081d830(0x80, rdx_7, 1, 0)
    int128_t* rbx_1 = rax_22
    
    if (rax_22 == 0)
        rbx_1 = nullptr
    else
        rax_22[3].q = 0
        __builtin_memset(&rax_22[4], 0, 0x40)
    
    memset(rbx_1, 0, 0x80)
    void* rdx_8 = var_58
    rbx_1[2].q = arg2
    *(rbx_1 + 0x28) = rax_9
    *rbx_1 = zmm1
    rbx_1[1] = var_78.o
    sub_1405d16e0(&rbx_1[3], rdx_8)
    int32_t rdi = arg3
    char rax_25 = arg6
    int16_t var_c0
    int512_t zmm6
    
    if (arg3 s< r12_1)
        do
            if (arg7 != 0)
                var_c0.b = rdi.b
                var_c0:1.b = 0
                void* r15_1 = *arg1[5]
                void*** rax_27
                rax_27, zmm6 = sub_14081d830(0x28, *(arg1[4] + 8), 1, 0)
                void*** rdx_11 = rax_27
                
                if (rax_27 == 0)
                    rdx_11 = nullptr
                else
                    rax_27[1] = *(r15_1 + 8)
                    *rax_27 = &data_142f285c0
                    rax_27[2] = 0
                    *(rax_27 + 0x18) = r15_1.o
                
                *(rbx_1 + (zx.q(rdi - arg3) << 3) + 0x40) = rdx_11
                rax_25 = arg6
            
            if (rax_25 != 0)
                var_98:8.b = rdi.b
                var_98:9.b = 0
                void* r15_2 = *arg1[6]
                var_98.q = r15_2
                void*** rax_31
                rax_31, zmm6 = sub_14081d830(0x28, *(arg1[4] + 8), 1, 0)
                void*** rdx_14 = rax_31
                
                if (rax_31 == 0)
                    rdx_14 = nullptr
                else
                    int128_t zmm0_3 = var_98
                    rax_31[1] = *(r15_2 + 8)
                    rax_31[2] = 0
                    *rdx_14 = &data_142f285c0
                    *(rdx_14 + 0x18) = zmm0_3
                
                *(rbx_1 + (zx.q(rdi - arg3) << 3) + 0x60) = rdx_14
                rax_25 = arg6
            
            rdi += 1
        while (rdi s< r12_1)
    
    char rcx_12 = sub_1419a2ec0(*(*arg1 + 0x5150), &var_98, &data_143ed3630, 
        zx.d(arg7) + ((zx.d(rax_25) + ((r12_1 - arg3 - 1) << 1)) << 1))
    zmm7 = var_98
    zmm6.o = zx.o(0)
    void* var_c8
    var_c8.o = sub_14141ff80(rcx_12)
    sub_141998c50(zmm7.q, &data_143ed4c70, rbx_1)
    rsi_1 = arg1[4]
    var_c0.o = zmm7
    int64_t var_b0_1 = arg5
    void*** rax_37
    char rcx_14
    rax_37, rcx_14 = sub_14081d830(0x58, *(rsi_1 + 8), 1, 0)
    rdi_1 = rax_37
    
    if (rax_37 == 0)
        rdi_1 = nullptr
    else
        var_98.q = rbx_1
        sub_14141ff80(rcx_14)
        var_98:8.q = &data_143ed4ca0
        var_98 = var_98
        char r9_1 = 0xa
        
        if (arg3 == 0)
            r9_1 = 2
        
        sub_141992bd0(rdi_1, &arg_18, &var_98, r9_1)
        *rdi_1 = &data_142f7eb18
        *(rdi_1 + 0x38) = rbx_1.o
        int128_t var_b8
        *(rdi_1 + 0x48) = var_b8
sub_1419968d0(rsi_1, rdi_1)
return sub_1405d1550(&var_58)
