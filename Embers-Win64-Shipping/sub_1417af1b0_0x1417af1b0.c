// 函数: sub_1417af1b0
// 地址: 0x1417af1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1 + 0x2b0
uint128_t* rbx = *rdi
uint128_t* arg_8 = rbx
void* rax_3 = &rbx[sx.q(rdi[1].d) * 3]

if (rbx != rax_3)
    int16_t* rdi_1 = rbx + 0x28
    
    do
        int64_t* r14_1 = *(arg1 + 0x270)
        int64_t var_70
        
        if (rdi_1[1].b == 0)
            int64_t* rdx_9 = *(rdi_1 - 0x20)
            int32_t rbx_1 = 0
            int32_t r8_6 = 0
            int32_t r10_2 = 0
            int32_t r11_1 = 0
            void* r13_1 = *rdx_9
            int64_t r9_4 = sx.q(rdx_9[1].d)
            var_70 = *(*(r13_1 + 0xe0) + (r9_4 << 3))
            int64_t* var_68_1 = rdx_9
            int32_t var_60_1 = *(*(r13_1 + 0x50) + (r9_4 << 2))
            int64_t r12_1 = r9_4 * 0x18
            int32_t var_5c_1
            __builtin_memset(&var_5c_1, 0, 0x11)
            void* rcx_8 = *(r13_1 + 0xf8) + r12_1
            void* rdx_10 = rcx_8
            void* rax_17 = *(rcx_8 + 8)
            
            if (rax_17 != 0)
                rdx_10 = rax_17
            
            void* rcx_9 = rdx_10 + (sx.q(*(rcx_8 + 0x10)) << 3)
            
            while (rdx_10 != rcx_9)
                rbx_1 |= **rdx_10
                int32_t var_5c_2 = rbx_1
                r11_1 |= *(*rdx_10 + 4)
                int32_t var_58_1 = r11_1
                r10_2 |= *(*rdx_10 + 8)
                int64_t var_54_1
                var_54_1.d = r10_2
                int64_t rax_22 = *rdx_10
                rdx_10 += 8
                r8_6 |= *(rax_22 + 0xc)
                var_54_1:4.d = r8_6
            
            char var_4c_1 = 1
            (*(*r14_1 + 0x50))(r14_1, &var_70, *(r13_1 + 0x140) + r12_1, 
                zx.q(*(*(r13_1 + 0x158) + r9_4)), *rdi_1)
            void* const rdx_16
            
            if (*(arg1 + 0x308) == *(arg1 + 0x334))
            label_1417af46d:
                rdx_16 = nullptr
            else
                void* r8_9 = *(arg1 + 0x340)
                void* r9_6 = arg1 + 0x338
                uint64_t rcx_12 = zx.q(*rdi_1)
                
                if (r8_9 != 0)
                    r9_6 = r8_9
                
                int32_t rax_25 = *(r9_6 + (((sx.q(*(arg1 + 0x348)) - 1) & rcx_12) << 2))
                
                if (rax_25 == 0xffffffff)
                label_1417af46d_1:
                    rdx_16 = nullptr
                else
                    int64_t r9_7 = *(arg1 + 0x300)
                    
                    while (true)
                        int64_t r8_10 = sx.q(rax_25) * 3
                        rdx_16 = r9_7 + (r8_10 << 3)
                        
                        if (*(r9_7 + (r8_10 << 3)) == rcx_12.w)
                            break
                        
                        rax_25 = *(rdx_16 + 0x10)
                        
                        if (rax_25 == 0xffffffff)
                            goto label_1417af46d_2
                    
                    if (rax_25 == 0xffffffff)
                    label_1417af46d_2:
                        rdx_16 = nullptr
            
            void* rbx_2 = rdx_16 + 8
            
            if (rdx_16 == 0)
                rbx_2 = nullptr
            
            void*** arg_10
            
            if (rbx_2 == 0)
                void*** rax_26 = j_sub_140a82f30(zx.q((rbx_2 + 0x68).d))
                void*** rax_27
                
                if (rax_26 == 0)
                    rax_27 = nullptr
                else
                    rax_27 = sub_1417a23d0(rax_26)
                
                arg_10 = rax_27
                void* rax_28 = sub_14178d280(arg1 + 0x300, rdi_1, &arg_10)
                void*** rcx_16 = arg_10
                rbx_2 = rax_28
                
                if (rcx_16 != 0)
                    void** r8_12 = *rcx_16
                    (*r8_12)(rcx_16, 1, r8_12)
            
            int64_t rax_29 = sx.q(*(rdi_1 - 0x18))
            void*** rbx_3 = *rbx_2
            arg_10 = rbx_3
            int64_t rax_30
            int32_t* rdx_18
            
            if (rax_29.d s< *(arg1 + 0x2f8))
                rax_30 = *(arg1 + 0x2f0)
                rdx_18 = rax_30 + (rax_29 << 3)
            
            int32_t r13_2
            
            if (rax_29.d s>= *(arg1 + 0x2f8) || *(rax_30 + (rax_29 << 3) + 4) == 0 || rdx_18 == 0)
                r13_2 = rbx_3[3].d
                sub_1417502a0(rbx_3, r13_2 + 1)
                int64_t r12_2 = sx.q(*(rdi_1 - 0x18))
                int64_t r14_3 = sx.q(*(arg1 + 0x2f8))
                
                if (r12_2.d s>= r14_3.d)
                    int32_t i_1 = r12_2.d - r14_3.d + 1
                    int32_t rax_31 = r14_3.d + i_1
                    *(arg1 + 0x2f8) = rax_31
                    
                    if (rax_31 s> *(arg1 + 0x2fc))
                        sub_1405a4d70(arg1 + 0x2f0)
                    
                    if (i_1 != 0)
                        char* rax_34 = *(arg1 + 0x2f0) + (r14_3 << 3) + 4
                        int32_t i
                        
                        do
                            *rax_34 = 0
                            rax_34 = &rax_34[8]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    rbx_3 = arg_10
                
                int64_t rcx_20 = r12_2 << 3
                *(*(arg1 + 0x2f0) + rcx_20 + 4) = 1
                *(rcx_20 + *(arg1 + 0x2f0)) = r13_2
            else
                r13_2 = *rdx_18
            
            int64_t r9_8 = sx.q(r13_2)
            *(r9_8 + rbx_3[5]) = *(sx.q(rdx_9[1].d) + *(*rdx_9 + 0x158))
            int64_t rax_41 = rbx_3[8]
            int64_t* r8_14 = *(*rdx_9 + 0x140) + sx.q(rdx_9[1].d) * 0x18
            int64_t rcx_23 = r9_8 * 3
            *(rax_41 + (rcx_23 << 3)) = *r8_14
            void* rdx_23 = rax_41 + (rcx_23 << 3)
            *(rdx_23 + 8) = r8_14[1].d
            int64_t rcx_24 = r9_8 * 5
            *(rdx_23 + 0xc) = *(r8_14 + 0xc)
            *(rdx_23 + 0x14) = *(r8_14 + 0x14)
            int64_t rax_44 = rbx_3[0xb]
            rbx = arg_8
            *(rax_44 + (rcx_24 << 3)) = *rbx
            *(rax_44 + (rcx_24 << 3) + 0x10) = rbx[1]
            *(rax_44 + (rcx_24 << 3) + 0x20) = rbx[2].q
        else
            (*(*r14_1 + 0x48))(r14_1, rbx, zx.q(*rdi_1))
            int64_t rax_5 = sx.q(*(rdi_1 - 0x18))
            
            if (rax_5.d s< *(arg1 + 0x2f8))
                int64_t rax_6 = *(arg1 + 0x2f0)
                int32_t* r10_1 = rax_6 + (rax_5 << 3)
                
                if (*(rax_6 + (rax_5 << 3) + 4) != 0 && r10_1 != 0)
                    void* const rdx_6
                    
                    if (*(arg1 + 0x308) == *(arg1 + 0x334))
                    label_1417af2d1:
                        rdx_6 = nullptr
                    else
                        void* r9_1 = arg1 + 0x338
                        void* r8_2 = *(r9_1 + 8)
                        uint64_t rcx_2 = zx.q(*rdi_1)
                        
                        if (r8_2 != 0)
                            r9_1 = r8_2
                        
                        int32_t rax_8 = *(r9_1 + (((sx.q(*(arg1 + 0x348)) - 1) & rcx_2) << 2))
                        
                        if (rax_8 == 0xffffffff)
                        label_1417af2d1_1:
                            rdx_6 = nullptr
                        else
                            int64_t r9_2 = *(arg1 + 0x300)
                            
                            while (true)
                                int64_t r8_3 = sx.q(rax_8) * 3
                                rdx_6 = r9_2 + (r8_3 << 3)
                                
                                if (*(r9_2 + (r8_3 << 3)) == rcx_2.w)
                                    break
                                
                                rax_8 = *(rdx_6 + 0x10)
                                
                                if (rax_8 == 0xffffffff)
                                    goto label_1417af2d1_2
                            
                            if (rax_8 == 0xffffffff)
                            label_1417af2d1_2:
                                rdx_6 = nullptr
                    
                    void* rcx_3 = *(rdx_6 + 8)
                    int32_t rdx_7 = *r10_1
                    int64_t r8_4 = sx.q(*(rcx_3 + 0x18))
                    
                    if (rdx_7 + 1 u< r8_4.d)
                        *(*(arg1 + 0x2f0) + (sx.q(*(*(rcx_3 + 0x58) + r8_4 * 0x28 - 0x18)) << 3)) =
                            rdx_7
                    
                    sub_1417b4570(rcx_3, rdx_7)
                    int64_t rax_12 = sx.q(*(rdi_1 - 0x18))
                    
                    if (rax_12.d s>= 0 && rax_12.d s< *(arg1 + 0x2f8))
                        char arg_1c = 0
                        *(*(arg1 + 0x2f0) + (rax_12 << 3)) = arg2
        
        if (*(arg1 + 0x289) == 0)
            int64_t* r14_4 = *(arg1 + 0x278)
            
            if (rdi_1[1].b == 0)
                int64_t* rdx_25 = *(rdi_1 - 0x20)
                int32_t rbx_6 = 0
                int32_t r8_16 = 0
                int32_t r10_5 = 0
                int32_t r11_2 = 0
                int64_t r9_9 = sx.q(rdx_25[1].d)
                void* r13_3 = *rdx_25
                int64_t* var_68_2 = rdx_25
                var_70 = *(*(r13_3 + 0xe0) + (r9_9 << 3))
                int64_t r12_3 = r9_9 * 0x18
                int32_t var_60_2 = *(*(r13_3 + 0x50) + (r9_9 << 2))
                int32_t var_5c_3
                __builtin_memset(&var_5c_3, 0, 0x11)
                void* rdx_27 = *(r13_3 + 0xf8) + r12_3
                void* rax_49 = rdx_27
                void* rcx_28 = *(rdx_27 + 8)
                
                if (rcx_28 != 0)
                    rax_49 = rcx_28
                
                void* rdx_28 = rax_49 + (sx.q(*(rdx_27 + 0x10)) << 3)
                
                while (rax_49 != rdx_28)
                    rbx_6 |= **rax_49
                    int32_t var_5c_4 = rbx_6
                    r11_2 |= *(*rax_49 + 4)
                    int32_t var_58_2 = r11_2
                    r10_5 |= *(*rax_49 + 8)
                    int64_t var_54_2
                    var_54_2.d = r10_5
                    int64_t rcx_33 = *rax_49
                    rax_49 += 8
                    r8_16 |= *(rcx_33 + 0xc)
                    var_54_2:4.d = r8_16
                
                char var_4c_2 = 1
                (*(*r14_4 + 0x50))(r14_4, &var_70, *(r13_3 + 0x140) + r12_3, 
                    zx.q(*(*(r13_3 + 0x158) + r9_9)), *rdi_1)
            else
                (*(*r14_4 + 0x48))(r14_4, rbx, zx.q(*rdi_1))
        
        if (rdi_1[1].b != 0)
            int32_t rax_51 = *(rdi_1 - 0x18)
            void* r8_19 = *(arg1 + 0x260)
            int32_t rcx_37 = rax_51 & 0x3ff
            
            if (rax_51 s< 0)
                rax_51 += 0x3ff
                rcx_37 -= 0x400
            
            sub_1417b1ee0(r8_19 + 0x288, 
                *(*(r8_19 + 0x278) + (sx.q(rax_51 s>> 0xa) << 3)) + (sx.q(rcx_37) << 2))
        
        rdi_1 = &rdi_1[0x18]
        rbx = &arg_8[3]
        arg_8 = rbx
    while (rbx != rax_3)
    
    rdi = arg1 + 0x2b0

rdi[1].d = 0

if (*(rdi + 0xc) s<= 0xffffffff)
    sub_1405a5220(rdi, 0)

int32_t rax_55 = *(rdi + 0x1c)
rdi[3].d = 0

if (rax_55 s< 0 && rax_55 != 0)
    sub_1405c5570(&rdi[2], 0)

int32_t rax_56 = *(arg1 + 0x29c)
*(arg1 + 0x298) = 0

if (rax_56 s< 0 && rax_56 != 0)
    sub_1405a5220(arg1 + 0x290, 0)

int32_t rax_57 = *(arg1 + 0x2ac)
*(arg1 + 0x2a8) = 0

if (rax_57 s< 0 && rax_57 != 0)
    sub_1405c5570(arg1 + 0x2a0, 0)

int32_t rax_58 = *(arg1 + 0x2dc)
*(arg1 + 0x2d8) = 0

if (rax_58 s< 0 && rax_58 != 0)
    sub_1405a5220(arg1 + 0x2d0, 0)

int32_t result = *(arg1 + 0x2ec)
*(arg1 + 0x2e8) = 0

if (result s< 0 && result != 0)
    return sub_1405c5570(arg1 + 0x2e0, 0)

return result
