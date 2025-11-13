// 函数: sub_1420099a0
// 地址: 0x1420099a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r13 = arg4
char arg_8

if ((arg2[5].b & 2) != 0)
    int32_t r10_1 = *(arg1 + 0x10)
    char r11_1 = -1
    
    if (r10_1 s<= 0xff)
        r11_1 = r10_1.b
    
    arg_8 = r11_1

int64_t* rcx = arg2[1]
char* rdx = *rcx

if (&rdx[1] u> rcx[1])
    (*(*arg2 + 0x150))(arg2, &arg_8, 1)
else
    arg_8 = *rdx
    *rcx += 1

if ((arg2[5].b & 1) != 0)
    uint32_t rdx_2 = zx.d(arg_8)
    int64_t rbx_1 = sx.q(*(arg1 + 0x10))
    
    if (rdx_2 s> rbx_1.d)
        *(arg1 + 0x10) = rdx_2
        
        if (rdx_2 s> *(arg1 + 0x14))
            sub_1405a4f90(arg1 + 8)
        
        memset((rbx_1 << 4) + *(arg1 + 8), 0, sx.q(rdx_2 - rbx_1.d) << 4)
    else if (rdx_2 s< rbx_1.d)
        arg4.b = 1
        sub_140dbae50(arg1 + 8, rdx_2, rbx_1.d - rdx_2, arg4.b)

int64_t* rcx_7 = arg2[1]
int64_t rdx_4 = *rcx_7
uint32_t arg_10
bool cond:4

if (rdx_4 + 4 u> rcx_7[1])
    arg_10 = zx.d(*(arg1 + 0x28)) & 1
    (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    cond:4 = arg_10 != 0
else
    cond:4 = *rdx_4 != 0
    *rcx_7 = rdx_4 + 4

char rcx_9 = (*(arg1 + 0x28) & 0xfe) | cond:4
*(arg1 + 0x28) = rcx_9
int64_t* r9 = arg2[1]
int64_t r8_4 = *r9
bool cond:5

if (r8_4 + 4 u> r9[1])
    arg_10 = zx.d(rcx_9) u>> 1 & 1
    (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    cond:5 = arg_10 != 0
else
    cond:5 = *r8_4 != 0
    *r9 = r8_4 + 4

rdx_4.b = cond:5
rdx_4.b *= 2
bool rcx_11 = (*(arg1 + 0x28) & 0xfd) | rdx_4.b
*(arg1 + 0x28) = rcx_11
int64_t* r8_5 = arg2[1]
int64_t rdx_7 = *r8_5
bool cond:6

if (rdx_7 + 4 u> r8_5[1])
    arg_10 = zx.d(rcx_11) u>> 2 & 1
    (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    cond:6 = arg_10 != 0
else
    cond:6 = *rdx_7 != 0
    *r8_5 = rdx_7 + 4

*(arg1 + 0x28) &= 0xfb
*(arg1 + 0x28) |= cond:6 << 2
uint64_t var_68
char var_60
int32_t rax_22

if ((arg2[5].b & 2) == 0)
    int64_t rax_23 = *arg2
    arg_10 = 0
    (*(rax_23 + 0x160))(arg2, &arg_10, 0x18)
    uint8_t rax_24 = arg_10.b
    int32_t arg_20 = 0
    int32_t var_78 = 0
    int32_t var_74 = 0
    int32_t rdi_1 = 1 << (rax_24 + 1)
    int32_t rbx_3 = 1 << (rax_24 + 2)
    (*(*arg2 + 0x160))(arg2, &arg_20, zx.q(rbx_3))
    (*(*arg2 + 0x160))(arg2, &var_78, zx.q(rbx_3))
    (*(*arg2 + 0x160))(arg2, &var_74, zx.q(rbx_3))
    int32_t rax_30 = var_78
    uint128_t zmm0
    zmm0.d = _mm_cvtepi32_ps(zx.o(arg_20 - rdi_1)).d f* 0.100000001f
    *(arg1 + 0x2c) = zmm0.d
    int32_t rax_32 = var_74
    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_30 - rdi_1)).d f* 0.100000001f
    *(arg1 + 0x30) = zmm0.d
    rax_22.b = 1
    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_32 - rdi_1)).d f* 0.100000001f
    *(arg1 + 0x34) = zmm0.d
else
    char rax_21 = (*(arg1 + 0x34)).b
    var_68 = *(arg1 + 0x2c)
    var_60 = rax_21
    rax_22 = sub_141ed1a20(&var_68, arg2)

*r13 = rax_22.b
int64_t* r8_9 = arg2[1]
int64_t rdx_14 = *r8_9
bool cond:7

if (rdx_14 + 4 u> r8_9[1])
    arg_10 = zx.d(*(arg1 + 0x28)) u>> 3 & 1
    (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    cond:7 = arg_10 != 0
else
    cond:7 = *rdx_14 != 0
    *r8_9 = rdx_14 + 4

*(arg1 + 0x28) &= 0xf7
*(arg1 + 0x28) |= cond:7 << 3
int64_t* rcx_22 = arg2[1]
char* r8_10 = *rcx_22
int64_t* result

if (&r8_10[1] u> rcx_22[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x29, 1)
else
    *(arg1 + 0x29) = *r8_10
    result = arg2[1]
    *result += 1

int32_t r12 = 0

if (arg_8 u> 0)
    int64_t* r15_3 = nullptr
    
    while ((*(arg2 + 0x29) & 1) == 0)
        int64_t* rcx_24 = *(r15_3 + *(arg1 + 8))
        uint64_t rdi_2
        
        if (rcx_24 == 0)
            rdi_2 = 0
        else
            rdi_2 = (*(*rcx_24 + 0x58))(rcx_24)
        
        bool cond:9_1 = (arg2[5].b & 2) == 0
        var_68 = rdi_2
        var_60 = 0
        
        if (not(cond:9_1))
            arg_10.q = 0
            
            if (rdi_2 != 0)
                void* rax_45 = sub_140bdfe30()
                uint64_t rdx_17 = var_68
                void* r8_11 = *(rdx_17 + 0x10)
                int64_t rax_46 = sx.q(*(rax_45 + 0x38))
                
                if (rax_46.d s> *(r8_11 + 0x38)
                        || *(*(r8_11 + 0x30) + (rax_46 << 3)) != rax_45 + 0x30)
                    var_60 = 1
                else
                    arg_10.q = rdx_17
            
            (*(*arg2 + 0x130))(arg2, &arg_10)
            goto label_142009da5
        
        (*(*arg2 + 0x130))(arg2, &var_68)
        uint64_t rbx_4
        
        if ((arg2[5].b & 1) == 0)
        label_142009da5:
            rbx_4 = var_68
        label_142009da9:
            
            if (rbx_4 == 0)
                goto label_142009fef
            
            void* rbx_5 = *(rbx_4 + 0x40)
            
            if (rbx_5 == 0)
                goto label_142009dd7
            
            while (true)
                if (rbx_5 == sub_142585690())
                    int64_t var_88
                    uint64_t rcx_30
                    
                    if ((arg2[5].b & 1) == 0)
                        rcx_30 = var_68
                    else
                        rcx_30 = var_68
                        
                        if (*(r15_3 + *(arg1 + 8)) == 0 || rdi_2 != rcx_30)
                            int64_t rax_53 = sub_140a82f30(sx.q(*(*(rcx_30 + 0xb8) + 8)), 0)
                            uint64_t rcx_32 = var_68
                            int64_t r9_3 = *rcx_32
                            (*(r9_3 + 0x2a0))(rcx_32, rax_53, 1, r9_3, var_88)
                            int64_t var_58 = rax_53
                            void*** rax_54 = j_sub_140a82f30(0x18)
                            void*** rbx_8 = rax_54
                            
                            if (rax_54 == 0)
                                rbx_8 = nullptr
                            else
                                rax_54[1].d = 1
                                *(rax_54 + 0xc) = 1
                                *rbx_8 = &data_142d42ea8
                                rbx_8[2] = rax_53
                            
                            void* rcx_34 = *(arg1 + 8) + r15_3
                            
                            if (rcx_34 != &var_58)
                                *rcx_34 = var_58
                                var_58 = 0
                                int64_t* rdi_6 = *(rcx_34 + 8)
                                
                                if (rbx_8 != rdi_6)
                                    void*** var_50_2 = nullptr
                                    *(rcx_34 + 8) = rbx_8
                                    
                                    if (rdi_6 != 0)
                                        rdi_6[1].d -= 1
                                        
                                        if (rdi_6[1].d == 1)
                                            (**rdi_6)(rdi_6)
                                            int32_t temp5_1 = *(rdi_6 + 0xc)
                                            *(rdi_6 + 0xc) -= 1
                                            
                                            if (temp5_1 == 1)
                                                (*(*rdi_6 + 8))(rdi_6, 1)
                                    
                                    rbx_8 = var_50_2
                            
                            if (rbx_8 != 0)
                                rbx_8[1].d -= 1
                                
                                if (rbx_8[1].d == 1)
                                    (**rbx_8)(rbx_8)
                                    int32_t temp3_1 = *(rbx_8 + 0xc)
                                    *(rbx_8 + 0xc) -= 1
                                    
                                    if (temp3_1 == 1)
                                        (*rbx_8)[1](rbx_8, 1)
                            
                            rcx_30 = var_68
                    
                    if ((*(rcx_30 + 0xb0) & 0x400) != 0)
                        int64_t* rcx_39 = *(rcx_30 + 0xb8)
                        var_88 = *(r15_3 + *(arg1 + 8))
                        (*(*rcx_39 + 0x70))(rcx_39, arg2, arg3, r13, var_88)
                    
                    break
                
                rbx_5 = *(rbx_5 + 0x40)
                
                if (rbx_5 == 0)
                    goto label_142009dd7
        else
            if (var_68 != 0)
                void* rax_50 = sub_140bdfe30()
                rbx_4 = var_68
                void* rdx_21 = *(rbx_4 + 0x10)
                result = sx.q(*(rax_50 + 0x38))
                
                if (result.d s> *(rdx_21 + 0x38))
                label_142009dd7:
                    *(arg2 + 0x29) |= 1
                    break
                
                if ((*(rdx_21 + 0x30))[result] != rax_50 + 0x30)
                    goto label_142009dd7
                
                goto label_142009da9
            
        label_142009fef:
            
            if (var_60 != 0)
                goto label_142009dd7
        r12 += 1
        r15_3 = &r15_3[2]
        
        if (r12 s>= zx.d(arg_8))
            break

if ((*(arg2 + 0x29) & 1) == 0)
    *r13 = 1
    result.b = 1
else
    int32_t rbx_6 = *(arg1 + 0x10)
    int32_t rbx_7 = rbx_6 - 1
    
    if (rbx_6 - 1 s>= 0)
        int64_t* rdi_4 = sx.q(rbx_7) << 4
        int32_t temp1_1
        
        do
            if (*(rdi_4 + *(arg1 + 8)) == 0)
                sub_140dbae50(arg1 + 8, rbx_7, 1, 1)
            
            rdi_4 -= 0x10
            temp1_1 = rbx_7
            rbx_7 -= 1
        while (temp1_1 - 1 s>= 0)
    
    *r13 = 0
    result.b = 0

return result
