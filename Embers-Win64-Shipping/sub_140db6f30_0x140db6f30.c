// 函数: sub_140db6f30
// 地址: 0x140db6f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t* rdi = arg7
void* var_88 = nullptr
int32_t var_80 = 0
int64_t* var_1f8 = nullptr
int32_t r12 = arg3 + arg4
int64_t* var_158 = &var_1f8
int32_t r13 = arg4
void var_128
void* var_150 = &var_128
void* r14 = arg1
uint32_t i_2
int32_t* var_148 = &i_2
uint32_t i_3
int32_t* var_140 = &i_3
uint128_t var_1d8
int128_t* var_138 = &var_1d8
int128_t zmm6
int128_t var_58 = zmm6
int32_t var_208
int32_t* var_130 = &var_208
int64_t var_1a8 = arg2
int64_t* var_1f0 = rdi
int32_t var_7c = 4
i_2 = arg3
i_3 = arg3
var_208 = 0x3f800000
var_1d8 = zx.o(0)
int32_t var_204
void* var_1b8
void* var_1a0
uint128_t var_178
int64_t* var_170

if (arg3 s< r12)
    do
        uint32_t rbx_1 = zx.d(*(arg2 + (sx.q(arg3) << 1)))
        char rdi_1
        
        if (sub_140a81220(rbx_1.w) != 0
                || (rbx_1.w - 0x2009 u<= 0x26 && test_bit(0x4000000005, zx.q(rbx_1.w - 0x2009))))
            rdi_1 = 1
        else
            rdi_1 = 0
        
        int64_t*** rcx_1 = *(r14 + 0x18)
        var_204 = 0x3f800000
        int64_t* rax_7
        int512_t zmm1_1
        rax_7, zmm1_1 = sub_140da64e0(rcx_1, arg5, rbx_1, &var_204)
        int64_t* r15_1 = rax_7
        char rcx_2
        
        if (rdi_1 == 0)
            rcx_2 = *(arg5 + 0x4c)
        else
            rcx_2 = 0
        
        int128_t zmm7 = sub_140da70c0(*(r14 + 0x20), &var_1a0, rax_7, rbx_1, zmm1_1, rcx_2)
        void* rsi_1 = var_1a0
        int64_t* rbx_3
        int64_t* var_198
        
        if (rsi_1 != 0)
            rbx_3 = var_198
            
            if ((*(*rsi_1 + 8) & 1) != 0)
                zmm6 = var_204
            else
                zmm6 = zmm7
        else
            int32_t rbx_2 = 0xfffd
            
            if (rdi_1 != 0)
                rbx_2 = 0x20
            
            int64_t* rax_8
            int512_t zmm1_3
            rax_8, zmm1_3 = sub_140da64e0(*(r14 + 0x18), arg5, rbx_2, &var_204)
            r15_1 = rax_8
            int64_t* rax_10
            rax_10, zmm7 =
                sub_140da70c0(*(r14 + 0x20), &var_178, r15_1, rbx_2, zmm1_3, *(arg5 + 0x4c))
            rbx_3 = var_198
            
            if (&var_1a0 != rax_10)
                rsi_1 = *rax_10
                *rax_10 = 0
                int64_t* rdi_2 = rbx_3
                int64_t* rcx_6 = rax_10[1]
                
                if (rcx_6 != rbx_3)
                    rax_10[1] = 0
                    rbx_3 = rcx_6
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d == 1)
                            (**rdi_2)(rdi_2)
                            int32_t temp11_1 = *(rdi_2 + 0xc)
                            *(rdi_2 + 0xc) -= 1
                            
                            if (temp11_1 == 1)
                                (*(*rdi_2 + 8))(rdi_2, 1)
            
            if (var_170 != 0)
                var_170[1].d -= 1
                
                if (var_170[1].d == 1)
                    (**var_170)(var_170)
                    int32_t temp8_1 = *(var_170 + 0xc)
                    *(var_170 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*var_170 + 8))(var_170, 1)
            
            if (rsi_1 != 0 && (*(*rsi_1 + 8) & 1) == 0)
                zmm6 = zmm7
            else
                zmm6 = var_204
        int64_t* rdx_5 = var_1f8
        uint128_t zmm0_1
        
        if (rdx_5 == 0)
        label_140db7290:
            i_2 = i_3
            var_1f8 = r15_1
            var_1b8 = rsi_1
            int64_t* var_1b0_1 = rbx_3
            
            if (rbx_3 != 0)
                rbx_3[1].d += 1
            
            uint128_t zmm1_2 = var_1d8
            zmm0_1 = var_1b8.o
            var_1b8.o = zmm1_2
            int64_t* rdi_6 = _mm_bsrli_si128(zmm1_2, 8).q
            var_1d8 = zmm0_1
            
            if (rdi_6 != 0)
                rdi_6[1].d -= 1
                
                if (rdi_6[1].d == 1)
                    (**rdi_6)(rdi_6)
                    int32_t temp14_1 = *(rdi_6 + 0xc)
                    *(rdi_6 + 0xc) -= 1
                    
                    if (temp14_1 == 1)
                        (*(*rdi_6 + 8))(rdi_6, 1)
            
            var_208 = zmm6.d
        else
            int64_t r10_1 = var_1d8.q
            
            if (rdx_5 != r15_1 || r10_1 != rsi_1 || not(var_208.d f== zmm6.d))
                int64_t rdi_4 = sx.q(var_80)
                uint32_t r14_2 = i_3 - i_2
                int32_t rax_15 = (rdi_4 + 1).d
                var_80 = rax_15
                
                if (rax_15 s> var_7c)
                    sub_140dbc9f0(&var_128, rdi_4.d)
                    rdx_5 = var_1f8
                    r10_1 = var_1d8.q
                
                void* rcx_12 = &var_128
                void* r9_4 = var_1d8:8.q
                int64_t r8_4 = rdi_4 * 5
                
                if (var_88 != 0)
                    rcx_12 = var_88
                
                if (r9_4 != 0)
                    *(r9_4 + 8) += 1
                    rdx_5 = var_1f8
                
                zmm0_1 = var_208
                *(rcx_12 + (r8_4 << 3)) = i_2
                *(rcx_12 + (r8_4 << 3) + 4) = r14_2
                *(rcx_12 + (r8_4 << 3) + 8) = rdx_5
                *(rcx_12 + (r8_4 << 3) + 0x10) = r10_1
                *(rcx_12 + (r8_4 << 3) + 0x18) = r9_4
                *(rcx_12 + (r8_4 << 3) + 0x20) = zmm0_1.d
                int64_t* rdi_5 = var_1d8:8.q
                var_1f8 = nullptr
                var_1d8.q = 0
                
                if (rdi_5 != 0)
                    var_1d8:8.q = 0
                    rdi_5[1].d -= 1
                    
                    if (rdi_5[1].d == 1)
                        (**rdi_5)(rdi_5)
                        int32_t temp19_1 = *(rdi_5 + 0xc)
                        *(rdi_5 + 0xc) -= 1
                        
                        if (temp19_1 == 1)
                            (*(*rdi_5 + 8))(rdi_5, 1)
                
                r14 = arg1
                var_208 = 0x3f800000
                goto label_140db7290
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp17_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        arg2 = var_1a8
        arg3 = i_3 + 1
        i_3 = arg3
    while (arg3 s< r12)
    
    r13 = arg4
    rdi = var_1f0

int64_t* result = sub_140d968c0(&var_158)
int64_t* rbx_4 = var_1d8:8.q

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp1_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_4 + 8))(rbx_4, 1)

int32_t rdx_7 = rdi[1].d + r13

if (rdx_7 s> *(rdi + 0xc))
    result = sub_1405fdf40(rdi, rdx_7)

void* rdx_19 = var_88
void* r15_2 = &var_128
uint64_t rsi_2 = sx.q(var_80)

if (rdx_19 != 0)
    r15_2 = rdx_19

void* r12_1 = r15_2 + rsi_2 * 0x28
var_1d8.q = r12_1

if (r15_2 != r12_1)
    do
        int64_t* r8_6 = *(r15_2 + 0x10)
        
        if (r8_6 != 0)
            int32_t rcx_24 = *(*r8_6 + 8)
            uint32_t i_4
            i_4.b = (rcx_24 u>> 6).b & 1
            bool cond:2_1 = data_1439ae500 == 0
            i_3 = i_4
            void* rax_29 = *(r15_2 + 8)
            int32_t rdi_7 = (((zx.q(rcx_24) & 1) << 3) + 0x100000).d
            var_208 = rdi_7
            
            if (cond:2_1)
                rdi_7 |= 0x20020
                var_208 = rdi_7
            else
                void* rbx_5 = *(rax_29 + 0x18)
                char rax_32
                
                if (rbx_5 == 0)
                    rax_32 = *(rax_29 + 0x10)
                else
                    void* rax_31 = sub_140d21950(rbx_5, sub_140e28000())
                    int64_t rdx_9 = *rax_31
                    rax_32 = (*(rdx_9 + 0x18))(rax_31, rdx_9)
                    r8_6 = *(r15_2 + 0x10)
                
                uint32_t rcx_28 = zx.d(rax_32)
                
                if (rcx_28 == 1)
                    rdi_7 |= 0x20
                    var_208 = rdi_7
                else if (rcx_28 == 2)
                    rdi_7 |= 0x10000
                    var_208 = rdi_7
                else if (rcx_28 == 3)
                    rdi_7 |= 0x20020
                    var_208 = rdi_7
                else if (rcx_28 == 4)
                    rdi_7 |= 0x8002
                    var_208 = rdi_7
            
            zmm6.d = arg6.d f* *(r15_2 + 0x20)
            sub_140d9a4a0(*r8_6, zx.q(arg5[9].d), zmm6.d)
            result = j_sub_140a82f30(0x30)
            int64_t* result_1 = result
            char var_228
            
            if (result == 0)
                result_1 = nullptr
            else
                result[1].d = 1
                *(result + 0xc) = 1
                *result = &data_142ec7a78
                void* rax_34 = *(r15_2 + 0x18)
                var_1a0 = *(r15_2 + 0x10)
                void* var_198_1 = rax_34
                
                if (rax_34 != 0)
                    *(rax_34 + 0xc) += 1
                
                var_228.d = zmm6.d
                result = sub_140d92930(&result_1[2], &var_1a0, rdi_7, arg5[9].d, var_228)
            
            var_1b8 = &result_1[2]
            uint32_t i = 0
            i_2 = 0
            
            if (*(r15_2 + 4) s> 0)
                int64_t* rsi_4 = var_1f0
                
                do
                    int32_t rcx_35 = i + *r15_2
                    var_228.q = rsi_4
                    int16_t r12_2 = *(var_1a8 + (sx.q(rcx_35) << 1))
                    result, zmm6 = sub_140db2a60(r14, var_1a8, rcx_35, &var_1b8, var_228)
                    
                    if (result.b == 0)
                        int32_t rax_37 = sub_142b91fc0(**(r15_2 + 0x10))
                        int32_t r13_2 = rax_37
                        
                        if (r12_2 != 0 && rax_37 == 0)
                            r13_2 = sub_142b91fc0(**(r15_2 + 0x10))
                        
                        void** rax_40 = *(r15_2 + 0x10)
                        var_204 = 0
                        int16_t r14_3 = 0
                        var_228.d = arg5[9].d
                        char rax_43
                        rax_43, zmm6 = sub_140da12c0(*(arg1 + 8), *rax_40, r13_2, rdi_7, var_228, 
                            zmm6.d, &var_204)
                        
                        if (rax_43 != 0)
                            r14_3 = ((((var_204 + 0x200) s>> 0xa) + 0x20) s>> 6).w
                        
                        int64_t rbx_6 = sx.q(rsi_4[1].d)
                        var_204 = rbx_6.d
                        int32_t rax_44 = (rbx_6 + 1).d
                        rsi_4[1].d = rax_44
                        
                        if (rax_44 s> *(rsi_4 + 0xc))
                            sub_1405fde00(rsi_4)
                        
                        int64_t rax_45 = *rsi_4
                        int64_t rcx_42 = rbx_6 * 0x68
                        __builtin_memset(rcx_42 + rax_45, 0, 0x25)
                        __builtin_memset(rcx_42 + rax_45 + 0x28, 0, 0x40)
                        uint128_t zmm0_2 = var_1b8.o
                        void* rsi_5 = *rsi_4
                        var_178 = zmm0_2
                        int64_t* rsi_6 = rsi_5 + rcx_42
                        void* rax_46 = _mm_bsrli_si128(zmm0_2, 8).q
                        
                        if (rax_46 != 0)
                            *(rax_46 + 8) += 1
                        
                        if (rsi_6 == &var_178)
                        label_140db76b6:
                            
                            if (var_170 != 0)
                                var_170[1].d -= 1
                                
                                if (var_170[1].d == 1)
                                    (**var_170)(var_170)
                                    int32_t temp21_1 = *(var_170 + 0xc)
                                    *(var_170 + 0xc) -= 1
                                    
                                    if (temp21_1 == 1)
                                        (*(*var_170 + 8))(var_170, 1)
                        else
                            *rsi_6 = var_178.q
                            int64_t* rdi_8 = rsi_6[1]
                            
                            if (var_170 == rdi_8)
                                goto label_140db76b6
                            
                            rsi_6[1] = var_170
                            
                            if (rdi_8 != 0)
                                rdi_8[1].d -= 1
                                
                                if (rdi_8[1].d == 1)
                                    (**rdi_8)(rdi_8)
                                    int32_t temp23_1 = *(rdi_8 + 0xc)
                                    *(rdi_8 + 0xc) -= 1
                                    
                                    if (temp23_1 == 1)
                                        (*(*rdi_8 + 8))(rdi_8, 1)
                        
                        *(rsi_6 + 0x1a) = 0
                        rsi_6[2].d = r13_2
                        *(rsi_6 + 0x14) = rcx_35
                        rsi_6[3].w = r14_3
                        *(rsi_6 + 0x1e) = 0x1000000
                        *(rsi_6 + 0x22) = 1
                        
                        if (sub_140a81220(r12_2).b != 0)
                            result.b = 0
                        else
                            result.w = r12_2 - 0x2009
                            
                            if ((0xfffd & result.w) == 0 || r12_2 == 0x202f)
                                result.b = 0
                            else
                                result.b = 1
                        
                        int64_t rcx_47 = sx.q(var_204)
                        *(rsi_6 + 0x24) = result.b
                        
                        if (rcx_47.d s<= 0 || i_3.b == 0)
                            rsi_4 = var_1f0
                            r14 = arg1
                        else
                            r14 = arg1
                            
                            if (result.b == 0)
                                rsi_4 = var_1f0
                            else
                                int64_t rbx_8 = rcx_47 * 0x68
                                int64_t rdi_10 = *var_1f0
                                var_1f8.d = *(rbx_8 + rdi_10 - 0x58)
                                var_1f8:4.d = rsi_6[2].d
                                var_228.d = arg5[9].d
                                int32_t var_180
                                result = sub_140da1790(*(r14 + 0x10), **(r15_2 + 0x10), &var_1f8, 
                                    0, var_228, zmm6.d, &var_180)
                                rsi_4 = var_1f0
                                
                                if (result.b != 0)
                                    char rcx_51 = ((var_180 + 0x20) s>> 6).b
                                    result = zx.q(sx.d(rcx_51))
                                    *(rbx_8 + rdi_10 - 0x50) += result.w
                                    *(rbx_8 + rdi_10 - 0x48) = rcx_51
                        
                        rdi_7 = var_208
                    
                    i = i_2 + 1
                    i_2 = i
                while (i s< *(r15_2 + 4))
                
                r12_1 = var_1d8.q
            
            if (result_1 != 0)
                result_1[1].d -= 1
                
                if (result_1[1].d == 1)
                    result = (**result_1)(result_1)
                    int32_t temp15_1 = *(result_1 + 0xc)
                    *(result_1 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        result = (*(*result_1 + 8))(result_1, 1)
        
        r15_2 += 0x28
    while (r15_2 != r12_1)
    
    rsi_2 = zx.q(var_80)
    rdx_19 = var_88

void* rdi_11 = &var_128

if (rdx_19 != 0)
    rdi_11 = rdx_19

if (rsi_2.d != 0)
    void* rdi_12 = rdi_11 + 0x18
    int32_t i_1
    
    do
        int64_t* rbx_10 = *rdi_12
        
        if (rbx_10 != 0)
            rbx_10[1].d -= 1
            
            if (rbx_10[1].d == 1)
                result = (**rbx_10)(rbx_10)
                int32_t temp4_1 = *(rbx_10 + 0xc)
                *(rbx_10 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*rbx_10 + 8))(rbx_10, 1)
        
        rdi_12 += 0x28
        i_1 = rsi_2.d
        rsi_2 = zx.q(rsi_2.d - 1)
    while (i_1 != 1)
    rdx_19 = var_88

if (rdx_19 != 0)
    result = sub_140a74f90(rdx_19)

__security_check_cookie(rax_1 ^ &var_248)
return result
