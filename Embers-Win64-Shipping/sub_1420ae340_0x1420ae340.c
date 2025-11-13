// 函数: sub_1420ae340
// 地址: 0x1420ae340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg3 + 0x20)
int128_t zmm8 = arg2

if (rcx == 0)
    return 

int64_t rax = (*(*rcx + 0x260))(rcx)
int64_t r13_1 = rax

if (rax == 0)
    return 

int64_t r15_1 = *(*(arg3 + 0x20) + 0x20)
void* rcx_2 = *(arg1 + 0x20)
int64_t arg_18 = r15_1
void* rdi_1 = *(rcx_2 + 0x20)
void* rax_2 = sub_1424a23e0()
void* rdx_1 = *(r13_1 + 0x10)
int64_t rcx_3 = sx.q(*(rax_2 + 0x38))
void* rbx_1
int32_t r8_1
int64_t* r14_1
float zmm0_1

if (rcx_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rcx_3 << 3)) != rax_2 + 0x30)
    r8_1 = *(arg1 + 0x80)
    r14_1 = nullptr
label_1420ae4b2:
    int32_t rcx_8 = *(r15_1 + 0x280)
    char r10_1 = arg4
    void* r12_1
    
    if ((rcx_8 & 3).b == 3)
        r12_1 = arg3 + 0x2c
        r15_1.b = 1
    else
        if (r10_1 != 0 && (rcx_8.b & 1) == 0)
            r12_1 = arg3 + 0x2c
        
        if (r10_1 != 0 && (rcx_8.b & 1) == 0 && zmm8.d f< *(arg3 + 0x2c))
            r15_1.b = 1
        else
            r15_1.b = 0
            r12_1 = arg3 + 0x2c
    
    rax.b = 1
    
    if (r10_1 == 0)
        goto label_1420ae519
    
    int128_t zmm6
    int128_t zmm7
    bool cond:2_1
    
    if ((r8_1 & 0x10) == 0 || r15_1.b != 0)
        rax.b = 0
    label_1420ae519:
        
        if (r15_1.b == 0)
            goto label_1420ae51e
        
        zmm7 = *(arg3 + 0x2c)
        rbx_1 = arg3 + 0x2c
        zmm6 = zmm8
        
        if (not(zmm8.d f!= 0f))
            zmm6.d = zmm6.d f- 9.99999975e-05f
        
        cond:2_1 = (r8_1.b & 8) == 0
    else
    label_1420ae51e:
        zmm6 = *(arg3 + 0x2c)
        rbx_1 = arg3 + 0x2c
        zmm7 = zmm8
        
        if (not(zmm8.d f!= *(rdi_1 + 0x28)))
            zmm7.d = zmm7.d f+ 9.99999975e-05f
        
        cond:2_1 = (r8_1.b & 4) == 0
    
    if (not(cond:2_1))
        rbx_1 = r12_1
        
        if (rax.b != 0)
            int32_t i_1 = -1
            int32_t i = 0
            
            if (*(arg1 + 0x78) s> 0)
                int64_t rbx_2 = 0
                
                do
                    rax = *(arg1 + 0x70)
                    zmm0_1 = *(rax + rbx_2)
                    
                    if (r15_1.b != 0)
                        if (not(zmm0_1 f<= zmm6.d) && not(zmm0_1 f> zmm7.d))
                        label_1420ae5b4:
                            
                            if (*(rax + rbx_2 + 4) != 3 || r14_1 == 0)
                                if (i_1 == 0xffffffff)
                                    i_1 = i
                                else if (r15_1.b != 0)
                                    if (i s< i_1)
                                        i_1 = i
                                else if (i s> i_1)
                                    i_1 = i
                            else if (r10_1 == 0)
                                rax, zmm6, zmm7, zmm8 =
                                    sub_142185b40(r14_1[0x44], (*(arg1 + 0x80) u>> 1).b & 1)
                                r10_1 = arg4
                    else if (not(zmm0_1 f< zmm6.d) && not(zmm0_1 f>= zmm7.d))
                        goto label_1420ae5b4
                    
                    i += 1
                    rbx_2 += 8
                while (i s< *(arg1 + 0x78))
                
                rbx_1 = r12_1
                
                if (i_1 != 0xffffffff)
                    int64_t rdi_2 = *(arg1 + 0x70)
                    int64_t i_2 = sx.q(i_1)
                    void* rax_5 = sub_14252e610()
                    void* rdx_8 = *(r13_1 + 0x10)
                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                    int64_t rbx_3
                    
                    if (rax_6.d s> *(rdx_8 + 0x38)
                            || *(*(rdx_8 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                        rbx_3 = 0
                    else
                        rbx_3 = r13_1
                    
                    if (r14_1 != 0)
                        char rax_8 = *(rdi_2 + (i_2 << 3) + 4)
                        rbx_3.b = rax_8 == 1
                        
                        if (r15_1.b != 0)
                            rbx_3.b = rax_8 != 1
                        
                        int64_t* rcx_11 = r14_1[0x44]
                        int64_t r9 = *rcx_11
                        (*(r9 + 0x278))(rcx_11, zx.q(rbx_3.b), (*(arg1 + 0x80) u>> 1).b & 1, r9)
                        r14_1[0x45].d &= 0xfffffffb
                        r14_1[0x45].d |= zx.d(rbx_3.b) << 2
                        
                        if ((*(arg_18 + 0x23c) & 0x20) != 0)
                            rbx_1 = r12_1
                        else
                            (*(*r14_1 + 0x5e0))(r14_1)
                            rbx_1 = r12_1
                    else if (rbx_3 == 0)
                        int64_t var_78
                        sub_140b58260(&var_78, u"OnInterpToggle", 1)
                        rax = sub_140d1fd20(r13_1, var_78)
                        rbx_1 = r12_1
                        
                        if (rax != 0 && *(rax + 0xb4) == 1)
                            int32_t rcx_18
                            rcx_18.b = ((*(rdi_2 + (i_2 << 3) + 4) - 1) & 0xfd) == 0
                            arg_18.d = rcx_18
                            
                            if (r15_1.b != 0)
                                int32_t rax_13
                                rax_13.b = rcx_18 == 0
                                arg_18.d = rax_13
                            
                            (*(*r13_1 + 0x210))(r13_1, rax, &arg_18)
                    else
                        if (sub_1420e6770(rbx_3).b != 0)
                            char rax_12 = *(rdi_2 + (i_2 << 3) + 4)
                            rdx_8.b = rax_12 == 1
                            
                            if (r15_1.b != 0)
                                rdx_8.b = rax_12 != 1
                            
                            void* r8_4
                            r8_4.b = 1
                            sub_141f49a80(*(rbx_3 + 0x220), rdx_8.b, r8_4.b)
                        
                        rbx_1 = r12_1
else
    r8_1 = *(arg1 + 0x80)
    r14_1 = r13_1
    
    if ((r8_1.b & 1) == 0)
        goto label_1420ae4b2
    
    arg2 = *(arg3 + 0x2c)
    rbx_1 = arg3 + 0x2c
    
    if (not(zmm8.d f<= arg2.d) && arg4 == 0)
        rax = sx.q(*(arg1 + 0x78))
        
        if (rax.d s> 0)
            int64_t rcx_4 = rax - 1
            int64_t rdx_2 = *(arg1 + 0x70) + (rcx_4 << 3)
            int64_t temp0_1
            
            do
                zmm0_1 = *rdx_2
                
                if (zmm0_1 f< zmm8.d)
                    rax = zx.q(*(rdx_2 + 4))
                    
                    if (rax.b == 1)
                        rax, zmm8 = sub_142185b40(*(r13_1 + 0x220), (r8_1 u>> 1).b & rax.b)
                    else if (rax.b != 3)
                        rax, zmm8 = sub_14218b3c0(*(r13_1 + 0x220), zmm0_1)
                    else if (not(zmm0_1 f< arg2.d))
                        int64_t* rcx_6 = *(r13_1 + 0x220)
                        rdx_2.b = 1
                        (*(*rcx_6 + 0x278))(rcx_6, rdx_2, (r8_1 u>> 1).b & 1)
                    
                    break
                
                rdx_2 -= 8
                temp0_1 = rcx_4
                rcx_4 -= 1
            while (temp0_1 - 1 s>= 0)
*rbx_1 = zmm8.d
