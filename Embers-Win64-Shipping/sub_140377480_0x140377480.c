// 函数: sub_140377480
// 地址: 0x140377480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11 = arg1
int32_t* r10 = arg1[5]
void* rsi = *arg1
void* rax_3 = zx.q(arg1[1].d - 5) + rsi - 1
void* rax_4 = arg1[2]
void* r15 = rax_4 - 1
int32_t rcx = arg1[3].d
int32_t rbp_1 = r15.d - (arg2 - rcx)
void* r12_1 = rax_4 + zx.q(rcx - 0x101) - 1
uint64_t rdx_1 = zx.q(r10[0xd])
int128_t* rbx = *(r10 + 0x38)
uint64_t rcx_1
rcx_1.b = r10[0x1a].b
int32_t r8_1 = not.d(0xffffffff << rcx_1.b)
rcx_1.b = r10[0x1b].b
uint64_t rax_7 = zx.q((rdx_1 - 1).d)
uint64_t rax_13 = zx.q(rdx_1.d) & 0x1f
int64_t rcx_5 = rax_7 + 1 - rax_13
int32_t rax_16 = r10[0xb]
int32_t rdi = r10[0xc]
void* rdi_1 = rsi - 1
uint32_t r13 = r10[0x10]
int32_t r9 = r10[0x11]
int64_t r14 = *(r10 + 0x58)
int64_t rsi_2 = *(r10 + 0x60)
int32_t rbx_1 = r8_1
void* rsi_4 = rax_3

while (true)
    if (r9 u<= 0xe)
        uint32_t rax_50 = (zx.d(*(rdi_1 + 1)) << r9.b) + r13
        uint32_t r13_8 = zx.d(*(rdi_1 + 2)) << (r9.b + 8)
        rdi_1 += 2
        r13 = r13_8 + rax_50
        r9 += 0x10
    
    uint64_t rdx_28 = zx.q(r13) & zx.q(rbx_1)
    uint32_t rax_51 = zx.d(*(r14 + (rdx_28 << 2) + 1))
    r13 u>>= rax_51.b
    char rcx_63 = *(r14 + (rdx_28 << 2))
    int16_t i_8 = *(r14 + (rdx_28 << 2) + 2)
    
    while (true)
        r9 -= rax_51
        
        if (rcx_63 == 0)
            *(r15 + 1) = i_8.b
            r15 += 1
        label_140377fe8:
            
            if (r15 u< r12_1)
            label_140377fed:
                
                if (rdi_1 u< rsi_4)
                    break
        else
            char const* const rax_54
            
            if ((rcx_63 & 0x10) != 0)
                uint32_t i_5 = zx.d(i_8)
                int32_t rax_23 = zx.d(rcx_63) & 0xf
                void* var_f0_1
                int64_t rbx_2
                
                if (rax_23 == 0)
                    rbx_2 = rsi_2
                    
                    if (r9 u<= 0xe)
                    label_14037764b:
                        var_f0_1 = rdi_1 + 2
                        r13 =
                            (zx.d(*(rdi_1 + 2)) << (r9.b + 8)) + (zx.d(*(rdi_1 + 1)) << r9.b) + r13
                        r9 += 0x10
                    else
                        var_f0_1 = rdi_1
                else
                    if (r9 u< rax_23)
                        uint32_t rdx_3 = zx.d(*(rdi_1 + 1)) << r9.b
                        rdi_1 += 1
                        r13 += rdx_3
                        r9 += 8
                    
                    rbx_2 = rsi_2
                    char rcx_7 = rax_23.b
                    i_5 += not.d(0xffffffff << rcx_7) & r13
                    r13 u>>= rcx_7
                    r9 -= rax_23
                    
                    if (r9 u<= 0xe)
                        goto label_14037764b
                    
                    var_f0_1 = rdi_1
                
                uint64_t rdx_8 = zx.q(r13) & zx.q(not.d(0xffffffff << rcx_1.b))
                uint32_t rcx_10 = zx.d(*(rbx_2 + (rdx_8 << 2) + 1))
                uint32_t rax_27 = zx.d(*(rbx_2 + (rdx_8 << 2)))
                int16_t rdi_3 = *(rbx_2 + (rdx_8 << 2) + 2)
                uint32_t rsi_5 = r13 u>> rcx_10.b
                int32_t rdx_9 = r9 - rcx_10
                
                if ((rax_27.b & 0x10) == 0)
                    while ((rax_27.b & 0x40) == 0)
                        uint64_t rbp_5 = zx.q((not.d(0xffffffff << rax_27.b) & rsi_5) + zx.d(rdi_3))
                        uint32_t rcx_12 = zx.d(*(rbx_2 + (rbp_5 << 2) + 1))
                        rsi_5 u>>= rcx_12.b
                        rax_27 = zx.d(*(rbx_2 + (rbp_5 << 2)))
                        rdi_3 = *(rbx_2 + (rbp_5 << 2) + 2)
                        rdx_9 -= rcx_12
                        
                        if ((rax_27.b & 0x10) != 0)
                            goto label_1403776c1
                    
                    r9 = rdx_9
                    r13 = rsi_5
                    rsi_4 = rax_3
                    rdi_1 = var_f0_1
                    rax_54 = "invalid distance code"
                    goto label_140378027
                
            label_1403776c1:
                uint32_t rdi_4 = zx.d(rdi_3)
                int32_t rax_29 = rax_27 & 0xf
                int32_t r9_2
                uint32_t r13_6
                
                if (rdx_9 u>= rax_29)
                    r9_2 = rdx_9
                    r13_6 = rsi_5
                else
                    r13_6 = (zx.d(*(var_f0_1 + 1)) << rdx_9.b) + rsi_5
                    r9_2 = rdx_9 + 8
                    
                    if (r9_2 u>= rax_29)
                        var_f0_1 += 1
                    else
                        uint32_t rsi_7 = zx.d(*(var_f0_1 + 2)) << r9_2.b
                        var_f0_1 += 2
                        r13_6 += rsi_7
                        r9_2 = rdx_9 + 0x10
                
                char rcx_15 = rax_29.b
                int32_t rsi_10 = not.d(0xffffffff << rcx_15) & r13_6
                r13 = r13_6 u>> rcx_15
                int32_t r12_3 = rsi_10 + rdi_4
                r9 = r9_2 - rax_29
                int32_t rax_31 = r15.d - rbp_1
                uint64_t rdx_12 = zx.q(r12_3 - rax_31)
                
                if (r12_3 u<= rax_31)
                    uint64_t rax_35 = zx.q(r12_3)
                    int64_t rcx_18 = 0
                    uint32_t i = i_5
                    
                    do
                        *(r15 + rcx_18 + 1) = *(r15 - rax_35 + 3 + rcx_18 - 2)
                        *(r15 + rcx_18 + 2) = *(r15 - rax_35 + 3 + rcx_18 - 1)
                        *(r15 + rcx_18 + 3) = *(r15 - rax_35 + 3 + rcx_18)
                        i -= 3
                        rcx_18 += 3
                    while (i u> 2)
                    
                    int32_t r8_2 = neg.d(i_5)
                    
                    if (r8_2 + rcx_18.d == 0)
                        r15 += rcx_18
                    else
                        void* rax_37 = neg.q(rax_35) + r15
                        *(r15 + rcx_18 + 1) = *(rcx_18 + rax_37 + 1)
                        
                        if (r8_2 + rcx_18.d == 0xffffffff)
                            r15 = r15 + rcx_18 + 1
                        else
                            rax_37.b = *(rcx_18 + rax_37 + 2)
                            *(r15 + rcx_18 + 2) = rax_37.b
                            r15 = r15 + rcx_18 + 2
                    
                    rsi_4 = rax_3
                    rdi_1 = var_f0_1
                    
                    if (r15 u< r12_1)
                        goto label_140377fed
                else
                    if (rdx_12.d u> rdi && r10[0x6f6] != 0)
                        rax_54 = "invalid distance too far back"
                        rsi_4 = rax_3
                        rdi_1 = var_f0_1
                        goto label_140378027
                    
                    void* rax_34
                    uint64_t rcx_16
                    uint32_t i_2
                    int32_t var_104_2
                    int64_t* var_f8_2
                    void* rsi_18
                    int64_t rdi_10
                    int128_t zmm1
                    
                    if (rdx_1.d == 0)
                        uint64_t rbp_14 = zx.q(rax_16 - rdx_12.d)
                        rax_34 = rbx - 1 + rbp_14
                        int32_t i_1 = rdx_12.d
                        i_2 = i_5 - rdx_12.d
                        
                        if (i_5 u> rdx_12.d)
                            var_104_2 = rbx_1
                            var_f8_2 = r11
                            int32_t rsi_14 = rsi_10 + rbp_1 - 1 + rdi_4
                            uint64_t rdi_8 = zx.q(rsi_14 - r15.d)
                            uint64_t rsi_15
                            
                            if (rdi_8 + 1 u>= 0x20)
                                rsi_15 = zx.q(rsi_14 - r15.d)
                            
                            if (rdi_8 + 1 u>= 0x20 && (r15 + 1 u>= rsi_15 + rbp_14 + rbx + 1
                                    || rbx + rbp_14 u>= r15 + rsi_15 + 2))
                                uint64_t rdi_14 = zx.q(rdi_8.d + 1) & 0x1f
                                int64_t rbx_21 = rdi_8 + 1 - rdi_14
                                rsi_18 = r15 + rbx_21
                                i_1 -= rbx_21.d
                                rax_34 += rbx_21
                                void* rbp_17 = rbp_14 + &rbx[1]
                                int64_t rcx_36 = 0
                                
                                do
                                    zmm1 = *(rbp_17 + rcx_36)
                                    *(r15 + rcx_36 + 1) = *(rbp_17 + rcx_36 - 0x10)
                                    *(r15 + rcx_36 + 0x11) = zmm1
                                    rcx_36 += 0x20
                                while (rbx_21 != rcx_36)
                                
                                r11 = var_f8_2
                                rbx_1 = var_104_2
                                
                                if (rdi_14.d != 0)
                                    goto label_1403778e5
                                
                                goto label_140377e72
                            
                            rsi_18 = r15
                            r11 = var_f8_2
                            rbx_1 = var_104_2
                        label_1403778e5:
                            int32_t rdi_9 = i_1 - 1
                            
                            if ((i_1.b & 7) != 0)
                                int64_t rbx_8 = 0
                                
                                do
                                    *(rsi_18 + rbx_8 + 1) = *(rax_34 + rbx_8 + 1)
                                    rbx_8 += 1
                                while ((i_1 & 7) != rbx_8.d)
                                
                                rsi_18 += rbx_8
                                i_1 -= rbx_8.d
                                rax_34 += rbx_8
                                r11 = var_f8_2
                                rbx_1 = var_104_2
                            
                            if (rdi_9 u< 7)
                                goto label_140377e72
                            
                            rdi_10 = 0
                            
                            do
                                *(rsi_18 + rdi_10 + 1) = *(rax_34 + rdi_10 + 1)
                                *(rsi_18 + rdi_10 + 2) = *(rax_34 + rdi_10 + 2)
                                *(rsi_18 + rdi_10 + 3) = *(rax_34 + rdi_10 + 3)
                                *(rsi_18 + rdi_10 + 4) = *(rax_34 + rdi_10 + 4)
                                *(rsi_18 + rdi_10 + 5) = *(rax_34 + rdi_10 + 5)
                                *(rsi_18 + rdi_10 + 6) = *(rax_34 + rdi_10 + 6)
                                *(rsi_18 + rdi_10 + 7) = *(rax_34 + rdi_10 + 7)
                                *(rsi_18 + rdi_10 + 8) = *(rax_34 + rdi_10 + 8)
                                rdi_10 += 8
                            while (i_1 != rdi_10.d)
                            
                        label_140377e60:
                            rsi_18 += rdi_10
                            r11 = var_f8_2
                            rbx_1 = var_104_2
                        label_140377e72:
                            rax_34 = rsi_18 - zx.q(r12_3)
                            r15 = rsi_18
                            goto label_140377e78
                        
                    label_1403779e3:
                        i_2 = i_5
                    label_140377e78:
                        rsi_4 = rax_3
                    label_140377e82:
                        rdi_1 = var_f0_1
                        
                        if (i_2 u>= 3)
                        label_140377eb6:
                            
                            do
                                *(r15 + 1) = *(rax_34 + 1)
                                *(r15 + 2) = *(rax_34 + 2)
                                rcx_16 = zx.q(*(rax_34 + 3))
                                rax_34 += 3
                                *(r15 + 3) = rcx_16.b
                                r15 += 3
                                i_2 -= 3
                            while (i_2 u> 2)
                    else
                        int32_t rbp_9 = rdx_1.d
                        uint64_t rbp_10 = zx.q(rbp_9 - rdx_12.d)
                        int32_t i_7 = rdx_12.d
                        
                        if (rbp_9 u>= rdx_12.d)
                            rax_34 = rbx - 1 + rbp_10
                            i_2 = i_5 - i_7
                            
                            if (i_5 u<= i_7)
                                goto label_1403779e3
                            
                            int32_t i_3 = i_7
                            var_104_2 = rbx_1
                            var_f8_2 = r11
                            int32_t rsi_20 = rsi_10 + rbp_1 - 1 + rdi_4
                            uint64_t rdi_12 = zx.q(rsi_20 - r15.d)
                            
                            if (rdi_12 + 1 u>= 0x20)
                                uint64_t rsi_23 = zx.q(rsi_20 - r15.d)
                                
                                if (r15 + 1 u< rsi_23 + rbp_10 + rbx + 1
                                        && rbx + rbp_10 u< r15 + rsi_23 + 2)
                                    rsi_18 = r15
                                    r11 = var_f8_2
                                    rbx_1 = var_104_2
                                    goto label_140377db5
                                
                                uint64_t rdi_20 = zx.q(rdi_12.d + 1) & 0x1f
                                int64_t rbx_32 = rdi_12 + 1 - rdi_20
                                rsi_18 = r15 + rbx_32
                                i_3 -= rbx_32.d
                                rax_34 += rbx_32
                                void* rbp_20 = rbp_10 + &rbx[1]
                                int64_t rcx_54 = 0
                                
                                do
                                    zmm1 = *(rbp_20 + rcx_54)
                                    *(r15 + rcx_54 + 1) = *(rbp_20 + rcx_54 - 0x10)
                                    *(r15 + rcx_54 + 0x11) = zmm1
                                    rcx_54 += 0x20
                                while (rbx_32 != rcx_54)
                                
                                r11 = var_f8_2
                                rbx_1 = var_104_2
                                
                                if (rdi_20.d == 0)
                                    goto label_140377e72
                                
                                goto label_140377db5
                            
                            rsi_18 = r15
                            r11 = var_f8_2
                            rbx_1 = var_104_2
                        label_140377db5:
                            int32_t rdi_21 = i_3 - 1
                            
                            if ((i_3.b & 7) != 0)
                                int64_t rbx_33 = 0
                                
                                do
                                    *(rsi_18 + rbx_33 + 1) = *(rax_34 + rbx_33 + 1)
                                    rbx_33 += 1
                                while ((i_3 & 7) != rbx_33.d)
                                
                                rsi_18 += rbx_33
                                i_3 -= rbx_33.d
                                rax_34 += rbx_33
                                r11 = var_f8_2
                                rbx_1 = var_104_2
                            
                            if (rdi_21 u< 7)
                                goto label_140377e72
                            
                            rdi_10 = 0
                            
                            do
                                *(rsi_18 + rdi_10 + 1) = *(rax_34 + rdi_10 + 1)
                                *(rsi_18 + rdi_10 + 2) = *(rax_34 + rdi_10 + 2)
                                *(rsi_18 + rdi_10 + 3) = *(rax_34 + rdi_10 + 3)
                                *(rsi_18 + rdi_10 + 4) = *(rax_34 + rdi_10 + 4)
                                *(rsi_18 + rdi_10 + 5) = *(rax_34 + rdi_10 + 5)
                                *(rsi_18 + rdi_10 + 6) = *(rax_34 + rdi_10 + 6)
                                *(rsi_18 + rdi_10 + 7) = *(rax_34 + rdi_10 + 7)
                                *(rsi_18 + rdi_10 + 8) = *(rax_34 + rdi_10 + 8)
                                rdi_10 += 8
                            while (i_3 != rdi_10.d)
                            
                            goto label_140377e60
                        
                        uint64_t rdx_14 = zx.q(rdx_1.d + rax_16 - i_7)
                        rax_34 = rbx - 1 + rdx_14
                        uint64_t r12_4 = zx.q(i_7 - rdx_1.d)
                        
                        if (i_5 u<= r12_4.d)
                            goto label_1403779e3
                        
                        uint32_t i_6 = i_5 - r12_4.d
                        int32_t var_104_1 = rbx_1
                        int64_t* var_f8_1 = r11
                        int32_t rsi_12 = rsi_10 + not.d(rdx_1.d) + rbp_1 + rdi_4
                        uint64_t rdi_6 = zx.q(rsi_12 - r15.d)
                        void* rbx_3
                        int32_t r12_5
                        
                        if (rdi_6 + 1 u>= 0x20)
                            uint64_t rsi_21 = zx.q(rsi_12 - r15.d)
                            r12_5 = r12_3
                            
                            if (r15 + 1 u< rdx_14 + rsi_21 + rbx + 1
                                    && rbx + rdx_14 u< r15 + rsi_21 + 2)
                                rbx_3 = r15
                                rcx_16 = r12_4
                                goto label_140377b5b
                            
                            uint64_t rdi_16 = zx.q(rdi_6.d + 1) & 0x1f
                            int64_t rbp_18 = rdi_6 + 1 - rdi_16
                            rbx_3 = r15 + rbp_18
                            rax_34 += rbp_18
                            void* rdx_23 = rdx_14 + &rbx[1]
                            int64_t rcx_39 = 0
                            
                            do
                                zmm1 = *(rdx_23 + rcx_39)
                                *(r15 + rcx_39 + 1) = *(rdx_23 + rcx_39 - 0x10)
                                *(r15 + rcx_39 + 0x11) = zmm1
                                rcx_39 += 0x20
                            while (rbp_18 != rcx_39)
                            
                            rcx_16 = zx.q(r12_4.d - rbp_18.d)
                            
                            if (rdi_16.d != 0)
                                goto label_140377b5b
                        else
                            rbx_3 = r15
                            rcx_16 = r12_4
                            r12_5 = r12_3
                        label_140377b5b:
                            int32_t rdi_17 = (rcx_16 - 1).d
                            
                            if ((rcx_16.b & 7) != 0)
                                int64_t rsi_26 = 0
                                
                                do
                                    *(rbx_3 + rsi_26 + 1) = *(rax_34 + rsi_26 + 1)
                                    rsi_26 += 1
                                while ((rcx_16.d & 7) != rsi_26.d)
                                
                                rbx_3 += rsi_26
                                rcx_16 = zx.q(rcx_16.d - rsi_26.d)
                                rax_34 += rsi_26
                            
                            if (rdi_17 u>= 7)
                                int64_t rdx_25 = 0
                                
                                do
                                    *(rbx_3 + rdx_25 + 1) = *(rax_34 + rdx_25 + 1)
                                    *(rbx_3 + rdx_25 + 2) = *(rax_34 + rdx_25 + 2)
                                    *(rbx_3 + rdx_25 + 3) = *(rax_34 + rdx_25 + 3)
                                    *(rbx_3 + rdx_25 + 4) = *(rax_34 + rdx_25 + 4)
                                    *(rbx_3 + rdx_25 + 5) = *(rax_34 + rdx_25 + 5)
                                    *(rbx_3 + rdx_25 + 6) = *(rax_34 + rdx_25 + 6)
                                    *(rbx_3 + rdx_25 + 7) = *(rax_34 + rdx_25 + 7)
                                    *(rbx_3 + rdx_25 + 8) = *(rax_34 + rdx_25 + 8)
                                    rdx_25 += 8
                                while (rcx_16.d != rdx_25.d)
                                
                                rbx_3 += rdx_25
                        
                        int32_t i_4 = rdx_1.d
                        i_2 = i_6 - i_4
                        
                        if (i_6 u<= i_4)
                            r15 = rbx_3
                            i_2 = i_6
                            rax_34 = rbx - 1
                            r11 = var_f8_1
                            rsi_4 = rax_3
                            rbx_1 = var_104_1
                            goto label_140377e82
                        
                        rdi_1 = var_f0_1
                        void* rax_43
                        
                        if (rax_7 + 1 u< 0x20
                                || (rbx_3 + 1 u< rbx + rax_7 + 1 && rbx u< rbx_3 + rax_7 + 2))
                            r15 = rbx_3
                            rax_43 = rbx - 1
                            r11 = var_f8_1
                            rbx_1 = var_104_1
                        label_140377c53:
                            int32_t rsi_28 = i_4 - 1
                            
                            if ((i_4.b & 7) != 0)
                                int64_t rdi_18 = 0
                                
                                do
                                    *(r15 + rdi_18 + 1) = *(rax_43 + rdi_18 + 1)
                                    rdi_18 += 1
                                while ((i_4 & 7) != rdi_18.d)
                                
                                r15 += rdi_18
                                i_4 -= rdi_18.d
                                rax_43 += rdi_18
                                r11 = var_f8_1
                                rbx_1 = var_104_1
                                rdi_1 = var_f0_1
                            
                            if (rsi_28 u>= 7)
                                int64_t rsi_29 = 0
                                
                                do
                                    *(r15 + rsi_29 + 1) = *(rax_43 + rsi_29 + 1)
                                    *(r15 + rsi_29 + 2) = *(rax_43 + rsi_29 + 2)
                                    *(r15 + rsi_29 + 3) = *(rax_43 + rsi_29 + 3)
                                    *(r15 + rsi_29 + 4) = *(rax_43 + rsi_29 + 4)
                                    *(r15 + rsi_29 + 5) = *(rax_43 + rsi_29 + 5)
                                    *(r15 + rsi_29 + 6) = *(rax_43 + rsi_29 + 6)
                                    *(r15 + rsi_29 + 7) = *(rax_43 + rsi_29 + 7)
                                    *(r15 + rsi_29 + 8) = *(rax_43 + rsi_29 + 8)
                                    rsi_29 += 8
                                while (i_4 != rsi_29.d)
                                
                                r15 += rsi_29
                                r11 = var_f8_1
                                rbx_1 = var_104_1
                        else
                            r15 = rbx_3 + rcx_5
                            int64_t rax_46 = 0
                            
                            do
                                zmm1 = *(rbx + rax_46 + 0x10)
                                *(rbx_3 + rax_46 + 1) = *(rbx + rax_46)
                                *(rbx_3 + rax_46 + 0x11) = zmm1
                                rax_46 += 0x20
                            while (rcx_5 != rax_46)
                            
                            i_4 = rdx_1.d - rcx_5.d
                            rax_43 = rbx + rcx_5 - 1
                            r11 = var_f8_1
                            rbx_1 = var_104_1
                            
                            if (rax_13.d != 0)
                                goto label_140377c53
                        rax_34 = r15 - zx.q(r12_5)
                        rsi_4 = rax_3
                        
                        if (i_2 u>= 3)
                            goto label_140377eb6
                    
                    if (i_2 == 0)
                        goto label_140377fe8
                    
                    rcx_16.b = *(rax_34 + 1)
                    *(r15 + 1) = rcx_16.b
                    
                    if (i_2 != 1)
                        rax_34.b = *(rax_34 + 2)
                        *(r15 + 2) = rax_34.b
                        r15 += 2
                        
                        if (r15 u< r12_1)
                            goto label_140377fed
                    else
                        r15 += 1
                        
                        if (r15 u< r12_1)
                            goto label_140377fed
            else if ((rcx_63 & 0x40) == 0)
                uint64_t rbp_26 = zx.q((not.d(0xffffffff << rcx_63) & r13) + zx.d(i_8))
                rax_51 = zx.d(*(r14 + (rbp_26 << 2) + 1))
                r13 u>>= rax_51.b
                rcx_63 = *(r14 + (rbp_26 << 2))
                i_8 = *(r14 + (rbp_26 << 2) + 2)
                continue
            else if ((rcx_63 & 0x20) != 0)
                *r10 = 0xb
            else
                rax_54 = "invalid literal/length code"
            label_140378027:
                r11[4] = rax_54
                *r10 = 0x1d
        
        int32_t r9_3 = r9 & 7
        void* rdi_22 = rdi_1 - zx.q(r9 u>> 3)
        *r11 = rdi_22 + 1
        r11[2] = r15 + 1
        r11[1].d = rsi_4.d - rdi_22.d + 5
        r11[3].d = r12_1.d - r15.d + 0x101
        r10[0x10] = not.d(0xffffffff << r9_3.b) & r13
        r10[0x11] = r9_3
        return r15 + 1
