// 函数: sub_140d0e5a0
// 地址: 0x140d0e5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
void* r11 = *arg2
char rcx = (arg1[0x14].d).b
int64_t* rsi = nullptr
int64_t* r13 = *(r11 + 8)
int128_t zmm0 = *(arg1 + 0x88)
int64_t rdx = arg1[0x10]
int512_t zmm1
zmm1.o = zx.o(arg1[0x13])
int64_t var_e0 = (zmm1.o).q
int64_t* rax_3 = arg1[0xf]

if ((not.b(*(r13 + 0x2a)) & 1) != 0)
    rsi = arg4

int64_t* var_108 = rax_3
char r9 = not.b(rcx) & 1
int64_t* var_1c8 = r13
int128_t var_f0 = zmm0
bool cond:1 = (r13[5].b & 1) == 0
int64_t* var_1a8 = rsi
int64_t* result
int32_t i_5
int32_t i_6
int64_t* var_200
int64_t var_1f0
int32_t var_1e8
int32_t var_1d8
int64_t* var_1b8
int64_t* var_1b0

if (cond:1)
    int64_t* var_78 = rax_3
    int32_t r8_12 = 0
    char rcx_42 = rcx
    
    if (r9 != 0)
        rcx_42 = rcx
    
    int64_t var_70_1 = rdx
    int64_t var_50_1 = (zmm1.o).q
    int32_t rax_42 = 0
    int64_t* rdx_19 = rsi
    int64_t* var_68_1 = rdx_19
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x2c)
    int32_t var_9c_1 = 0x80
    int32_t var_98_1 = 0xffffffff
    int32_t var_94_1 = 0
    void* var_88_1 = nullptr
    int32_t var_80_1 = 0
    int128_t var_60_1 = zmm0
    int32_t var_c0
    
    if (rsi != 0)
        int32_t rsi_2 = rsi[1].d
        i_5 = 0
        int32_t i_8 = 0
        int32_t i
        
        if ((not.b(rcx_42) & 1) != 0)
            i = rsi_2 - *(rdx_19 + 0x34)
        else
            i = rsi_2 - *(rdx_19 + 0x24)
        
        if (i != 0)
            int32_t r11_1 = var_50_1:4.d
            int32_t i_9 = 0
            
            do
                char r9_7 = not.b(rcx) & 1
                void* r10_2
                
                if (r9_7 != 0)
                    r10_2 = sx.q(i_9 * r11_1) + *rdx_19
                else
                    void* r8_13 = *rdx_19
                    
                    if ((r8_13.b & 1) != 0)
                        r8_13 = (r8_13 s>> 1) + rdx_19
                    
                    r10_2 = sx.q(i_9 * r11_1) + r8_13
                
                bool c_3
                
                if (r9_7 != 0)
                    if (i_9 s>= 0 && i_9 s< rdx_19[5].d)
                        void* rax_49 = rdx_19[4]
                        void* r8_17 = &rdx_19[2]
                        
                        if (rax_49 != 0)
                            r8_17 = rax_49
                        
                        int32_t i_10 = i_9
                        
                        if (i_9 s< 0)
                            i_10 = i_9 + 0x1f
                        
                        c_3 = test_bit(*(r8_17 + (sx.q(i_10 s>> 5) << 2)), i_9 & 0x1f)
                    label_140d0ec3a:
                        
                        if (c_3)
                            var_1b8.d = 0
                            var_1e8.q = &var_108
                            void* var_1e0_3 = r10_2
                            var_1d8.q = &var_1b8
                            int32_t rax_53 = sub_140ceef40(&var_108, &var_1e8)
                            void* rax_55
                            
                            if (rax_53 s>= 0)
                                if ((not.b(rcx) & 1) != 0)
                                    if (arg3[1].d != *(arg3 + 0x34))
                                        rax_55 = sx.q(rax_53 * var_e0:4.d) + *arg3
                                    else
                                        rax_55 = nullptr
                                else if (arg3[1].d != *(arg3 + 0x24))
                                    void* rcx_49 = *arg3
                                    
                                    if ((rcx_49.b & 1) != 0)
                                        rcx_49 = (rcx_49 s>> 1) + arg3
                                    
                                    rax_55 = sx.q(rax_53 * var_e0:4.d) + rcx_49
                                else
                                    rax_55 = nullptr
                            
                            if (rax_53 s< 0 || rax_55 == 0)
                                zmm1 = sub_14077a5e0(&var_c8, &var_1b0, &i_5, nullptr)
                            
                            r11_1 = var_50_1:4.d
                            i -= 1
                            rdx_19 = var_68_1
                else if (i_9 s>= 0 && i_9 s< rdx_19[3].d)
                    void* r8_15 = rdx_19[2]
                    
                    if ((r8_15.b & 1) != 0)
                        r8_15 = (r8_15 s>> 1) + &rdx_19[2]
                    
                    int32_t r9_9 = i_9 & 0x1f
                    
                    if (i_9 s< 0)
                        i_9 += 0x1f
                    
                    c_3 = test_bit(*(r8_15 + (sx.q(i_9 s>> 5) << 2)), r9_9)
                    goto label_140d0ec3a
                i_8 += 1
                i_5 = i_8
                i_9 = i_8
            while (i != 0)
            
            r11 = *arg2
            r8_12 = var_94_1
            rax_42 = var_c0
    
    i_6 = rax_42 - r8_12
    int64_t* r9_10 = *(r11 + 8)
    int64_t* rcx_53 = r9_10[1]
    int32_t* rdx_25 = *rcx_53
    
    if (&rdx_25[1] u> rcx_53[1])
        int32_t* rdx_26 = &i_6
        
        if ((*(r9_10 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_10, rdx_26, zmm1)
        else
            (*(*r9_10 + 0x150))(r9_10, rdx_26, 4)
    else
        i_6 = *rdx_25
        int64_t* rax_62 = r9_10[1]
        *rax_62 += 4
    
    int64_t var_1f8_5 = arg1[0xf]
    var_200 = r13
    
    if (r13[0xf] == arg1)
        sub_140bb37e0(&var_200)
    else
        int64_t var_1f8_6 = 0
    
    int32_t var_1e4_1 = 1
    int32_t rcx_56 = 0
    var_1e8 = 0
    int32_t r8_19 = 0
    int64_t var_bc
    void* var_1e0_4 = &var_bc:4
    int64_t var_1d4_1 = 0
    int32_t var_1d8_1 = 0xffffffff
    int32_t var_a0
    
    if (var_a0 != 0)
        void* r9_11 = &var_bc:4
        void* var_a8
        
        if (var_a8 != 0)
            r9_11 = var_a8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_a0 - 1)
        int32_t rdx_29 = *r9_11
        
        if (rdx_29 != 0)
        label_140d0ee27:
            int32_t rax_72 = neg.d(rdx_29) & rdx_29
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_72)
            int32_t var_1e4_2 = rax_72
            int32_t rax_73
            
            if (rax_72 == 0)
                rax_73 = 0x20
            else
                rax_73 = 0x1f - temp0_2
            
            int32_t rax_74 = r8_19 - rax_73 + 0x1f
            
            if (rax_74 s> var_a0)
                rax_74 = var_a0
            
            var_1d4_1.d = rax_74
        else
            while (true)
                int64_t rdx_30 = sx.q(rcx_56)
                r8_19 += 0x20
                rcx_56 += 1
                var_1d4_1:4.d = r8_19
                var_1e8 = rcx_56
                
                if (rdx_30.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_1d4_1.d = var_a0
                    break
                
                rdx_29 = *(r9_11 + (rdx_30 << 2) + 4)
                var_1d8_1 = 0xffffffff
                
                if (rdx_29 != 0)
                    goto label_140d0ee27
    
    double zmm2[0x2] = var_1d8_1.o
    double var_158_1[0x2] = zmm2
    var_1d4_1.d = var_a0
    zmm1.o = var_1e8.o
    double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
    int128_t var_1a0 = (&var_c8).o
    int128_t var_190_1 = zmm1.o
    int64_t var_180_1 = temp0_3.q
    
    while (true)
        int64_t rax_75 = sx.q(var_190_1:0xc.d)
        int64_t* rdx_32 = var_1a0.q
        
        if (rax_75.d == ((0xffffffff << (var_a0.b & 0x1f)).q u>> 0x20).d && var_190_1.q == &var_bc:4
                && rdx_32 == &var_c8)
            break
        
        int32_t rdx_33 = *(*rdx_32 + rax_75 * 0xc)
        int32_t rax_78 = var_68_1[1].d
        void* r8_21
        
        if ((not.b(rcx) & 1) != 0)
            if (rax_78 != *(var_68_1 + 0x34))
                r8_21 = sx.q(rdx_33 * var_50_1:4.d) + *var_68_1
            else
                r8_21 = nullptr
        else if (rax_78 != *(var_68_1 + 0x24))
            void* rax_79 = *var_68_1
            
            if ((rax_79.b & 1) != 0)
                rax_79 = (rax_79 s>> 1) + var_68_1
            
            r8_21 = sx.q(rdx_33 * var_50_1:4.d) + rax_79
        else
            r8_21 = nullptr
        
        int64_t* rcx_62 = arg1[0xf]
        (*(*rcx_62 + 0x88))(rcx_62, arg2, r8_21, 0)
        var_190_1:8.d &= not.d(var_1a0:0xc.d)
        sub_14059bdd0(&var_1a0:8)
    
    sub_140bafac0(&var_200)
    
    if (var_1a8 == 0)
        int32_t rcx_101 = arg3[1].d
        int32_t i_7
        
        if ((not.b(rcx) & 1) != 0)
            i_7 = rcx_101 - *(arg3 + 0x34)
        else
            i_7 = rcx_101 - *(arg3 + 0x24)
        
        void* rax_131 = *arg2
        i_5 = i_7
        int64_t* r9_15 = *(rax_131 + 8)
        int64_t* rcx_102 = r9_15[1]
        int32_t* rdx_61 = *rcx_102
        
        if (&rdx_61[1] u> rcx_102[1])
            int32_t* rdx_62 = &i_5
            
            if ((*(r9_15 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_15, rdx_62, zmm1)
            else
                (*(*r9_15 + 0x150))(r9_15, rdx_62, 4)
        else
            i_5 = *rdx_61
            int64_t* rax_134 = r9_15[1]
            *rax_134 += 4
        
        int32_t i_1 = i_5
        int32_t r14_5 = 0
        
        while (i_1 != 0)
            var_1b0.d = r14_5
            
            if (sub_140ceebd0(&var_108, &var_1b0) != 0)
                void* rsi_14
                
                if ((not.b(rcx) & 1) != 0)
                    rsi_14 = sx.q(r14_5 * var_e0:4.d) + *arg3
                else
                    void* rcx_105 = *arg3
                    
                    if ((rcx_105.b & 1) != 0)
                        rcx_105 = (rcx_105 s>> 1) + arg3
                    
                    rsi_14 = sx.q(r14_5 * var_e0:4.d) + rcx_105
                
                int64_t* rcx_108 = arg1[0xf]
                int64_t* var_1f8_9 = rcx_108
                var_200 = r13
                
                if (r13[0xf] == arg1)
                    sub_140bb37e0(&var_200)
                    rcx_108 = arg1[0xf]
                else
                    int64_t var_1f8_10 = 0
                
                (*(*rcx_108 + 0x88))(rcx_108, arg2, rsi_14, 0)
                sub_140bafac0(&var_200)
                int64_t* rcx_110 = arg1[0x10]
                int64_t* var_1c0_5 = rcx_110
                var_1c8 = r13
                
                if (r13[0xf] == arg1)
                    sub_140bb37e0(&var_1c8)
                    rcx_110 = arg1[0x10]
                else
                    int64_t var_1c0_6 = 0
                
                (*(*rcx_110 + 0x88))(rcx_110, arg2, sx.q(arg1[0x11].d) + rsi_14, 0)
                sub_140bafac0(&var_1c8)
                i_1 = i_5 - 1
                i_5 = i_1
            
            r14_5 += 1
    else
        int32_t rsi_6 = var_c0 - var_94_1
        int32_t var_c0_1 = 0
        
        if (var_bc.d != rsi_6)
            sub_140638cc0(&var_c8, rsi_6)
        
        int32_t var_98_2 = 0xffffffff
        int32_t var_94_2 = 0
        sub_14059a8e0(&var_bc:4, rsi_6)
        int32_t rdx_41
        
        if (rsi_6 u< 4)
            rdx_41 = 1
        else
            uint32_t rax_85 = rsi_6 u>> 1
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_85 + 8)
            int32_t rcx_67
            
            if (rax_85 == 0xfffffff8)
                rcx_67 = 0x20
            else
                rcx_67 = 0x1f - temp0_4
            
            uint64_t rflags_3
            char temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_85 + 7)
            
            if (rax_85 == 0xfffffff9)
                rdx_41 = 1
            else
                rdx_41 = 1 << ((not.d(rcx_67 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_5)))
        
        uint64_t rax_91 = zx.q(var_80_1)
        
        if (rsi_6 s> 0 && (rax_91.d == 0 || rax_91.d s< rdx_41 || rax_91.d s> rdx_41))
            int32_t var_80_2 = rdx_41
            zmm1 = sub_1406dcb10(&var_c8)
        else if (rax_91.d s> 0)
            int64_t r8_24 = 0
            uint64_t r9_12 = rax_91
            
            while (true)
                void var_90
                void* rcx_73 = &var_90
                int64_t rdx_44 = sx.q(rax_91.d - 1) & r8_24
                
                if (var_88_1 != 0)
                    rcx_73 = var_88_1
                
                r8_24 += 1
                *(rcx_73 + (rdx_44 << 2)) = 0xffffffff
                uint64_t temp6_1 = r9_12
                r9_12 -= 1
                
                if (temp6_1 == 1)
                    break
                
                rax_91 = zx.q(var_80_1)
        
        char r11_3 = rcx
        int32_t r14_2 = 0
        void** rdx_42 = arg3
        var_1b8.d = 0
        int32_t r15_3 = rdx_42[1].d
        int32_t i_2
        
        if ((not.b(r11_3) & 1) != 0)
            i_2 = r15_3 - *(rdx_42 + 0x34)
        else
            i_2 = r15_3 - *(rdx_42 + 0x24)
        
        if (i_2 != 0)
            int32_t rcx_74 = 0
            
            do
                char r9_13 = not.b(r11_3) & 1
                bool c_4
                
                if (r9_13 != 0)
                    if (rcx_74 s>= 0 && rcx_74 s< rdx_42[5].d)
                        void* rax_94 = rdx_42[4]
                        void* r8_27 = &rdx_42[2]
                        
                        if (rax_94 != 0)
                            r8_27 = rax_94
                        
                        int32_t rax_95 = rcx_74
                        
                        if (rcx_74 s< 0)
                            rax_95 = rcx_74 + 0x1f
                        
                        c_4 = test_bit(*(r8_27 + (sx.q(rax_95 s>> 5) << 2)), rcx_74 & 0x1f)
                    label_140d0f129:
                        
                        if (c_4)
                            void* rsi_8
                            
                            if (r9_13 != 0)
                                rsi_8 = sx.q(r14_2 * var_e0:4.d) + *rdx_42
                            else
                                void* rcx_78 = *rdx_42
                                
                                if ((rcx_78.b & 1) != 0)
                                    rcx_78 = (rcx_78 s>> 1) + rdx_42
                                
                                rsi_8 = sx.q(r14_2 * var_e0:4.d) + rcx_78
                            
                            var_1b0.d = 0
                            var_1e8.q = &var_78
                            void* var_1e0_5 = rsi_8
                            int32_t var_1d8_2
                            var_1d8_2.q = &var_1b0
                            int32_t rax_103 = sub_140ceef40(&var_78, &var_1e8)
                            
                            if (rax_103 s< 0)
                                zmm1 = sub_14077a5e0(&var_c8, &var_1f0, &var_1b8, nullptr)
                            else
                                void* rdx_47
                                
                                if ((not.b(rcx) & 1) != 0)
                                    if (var_68_1[1].d != *(var_68_1 + 0x34))
                                        rdx_47 = sx.q(rax_103 * var_50_1:4.d) + *var_68_1
                                    else
                                        rdx_47 = nullptr
                                else if (var_68_1[1].d != *(var_68_1 + 0x24))
                                    void* rax_104 = *var_68_1
                                    
                                    if ((rax_104.b & 1) != 0)
                                        rax_104 = (rax_104 s>> 1) + var_68_1
                                    
                                    rdx_47 = sx.q(rax_103 * var_50_1:4.d) + rax_104
                                else
                                    rdx_47 = nullptr
                                
                                if (rdx_47 == 0)
                                    zmm1 = sub_14077a5e0(&var_c8, &var_1f0, &var_1b8, nullptr)
                                else
                                    int64_t rax_107 = sx.q(arg1[0x11].d)
                                    int64_t* rcx_84 = arg1[0x10]
                                    
                                    if ((*(*rcx_84 + 0x80))(rcx_84, rsi_8 + rax_107, 
                                            rdx_47 + rax_107, 0) == 0)
                                        zmm1 = sub_14077a5e0(&var_c8, &var_1f0, &var_1b8, nullptr)
                            
                            r11_3 = rcx
                            i_2 -= 1
                            rdx_42 = arg3
                else if (rcx_74 s>= 0 && rcx_74 s< rdx_42[3].d)
                    void* r8_25 = rdx_42[2]
                    
                    if ((r8_25.b & 1) != 0)
                        r8_25 = (r8_25 s>> 1) + &rdx_42[2]
                    
                    int32_t r10_6 = rcx_74 & 0x1f
                    
                    if (rcx_74 s< 0)
                        rcx_74 += 0x1f
                    
                    c_4 = test_bit(*(r8_25 + (sx.q(rcx_74 s>> 5) << 2)), r10_6)
                    goto label_140d0f129
                r14_2 += 1
                var_1b8.d = r14_2
                rcx_74 = r14_2
            while (i_2 != 0)
        
        i_5 = var_c0_1 - var_94_2
        int64_t* r9_14 = *(*arg2 + 8)
        int64_t* rcx_86 = r9_14[1]
        int32_t* rdx_54 = *rcx_86
        
        if (&rdx_54[1] u> rcx_86[1])
            int32_t* rdx_55 = &i_5
            
            if ((*(r9_14 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_14, rdx_55, zmm1)
            else
                (*(*r9_14 + 0x150))(r9_14, rdx_55, 4)
        else
            i_5 = *rdx_54
            int64_t* rax_114 = r9_14[1]
            *rax_114 += 4
        
        int32_t rdx_56 = var_a0
        int32_t var_1e4_3 = 1
        var_1e8 = 0
        void* var_1e0_6 = &var_bc:4
        int32_t var_1d8_3 = 0xffffffff
        int64_t var_1d4_2 = 0
        
        if (rdx_56 != 0)
            sub_14059bdd0(&var_1e8)
            rdx_56 = var_a0
        
        zmm2 = var_1d8_3.o
        double var_158_2[0x2] = zmm2
        var_1d4_2.d = rdx_56
        zmm1.o = var_1e8.o
        double temp0_6[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
        var_1a0 = (&var_c8).o
        int128_t var_190_2 = zmm1.o
        int64_t var_180_2 = temp0_6.q
        
        while (true)
            int64_t rax_116 = sx.q(var_190_2:0xc.d)
            int64_t* rdx_57 = var_1a0.q
            
            if (rax_116.d == ((0xffffffff << (rdx_56.b & 0x1f)).q u>> 0x20).d
                    && var_190_2.q == &var_bc:4 && rdx_57 == &var_c8)
                break
            
            int32_t rdx_58 = *(*rdx_57 + rax_116 * 0xc)
            void* rsi_11
            
            if ((not.b(rcx) & 1) != 0)
                rsi_11 = sx.q(var_e0:4.d * rdx_58) + *arg3
            else
                void* rcx_92 = *arg3
                
                if ((rcx_92.b & 1) != 0)
                    rcx_92 = (rcx_92 s>> 1) + arg3
                
                rsi_11 = sx.q(var_e0:4.d * rdx_58) + rcx_92
            
            int64_t* rcx_95 = arg1[0xf]
            int64_t* var_1f8_7 = rcx_95
            var_200 = r13
            
            if (r13[0xf] == arg1)
                sub_140bb37e0(&var_200)
                rcx_95 = arg1[0xf]
            else
                int64_t var_1f8_8 = 0
            
            (*(*rcx_95 + 0x88))(rcx_95, arg2, rsi_11, 0)
            sub_140bafac0(&var_200)
            int64_t* rcx_97 = arg1[0x10]
            int64_t* var_1c0_3 = rcx_97
            var_1c8 = r13
            
            if (r13[0xf] == arg1)
                sub_140bb37e0(&var_1c8)
                rcx_97 = arg1[0x10]
            else
                int64_t var_1c0_4 = 0
            
            (*(*rcx_97 + 0x88))(rcx_97, arg2, sx.q(arg1[0x11].d) + rsi_11, 0)
            sub_140bafac0(&var_1c8)
            var_190_2:8.d &= not.d(var_1a0:0xc.d)
            sub_14059bdd0(&var_1a0:8)
    
    int32_t var_80_3 = 0
    
    if (var_88_1 != 0)
        sub_140a74f90(var_88_1)
    
    result = sub_140909ff0(&var_c8)
else
    if (rsi == 0)
        int32_t r8_1 = arg3[1].d
        int32_t r8_2
        
        if (r9 != 0)
            r8_2 = r8_1 - *(arg3 + 0x34)
        else
            r8_2 = r8_1 - *(arg3 + 0x24)
        
        if (r8_2 != 0)
            sub_140cfaf40(&var_108, 0, r8_2)
            int64_t var_1f8
            var_1f8.d = 0
            var_200 = &var_108
            sub_140ceec60(&var_108, &var_200)
    else
        (*(*arg1 + 0xb0))(arg1, arg3, rsi, 1)
    
    void* rax_5 = *arg2
    var_1f0 = 0
    i_6 = 0
    int64_t* r9_1 = *(rax_5 + 8)
    int64_t* rcx_4 = r9_1[1]
    int32_t* rdx_3 = *rcx_4
    
    if (&rdx_3[1] u> rcx_4[1])
        int32_t* rdx_4 = &i_6
        
        if ((*(r9_1 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_1, rdx_4, zmm1)
        else
            (*(*r9_1 + 0x150))(r9_1, rdx_4, 4)
    else
        i_6 = *rdx_3
        int64_t* rax_8 = r9_1[1]
        *rax_8 += 4
    
    int64_t* var_218
    
    if (i_6 != 0)
        void* rax_10 = arg1[0xf]
        int64_t rax_11 = sub_140a82f30(sx.q(*(rax_10 + 0x3c) * *(rax_10 + 0x38)), 0)
        int64_t* r8_3 = arg1[0xf]
        var_1f0 = rax_11
        
        if (not(test_bit(zx.q(r8_3[8].d), 9)))
            (*(*r8_3 + 0xf0))(r8_3, rax_11)
        else
            memset(rax_11, 0, sx.q(*(r8_3 + 0x3c) * r8_3[7].d))
        
        int64_t var_1f8_1 = arg1[0xf]
        var_200 = r13
        
        if (r13[0xf] == arg1)
            sub_140bb37e0(&var_200)
        else
            int64_t var_1f8_2 = 0
        
        if (i_6 != 0)
            int32_t i_3
            
            do
                int64_t* rcx_15 = arg1[0xf]
                (*(*rcx_15 + 0x88))(rcx_15, arg2, var_1f0, 0, var_218)
                int128_t* r8_6 = &var_f0
                int64_t rdx_7 = var_1f0
                int64_t* rax_16 = var_108
                int32_t rax_17
                
                if ((not.b(rcx) & 1) != 0)
                    int64_t* var_178 = rax_16
                    var_1a8 = rax_16
                    int64_t* var_120_1 = &var_178
                    int64_t* var_110_1 = &var_1a8
                    int64_t (* var_128)(int64_t* arg1, int64_t* arg2, int64_t* arg3)
                    var_218 = &var_128
                    var_128 = sub_140cf2f50
                    int64_t (* var_118)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
                    rax_17 = sub_140cfef50(arg3, rdx_7, r8_6, &var_118, var_218)
                else
                    var_1b0 = rax_16
                    var_1b8 = rax_16
                    int64_t* var_140_1 = &var_1b0
                    int64_t* var_130_1 = &var_1b8
                    int64_t (* var_148)(int64_t* arg1, int64_t* arg2, int64_t* arg3)
                    var_218 = &var_148
                    var_148 = sub_140cf2f50
                    int64_t (* var_138)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
                    rax_17 = sub_140cfee90(arg3, rdx_7, r8_6, &var_138, var_218)
                
                if (rax_17 s>= 0)
                    void* rax_20
                    
                    if ((not.b(rcx) & 1) != 0)
                        if (arg3[1].d != *(arg3 + 0x34))
                            rax_20 = sx.q(rax_17 * var_e0:4.d) + *arg3
                        else
                            rax_20 = nullptr
                    else if (arg3[1].d != *(arg3 + 0x24))
                        void* rdx_8 = *arg3
                        
                        if ((rdx_8.b & 1) != 0)
                            rdx_8 = (rdx_8 s>> 1) + arg3
                        
                        rax_20 = sx.q(rax_17 * var_e0:4.d) + rdx_8
                    else
                        rax_20 = nullptr
                    
                    if (rax_20 != 0)
                        void* var_1e0_1 = rax_20
                        var_1e8.q = &var_108
                        var_1d8.q = var_108
                        sub_140ceea70(&var_108, &var_1e8)
                
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
            r13 = var_1c8
        
        sub_140bafac0(&var_200)
    
    void* rax_25 = *arg2
    i_5 = 0
    int64_t* r9_5 = *(rax_25 + 8)
    int64_t* rcx_23 = r9_5[1]
    int32_t* rdx_12 = *rcx_23
    
    if (&rdx_12[1] u> rcx_23[1])
        int32_t* rdx_13 = &i_5
        
        if ((*(r9_5 + 0x29) & 0x20) != 0)
            result = sub_140b54070(r9_5, rdx_13, zmm1)
        else
            result = (*(*r9_5 + 0x150))(r9_5, rdx_13, 4)
    else
        i_5 = *rdx_12
        result = r9_5[1]
        *result += 4
    
    if (i_5 != 0)
        if (var_1f0 == 0)
            void* rax_29 = arg1[0xf]
            int64_t rax_30 = sub_140a82f30(sx.q(*(rax_29 + 0x3c) * *(rax_29 + 0x38)), 0)
            int64_t* r8_8 = arg1[0xf]
            var_1f0 = rax_30
            
            if (not(test_bit(zx.q(r8_8[8].d), 9)))
                result = (*(*r8_8 + 0xf0))(r8_8, rax_30)
            else
                result = memset(rax_30, 0, sx.q(*(r8_8 + 0x3c) * r8_8[7].d))
        
        if (i_5 != 0)
            int32_t i_4
            
            do
                int64_t* rcx_34 = arg1[0xf]
                int64_t* var_1f8_3 = rcx_34
                var_200 = r13
                
                if (r13[0xf] == arg1)
                    sub_140bb37e0(&var_200)
                    rcx_34 = arg1[0xf]
                else
                    int64_t var_1f8_4 = 0
                
                (*(*rcx_34 + 0x88))(rcx_34, arg2, var_1f0, 0, var_218)
                sub_140bafac0(&var_200)
                var_1e8.q = &var_108
                int64_t var_1e0_2 = var_1f0
                var_1d8.q = var_108
                int64_t var_1d4 = rdx
                void* rax_36 = sub_140cef0e0(&var_108, &var_1e8)
                int64_t* rcx_37 = arg1[0x10]
                int64_t* var_1c0_1 = rcx_37
                var_1c8 = r13
                
                if (r13[0xf] == arg1)
                    sub_140bb37e0(&var_1c8)
                    rcx_37 = arg1[0x10]
                else
                    int64_t var_1c0_2 = 0
                
                (*(*rcx_37 + 0x88))(rcx_37, arg2, rax_36, 0)
                result = sub_140bafac0(&var_1c8)
                i_4 = i_5
                i_5 -= 1
            while (i_4 != 1)
    
    if (var_1f0 != 0)
        int64_t* rcx_40 = arg1[0xf]
        
        if ((not.b((rcx_40[8] u>> 0x24).b) & 1) != 0)
            (*(*rcx_40 + 0xe8))()
        
        result = sub_140a74f90(var_1f0)
__security_check_cookie(rax_1 ^ &var_238)
return result
