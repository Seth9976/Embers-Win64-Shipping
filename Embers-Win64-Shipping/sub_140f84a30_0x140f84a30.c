// 函数: sub_140f84a30
// 地址: 0x140f84a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
bool cond:0 = *(arg1 + 0x794) == 0
void* var_1a8 = arg5
uint64_t result
float var_1b0

if (cond:0)
    sub_140f030e0(*arg1[0x5b], &var_1b0)
    int32_t result_1 =
        sub_140f820e0(arg1[0x5b], arg2, arg3, arg4, arg5, arg6, arg7, sub_140e25600(arg1, arg8))
    uint32_t zmm0_1[0x4] = sub_140f030e0(*arg1[0x5b], &var_1a8)
    void** rdx_11
    
    if (arg1[0xdc].d != 0)
        int64_t* rcx_29 = arg1[0xdb]
        
        if (rcx_29 != 0)
            char rax_30
            rax_30, rdx_11 = (*(*rcx_29 + 0x28))(rcx_29)
            
            if (rax_30 != 0)
                int64_t* r14_1
                
                if (arg1[0xdc].d == 0)
                    r14_1 = nullptr
                else
                    r14_1 = arg1[0xdb]
                
                (*(*r14_1 + 0x48))(r14_1)
                arg1[0xda].d = zmm0_1[0]
    
    char* rax_32
    
    if (not(0f f< arg1[0xda].d))
        rax_32, rdx_11 = sub_140eff7d0(&arg1[0xdd])
    
    if (0f f< arg1[0xda].d || *rax_32 != 0)
        zmm0_1 = var_1a8.d
        zmm0_1[0] = zmm0_1[0] f- var_1b0
        uint32_t temp0_3[0x4] = _mm_and_ps(zmm0_1, 0x7fffffff)
        uint32_t temp0_4[0x4]
        
        if (not(temp0_3[0] f> 9.99999975e-05f))
            zmm0_1 = var_1a8:4.d
            int32_t var_1ac
            zmm0_1[0] = zmm0_1[0] f- var_1ac
            temp0_4 = _mm_and_ps(zmm0_1, 0x7fffffff)
        
        if (temp0_3[0] f> 9.99999975e-05f || not(temp0_4[0] f<= 9.99999975e-05f))
            rdx_11.b = 1
            sub_140e19ef0(arg1, rdx_11.b)
    
    result = zx.q(result_1)
else
    uint128_t var_1a0
    void* rbx
    
    if (arg1[0xc8].b == 0)
        rbx = &arg1[0x6d]
    else
        rbx = &arg1[0xc6]
        
        if (*(rbx + 0x20) != 0)
            int64_t* rcx = *(rbx + 0x18)
            
            if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
                int64_t* rcx_1
                
                if (*(rbx + 0x20) == 0)
                    rcx_1 = nullptr
                else
                    rcx_1 = *(rbx + 0x18)
                
                (*(*rcx_1 + 0x48))(rcx_1, &var_1a0)
                *rbx = var_1a0
    
    uint128_t var_190_1 = *rbx
    void* rbx_1
    
    if (arg1[0xc3].b == 0)
        rbx_1 = &arg1[0x6c]
    else
        rbx_1 = &arg1[0xc2]
        
        if (*(rbx_1 + 0x18) != 0)
            int64_t* rcx_2 = *(rbx_1 + 0x10)
            
            if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
                int64_t* rcx_3
                
                if (*(rbx_1 + 0x18) == 0)
                    rcx_3 = nullptr
                else
                    rcx_3 = *(rbx_1 + 0x10)
                
                (*(*rcx_3 + 0x48))(rcx_3, &var_1b0)
                *rbx_1 = var_1b0.q
    
    uint128_t zmm6 = var_190_1:0xc.d
    uint128_t zmm10 = *rbx_1
    uint128_t zmm11 = *(rbx_1 + 4)
    uint128_t zmm0
    uint128_t zmm1
    
    if (not(zmm6.d f<= 0f))
        zmm1.d = zmm10.d f* zmm10.d
        zmm0.d = zmm11.d f* zmm11.d
        zmm1.d = zmm1.d f+ zmm0.d
    
    if (zmm6.d f<= 0f || zmm1.d f<= 0f)
        rbx_1.b = 0
    else
        rbx_1.b = 1
    
    char rax_8 = sub_140e25600(arg1, arg8)
    int64_t* rax_9 = sub_140d44910(&arg1[0x55])
    int64_t* rdx_3 = rax_9
    var_1b0.q = rax_9
    int64_t* rcx_7
    
    if (arg1[0xb3].b == 0)
        rcx_7 = &arg1[0x5d]
    else
        int64_t* rax_10 = sub_140eff6e0(&arg1[0xa9])
        rdx_3 = var_1b0.q
        rcx_7 = rax_10
    
    int64_t var_178 = *rcx_7
    int64_t var_170_1 = rcx_7[1]
    int64_t var_168_1 = (*(rcx_7 + 0x10)).q
    zmm1 = *(rcx_7 + 0x20)
    uint128_t var_158_1 = zmm1
    int64_t var_148_1 = rcx_7[6]
    int64_t* rax_14 = rcx_7[7]
    
    if (rax_14 != 0)
        rax_14[1].d += 1
    
    char rdi_1 = 0x20
    int64_t var_138_1 = rcx_7[8]
    int32_t var_130_1 = rcx_7[9].d
    char var_12c_1 = *(rcx_7 + 0x4c)
    int32_t var_128
    int64_t var_11c
    int32_t var_110
    uint128_t var_10c
    int32_t result_2
    uint128_t zmm2
    uint128_t zmm3
    
    if (rbx_1.b == 0)
        result_2 = arg6
    else
        zmm6.d = zmm6.d f* arg7[3]
        char rbx_2 = 0x20
        zmm0.d = var_190_1.d.d f* *arg7
        int32_t rdi_2 = var_168_1.d
        int32_t rcx_8 = rdi_2
        zmm2 = *(arg3 + 0x1c)
        zmm1.d = var_190_1:4.d.d f* arg7[1]
        uint128_t zmm4_1 = *(arg3 + 0x24)
        zmm3 = *(arg3 + 0x28)
        
        if ((var_168_1 u>> 0x28).b == 0)
            rcx_8 = 0
        
        var_1a0.d = zmm0.d
        zmm0.d = var_190_1:8.d.d f* arg7[2]
        var_168_1.d = rcx_8
        var_1a0:0xc.d = zmm6.d
        var_1a0:8.d = zmm0.d
        zmm6.d = zmm2.d f* zmm10.d
        char var_f4
        char var_f4_1 = ((*(arg3 + 0x34) & 1) * 2) | (var_f4 & 0xfc)
        zmm0.d = zmm4_1.d f* zmm11.d
        var_11c = 0
        var_1a0:4.d = zmm1.d
        
        if (rax_8 != 0)
            rbx_2 = 0
        
        zmm1 = arg3[2].d
        zmm6.d = zmm6.d f+ zmm0.d
        var_190_1:4.d = zmm1.d
        var_190_1.d = zmm2.d
        zmm0.d = zmm3.d f* zmm11.d
        int64_t zmm5_1 = zmm1.q
        zmm1 = *(arg3 + 4)
        zmm6.d = zmm6.d f+ *(arg3 + 0x2c)
        zmm5_1.d = zmm5_1.d f* zmm10.d
        var_190_1:8.d = zmm4_1.d
        var_190_1:0xc.d = zmm3.d
        zmm5_1.d = zmm5_1.d f+ zmm0.d
        int128_t zmm9 = *(arg3 + 8)
        int32_t var_114_1 = (*arg3).d
        uint128_t zmm8
        zmm8.d = zmm10.d f* zmm9.d
        zmm5_1.d = zmm5_1.d f+ arg3[3].d
        int128_t zmm7
        zmm7.d = zmm9.d f* zmm11.d
        zmm8.d = zmm8.d f+ *(arg3 + 0xc)
        int32_t var_120_1 = zmm9.d
        zmm7.d = zmm7.d f+ arg3[1].d
        uint64_t var_fc_1 = (_mm_unpacklo_ps(zmm6, zmm5_1)).q
        var_128 = zmm8.d
        var_110 = zmm1.d
        int32_t var_124_1 = zmm7.d
        var_10c = var_190_1
        int64_t* rax_21 = sub_140ac6680(rdx_3)
        zmm1 = sub_140db3fd0(var_1a8, arg6, &var_128, rax_21, &var_178, rbx_2, &var_1a0)
        result_2 = arg6 + 1
        var_168_1.d = rdi_2
        rdi_1 = 0x20
    
    int128_t* rax_22
    
    if (arg1[0xbf].b == 0)
        rax_22 = &arg1[0x67]
    else
        rax_22 = sub_140e11270(&arg1[0xba], zmm1)
    
    int64_t* rbx_3 = rax_22[2].q
    char rcx_13 = rax_22[1].b
    void* rdx_5 = *(rax_22 + 0x18)
    var_11c:4.b = rcx_13
    var_110.q = rdx_5
    var_10c:4.q = rbx_3
    var_128.o = *rax_22
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    uint32_t rcx_14 = zx.d(rcx_13)
    
    if (rcx_14 == 0)
        rdx_5 = &var_128
    else if (rcx_14 != 1)
        if (rcx_14 == 3)
            rdx_5 = &arg7[8]
        else
            rdx_5 = &arg7[4]
    
    zmm0.d = (*rdx_5).d f* *arg7
    zmm1.d = arg7[1].d f* *(rdx_5 + 4)
    zmm2.d = arg7[2].d f* *(rdx_5 + 8)
    zmm3.d = arg7[3].d f* *(rdx_5 + 0xc)
    
    if (rax_8 != 0)
        rdi_1 = 0
    
    char var_bc
    char var_bc_1 = ((*(arg3 + 0x34) & 1) * 2) | (var_bc & 0xfc)
    int64_t* rcx_17 = var_1b0.q
    var_1a0.d = zmm0.d
    var_1a0:4.d = zmm1.d
    zmm1 = arg3[1].d
    int32_t var_f0 = (*(arg3 + 0xc)).d
    int32_t var_ec_1 = zmm1.d
    int32_t var_dc_1 = (*arg3).d
    int64_t var_e4_1 = 0
    var_1a0:8.d = zmm2.d
    int32_t var_d8_1 = (*(arg3 + 4)).d
    zmm1 = zx.o(*(arg3 + 0x2c))
    uint128_t var_d4_1 = *(arg3 + 0x1c)
    var_1a0:0xc.d = zmm3.d
    int32_t var_e8_1 = (*(arg3 + 8)).d
    uint64_t var_c4_1 = zmm1.q
    int64_t* rax_24 = sub_140ac6680(rcx_17, zmm1)
    sub_140db3fd0(var_1a8, result_2, &var_f0, rax_24, &var_178, rdi_1, &var_1a0)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    if (rax_14 != 0)
        rax_14[1].d -= 1
        
        if (rax_14[1].d == 1)
            int64_t rdx_7 = *rax_14
            (*rdx_7)(rax_14, rdx_7)
            int32_t temp4_1 = *(rax_14 + 0xc)
            *(rax_14 + 0xc) -= 1
            
            if (temp4_1 == 1)
                int64_t r8_2 = *rax_14
                (*(r8_2 + 8))(rax_14, 1, r8_2)
    
    result = zx.q(result_2)
__security_check_cookie(rax_1 ^ &var_1f8)
return result
