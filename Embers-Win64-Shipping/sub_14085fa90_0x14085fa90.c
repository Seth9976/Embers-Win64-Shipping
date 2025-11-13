// 函数: sub_14085fa90
// 地址: 0x14085fa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
char var_1dc
sub_140744650(&var_1dc, arg1)
int64_t rdx_1
rdx_1.b = 1
int128_t zmm6_1 = sub_140862460(arg1)
sub_140b33630("Niagara")
sub_140d3c6e0(arg1 + 0x20)
void* rax_2 = sub_140d3c6e0(arg1 + 0x20)
void* rdi = rax_2
int64_t* rdx_2 = *(arg1 + 0xe60)
*(arg1 + 0xe60) = 0

if (rdx_2 != 0)
    rdx_2[9].d -= 1
    
    if (rdx_2[9].d == 1)
        zmm6_1 = sub_140a2f6e0(rdx_2)

if (*(arg1 + 0xe2c) != 0)
    if (zmm6_1.d f>= (zx.o(0)).d)
        zmm6_1 = __minss_xmmss_memss(zmm6_1.d, *(arg1 + 0xe28))
    else
        zmm6_1 = zx.o(0)

int32_t i = 0
uint32_t rdx_4
rdx_4.b = not.b((*(arg1 + 0xd68) u>> 3).b)
rdx_4.b &= 1
uint32_t var_1e0 = rdx_4
int128_t zmm1_1

if (*(arg1 + 0xcb8) s> 0)
    int64_t* rcx_6 = nullptr
    void* r15_1 = arg1 + 0xcb0
    int64_t* var_1e8_1 = nullptr
    
    do
        void* r14_1 = *(rcx_6 + *r15_1)
        
        if (rdx_4.b == 0)
        label_14085feb2:
            zmm6_1 = sub_14085f9d0(r14_1)
            int64_t* rbx_7 = *(r14_1 + 0x20)
            int64_t rdi_4 = *(r14_1 + 0x18)
            
            if (rbx_7 != 0)
                rbx_7[1].d += 1
                
                if (rbx_7 != 0)
                    rbx_7[1].d -= 1
                    
                    if (rbx_7[1].d == 1)
                        (**rbx_7)(rbx_7)
                        int32_t rax_34 = *(rbx_7 + 0xc)
                        *(rbx_7 + 0xc) -= 1
                        
                        if (rax_34 == 1)
                            (*(*rbx_7 + 8))(rbx_7, 1)
            
            if (rdi_4 != arg1 || *(r14_1 + 0x10) == 0xffffffff)
                rcx_6 = var_1e8_1
            else
                i += 1
                rcx_6 = &var_1e8_1[1]
                var_1e8_1 = rcx_6
        else
            int32_t rax_5 = sub_14084aae0(r14_1)
            int32_t temp1_1 = *(arg1 + 0x30)
            
            if (rax_5 == temp1_1)
                goto label_14085feb2
            
            if (rax_5 s<= temp1_1)
                int64_t rdi_3 = sx.q(*(arg1 + 0xcf8))
                int32_t rax_31 = (rdi_3 + 1).d
                *(arg1 + 0xcf8) = rax_31
                
                if (rax_31 s> *(arg1 + 0xcfc))
                    sub_1405a4d70(arg1 + 0xcf0)
                
                *(*(arg1 + 0xcf0) + (rdi_3 << 3)) = r14_1
                goto label_14085feb2
            
            void var_e0
            int64_t* rax_7 = sub_140865fa0(sub_140865dd0(*(arg1 + 0x38)), &var_e0, rax_5, rdi)
            int64_t* rdi_1 = rax_7[1]
            void* r15_2 = *rax_7
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            int64_t* var_d8
            
            if (var_d8 != 0)
                var_d8[1].d -= 1
                
                if (var_d8[1].d == 1)
                    (**var_d8)(var_d8)
                    int32_t rax_10 = *(var_d8 + 0xc)
                    *(var_d8 + 0xc) -= 1
                    
                    if (rax_10 == 1)
                        (*(*var_d8 + 8))(var_d8, 1)
            
            zmm6_1 = sub_1408623c0(r15_2)
            sub_14080f1a0(*(r15_2 + 0xd8), *(arg1 + 0xd8), i, 1)
            int32_t rax_12 = *(arg1 + 0xcb8)
            int32_t r8_4 = rax_12 - i - 1
            
            if (r8_4 s>= 1)
                r8_4 = 1
            
            if (r8_4 != 0)
                int64_t rcx_14 = *(arg1 + 0xcb0)
                memcpy(rcx_14 + (sx.q(i) << 3), rcx_14 + (sx.q(rax_12 - r8_4) << 3), r8_4 << 3)
                rax_12 = *(arg1 + 0xcb8)
            
            *(arg1 + 0xcb8) = rax_12 - 1
            sub_1405c53d0(arg1 + 0xcb0)
            
            if (i s>= 0 && i s< *(arg1 + 0xcb8))
                *(*(*(arg1 + 0xcb0) + var_1e8_1) + 0x10) = i
            
            int64_t r15_3 = sx.q(*(r15_2 + 0xcb8))
            int32_t rax_18 = (r15_3 + 1).d
            *(r15_2 + 0xcb8) = rax_18
            
            if (rax_18 s> *(r15_2 + 0xcbc))
                sub_1405a4d70(r15_2 + 0xcb0)
            
            *(*(r15_2 + 0xcb0) + (r15_3 << 3)) = r14_1
            int64_t* rcx_21 = rdi_1
            *(r14_1 + 0x10) = r15_3.d
            void* var_1c8 = r15_2
            int64_t* var_1c0_1 = rcx_21
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
                rcx_21 = var_1c0_1
            
            if (&var_1c8 != r14_1 + 0x18)
                zmm1_1 = var_1c8.o
                int128_t var_78_1 = zmm1_1
                var_1c8.o = *(r14_1 + 0x18)
                rcx_21 = var_1c0_1
                *(r14_1 + 0x18) = zmm1_1
            
            if (rcx_21 != 0)
                rcx_21[1].d -= 1
                
                if (rcx_21[1].d == 1)
                    (**var_1c0_1)(var_1c0_1)
                    int32_t rax_22 = *(var_1c0_1 + 0xc)
                    *(var_1c0_1 + 0xc) -= 1
                    
                    if (rax_22 == 1)
                        (*(*var_1c0_1 + 8))(var_1c0_1, 1)
            
            if ((*(r15_2 + 0xd68) & 2) == 0)
                sub_140856230(r15_2, r14_1)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t rax_26 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (rax_26 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            r15_1 = arg1 + 0xcb0
            rcx_6 = var_1e8_1
        
        rdx_4 = var_1e0
        rdi = rax_2
    while (i s< *(arg1 + 0xcb8))

sub_14085c610(arg1)
int32_t rcx_28 = *(arg1 + 0xce8)
int32_t rbx_6 = 0
int32_t var_1e0_1 = 0

if (rcx_28 s> 0)
    int32_t rdx_12 = *(arg1 + 0xcb8) + rcx_28
    
    if (rdx_12 s> *(arg1 + 0xcbc))
        sub_1405c5570(arg1 + 0xcb0, rdx_12)
        rcx_28 = *(arg1 + 0xce8)
    
    int32_t i_1 = 0
    
    if (rcx_28 s> 0)
        int64_t var_1d0_1 = 0
        int64_t rdi_2 = 0
        
        do
            void* r14_2 = *(*(arg1 + 0xce0) + rdi_2)
            
            if (((*(r14_2 + 0x6b8) u>> 4).b & 1) == 0)
                if ((*(arg1 + 0xd68) & 8) != 0)
                    goto label_140860377
                
                int32_t rax_36 = sub_14084aae0(r14_2)
                
                if (rax_36 == *(arg1 + 0x30))
                    rbx_6 = var_1e0_1
                label_140860377:
                    zmm6_1 = sub_14085f9d0(r14_2)
                    
                    if (*(r14_2 + 0x10) != 0xffffffff)
                        if ((*(arg1 + 0xd68) & 2) == 0)
                            sub_140856230(arg1, r14_2)
                        
                        int32_t rax_74 = *(arg1 + 0xce8)
                        int32_t r8_19 = rax_74 - i_1 - 1
                        
                        if (r8_19 s>= 1)
                            r8_19 = 1
                        
                        if (r8_19 != 0)
                            void** rcx_71 = *(arg1 + 0xce0)
                            memcpy(&rcx_71[sx.q(i_1)], &rcx_71[sx.q(rax_74 - r8_19)], r8_19 << 3)
                            rax_74 = *(arg1 + 0xce8)
                        
                        *(arg1 + 0xce8) = rax_74 - 1
                        sub_1405c53d0(arg1 + 0xce0)
                        
                        if (i_1 s>= 0 && i_1 s< *(arg1 + 0xce8))
                            *(*(*(arg1 + 0xce0) + rdi_2) + 0x10) = i_1
                        
                        void* r8_22 = arg1 + 0xcb0
                        int64_t rbx_15 = sx.q(*(r8_22 + 8))
                        int32_t rax_77 = (rbx_15 + 1).d
                        *(r8_22 + 8) = rax_77
                        
                        if (rax_77 s> *(r8_22 + 0xc))
                            sub_1405a4d70(r8_22)
                            r8_22 = arg1 + 0xcb0
                        
                        *(*r8_22 + (rbx_15 << 3)) = r14_2
                        *(r14_2 + 0x6b8) &= 0xfffffffb
                        *(r14_2 + 0x10) = rbx_15.d
                        rbx_6 = var_1e0_1 + 1
                        var_1e0_1 = rbx_6
                else
                    int32_t rax_37 = *(arg1 + 0xce8)
                    int32_t r8_9 = rax_37 - i_1 - 1
                    
                    if (r8_9 s>= 1)
                        r8_9 = 1
                    
                    if (r8_9 != 0)
                        void** rcx_37 = *(arg1 + 0xce0)
                        memcpy(&rcx_37[sx.q(i_1)], &rcx_37[sx.q(rax_37 - r8_9)], r8_9 << 3)
                        rax_37 = *(arg1 + 0xce8)
                    
                    *(arg1 + 0xce8) = rax_37 - 1
                    sub_1405c53d0(arg1 + 0xce0)
                    
                    if (i_1 s>= 0 && i_1 s< *(arg1 + 0xce8))
                        *(*(*(arg1 + 0xce0) + rdi_2) + 0x10) = i_1
                    
                    *(r14_2 + 0x10) = 0xffffffff
                    void var_d0
                    int64_t* rax_44
                    rax_44, zmm6_1 =
                        sub_140865fa0(sub_140865dd0(*(arg1 + 0x38)), &var_d0, rax_36, rax_2)
                    int64_t* rdi_5 = rax_44[1]
                    void* rbx_9 = *rax_44
                    int32_t* var_1d8_2 = &rdi_5[1]
                    
                    if (rdi_5 == 0)
                        var_1d8_2 = &rdi_5[1]
                    else
                        rdi_5[1].d += 1
                    
                    int64_t* var_c8
                    
                    if (var_c8 != 0)
                        var_c8[1].d -= 1
                        
                        if (var_c8[1].d == 1)
                            (**var_c8)(var_c8)
                            int32_t rax_48 = *(var_c8 + 0xc)
                            *(var_c8 + 0xc) -= 1
                            
                            if (rax_48 == 1)
                                (*(*var_c8 + 8))(var_c8, 1)
                    
                    void* var_1b8 = rbx_9
                    int64_t* rcx_46 = rdi_5
                    int64_t* var_1b0_1 = rcx_46
                    
                    if (rdi_5 != 0)
                        rdi_5[1].d += 1
                        rcx_46 = var_1b0_1
                    
                    if (&var_1b8 != r14_2 + 0x18)
                        zmm1_1 = var_1b8.o
                        int128_t var_68_1 = zmm1_1
                        var_1b8.o = *(r14_2 + 0x18)
                        rcx_46 = var_1b0_1
                        *(r14_2 + 0x18) = zmm1_1
                    
                    if (rcx_46 != 0)
                        rcx_46[1].d -= 1
                        
                        if (rcx_46[1].d == 1)
                            (**var_1b0_1)(var_1b0_1)
                            int32_t rax_53 = *(var_1b0_1 + 0xc)
                            *(var_1b0_1 + 0xc) -= 1
                            
                            if (rax_53 == 1)
                                (*(*var_1b0_1 + 8))(var_1b0_1, 1)
                    
                    int32_t rdx_16 = *(rbx_9 + 0xce8)
                    void* var_1e8_2
                    var_1e8_2.d = rdx_16
                    *(rbx_9 + 0xce8) = rdx_16 + 1
                    
                    if (rdx_16 + 1 s> *(rbx_9 + 0xcec))
                        sub_1405a4d70(rbx_9 + 0xce0)
                        rdx_16 = var_1e8_2.d
                    
                    *(*(rbx_9 + 0xce0) + (sx.q(rdx_16) << 3)) = r14_2
                    *(r14_2 + 0x10) = rdx_16
                    
                    if (rdi_5 != 0)
                        int32_t rax_57 = *var_1d8_2
                        *var_1d8_2 -= 1
                        
                        if (rax_57 == 1)
                            (**rdi_5)(rdi_5)
                            int32_t rax_59 = *(rdi_5 + 0xc)
                            *(rdi_5 + 0xc) -= 1
                            
                            if (rax_59 == 1)
                                (*(*rdi_5 + 8))(rdi_5, 1)
                    
                    rbx_6 = var_1e0_1
                    rdi_2 = var_1d0_1
            else
                i_1 += 1
                rdi_2 += 8
                var_1d0_1 = rdi_2
        while (i_1 s< *(arg1 + 0xce8))

TEB* gsbase

if (data_143ce4588 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce4588)
    
    if (data_143ce4588 == 0xffffffff)
        int64_t* rcx_91 = data_143db18d0
        
        if (rcx_91 == 0)
            sub_140a53c40()
            rcx_91 = data_143db18d0
        
        int64_t r8_26
        r8_26.b = 1
        data_143ce4580 = (*(*rcx_91 + 0xb0))(rcx_91, u"sg.EffectsQuality", r8_26)
        _Init_thread_footer(&data_143ce4588)

int64_t* rcx_56 = data_143ce4580
int64_t var_188
sub_140844560(&var_188, arg1, arg1 + 0xcb0, arg1 + 0x40, zmm6_1.d, rbx_6, 
    (*(*rcx_56 + 0x90))(rcx_56), arg3)
int64_t* var_158
char var_148
char var_147

if (var_148 == 0)
    void* rbx_17 = nullptr
    
    if (var_147 != 0)
        void var_90
        int64_t* rax_85 = sub_14084d610(&var_90, nullptr, 2)
        void* rdx_28 = *rax_85
        *(rdx_28 + 0x30) = 0
        *(rdx_28 + 0x38) = 0
        *(rdx_28 + 0x3c) = 4
        void* var_150_2 = rdx_28 + 0x10
        rbx_17 = *rax_85
        sub_14085ce80(rbx_17, rax_85[1], rax_85[2].d, 0)
    
    sub_14085f680(arg1, &var_188)
    
    if (var_147 != 0)
        int32_t rax_86 = *(rbx_17 + 0xc)
        *(rbx_17 + 0xc) -= 1
        
        if (rax_86 == 1)
            int64_t* rax_87 = sub_140a242a0()
            (**rax_87)(rax_87, rbx_17, zx.q(*(rbx_17 + 8)), 2)
        
        int64_t var_150_3 = 0
else
    void var_c0
    int64_t* rax_65 = sub_14084d610(&var_c0, nullptr, 2)
    void* rcx_60 = *rax_65
    *(rcx_60 + 0x30) = 0
    *(rcx_60 + 0x38) = 0
    *(rcx_60 + 0x3c) = 4
    void* rbx_13 = *rax_65
    sub_14085ce80(rbx_13, rax_65[1], rax_65[2].d, 0)
    int64_t* rbx_14 = *(rbx_13 + 0x48)
    
    if (rbx_14 != 0)
        rbx_14[9].d += 1
    
    void var_a8
    int64_t* rax_66 = sub_14084d490(&var_a8, nullptr, 2)
    int64_t r8_15 = var_188
    void* rcx_64 = *rax_66
    
    if (var_158 != 0)
        var_158[9].d += 1
    
    int32_t var_168
    *(rcx_64 + 0x30) = var_168
    *(rcx_64 + 0x10) = r8_15
    int64_t var_180
    *(rcx_64 + 0x18) = var_180
    int64_t var_178
    *(rcx_64 + 0x20) = var_178
    int64_t var_170
    *(rcx_64 + 0x28) = var_170
    int32_t var_164
    *(rcx_64 + 0x34) = var_164
    int32_t var_160
    *(rcx_64 + 0x38) = var_160
    *(rcx_64 + 0x40) = var_158
    
    if (var_158 != 0)
        var_158[9].d += 1
    
    *(rcx_64 + 0x48) = rcx_60 + 0x10
    *(rcx_64 + 0x50) = var_148
    *(rcx_64 + 0x51) = var_147
    *(rcx_64 + 0x58) = rbx_13
    
    if (var_158 != 0)
        var_158[9].d -= 1
        
        if (var_158[9].d == 1)
            sub_140a2f6e0(var_158)
    
    void* rsi_2 = *rax_66
    sub_14085cbc0(rsi_2, rax_66[1], rax_66[2].d, 0)
    int64_t* rcx_67 = *(rsi_2 + 0x68)
    int64_t* var_1a0 = rcx_67
    
    if (rcx_67 != 0)
        rcx_67[9].d += 1
    
    if (arg1 + 0xe60 != &var_1a0)
        int64_t* rdx_21 = *(arg1 + 0xe60)
        *(arg1 + 0xe60) = rcx_67
        
        if (rdx_21 != 0)
            rdx_21[9].d -= 1
            
            if (rdx_21[9].d == 1)
                sub_140a2f6e0(rdx_21)
    else if (rcx_67 != 0)
        rcx_67[9].d -= 1
        
        if (rcx_67[9].d == 1)
            sub_140a2f6e0(var_1a0)
    
    void* rdi_7 = rcx_60 + 0x10
    int64_t r14_4 = sx.q(*(rdi_7 + 0x28))
    int32_t rax_79 = (r14_4 + 1).d
    *(rdi_7 + 0x28) = rax_79
    
    if (rax_79 s> *(rdi_7 + 0x2c))
        sub_14083a490(rdi_7, r14_4.d)
    
    void* rax_80 = *(rdi_7 + 0x20)
    void* rcx_78 = *(arg1 + 0xe60)
    
    if (rax_80 != 0)
        rdi_7 = rax_80
    
    *(rdi_7 + (r14_4 << 3)) = rcx_78
    
    if (rcx_78 != 0)
        *(rcx_78 + 0x48) += 1
    
    int64_t* var_e8 = rbx_14
    *(*arg3 + 0x4c) = 2
    
    if (rbx_14 != 0)
        rbx_14[9].d += 1
    
    sub_14084e1b0(*arg3, &var_e8)
    int32_t rax_82 = *(rsi_2 + 0xc)
    *(rsi_2 + 0xc) -= 1
    
    if (rax_82 == 1)
        int64_t* rax_83 = sub_140a242a0()
        (**rax_83)(rax_83, rsi_2, zx.q(*(rsi_2 + 8)), 2)
    
    if (rbx_14 != 0)
        rbx_14[9].d -= 1
        
        if (rbx_14[9].d == 1)
            sub_140a2f6e0(rbx_14)

if (var_158 != 0)
    var_158[9].d -= 1
    
    if (var_158[9].d == 1)
        sub_140a2f6e0(var_158)

sub_140b37f60("Niagara")
int64_t result = sub_140746840(&var_1dc)
__security_check_cookie(rax_1 ^ &var_228)
return result
