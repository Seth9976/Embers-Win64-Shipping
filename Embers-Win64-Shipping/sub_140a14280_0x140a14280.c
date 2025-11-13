// 函数: sub_140a14280
// 地址: 0x140a14280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb8) != 3)
    return 

int64_t rbx_2 = *(arg1 + 0xc8) + arg2
*(arg1 + 0xc8) = rbx_2
int32_t i_6
uint64_t rax

if (*(arg1 + 0xd0) != 0)
    int64_t* rcx_1 = *(arg1 + 0x48) + 0xd0
    
    if ((*(*rcx_1 + 8))(rcx_1).d == 0)
        int64_t* rcx_3 = *(arg1 + 0x48) + 0x10
        rax = (*(*rcx_3 + 8))(rcx_3)
        
        if (rax.d == 0)
            if (*(arg1 + 0xd1) != rax.b)
                i_6.q = int.q(0.0)
                (*(*(arg1 + 0x18) + 0x40))((zx.o(0)).q, &i_6)
                return 
            
            void* rcx_5 = *(arg1 + 0x90)
            *(arg1 + 0xb8) = 5
            double zmm0_1[0x2] = zx.o(0)
            zmm0_1[0] = float.d(sub_142a37f00(rcx_5))
            zmm0_1[0] = zmm0_1[0] * 0.01
            zmm0_1[0] = zmm0_1[0] + 0.5
            int64_t rcx_6 = int.q(zmm0_1[0])
            
            if (rcx_6 != -0x8000000000000000 && not(float.d(rcx_6) f== zmm0_1[0]))
                uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
                zmm0_1 = zx.o(0)
                zmm0_1[0] = float.d(rcx_6 - (zx.q(temp0_2) & 1))
            
            *(arg1 + 0xc8) = int.q(zmm0_1[0])
            int64_t rbx_3 = sx.q(*(arg1 + 0x38))
            int32_t rax_10 = (rbx_3 + 1).d
            *(arg1 + 0x38) = rax_10
            
            if (rax_10 s> *(arg1 + 0x3c))
                sub_1405a4cf0(arg1 + 0x30)
            
            *(*(arg1 + 0x30) + (rbx_3 << 2)) = 5
            int64_t rbx_4 = sx.q(*(arg1 + 0x38))
            int32_t rax_12 = (rbx_4 + 1).d
            *(arg1 + 0x38) = rax_12
            
            if (rax_12 s> *(arg1 + 0x3c))
                sub_1405a4cf0(arg1 + 0x30)
            
            *(*(arg1 + 0x30) + (rbx_4 << 2)) = 7
    
    return 

int32_t i_4 = 0
void* r12_1 = nullptr
void* r13_1 = nullptr
int32_t i_5 = 0
uint128_t zmm7 = 0x3fe0000000000000
int64_t rdx_3 = rbx_2
uint128_t zmm8 = 0x416312d000000000
int64_t rdi_1 = int.q(zmm8.q)
int32_t var_d8_1 = 0
int32_t var_d4_1 = 0
i_6 = 0
void* var_c8_1
__builtin_memset(&var_c8_1, 0, 0x30)
int32_t i_7 = 0

if (rbx_2 s< rbx_2 - int.q(float.d(rdi_1) f* zmm7.q))
    int64_t* rcx_12 = *(arg1 + 0x48)
    (*(*rcx_12 + 0x28))(rcx_12, rdx_3)
    rdx_3 = *(arg1 + 0xc8)

if (rbx_2 s< rdx_3 + rdi_1)
    void* var_c0_1
    void* var_b8
    int64_t var_b0_1
    void* var_a8
    
    while (true)
        if (*(arg1 + 0x98) != 0)
            int64_t* rcx_19 = *(arg1 + 0xa0)
            
            if (rcx_19 == 0)
                rax, arg4 = sub_142a380c0(*(arg1 + 0x98), arg1 + 0xa0, arg4)
            else if ((*(*rcx_19 + 0x10))(rcx_19) == 0)
                rax, arg4 = sub_142a380c0(*(arg1 + 0x98), arg1 + 0xa0, arg4)
            else
                rax, arg4 = sub_142a38330(*(arg1 + 0x98), *(arg1 + 0xa0), arg1 + 0xa0, arg4)
        else
            *(arg1 + 0x98) = sub_142a38130(*(arg1 + 0x90))
            *(arg1 + 0xa0) = 0
            rax, arg4 = sub_142a380c0(*(arg1 + 0x98), arg1 + 0xa0, arg4)
        
        if (rax.d == 0)
            int64_t* rcx_15 = *(arg1 + 0xa0)
            
            if (rcx_15 != 0 && (*(*rcx_15 + 0x10))(rcx_15).d != 0)
                if (*(arg1 + 0xd0) != 0)
                    break
                
                int64_t* rcx_21 = *(arg1 + 0xa0)
                int64_t rax_23 = sub_142a38640((*(*rcx_21 + 8))(rcx_21), *(arg1 + 0x98), arg4)
                double zmm0_2[0x2] = zx.o(0)
                arg4.o = zx.o(0)
                zmm0_2[0] = float.d(rax_23)
                zmm0_2[0] = zmm0_2[0] f* 0x3f847ae147ae147b
                zmm0_2[0] = zmm0_2[0] f+ zmm7.q
                int64_t rcx_23 = int.q(zmm0_2[0])
                
                if (rcx_23 != -0x8000000000000000)
                    arg4.o = zx.o(0)
                    arg4.q = float.d(rcx_23)
                    
                    if (not(arg4.q f== zmm0_2[0]))
                        uint32_t temp0_4 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_2, zmm0_2[0]))
                        zmm0_2 = zx.o(0)
                        zmm0_2[0] = float.d(rcx_23 - (zx.q(temp0_4) & 1))
                
                int64_t* rcx_25 = *(arg1 + 0xa0)
                int32_t i = 0
                int64_t rbx_6 = int.q(zmm0_2[0])
                int32_t i_3 = 0
                
                if (sub_1405f78c0((*(*rcx_25 + 8))(rcx_25, arg4)).d s> 0)
                    int32_t i_9 = i_7
                    
                    do
                        int64_t* rcx_27 = *(arg1 + 0xa0)
                        int64_t* rax_30 = sub_142a38310((*(*rcx_27 + 8))(rcx_27), i)
                        void*** rax_31 = j_sub_140a82f30(0x30)
                        
                        if (rax_31 == 0)
                            rax_31 = nullptr
                        else
                            rax_31[1].d = 1
                            *rax_31 = &data_142e4d510
                            *(rax_31 + 0xc) = 1
                            __builtin_memset(&rax_31[2], 0, 0x20)
                        
                        if (rax_31 != 0)
                            rax_31[1].d += 1
                            
                            if (rax_31 != 0)
                                rax_31[1].d -= 1
                                
                                if (rax_31[1].d == 1)
                                    (**rax_31)(rax_31)
                                    int32_t temp7_1 = *(rax_31 + 0xc)
                                    *(rax_31 + 0xc) -= 1
                                    
                                    if (temp7_1 == 1)
                                        (*rax_31)[1](rax_31, 1)
                        
                        rax_31[4] = rbx_6
                        int32_t rax_34 = rax_30[1].d
                        int32_t rcx_31 = rax_31[3].d
                        
                        if (rax_34 s> rcx_31)
                            rax_31[3].d = rax_34
                            
                            if (rax_34 s> *(rax_31 + 0x1c))
                                sub_1405daba0(&rax_31[2])
                        else if (rax_34 s< rcx_31 && rax_34 != rcx_31)
                            rax_31[3].d = rax_34
                            sub_1405dac10(&rax_31[2])
                        
                        sub_142a3e140(rax_30, *(arg1 + 0x88), rax_31[2])
                        int64_t* rcx_35 = *(arg1 + 0xa0)
                        int32_t rax_37 = sub_1405948b0((*(*rcx_35 + 8))(rcx_35))
                        int64_t rax_38 = sx.q(*(arg1 + 0xc0))
                        int32_t rax_39
                        
                        if (rax_38.d != 0xffffffff)
                            rax_39 = sub_1418a39c0(*(*(arg1 + 0x68) + (rax_38 << 3)))
                        
                        if (rax_38.d != 0xffffffff && rax_39 == rax_37)
                            int64_t zmm0_3 =
                                sub_142a38320(*(*(arg1 + 0x68) + (sx.q(*(arg1 + 0xc0)) << 3)))
                            
                            if (zmm0_3 f<= 0.0)
                                arg4.o = 0x4114585400000000
                            else
                                arg4.o = zmm8
                                arg4.q = arg4.q f/ zmm0_3
                                arg4.q = arg4.q f+ zmm7.q
                                int64_t rcx_41 = int.q(arg4.q)
                                
                                if (rcx_41 != -0x8000000000000000
                                        && not(float.d(rcx_41) f== arg4.q))
                                    arg4.o = _mm_unpacklo_pd(arg4.o, arg4.q)
                                    uint32_t temp0_6 = _mm_movemask_pd(arg4.o)
                                    arg4.o = zx.o(0)
                                    arg4.q = float.d(rcx_41 - (zx.q(temp0_6) & 1))
                            
                            int64_t i_10 = sx.q(i_6)
                            int32_t i_8 = (i_10 + 1).d
                            i_6 = i_8
                            var_b0_1.d = i_8
                            rax_31[5] = int.q(arg4.q)
                            
                            if (i_8 s> var_d8_1)
                                sub_1405a4f90(&var_b8)
                                var_d8_1 = var_b0_1:4.d
                                i_6 = var_b0_1.d
                                var_c0_1 = var_b8
                            
                            void* rax_49 = (i_10 << 4) + var_c0_1
                            *rax_49 = &rax_31[2]
                            *(rax_49 + 8) = rax_31
                            
                            if (rax_31 != 0)
                                rax_31[1].d += 1
                            
                            rbx_6 += rax_31[5]
                            goto label_140a148e8
                        
                        int64_t rax_50 = sx.q(*(arg1 + 0xbc))
                        
                        if (rax_50.d == 0xffffffff)
                            goto label_140a148e8
                        
                        if (sub_1418a39c0(*(*(arg1 + 0x78) + (rax_50 << 3))) != rax_37)
                            goto label_140a148e8
                        
                        int64_t i_11 = sx.q(i_9)
                        i_9 = (i_11 + 1).d
                        int64_t var_a0_1
                        var_a0_1.d = i_9
                        
                        if (i_9 s> var_d4_1)
                            sub_1405a4f90(&var_a8)
                            i_9 = var_a0_1.d
                            var_d4_1 = var_a0_1:4.d
                            var_c8_1 = var_a8
                        
                        void* rax_56 = (i_11 << 4) + var_c8_1
                        *rax_56 = &rax_31[2]
                        *(rax_56 + 8) = rax_31
                        
                        if (rax_31 != 0)
                            rax_31[1].d += 1
                        label_140a148e8:
                            
                            if (rax_31 != 0)
                                rax_31[1].d -= 1
                                
                                if (rax_31[1].d == 1)
                                    (**rax_31)(rax_31)
                                    int32_t temp9_1 = *(rax_31 + 0xc)
                                    *(rax_31 + 0xc) -= 1
                                    
                                    if (temp9_1 == 1)
                                        (*rax_31)[1](rax_31, 1)
                        
                        int64_t* rcx_49 = *(arg1 + 0xa0)
                        i = i_3 + 1
                        i_3 = i
                        rax = sub_1405f78c0((*(*rcx_49 + 8))(rcx_49))
                    while (i s< rax.d)
                    
                    i_5 = i_6
                    i_7 = i_9
                    rdi_1 = int.q(zmm8.q)
                
                if (i_5 s> 0x14)
                    break
                
                if (rbx_6 s>= *(arg1 + 0xc8) + rdi_1)
                    break
                
                continue
            
            void* rdx_5 = *(arg1 + 0x98)
            int64_t** rcx_16 = *(arg1 + 0x90)
            *(arg1 + 0xa0) = 0
            void* rax_18
            rax_18, arg4 = sub_142a383c0(rcx_16, rdx_5, arg4)
            *(arg1 + 0x98) = rax_18
            
            if (Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::empty(
                    rax_18).b == 0)
                continue
        
        *(arg1 + 0xd0) = 1
        break
    
    if (i_5 s<= 0)
        r13_1 = var_c0_1
    else
        sub_140a11370(*(arg1 + 0x58), &var_b8, arg3)
        i_5 = var_b0_1.d
        r13_1 = var_b8
    
    i_4 = i_7
    
    if (i_4 s> 0)
        sub_140a110e0(*(arg1 + 0x60), &var_a8)
    
    r12_1 = var_c8_1

if (i_4 != 0)
    int64_t* rdi_2 = r12_1 + 8
    int32_t i_1
    
    do
        int64_t* rbx_7 = *rdi_2
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp2_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
        
        rdi_2 = &rdi_2[2]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

if (r12_1 != 0)
    sub_140a74f90(r12_1)

if (i_5 != 0)
    int64_t* rdi_3 = r13_1 + 8
    int32_t i_2
    
    do
        int64_t* rbx_8 = *rdi_3
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t temp5_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)
        
        rdi_3 = &rdi_3[2]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

if (r13_1 != 0)
    sub_140a74f90(r13_1)
