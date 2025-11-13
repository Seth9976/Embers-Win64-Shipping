// 函数: sub_141811a20
// 地址: 0x141811a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* r15 = arg1
(*(*arg1 + 0x20))()
void* r12 = &r15[9]
void* var_88 = r12
sub_140597df0(r12, arg2)
int32_t rcx_1 = arg3[1].d
int32_t* rax_4 = r15[0x27] + 0x10
int32_t var_50 = rcx_1

if (&var_50 != rax_4)
    *rax_4 = rcx_1
    rax_4[1].b = 1

int32_t i_3 = arg3[1].d
int64_t* rbx_1 = *arg3
int64_t* rdi = nullptr
char var_4c = 0
int64_t* var_a8 = nullptr
int32_t i_4 = i_3
int32_t var_9c
int32_t r14

if (i_3 != 0)
    sub_1405a4be0(&var_a8, i_3, 0)
    rdi = var_a8
    void* r12_2 = rdi - rbx_1
    int32_t i
    
    do
        *(r12_2 + rbx_1) = 0
        void* r15_1 = r12_2 + rbx_1
        int32_t rsi_1 = rbx_1[1].d
        int64_t r13_1 = *rbx_1
        *(r12_2 + rbx_1 + 8) = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(r15_1, rsi_1, 0)
            memcpy(*r15_1, r13_1, rsi_1 * 2)
        else
            *(r12_2 + rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        i = i_3
        i_3 -= 1
    while (i != 1)
    r14 = var_9c
    r15 = arg1
    r12 = var_88
else
    r14 = 0
    var_9c = 0

int32_t result

if (rcx_1 == 0)
    int64_t* var_68 = nullptr
    int64_t var_70
    result = &var_70
    
    if (&r15[0x29] != &var_70)
        r15[0x29] = 0
        var_70 = 0
        result = sub_1405aeff0(&r15[0x2a], &var_68)
        int64_t* rcx_22 = var_68
        
        if (rcx_22 != 0)
            result = rcx_22[1].d
            rcx_22[1].d -= 1
            
            if (result == 1)
                int64_t* rbx_6 = var_68
                result = (**rbx_6)(rbx_6)
                int32_t rsi_7 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (rsi_7 == 1)
                    int64_t* rcx_24 = var_68
                    result = (*(*rcx_24 + 8))(rcx_24, zx.q(rsi_7))
            
            rdi = var_a8
else
    int16_t* var_60
    sub_1418042f0(&var_60, r12)
    int64_t* rbx_2 = rdi
    void* rsi_4 = &rdi[sx.q(i_4) * 2]
    int32_t var_58
    
    if (rdi == rsi_4)
    label_141811ba4:
        int64_t i_6 = sx.q(i_4)
        int32_t i_5 = (i_6 + 1).d
        i_4 = i_5
        
        if (i_5 s> r14)
            sub_1405a4f90(&var_a8)
            r14 = var_9c
            rdi = var_a8
        
        memmove(&rdi[2], rdi, (i_6 << 4).d)
        *rdi = 0
        int16_t* rsi_5 = var_60
        rdi[1].d = var_58
        
        if (var_58 != 0)
            sub_1405a4c70(rdi, var_58, 0)
            memcpy(*rdi, rsi_5, var_58 * 2)
        else
            *(rdi + 0xc) = 0
    else
        while (true)
            int16_t* const rdx_5 = &data_142d40450
            
            if (var_58 != 0)
                rdx_5 = var_60
            
            int16_t* const rcx_6
            
            if (rbx_2[1].d == 0)
                rcx_6 = &data_142d40450
            else
                rcx_6 = *rbx_2
            
            if (sub_140a54510(rcx_6, rdx_5) == 0)
                break
            
            rbx_2 = &rbx_2[2]
            
            if (rbx_2 == rsi_4)
                goto label_141811ba4
    void*** rax_6 = j_sub_140a82f30(0x28)
    void*** rcx_11 = rax_6
    
    if (rax_6 == 0)
        rcx_11 = nullptr
    else
        rax_6[1].d = 1
        *(rax_6 + 0xc) = 1
        *rcx_11 = &data_142fe2f38
        rcx_11[2] = rdi
        rdi = nullptr
        rcx_11[3].d = i_4
        *(rcx_11 + 0x1c) = r14
        i_4.q = 0
        var_a8 = nullptr
        rcx_11[4].d = 0
    
    uint128_t zmm0_1 = (&rcx_11[2]).o
    var_88.o = zmm0_1
    void*** rbx_4 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
        rdi = var_a8
        rbx_4 = rcx_11
    
    result = &var_88
    int64_t* var_80
    
    if (&r15[0x29] != &var_88)
        r15[0x29] = var_88
        var_88 = nullptr
        result = sub_1405aeff0(&r15[0x2a], &var_80)
        rbx_4 = rcx_11
    
    int64_t* rcx_14 = var_80
    
    if (rcx_14 != 0)
        result = rcx_14[1].d
        rcx_14[1].d -= 1
        
        if (result == 1)
            int64_t* rbx_5 = var_80
            (**rbx_5)(rbx_5)
            result = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (result == 1)
                int64_t* rcx_16 = var_80
                result = (*(*rcx_16 + 8))(rcx_16, 1)
        
        rbx_4 = rcx_11
        rdi = var_a8
    
    if (rbx_4 != 0)
        result = rbx_4[1].d
        rbx_4[1].d -= 1
        
        if (result == 1)
            result = (**rbx_4)(rbx_4)
            int32_t rsi_6 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rsi_6 == 1)
                result = (*rbx_4)[1](rbx_4, zx.q(rsi_6))
        
        rdi = var_a8
    
    int16_t* rcx_19 = var_60
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)

int32_t i_2 = i_4
int64_t* rbx_7 = rdi

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_25 = *rbx_7
        
        if (rcx_25 != 0)
            result = sub_140a74f90(rcx_25)
        
        rbx_7 = &rbx_7[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (rdi != 0)
    result = sub_140a74f90(rdi)

__security_check_cookie(rax_1 ^ &var_c8)
return result
