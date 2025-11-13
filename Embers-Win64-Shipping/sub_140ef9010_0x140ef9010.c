// 函数: sub_140ef9010
// 地址: 0x140ef9010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t r9 = arg4[2]
int64_t* rbx = arg4[3]

if (rbx != 0)
    rbx[1].d += 1

char var_f8 = *(arg1 + 0x89)
char var_f7 = arg4[4].b
int64_t var_f0 = r9

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)

int32_t i_6 = arg6
int16_t var_104 = 0
int16_t r12 = 0
int16_t var_108 = 0
int128_t zmm9 = zx.o(0)
char arg_20 = 0
int128_t zmm10 = zx.o(0)
int64_t rax_4 = sx.q(*arg3)
int128_t zmm8 = zx.o(0)
int32_t i_7 = i_6
int64_t var_100
int32_t r15

if (rax_4.d s< 0 || rax_4.d s>= arg4[6].d)
    r15 = arg5
else
    int64_t* rbx_3 = rax_4 * 0x30 + arg4[5]
    int64_t* rcx_2 = *rbx_3
    (*(*rcx_2 + 8))(rcx_2, &var_100)
    int32_t rax_6 = var_100.d
    r15 = arg5
    
    if (r15 s>= rax_6)
        rax_6 = r15
    
    if (rax_6 s> 0)
        int64_t* rcx_3 = *rbx_3
        int64_t r8 = *rcx_3
        arg_20 = (*(r8 + 0x30))(rcx_3, zx.q(rax_6), r8, &var_f8)
    
    i_6 = i_7

int32_t rcx_4 = *arg3
int32_t i_9
int16_t r14_5

if (rcx_4 s>= arg4[6].d)
    i_9 = i_7
    r14_5 = 0
else
    int128_t zmm6
    int128_t var_58_1 = zmm6
    int128_t zmm7
    int128_t var_68_1 = zmm7
    
    while (true)
        int64_t* r14_3 = sx.q(rcx_4) * 0x30 + arg4[5]
        int64_t* rcx_5 = *r14_3
        int64_t var_e0
        (*(*rcx_5 + 8))(rcx_5, &var_e0)
        int32_t i_1 = i_6
        int32_t rbx_4 = var_e0.d
        int32_t i_2
        
        if (i_2 s<= i_6)
            i_1 = i_2
        
        int64_t i = sx.q(i_1)
        i_7 = i_1
        
        if (r15 s>= rbx_4)
            rbx_4 = r15
        
        for (; i s> sx.q(rbx_4); i -= 1)
            if (sub_140a81220(*(**arg4 + (i << 1) - 2)) == 0)
                break
            
            i_7 -= 1
        
        if (rbx_4 != i_1)
            int64_t* rcx_8 = *r14_3
            uint64_t r8_1 = zx.q(rbx_4)
            void* rax_12 = *rcx_8
            uint128_t zmm0 = *(arg_8 + 0x8c)
            
            if (rbx_4 != i_7)
                int64_t r10_1 = *(rax_12 + 0x28)
                char* var_110_2 = &var_f8
                int32_t var_118_2 = zmm0.d
                
                if (i_7 == i_1)
                    r10_1(zmm0, &var_100, r8_1, zx.q(i_1), var_118_2, var_110_2, var_108)
                    int64_t rbx_8 = sx.q(r14_3[3].d)
                    int32_t i_5 = i_1
                    int32_t rax_30 = (rbx_8 + 1).d
                    r14_3[3].d = rax_30
                    
                    if (rax_30 s> *(r14_3 + 0x1c))
                        sub_1405a4d70(&r14_3[2])
                    
                    *(r14_3[2] + (rbx_8 << 3)) = rbx_4.q
                    int64_t rdi_3 = sx.q(r14_3[5].d)
                    int32_t rax_32 = (rdi_3 + 1).d
                    r14_3[5].d = rax_32
                    
                    if (rax_32 s> *(r14_3 + 0x2c))
                        sub_1405a4d70(&r14_3[4])
                    
                    *(r14_3[4] + (rdi_3 << 3)) = var_100
                    zmm6 = var_100.d
                    zmm7 = zmm6
                else
                    int64_t var_c0
                    r10_1(zmm0, &var_c0, r8_1, zx.q(i_7), var_118_2, var_110_2, var_108)
                    int64_t rbx_6 = sx.q(r14_3[3].d)
                    int32_t i_8 = i_7
                    int32_t rax_17 = (rbx_6 + 1).d
                    r14_3[3].d = rax_17
                    
                    if (rax_17 s> *(r14_3 + 0x1c))
                        sub_1405a4d70(&r14_3[2])
                    
                    *(r14_3[2] + (rbx_6 << 3)) = rbx_4.q
                    int64_t r15_2 = sx.q(r14_3[5].d)
                    int32_t rax_19 = (r15_2 + 1).d
                    r14_3[5].d = rax_19
                    
                    if (rax_19 s> *(r14_3 + 0x2c))
                        sub_1405a4d70(&r14_3[4])
                    
                    void* rdx_10 = arg_8
                    *(r14_3[4] + (r15_2 << 3)) = var_c0
                    int64_t* rcx_15 = *r14_3
                    zmm6 = var_c0.d
                    int64_t var_b0
                    (*(*rcx_15 + 0x28))(rcx_15, &var_b0, zx.q(i_7), zx.q(i_1), 
                        (*(rdx_10 + 0x8c)).d, &var_f8)
                    int64_t r15_3 = sx.q(r14_3[3].d)
                    int32_t i_4 = i_1
                    int32_t rax_22 = (r15_3 + 1).d
                    r14_3[3].d = rax_22
                    
                    if (rax_22 s> *(r14_3 + 0x1c))
                        sub_1405a4d70(&r14_3[2])
                    
                    *(r14_3[2] + (r15_3 << 3)) = i_7.q
                    int64_t rdi_2 = sx.q(r14_3[5].d)
                    int32_t rax_24 = (rdi_2 + 1).d
                    r14_3[5].d = rax_24
                    
                    if (rax_24 s> *(r14_3 + 0x2c))
                        sub_1405a4d70(&r14_3[4])
                    
                    *(r14_3[4] + (rdi_2 << 3)) = var_b0
                    zmm8 = var_b0.d
                    zmm7.d = zmm6.d f+ zmm8.d
                    
                    if (i_7 + 1 != i_1)
                        int64_t* rbx_7 = r14_3[1]
                        int64_t* rcx_19 = *r14_3
                        
                        if (rbx_7 != 0)
                            rbx_7[1].d += 1
                        
                        char* var_110_4 = &var_f8
                        int32_t var_118_4 = (*(arg_8 + 0x8c)).d
                        void var_a0
                        zmm8 = *(*(*rcx_19 + 0x28))(rcx_19, &var_a0, zx.q(i_7))
                        
                        if (rbx_7 != 0)
                            rbx_7[1].d -= 1
                            
                            if (rbx_7[1].d == 1)
                                (**rbx_7)(rbx_7)
                                int32_t temp5_1 = *(rbx_7 + 0xc)
                                *(rbx_7 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rbx_7 + 8))(rbx_7, 1)
            else
                int64_t var_d0
                (*(rax_12 + 0x28))(rcx_8, &var_d0, r8_1, zx.q(i_1), zmm0.d, &var_f8, var_108)
                int64_t rbx_5 = sx.q(r14_3[3].d)
                int32_t i_3 = i_1
                int32_t rax_13 = (rbx_5 + 1).d
                r14_3[3].d = rax_13
                
                if (rax_13 s> *(r14_3 + 0x1c))
                    sub_1405a4d70(&r14_3[2])
                
                *(r14_3[2] + (rbx_5 << 3)) = rbx_4.q
                int64_t rdi_1 = sx.q(r14_3[5].d)
                int32_t rax_15 = (rdi_1 + 1).d
                r14_3[5].d = rax_15
                
                if (rax_15 s> *(r14_3 + 0x2c))
                    sub_1405a4d70(&r14_3[4])
                
                *(r14_3[4] + (rdi_1 << 3)) = var_d0
                zmm7 = var_d0.d
                zmm6 = data_143dbb1f0.d
        else
            zmm6 = data_143dbb1f0.d
            zmm7 = zmm6
        
        int64_t* rcx_25 = *r14_3
        zmm9.d = zmm9.d f+ zmm7.d
        zmm10.d = zmm10.d f+ zmm6.d
        int512_t zmm1
        zmm1.o = *(arg_8 + 0x8c)
        int16_t rax_35 = (*(*rcx_25 + 0x18))(rcx_25, zmm1)
        int64_t* rcx_26 = *r14_3
        int16_t rbx_9 = neg.w(rax_35)
        int64_t rdx_20 = *rcx_26
        zmm1.o = *(arg_8 + 0x8c)
        int16_t rax_37 = (*(rdx_20 + 0x20))(rcx_26, rdx_20) - rbx_9
        i_9 = arg6
        
        if (var_104 s>= rax_37)
            rax_37 = var_104
        
        r14_5 = rax_37
        
        if (var_108 s>= rbx_9)
            rbx_9 = var_108
        
        var_108 = rbx_9
        var_104 = r14_5
        int64_t rax_38 = sx.q(*arg3)
        
        if (i_1 == i_9)
            if (rax_38.d s< arg4[6].d)
                int64_t* rcx_34 = *(arg4[5] + rax_38 * 0x30)
                (*(*rcx_34 + 8))(rcx_34, &arg_8)
                
                if (i_1 == arg_8:4.d)
                    *arg3 += 1
            
            break
        
        r15 = arg5
        rcx_4 = (rax_38 + 1).d
        *arg3 = rcx_4
        
        if (rcx_4 s>= arg4[6].d)
            break
        
        i_6 = i_9
    
    r12 = var_108

arg_8:4.d = i_9
*(arg2 + 0xc) = 0xffffffff
arg2[2].d = zmm9.d
arg2[3].d = zmm10.d
arg_8.d = arg5
*arg2 = arg_8
arg_8:4.d = i_7
arg_8.d = arg5
arg2[1] = arg_8
*(arg2 + 0x1c) = zmm8.d
arg2[4].w = r14_5
*(arg2 + 0x22) = r12
*(arg2 + 0x24) = arg_20
*(arg2 + 0x14) = _mm_cvtepi32_ps(zx.o(sx.d(r12) + sx.d(r14_5))).d

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
