// 函数: sub_141cbf650
// 地址: 0x141cbf650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x58)
int64_t rax = *(arg1 + 0x50)
int64_t var_88 = rax
int64_t var_a8 = rax
int64_t* var_a0 = rsi

if (rsi != 0)
    rsi[1].d += 1

char var_d7 = 1

if (arg4 != 0 && arg2 != 0)
    var_d7 = *(arg2 + 0x20)

int64_t var_98 = *(arg2 + 8)
int16_t* var_d0
uint128_t zmm6 = sub_140b63b70(&var_98, &var_d0)
int64_t r15 = 0
int64_t* var_b8 = nullptr
int32_t var_b0 = 0
sub_140a2ccb0(&var_d0, &var_b8, &data_142d404c4, 1)
int32_t result_1
uint64_t result = zx.q(result_1)
int32_t var_c8 = 0
int32_t temp0 = result.d

if (temp0 s< 0 && temp0 != 0)
    result = sub_1405947f0(&var_d0, 0)

int16_t* rcx_3 = var_d0

if (rcx_3 != 0)
    *rcx_3 = 0

int64_t r14 = sx.q(var_b0)
int32_t r12 = 0

if (r14.d s> 0)
    uint64_t r13
    uint64_t var_28_1 = r13
    int32_t rax_3 = (r14 - 1).d
    uint128_t var_48_1 = zmm6
    int32_t var_c0_1 = rax_3
    
    while (true)
        int64_t* rax_4 = var_b8
        r13.b = r12 == rax_3
        char var_d8_1 = r13.b
        int16_t* rdx_2
        
        if (rax_4[r15 * 2 + 1].d == 0)
            rdx_2 = &data_142d40450
        else
            rdx_2 = rax_4[r15 * 2]
        
        int64_t var_90
        int128_t zmm6_1 = sub_140b58260(&var_90, rdx_2, 1)
        int64_t rbx_1
        
        if (r12 == var_c0_1)
            rbx_1 = var_98
        else if (r15 != 0)
            sub_140a20ba0(&var_d0, &data_142d404c4, 1)
            int64_t* rdx_5 = var_b8
            int32_t rax_5 = rdx_5[r15 * 2 + 1].d
            int32_t r8_3 = rax_5 - 1
            
            if (rax_5 == 0)
                r8_3 = 0
            
            sub_140a20ba0(&var_d0, rdx_5[r15 * 2], r8_3)
            int16_t* rdx_7 = &data_142d40450
            
            if (var_c8 != 0)
                rdx_7 = var_d0
            
            void var_50
            int64_t* rax_6
            rax_6, zmm6_1 = sub_140b58260(&var_50, rdx_7, 1)
            rbx_1 = *rax_6
        else
            rbx_1 = var_90
            void* rcx_7 = &var_b8[r15 * 2]
            
            if (&var_d0 != rcx_7)
                int32_t r14_3 = *(rcx_7 + 8)
                int64_t r13_1 = *rcx_7
                var_c8 = r14_3
                
                if (r14_3 != 0 || result_1 != 0)
                    sub_1405a4c70(&var_d0, r14_3, result_1)
                    memcpy(var_d0, r13_1, r14_3 * 2)
                    r13 = zx.q(var_d8_1)
                else
                    r13 = zx.q(var_d8_1)
                    result_1 = 0
        
        var_a8.o = zmm6_1
        
        if (rsi != 0)
            rsi[1].d += 1
        
        char var_e0_1 = var_d7
        char var_e8_1 = arg4
        char var_f0_1 = r13.b
        int32_t rax_10
        uint128_t zmm6_2
        rax_10, zmm6_2 =
            sub_141cc3b40(arg1, var_90, rbx_1, &var_a8, (var_88 + 0x28).b, arg3, arg2.b + 0x10)
        int64_t* rcx_16 = (sx.q(rax_10) << 4) + *(var_88 + 0x28)
        int64_t rax_11 = *rcx_16
        result = rcx_16[1]
        uint64_t result_2 = result
        
        if (result != 0)
            *(result + 8) += 1
        
        int64_t* rbx_2 = _mm_bsrli_si128(zmm6_2, 8).q
        var_a8.o = rax_11.o
        int64_t var_60_1
        var_60_1.o = zmm6_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        rsi = var_a0
        r12 += 1
        r15 += 1
        
        if (r15 s>= r14)
            break
        
        var_88 = var_a8
        rax_3 = var_c0_1
    
    r14 = zx.q(var_b0)

int64_t* rbx_3 = var_b8

if (r14.d != 0)
    int32_t i
    
    do
        int64_t rcx_19 = *rbx_3
        
        if (rcx_19 != 0)
            result = sub_140a74f90(rcx_19)
        
        rbx_3 = &rbx_3[2]
        i = r14.d
        r14 = zx.q(r14.d - 1)
    while (i != 1)
    rbx_3 = var_b8

if (rbx_3 != 0)
    result = sub_140a74f90(rbx_3)

int16_t* rcx_21 = var_d0

if (rcx_21 != 0)
    result = sub_140a74f90(rcx_21)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        result = (**rsi)(rsi)
        int32_t temp3_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rsi + 8))(rsi, 1)

return result
