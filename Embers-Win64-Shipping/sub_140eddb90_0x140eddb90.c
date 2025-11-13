// 函数: sub_140eddb90
// 地址: 0x140eddb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *arg3
int512_t zmm2
zmm2.o = 0x3f800000
int64_t rbx = *(r11 + 0x40)
uint128_t zmm5 = zx.o(*arg5)
int64_t* rsi
int64_t* var_10 = rsi
int64_t r13
r13.b = 1
char r14 = *(r11 + 0x48)
int128_t zmm6 = arg4[0xa]
int128_t zmm7 = arg4[8]
int128_t zmm8 = arg4[9]
int128_t zmm9 = arg4[7]
int512_t zmm1
zmm1.o = zmm9
uint64_t result = *(r11 + 0x4c)
zmm1.d = zmm1.d f* zmm6.d
arg5 = zmm5.q
zmm1.d = zmm1.d f- zmm7.d f* zmm8.d
zmm2.d = 1f f/ zmm1.d
zmm1.o = arg4[0xc]
zmm1.o ^= 0x80000000
zmm8.d = zmm8.d f* zmm2.d
zmm7.d = zmm7.d f* zmm2.d
zmm8 ^= 0x80000000
zmm6.d = zmm6.d f* zmm2.d
zmm7 ^= 0x80000000
zmm9.d = zmm9.d f* zmm2.d
zmm2.o = arg4[0xb]
zmm2.o ^= 0x80000000
float zmm0 = zmm6.d
zmm6.d = zmm6.d f* arg5.d
float zmm3 = zmm8.d f* zmm1.d
float zmm4 = zmm9.d f* zmm1.d
zmm1.o = zmm5
zmm3 = zmm3 + zmm0 f* zmm2.d
zmm0 = zmm7.d
zmm7.d = zmm7.d f* arg5.d
arg5.b = *(r11 + 0x49)
zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0x55)
zmm8.d = zmm8.d f* zmm1.d
zmm9.d = zmm9.d f* zmm1.d
zmm8.d = zmm8.d f+ zmm6.d
zmm6 = arg4[2]
zmm9.d = zmm9.d f+ zmm7.d
zmm7.d = zmm6.d f* *arg4
zmm6.d = zmm6.d f* arg4[1]
zmm8.d = zmm8.d f+ zmm3
zmm9.d = zmm9.d f+ zmm4 + zmm0 f* zmm2.d
int64_t arg_8

if (*(arg1 + 0x3e0) != rbx || *(arg1 + 0x3e8) != r14)
    void* rcx_1 = *(arg1 + 0x3a0)
    int64_t* rdi_1 = *(rcx_1 + 0x50)
    void* rdx_2 = &rdi_1[sx.q(*(rcx_1 + 0x58)) * 2]
    int64_t* rdi_2
    
    if (rdi_1 == rdx_2)
    label_140eddd3e:
        rsi = nullptr
        rdi_2 = nullptr
    else
        while (true)
            rsi = *rdi_1
            
            if (rsi[0x10] == rbx && rsi[0x11].b == r14)
                rdi_2 = rdi_1[1]
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                break
            
            rdi_1 = &rdi_1[2]
            
            if (rdi_1 == rdx_2)
                goto label_140eddd3e
    
    if (rsi != 0)
        arg_8 = 0
    
    if (rsi == 0 || result == 0)
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        if (rsi != 0)
            sub_140ed5ec0(arg1 + 0x3e0)
            *(arg1 + 0x3e0) = rbx
            *(arg1 + 0x3e8) = r14
            void*** rax = j_sub_140a82f30(0xb8)
            void*** r14_1 = rax
            int128_t var_98
            
            if (rax == 0)
                r14_1 = nullptr
            else
                int64_t* rbx_1 = *(arg1 + 0x10)
                int64_t rcx_3 = 0
                
                if (rbx_1 != 0)
                    int32_t rax_1 = rbx_1[1].d
                    
                    if (rax_1 != 0)
                        rbx_1[1].d = rax_1 + 1
                        rax_1.b = 1
                    
                    if (rax_1.b == 0)
                        rbx_1 = nullptr
                    
                    if (rbx_1 != 0)
                        rcx_3 = *(arg1 + 8)
                
                int64_t var_a8 = rcx_3
                int64_t* var_a0_1 = rbx_1
                
                if (rbx_1 != 0)
                    int32_t rax_2 = rbx_1[1].d
                    rbx_1[1].d = rax_2
                    
                    if (rax_2 == 0)
                        (**rbx_1)(rbx_1)
                        int32_t temp8_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                void var_88
                int64_t* rax_7 =
                    sub_140ec4910(rsi, &var_88, &var_a8, 0xffffffff, (*(*rsi + 0x20))(rsi))
                zmm1.o = zx.o(0)
                arg_8 = 0
                __builtin_memset(&var_a8, 0, 0x20)
                sub_140e96910(r14_1, &var_98, &var_a8, 0, 0, 0)
                *r14_1 = &data_142edcc08
                r14_1[0x13] = rsi
                r14_1[0x14] = rdi_2
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                r14_1[0x15] = *rax_7
                void* rax_9 = rax_7[1]
                r14_1[0x16] = rax_9
                
                if (rax_9 != 0)
                    *(rax_9 + 8) += 1
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp12_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp12_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
                
                int64_t* rbx_3 = rax_7[1]
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp15_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp15_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
            
            int64_t* rax_14 = j_sub_140a82f30(0x18)
            int64_t* rbx_4 = rax_14
            
            if (rax_14 == 0)
                rbx_4 = nullptr
            else
                rax_14[1].d = 1
                *(rax_14 + 0xc) = 1
                *rbx_4 = &data_142d42ea8
                rbx_4[2] = r14_1
            
            rsi = &r14_1[1]
            
            if (r14_1 == 0)
                rsi = nullptr
            
            if (rsi != 0)
                void* rax_15
                
                if (*rsi != 0)
                    rax_15 = rsi[1]
                
                if (*rsi == 0 || rax_15 == 0 || *(rax_15 + 8) s<= 0)
                    if (rbx_4 != 0)
                        rbx_4[1].d += 1
                    
                    *rsi = r14_1
                    int64_t* rcx_13 = rsi[1]
                    
                    if (rbx_4 != rcx_13)
                        if (rbx_4 != 0)
                            *(rbx_4 + 0xc) += 1
                            rcx_13 = rsi[1]
                        
                        if (rcx_13 != 0)
                            int32_t temp19_1 = *(rcx_13 + 0xc)
                            *(rcx_13 + 0xc) -= 1
                            
                            if (temp19_1 == 1)
                                (*(*rcx_13 + 8))(rcx_13, 1)
                        
                        rsi[1] = rbx_4
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d -= 1
                        
                        if (rbx_4[1].d == 1)
                            (**rbx_4)(rbx_4)
                            int32_t temp18_1 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (temp18_1 == 1)
                                (*(*rbx_4 + 8))(rbx_4, 1)
            
            result = &var_98
            
            if (arg1 + 0x3f0 == &var_98)
            label_140ede00a:
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        result = (**rbx_4)(rbx_4)
                        int32_t temp13_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            result = (*(*rbx_4 + 8))(rbx_4, 1)
            else
                *(arg1 + 0x3f0) = r14_1
                rsi = *(arg1 + 0x3f8)
                
                if (rbx_4 == rsi)
                    goto label_140ede00a
                
                *(arg1 + 0x3f8) = rbx_4
                
                if (rsi != 0)
                    rsi[1].d -= 1
                    
                    if (rsi[1].d == 1)
                        result = (**rsi)(rsi)
                        int32_t temp16_1 = *(rsi + 0xc)
                        *(rsi + 0xc) -= 1
                        
                        if (temp16_1 == 1)
                            result = (*(*rsi + 8))(rsi, 1)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                result = (**rdi_2)(rdi_2)
                int32_t temp5_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rdi_2 + 8))(rdi_2, 1)
            
            goto label_140ede058
    else
        r13.b = 0
    label_140ede058:
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                result = (**rdi_2)(rdi_2)
                int32_t temp6_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    result = (*(*rdi_2 + 8))(rdi_2, 1)
    
    if (r13.b != 0)
        goto label_140ede08b
else
label_140ede08b:
    void* rdi_3 = *(arg1 + 0x3a0)
    bool cond:0_1
    
    if (*(rdi_3 + 0x70) != 1)
        zmm6.d = zmm6.d f* 0.5f
        *(arg1 + 0x404) = 1
        cond:0_1 = zmm6.d f> zmm9.d
    else
        zmm7.d = zmm7.d f* 0.5f
        *(arg1 + 0x404) = 0
        cond:0_1 = zmm7.d f> zmm8.d
    
    rsi.b = cond:0_1
    *(arg1 + 0x400) = 0xffffffff
    
    if (*(arg1 + 0x3f0) != 0)
        int64_t* rdx_5 = *(rdi_3 + 0x50)
        int64_t* rbx_5 = rdx_5
        void* rax_28 = &rdx_5[sx.q(*(rdi_3 + 0x58)) * 2]
        int32_t rbx_6
        
        if (rdx_5 == rax_28)
        label_140ede10e:
            rbx_6 = -1
        else
            while (*rbx_5 != *arg2)
                rbx_5 = &rbx_5[2]
                
                if (rbx_5 == rax_28)
                    goto label_140ede10e
            
            rbx_6 = ((rbx_5 - rdx_5) s>> 4).d
        
        result = sub_140ebfa30(rdi_3, rbx_6, &arg_8, zmm1, zmm2)
        
        if (arg5.b != 0)
            int32_t rdx_7 = *(rdi_3 + 0x58)
            
            if (rbx_6 == rdx_7 - 1 && rdx_7 s> 0)
                *(arg1 + 0x400) = rdx_7
            else if (result.d s>= 0 && result.d s< rdx_7)
                *(arg1 + 0x400) = result.d
        else if (rbx_6 != 0xffffffff)
            void* rcx_26 = *arg2
            result = zx.q(*(rcx_26 + 0x88))
            
            if (result.b == 3 || *(rcx_26 + 0x95) != 0)
                if (result.b == 5)
                    *(arg1 + 0x400) = rbx_6
                else
                    if (result.b != 8)
                        rbx_6 += 1
                    
                    *(arg1 + 0x400) = rbx_6
            else if (rsi.b != 0)
                *(arg1 + 0x400) = rbx_6
            else
                result = zx.q(rbx_6 + 1)
                *(arg1 + 0x400) = result.d
int64_t* rbx_8 = arg2[1]

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        result = (**rbx_8)(rbx_8)
        int32_t temp4_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_8 + 8))(rbx_8, 1)

int64_t* rbx_10 = arg3[1]

if (rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        result = (**rbx_10)(rbx_10)
        int32_t temp7_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (temp7_1 == 1)
            return (*(*rbx_10 + 8))(rbx_10, 1)

return result
