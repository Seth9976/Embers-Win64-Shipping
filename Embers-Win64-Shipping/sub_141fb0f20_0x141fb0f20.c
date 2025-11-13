// 函数: sub_141fb0f20
// 地址: 0x141fb0f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
int64_t* r13 = arg1
int64_t* rcx = arg1[0xee]
int64_t* rax_3 = (*(*rcx + 0x28))(rcx)
sub_141fbf040(r13, 0)
uint64_t var_298
uint64_t var_290
int64_t* rax_4

if (r13[0x165].d s<= 0)
    var_298 = 0
    rax_4 = &var_298
else
    int64_t* rcx_3 = *r13[0x164]
    rax_4 = (*(*rcx_3 + 0x18))(rcx_3, &var_290)

int32_t* result
int32_t var_2c8

if (*rax_4 != data_143f3d668)
    int32_t rdi_4 = r13[0x1c7].d - *(r13 + 0xe64)
    int64_t var_d8
    __builtin_memset(&var_d8, 0, 0x2c)
    int32_t var_ac_1 = 0x80
    int32_t var_a8_1 = 0xffffffff
    int32_t var_a4_1 = 0
    int64_t var_98_1 = 0
    int32_t var_90_1 = 0
    int64_t var_128 = 0
    int32_t var_120_1 = 0
    int32_t var_fc_1 = 0x80
    int64_t var_118
    __builtin_memset(&var_118, 0, 0x1c)
    int32_t var_f8_1 = 0xffffffff
    int32_t var_f4_1 = 0
    int64_t var_e8_1 = 0
    int32_t var_e0_1 = 0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    
    if (rdi_4 s> 0)
        sub_1407c2fa0(&var_d8, rdi_4)
        int32_t rdx_4
        
        if (rdi_4 u< 4)
            rdx_4 = 1
        else
            uint32_t rdi_5 = rdi_4 u>> 1
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rdi_5 + 8)
            int32_t rcx_7
            
            if (rdi_5 == 0xfffffff8)
                rcx_7 = 0x20
            else
                rcx_7 = 0x1f - temp0_2
            
            int32_t rcx_9 = rcx_7 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rdi_5 + 7)
            
            if (rcx_9 == 0)
                rdx_4 = 1
            else
                rdx_4 = 1 << ((not.d(rcx_9)).b & (0x20 - (0x1f - temp0_3)))
        
        if (var_90_1 == 0 || var_90_1 s< rdx_4)
            int32_t var_90_2 = rdx_4
            sub_1406dcb10(&var_d8)
    
    int32_t rdi_9 = (r13[0x1c7].d - *(r13 + 0xe64)) << 2
    
    if (rdi_9 s> var_120_1 - var_f4_1)
        sub_14090a510(&var_128, rdi_9)
        int32_t rax_17
        
        if (rdi_9 u< 4)
            rax_17 = 1
        else
            uint32_t rdi_10 = rdi_9 u>> 1
            uint64_t rflags_3
            int32_t temp0_4
            temp0_4, rflags_3 = _bit_scan_reverse(rdi_10 + 8)
            int32_t rcx_14
            
            if (rdi_10 == 0xfffffff8)
                rcx_14 = 0x20
            else
                rcx_14 = 0x1f - temp0_4
            
            int32_t rcx_16 = rcx_14 << 0x1a s>> 0x1f
            uint64_t rflags_4
            char temp0_5
            temp0_5, rflags_4 = _bit_scan_reverse(rdi_10 + 7)
            
            if (rcx_16 == 0)
                rax_17 = 1
            else
                rax_17 = 1 << ((not.d(rcx_16)).b & (0x20 - (0x1f - temp0_5)))
        
        if (var_e0_1 == 0 || var_e0_1 s< rax_17)
            int32_t var_e0_2 = rax_17
            sub_141fc32e0(&var_128)
    
    int32_t zmm0_1 = r13[0x1c4].d
    void* rsi_2 = &r13[0xf4]
    int64_t var_238 = 0
    int32_t var_218 = 0
    int32_t r15_1 = 0
    int32_t var_2d0 = 0
    int32_t var_230_1 = 0
    int32_t var_21c_1 = 0
    int64_t var_210_1 = 0
    char var_208_1 = 0
    sub_14059a980(rsi_2, 0)
    int512_t zmm1_1 = sub_141fb04e0(&r13[0x131], 0)
    int32_t var_2a8_1 = 0
    var_298 = 0
    int32_t r14_3 = 0
    var_290 = 0
    char rax_18 = *(r13 + 0xe29)
    int32_t var_284_1 = 0
    void* const rdi_12 = *(r13[0x11] + 0x68)
    void* rax_20
    int64_t rax_21
    void* rdx_7
    
    if (rdi_12 != 0)
        rax_20 = sub_14254d5d0()
        rdx_7 = *(rdi_12 + 0x10)
        rax_21 = sx.q(*(rax_20 + 0x38))
    
    if (rdi_12 == 0 || rax_21.d s> *(rdx_7 + 0x38)
            || *(*(rdx_7 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
        rdi_12 = nullptr
    
    void** rax_23 = j_sub_140a82f30(0x10)
    void** r12_1 = rax_23
    
    if (rax_23 == 0)
        r12_1 = nullptr
    else
        *rax_23 = rdi_12 + 0x380
        r12_1[1].b = *(rdi_12 + 0x380)
        *(rdi_12 + 0x380) = 1
    
    int32_t var_2d4
    int64_t var_2a0
    void* rdi_19
    
    if ((*(*rax_3 + 0x28))(rax_3) != 0)
        (*(*rax_3 + 0xf8))(rax_3, zx.q(*(r13 + 0xbec)))
        (*(*rax_3 + 0x100))(rax_3, zx.q(r13[0x17e].d))
        rax_3[7] = 0x1000000
        char rax_29 = *(r13 + 0xb0c)
        *(r13 + 0xb0c) = 1
        
        while (true)
            rdi_19 = zx.q(rax_18)
            int64_t rax_30 = 0
            
            if (rdi_19.b != 0)
                int64_t* rcx_27 = rax_3[1]
                var_2d4 = 0
                int32_t* rdx_10 = *rcx_27
                
                if (&rdx_10[1] u> rcx_27[1])
                    int32_t* rdx_11 = &var_2d4
                    
                    if ((*(rax_3 + 0x29) & 0x20) != 0)
                        sub_140b54070(rax_3, rdx_11, zmm1_1)
                    else
                        (*(*rax_3 + 0x150))(rax_3, rdx_11, 4)
                else
                    var_2d4 = *rdx_10
                    *rcx_27 += 4
                
                rax_30 = (*(*rax_3 + 0x20))(rax_3) + zx.q(var_2d4)
            
            int64_t r15_2 = r13[0x21a]
            r13[0x21a] = rax_30
            int64_t* rcx_31 = rax_3[1]
            var_2a0 = 0
            int64_t* rdx_12 = *rcx_31
            
            if (&rdx_12[1] u> rcx_31[1])
                int64_t* rdx_13 = &var_2a0
                
                if ((*(rax_3 + 0x29) & 0x20) != 0)
                    sub_140b540d0(rax_3, rdx_13, zmm1_1)
                else
                    (*(*rax_3 + 0x150))(rax_3, rdx_13, 8)
            else
                var_2a0 = *rdx_12
                *rcx_31 += 8
            
            int64_t rax_40 = (*(*rax_3 + 0x20))(rax_3)
            var_2a0 += rax_40
            
            if (*(r13 + 0xbe4) u>= 6)
                int64_t* rcx_34 = rax_3[1]
                var_2d4 = 0xffffffff
                int32_t* rdx_14 = *rcx_34
                
                if (&rdx_14[1] u> rcx_34[1])
                    int32_t* rdx_15 = &var_2d4
                    
                    if ((*(rax_3 + 0x29) & 0x20) != 0)
                        sub_140b54070(rax_3, rdx_15, zmm1_1)
                    else
                        (*(*rax_3 + 0x150))(rax_3, rdx_15, 4)
                else
                    var_2d4 = *rdx_14
                    *rcx_34 += 4
            
            if (*(r13 + 0xbe4) u>= 8)
                if (rdi_19.b == 0)
                    zmm1_1 = sub_141824070(rax_3, rsi_2, sub_14059a980(rsi_2, 0))
                    
                    if ((rax_3[5].b & 1) != 0)
                        int64_t rcx_51 = *(rsi_2 + 0x40)
                        
                        if (rcx_51 != 0)
                            *(rsi_2 + 0x40) = sub_140a84c80(rcx_51, 0, 0)
                        
                        *(rsi_2 + 0x48) = 0
                        zmm1_1 = sub_1405996f0(rsi_2, *(rsi_2 + 8) - *(rsi_2 + 0x34), 0)
                else
                    int64_t* rax_44 = j_sub_140a82f30(0xf0)
                    int64_t* rdi_15
                    
                    if (rax_44 == 0)
                        rdi_15 = nullptr
                    else
                        memset(rax_44, 0, 0xf0)
                        rdi_15 = sub_141fa4b50(rax_44)
                    
                    int64_t rsi_3 = sx.q(r13[0x132].d)
                    int32_t rax_46 = (rsi_3 + 1).d
                    r13[0x132].d = rax_46
                    
                    if (rax_46 s> *(r13 + 0x994))
                        sub_1405a4d70(&r13[0x131])
                    
                    int64_t r14_4 = r13[0x131]
                    *(r14_4 + (rsi_3 << 3)) = rdi_15
                    int512_t zmm1_2 = sub_141824070(rax_3, rdi_15, zmm1_1)
                    
                    if ((rax_3[5].b & 1) != 0)
                        int64_t rcx_40 = rdi_15[8]
                        
                        if (rcx_40 != 0)
                            rdi_15[8] = sub_140a84c80(rcx_40, 0, 0)
                        
                        rdi_15[9].d = 0
                        zmm1_2 = sub_1405996f0(rdi_15, rdi_15[1].d - *(rdi_15 + 0x34), 0)
                    
                    void* rdi_16 = *(r14_4 + (rsi_3 << 3))
                    int512_t zmm1_3 = sub_141fa85b0(rax_3, rdi_16 + 0x50, zmm1_2)
                    
                    if ((rax_3[5].b & 1) != 0)
                        int64_t rcx_43 = *(rdi_16 + 0x90)
                        
                        if (rcx_43 != 0)
                            *(rdi_16 + 0x90) = sub_140a84c80(rcx_43, 0, 0)
                        
                        *(rdi_16 + 0x98) = 0
                        zmm1_3 =
                            sub_14084bc50(rdi_16 + 0x50, *(rdi_16 + 0x58) - *(rdi_16 + 0x84), 0)
                    
                    uint64_t* rdi_18 = *(r14_4 + (rsi_3 << 3)) + 0xa0
                    sub_141fa7f50(rax_3, rdi_18, zmm1_3)
                    
                    if ((rax_3[5].b & 1) != 0)
                        int64_t rcx_46 = rdi_18[8]
                        
                        if (rcx_46 != 0)
                            rdi_18[8] = sub_140a84c80(rcx_46, 0, 0)
                        
                        rdi_18[9].d = 0
                        sub_1409b3740(rdi_18, rdi_18[1].d - *(rdi_18 + 0x34), 0)
                    
                    zmm1_1 = sub_141814890(&r13[0xf4], *(r14_4 + (rsi_3 << 3)))
                    rdi_19 = zx.q(rax_18)
            
            (*(*rax_3 + 0x178))(rax_3, var_2a0)
            int32_t rsi_4 = var_2d0
            int32_t r14_5 = -1
            
            if (rdi_19.b != 0)
                r14_5 = rsi_4
            
            int64_t rax_53 = (*(*rax_3 + 0x20))(rax_3)
            char rax_54
            rax_54, zmm1_1 = sub_141fc0ee0(r13, rax_3, &var_238, 1, zmm1_1, &var_218)
            
            if (rax_54 == 0)
                char var_208_2 = 1
            else
                if (var_218.d f<= zmm0_1)
                label_141fb16e3:
                    var_2d0 = var_230_1
                    
                    if (rdi_19.b != 0 && var_230_1 - 1 s>= r14_5)
                        int64_t rdi_20 = sx.q(var_2a8_1)
                        int32_t rcx_58 = (rdi_20 + 1).d
                        var_2a8_1 = rcx_58
                        uint64_t rcx_60
                        
                        if (rcx_58 s<= var_284_1)
                            rcx_60 = var_298
                        else
                            sub_1405a4d70(&var_290)
                            rcx_60 = var_290
                            var_298 = rcx_60
                            var_2a8_1 = rcx_58
                        
                        *(rcx_60 + (rdi_20 << 3)) = r14_5
                        *(rcx_60 + (rdi_20 << 3) + 4) = var_230_1 - 1
                    
                    r13[0x21a] = r15_2
                    
                    if ((*(rax_3 + 0x29) & 1) == 0)
                        int64_t rax_59 = (*(*rax_3 + 0x28))(rax_3)
                        int64_t rdx_35 = *rax_3
                        
                        if ((*(rdx_35 + 0x20))(rax_3, rdx_35) s< rax_59)
                            rsi_2 = &r13[0xf4]
                            continue
                    
                    r14_3 = var_284_1
                    r15_1 = var_2d0
                    *(r13 + 0xb0c) = rax_29
                    break
                
                (*(*rax_3 + 0x178))(rax_3, rax_53)
                
                if (rsi_4 != 0)
                    zmm1_1 = sub_14177d850(&var_238, rsi_4, var_230_1 - rsi_4, 1)
                
                if (var_208_1 == 0)
                    goto label_141fb16e3
            
            sub_141fbe070(r13, 0)
            r13[0x21a] = r15_2
            *(r13 + 0xb0c) = rax_29
            goto label_141fb189a
    
    int64_t* rcx_63 = r13[0xee]
    int64_t* rax_63 = (*(*rcx_63 + 0x20))(rcx_63)
    (*(*rax_63 + 0xf8))(rax_63, zx.q(*(r13 + 0xbec)))
    (*(*rax_63 + 0x100))(rax_63, zx.q(r13[0x17e].d))
    rdi_19 = zx.q(rax_18)
    int32_t rsi_6 = -1
    
    if (rdi_19.b != 0)
        rsi_6 = r15_1
    
    while ((*(*rax_63 + 0x30))(rax_63) == 0)
        int64_t* rcx_67 = r13[0xee]
        
        if ((*(*rcx_67 + 0x68))(rcx_67) == 0)
            break
        
        int64_t rax_69 = (*(*rax_63 + 0x20))(rax_63)
        char rax_70
        rax_70, zmm1_1 = sub_141fc0ee0(r13, rax_63, &var_238, 1, zmm1_1, &var_218)
        
        if (rax_70 == 0)
            char var_208_3 = 1
            goto label_141fb1895
        
        if (var_218.d f> zmm0_1)
            (*(*rax_63 + 0x178))(rax_63, rax_69)
            
            if (r15_1 != 0)
                sub_14177d850(&var_238, r15_1, var_230_1 - r15_1, 1)
            
            r15_1 = var_230_1
            var_2d0 = r15_1
            break
        
        r15_1 = var_230_1
        var_2d0 = r15_1
    
    if (var_208_1 == 0)
        if (rdi_19.b != 0 && r15_1 - 1 s>= rsi_6)
            int64_t rdi_24 = sx.q(var_2a8_1)
            int32_t rcx_75 = (rdi_24 + 1).d
            var_2a8_1 = rcx_75
            uint64_t rcx_77
            
            if (rcx_75 s<= r14_3)
                rcx_77 = var_298
            else
                sub_1405a4d70(&var_290)
                rcx_77 = var_290
                var_298 = rcx_77
                var_2a8_1 = rcx_75
            
            *(rcx_77 + (rdi_24 << 3)) = rsi_6
            *(rcx_77 + (rdi_24 << 3) + 4) = r15_1 - 1
        
        if (r12_1 != 0)
            **r12_1 = r12_1[1].b
            j_sub_140a74f90(r12_1)
        
        void* rsi_7 = &r13[0x1c6]
        int32_t rdi_25 = *(rsi_7 + 0x28)
        void* rbx_3 = rsi_7 + 0x10
        var_2c8 = 0
        int32_t var_2c4_1 = 1
        void* var_240_1 = rbx_3
        void* var_2c0_1 = rbx_3
        int32_t var_2b8_1 = 0xffffffff
        int64_t var_2b4_1 = 0
        
        if (rdi_25 != 0)
            sub_14059bdd0(&var_2c8)
            rdi_25 = *(rbx_3 + 0x18)
        
        int32_t rdx_44 = *(rsi_7 + 0x28)
        int128_t zmm0_2 = var_2c8.o
        double zmm2[0x2] = var_2b8_1.o
        var_2c8 = rdx_44 s>> 5
        char rcx_82 = rdx_44.b & 0x1f
        int128_t var_170_1 = zmm0_2
        uint64_t var_178 = rsi_7
        zmm0_2 = var_178.o
        int32_t var_2c4_2 = 1 << rcx_82
        int64_t var_248_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_2b4_1.d = rdx_44
        var_2b4_1:4.d = rdx_44 & 0xffffffe0
        zmm1_1.o = var_170_1
        int128_t var_268 = zmm0_2
        int128_t var_258_1 = zmm1_1.o
        
        if (rdx_44 != rdi_25)
            sub_14059bdd0(&var_2c8)
            var_240_1 = rbx_3
        
        uint64_t rax_83 = (0xffffffff << rcx_82).q u>> 0x20
        var_290 = rax_83
        int64_t r14_6 = 0
        void* var_280
        uint64_t var_270
        void* var_200
        int64_t var_1f8
        
        while (true)
            int64_t rcx_84 = sx.q(var_258_1:0xc.d)
            
            if (rcx_84.d != rax_83.d || var_258_1.q != rbx_3)
                rax_83.b = 0
            else
                rax_83.b = 1
            
            int64_t* rdx_45 = var_268.q
            
            if (rax_83.b == 0 || rdx_45 != rsi_7)
                rax_83.b = 1
            else
                rax_83.b = 0
            
            if (rax_83.b == 0)
                break
            
            void* r12_2 = *(*rdx_45 + rcx_84 * 0x10)
            var_280 = r12_2
            int64_t var_1c4 = *(sub_140d21d80(r12_2) + 0x18)
            int64_t var_1a0
            sub_140b63b70(&var_1c4, &var_1a0)
            sub_142441630(&var_1f8, &var_1a0)
            int64_t rcx_90 = var_1a0
            
            if (rcx_90 != 0)
                sub_140a74f90(rcx_90)
            
            sub_14062d5f0(&r13[0x1ae], &var_2d4, &var_1f8)
            int64_t rax_86 = sx.q(var_2d4)
            void* const rcx_94
            
            if (rax_86.d == 0xffffffff)
                rcx_94 = nullptr
            else
                rcx_94 = (rax_86 << 5) + r13[0x1ae]
            
            int64_t rcx_95 = var_1f8
            int64_t rbx_4 = r13[0x1ac]
            int64_t rdi_26 = sx.q(*(rcx_94 + 0x10)) * 3
            
            if (rcx_95 != 0)
                sub_140a74f90(rcx_95)
            
            void var_1d0
            sub_14077a5e0(&var_d8, &var_1d0, rbx_4 + 0x10 + (rdi_26 << 3), nullptr)
            *(rbx_4 + (rdi_26 << 3) + 0x14) = 1
            int64_t rsi_8 = 0
            int64_t rax_88 = sx.q(*(r12_2 + 0xa0))
            int64_t** rbx_5 = *(r12_2 + 0x98)
            var_178 = 0
            var_170_1.q = 0
            zmm2[1] = 0
            int32_t var_150_1 = 0
            uint64_t r15_4 = rax_88 << 3 u>> 3
            int32_t var_14c_1 = 0x80
            var_170_1:8.q = 0
            
            if (rbx_5 u> &rbx_5[rax_88])
                r15_4 = 0
            
            zmm2[0] = 0
            int32_t var_148_1 = 0xffffffff
            int32_t var_144_1 = 0
            int64_t var_138_1 = 0
            
            if (r15_4 != 0)
                do
                    int64_t* rdi_27 = *rbx_5
                    
                    if (rdi_27 != 0 && sub_141dce3a0(rdi_27) != 0)
                        void var_1cc
                        int64_t var_190
                        int32_t* rax_92 = sub_140960120(&r13[0xf4], &var_1cc, 
                            sub_140d21830(rdi_27, &var_190, 0, 0))
                        int64_t rcx_100 = var_190
                        int32_t r14_7 = *rax_92
                        
                        if (rcx_100 != 0)
                            sub_140a74f90(rcx_100)
                        
                        if (r14_7 == 0xffffffff)
                            void var_1c8
                            int32_t* rax_95 = sub_141fb2f50(&r13[0x108], &var_1c8, 
                                sub_140d21830(rdi_27, &var_2c8, 0, 0))
                            int64_t rcx_105 = var_2c8.q
                            int32_t r14_8 = *rax_95
                            
                            if (rcx_105 != 0)
                                sub_140a74f90(rcx_105)
                            
                            if (r14_8 == 0xffffffff)
                                void var_1bc
                                sub_140d3a3a0(&var_1bc, rdi_27)
                                sub_141fa1cf0(&var_128, &var_270, &var_1bc, nullptr)
                            else
                                sub_1420e0c80(r13[0x28], rdi_27, 1, 1)
                        else
                            (*(*r13 + 0x438))(r13, rdi_27)
                            sub_1420e0c80(r13[0x28], rdi_27, 1, 1)
                    
                    rbx_5 = &rbx_5[1]
                    rsi_8 += 1
                while (rsi_8 != r15_4)
            
            int64_t* var_1e0 = nullptr
            int32_t var_1d8_1 = 0
            sub_141fc5510(r13, &var_1e0, r12_2)
            int64_t* r14_9 = var_1e0
            int64_t* rbx_6 = r14_9
            void* rcx_110 = &r14_9[sx.q(var_1d8_1)]
            int64_t rdi_28 = 0
            uint64_t rsi_12 = (rcx_110 - r14_9 + 7) u>> 3
            
            if (r14_9 u> rcx_110)
                rsi_12 = 0
            
            if (rsi_12 != 0)
                do
                    void var_1a8
                    sub_140d3a3a0(&var_1a8, *rbx_6)
                    sub_141fa1cf0(&var_128, &var_200, &var_1a8, nullptr)
                    rdi_28 += 1
                    rbx_6 = &rbx_6[1]
                while (rdi_28 != rsi_12)
            
            sub_140b91690(&var_88, &var_2a0, &var_280, nullptr)
            
            if (r14_9 != 0)
                sub_140a74f90(r14_9)
            
            r14_6 = 0
            int32_t var_130_1 = 0
            sub_14100e680(&var_178)
            var_258_1:8.d &= not.d(var_268:0xc.d)
            sub_14059bdd0(&var_268:8)
            rax_83 = var_290
            rsi_7 = &r13[0x1c6]
            rbx_3 = var_240_1
        
        if (*(rsi_7 + 8) != *(rsi_7 + 0x34))
            int32_t rax_100 = *(rsi_7 + 0xc)
            *(rsi_7 + 8) = 0
            
            if (rax_100 s< 0 && rax_100 != 0)
                sub_1405a5410(rsi_7, 0)
            
            *(rsi_7 + 0x30) = 0xffffffff
            *(rsi_7 + 0x34) = 0
            sub_140774790(rsi_7 + 0x10)
            int64_t rcx_119 = sx.q(*(rsi_7 + 0x48))
            void* rdi_29 = rsi_7 + 0x38
            void* rax_101 = *(rdi_29 + 8)
            
            if (rcx_119 s> 0)
                if (rax_101 != 0)
                    rdi_29 = rax_101
                
                __builtin_memset(rdi_29, 0xffffffff, rcx_119 << 2)
        
        rdi_19 = zx.q(*(r13 + 0xb09))
        *(r13 + 0xb09) = 1
        char var_2d7_2 = rdi_19.b
        sub_140d3a3a0(&var_2a0, r13[0x11])
        
        if (sub_140d3e110(&var_2a0) != 0)
            sub_142155810(sub_140d3c6e0(&var_2a0), 1)
        
        if (rax_18 == 0)
            int32_t rsi_14 = var_2d0
            var_1f8 = var_238
            int32_t var_1f0_2 = rsi_14
            var_2c8.o = var_1f8.o
            sub_141fbf8e0(r13, &var_2c8, &var_d8)
        else
            int32_t rbx_7 = 0
            void* rdi_30 = r13[0x11]
            var_200 = rdi_30
            var_2d4 = 0
            
            if (var_2a8_1 s> 0)
                uint64_t r12_3 = var_298
                int64_t rax_104 = 0
                uint64_t rdx_64 = r12_3
                int64_t var_240_2 = 0
                var_290 = rdx_64
                
                do
                    if (rax_104 s< 0 || rbx_7 s>= r13[0x132].d)
                        rax_104.b = 0
                    else
                        rax_104.b = 1
                    
                    if (rax_104.b != 0)
                        int32_t var_2b8_3 = 0xffffffff
                        int32_t var_2c4_3 = 1
                        uint64_t r14_11 = *(r12_3 - rdx_64 + r13[0x131]) + 0xa0
                        var_2c8 = 0
                        int32_t rdi_31 = *(r14_11 + 0x28)
                        void* rsi_13 = r14_11 + 0x10
                        void* var_2c0_3 = rsi_13
                        int64_t var_2b4_2 = 0
                        
                        if (rdi_31 != 0)
                            sub_14059bdd0(&var_2c8)
                            rdi_31 = *(rsi_13 + 0x18)
                        
                        int32_t rdx_65 = *(r14_11 + 0x28)
                        int128_t zmm0_3 = var_2c8.o
                        zmm2 = var_2b8_3.o
                        var_2c8 = rdx_65 s>> 5
                        char rcx_128 = rdx_65.b & 0x1f
                        int128_t var_170_2 = zmm0_3
                        var_178 = r14_11
                        zmm0_3 = var_178.o
                        int32_t var_2c4_4 = 1 << rcx_128
                        double var_160_2[0x2] = zmm2
                        int64_t var_248_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                        var_2b4_2.d = rdx_65
                        var_2b4_2:4.d = rdx_65 & 0xffffffe0
                        var_268 = zmm0_3
                        int128_t var_258_2 = var_170_2
                        
                        if (rdx_65 != rdi_31)
                            sub_14059bdd0(&var_2c8)
                        
                        void* r13_2 = var_200
                        
                        while (true)
                            int64_t rdx_66 = sx.q(var_258_2:0xc.d)
                            int32_t rax_111
                            
                            if (rdx_66.d != ((0xffffffff << rcx_128).q u>> 0x20).d
                                    || var_258_2.q != rsi_13)
                                rax_111.b = 0
                            else
                                rax_111 = 1
                            
                            int64_t rcx_130 = var_268.q
                            
                            if (rax_111.b == 0 || rcx_130 != r14_11)
                                rax_111 = 1
                            else
                                rax_111.b = 0
                            
                            if (rax_111.b == 0)
                                break
                            
                            int32_t* rdi_34 = (rdx_66 << 4) + *rcx_130
                            sub_141fb2ed0(r13_2 + 0x1a50, &var_2d0, rdi_34)
                            int64_t rax_112 = sx.q(var_2d0)
                            
                            if (rax_112.d != 0xffffffff)
                                void* rcx_132 = *(r13_2 + 0x1a50) + rax_112 * 0x18
                                
                                if (rcx_132 != 0)
                                    int64_t* rcx_133 = *(rcx_132 + 8)
                                    
                                    if (rcx_133 != 0)
                                        sub_141f83fe0(rcx_133, 1, rdi_34[1].b)
                            
                            var_258_2:8.d &= not.d(var_268:0xc.d)
                            sub_14059bdd0(&var_268:8)
                        
                        r13 = arg1
                        rbx_7 = var_2d4
                    
                    int64_t rcx_135 = sx.q(*r12_3)
                    var_1f8 = (rcx_135 << 5) + var_238
                    int32_t var_1f0_1 = *(r12_3 + 4) - rcx_135.d
                    var_2c8.o = var_1f8.o
                    sub_141fbf8e0(r13, &var_2c8, &var_d8)
                    rbx_7 += 1
                    rdx_64 = var_290
                    rax_104 = var_240_2 + 1
                    r12_3 += 8
                    var_2d4 = rbx_7
                    var_240_2 = rax_104
                while (rbx_7 s< var_2a8_1)
                
                rdi_30 = var_200
                r14_6 = 0
            
            sub_140ba2630(rdi_30 + 0x1a50, 0)
            rdi_19 = zx.q(var_2d7_2)
        
        if (sub_140d3e110(&var_2a0) != 0)
            sub_142155810(sub_140d3c6e0(&var_2a0), 0)
        
        *(r13 + 0xb09) = rdi_19.b
        void* rax_125 = r13[0x11]
        
        if (rax_125 != 0)
            void* r8_21 = nullptr
            int32_t rdx_72 = var_120_1 - var_f4_1
            int32_t rsi_15 = 0
            var_280 = nullptr
            int64_t var_278_1 = 0
            
            if (rdx_72 s> 0)
                sub_1405c5570(&var_280, rdx_72)
                rax_125 = r13[0x11]
                r8_21 = var_280
                rsi_15 = var_278_1.d
            
            void** r15_7 = *(rax_125 + 0x70)
            int64_t r12_4 = 0
            uint64_t rdi_36 = sx.q(*(rax_125 + 0x78)) << 3 u>> 3
            
            if (r15_7 u> &r15_7[sx.q(*(rax_125 + 0x78))])
                rdi_36 = 0
            
            var_270 = rdi_36
            
            if (rdi_36 != 0)
                uint64_t rax_128 = rdi_36
                
                do
                    void* rdi_37 = *r15_7
                    
                    if (rdi_37 != 0)
                        int32_t rcx_143
                        rcx_143.b = sub_140b5b8a0(*(rdi_37 + 0x44), 0x66) == 0
                        
                        if ((*(rdi_37 + 0x48) != 0 | rcx_143.b) != 0)
                            r8_21 = var_280
                        else
                            void* rbx_8 = *(rdi_37 + 0x70)
                            
                            if (rbx_8 == 0)
                                r8_21 = var_280
                            else
                                uint8_t rax_130 = sub_141dce3a0(rbx_8)
                                int32_t* rax_132
                                
                                if (rax_130 == 0)
                                    rax_132 = sub_1408296b0(&var_88, &var_2a0, sub_141dc9840(rbx_8))
                                
                                int32_t* rax_133
                                
                                if (rax_130 != 0 || *rax_132 == 0xffffffff)
                                    sub_140d3a3a0(&var_290, rbx_8)
                                    rax_133 = sub_141fb3050(&var_128, &var_200, var_290)
                                
                                if ((rax_130 != 0 || *rax_132 == 0xffffffff)
                                        && *rax_133 == 0xffffffff)
                                    r8_21 = var_280
                                else
                                    int64_t r14_12 = sx.q(rsi_15)
                                    rsi_15 = (r14_12 + 1).d
                                    var_278_1.d = rsi_15
                                    
                                    if (rsi_15 s> var_278_1:4.d)
                                        sub_1405a4d70(&var_280)
                                        rsi_15 = var_278_1.d
                                    
                                    r8_21 = var_280
                                    *(r8_21 + (r14_12 << 3)) = rdi_37
                                    void* rcx_150 = *(rdi_37 + 0x98)
                                    
                                    if (rcx_150 != 0)
                                        int32_t* var_2e8
                                        var_2e8.d = 1
                                        int64_t* r8_24 = **(rcx_150 + 0x30)
                                        sub_1422b19f0(*(rcx_150 + 0x20), &r8_24[0xe], *r8_24, 
                                            rbx_8.d)
                                        r8_21 = var_280
                        
                        rax_128 = var_270
                    
                    r15_7 = &r15_7[1]
                    r12_4 += 1
                while (r12_4 != rax_128)
                
                r14_6 = 0
            
            void* r15_8 = r8_21
            void* rcx_152 = r8_21 + (sx.q(rsi_15) << 3)
            uint64_t r12_8 = (rcx_152 - r8_21 + 7) u>> 3
            
            if (r8_21 u> rcx_152)
                r12_8 = 0
            
            int128_t zmm0_4
            
            if (r12_8 != 0)
                do
                    uint64_t rbx_10 = *r15_8 + 0xa8
                    var_2c8 = 0
                    int32_t r8_26 = *(rbx_10 + 0x28)
                    void* rdi_38 = rbx_10 + 0x10
                    int32_t var_2c4_5 = 1
                    void* var_2c0_5 = rdi_38
                    int32_t var_2b8_5 = 0xffffffff
                    int64_t var_2b4_3 = 0
                    
                    if (r8_26 != 0)
                        sub_14059bdd0(&var_2c8)
                        r8_26 = *(rdi_38 + 0x18)
                    
                    int32_t rdx_78 = *(rbx_10 + 0x28)
                    zmm0_4 = var_2c8.o
                    zmm2 = var_2b8_5.o
                    var_2c8 = rdx_78 s>> 5
                    char rcx_155 = rdx_78.b & 0x1f
                    int128_t var_170_3 = zmm0_4
                    var_178 = rbx_10
                    zmm0_4 = var_178.o
                    int32_t var_2c4_6 = 1 << rcx_155
                    double var_160_3[0x2] = zmm2
                    int64_t var_248_3 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                    var_2b4_3.d = rdx_78
                    var_2b4_3:4.d = rdx_78 & 0xffffffe0
                    var_268 = zmm0_4
                    int128_t var_258_3 = var_170_3
                    
                    if (rdx_78 != r8_26)
                        sub_14059bdd0(&var_2c8)
                    
                    while (true)
                        int64_t rdx_79 = sx.q(var_258_3:0xc.d)
                        int32_t rax_141
                        
                        if (rdx_79.d != ((0xffffffff << rcx_155).q u>> 0x20).d
                                || var_258_3.q != rdi_38)
                            rax_141.b = 0
                        else
                            rax_141.b = 1
                        
                        int64_t* rcx_157 = var_268.q
                        
                        if (rax_141.b == 0 || rcx_157 != rbx_10)
                            rax_141.b = 1
                        else
                            rax_141.b = 0
                        
                        if (rax_141.b == 0)
                            break
                        
                        int64_t rax_143 = rdx_79 << 5
                        rdx_79.b = 1
                        sub_141faa150(*(rax_143 + *rcx_157 + 8), rdx_79.b)
                        var_258_3:8.d &= not.d(var_268:0xc.d)
                        sub_14059bdd0(&var_268:8)
                    
                    r15_8 += 8
                    r14_6 += 1
                while (r14_6 != r12_8)
                
                r13 = arg1
            
            uint64_t rbx_12 = r13[0x11] + 0x1468
            var_2c8 = 0
            int32_t r8_27 = *(rbx_12 + 0x28)
            rdi_19 = rbx_12 + 0x10
            int32_t var_2c4_7 = 1
            void* var_2c0_7 = rdi_19
            int32_t var_2b8_7 = 0xffffffff
            int64_t var_2b4_4 = 0
            
            if (r8_27 != 0)
                sub_14059bdd0(&var_2c8)
                r8_27 = *(rdi_19 + 0x18)
            
            int32_t rdx_80 = *(rbx_12 + 0x28)
            zmm0_4 = var_2c8.o
            zmm2 = var_2b8_7.o
            char rcx_163 = rdx_80.b & 0x1f
            var_2c8 = rdx_80 s>> 5
            double var_160_4[0x2] = zmm2
            var_178 = rbx_12
            int64_t var_248_4 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
            int32_t var_2c4_8 = 1 << rcx_163
            var_2b4_4.d = rdx_80
            var_2b4_4:4.d = rdx_80 & 0xffffffe0
            var_268 = var_178.o
            int128_t var_258_4 = zmm0_4
            
            if (rdx_80 != r8_27)
                sub_14059bdd0(&var_2c8)
            
            while (true)
                int64_t rdx_81 = sx.q(var_258_4:0xc.d)
                int32_t rax_149
                
                if (rdx_81.d != ((0xffffffff << rcx_163).q u>> 0x20).d || var_258_4.q != rdi_19)
                    rax_149.b = 0
                else
                    rax_149.b = 1
                
                int64_t* rcx_165 = var_268.q
                
                if (rax_149.b == 0 || rcx_165 != rbx_12)
                    rax_149.b = 1
                else
                    rax_149.b = 0
                
                if (rax_149.b == 0)
                    break
                
                int64_t rax_151 = rdx_81 << 5
                rdx_81.b = 1
                sub_141faa150(*(rax_151 + *rcx_165 + 8), rdx_81.b)
                var_258_4:8.d &= not.d(var_268:0xc.d)
                sub_14059bdd0(&var_268:8)
            
            void* rcx_169 = var_280
            
            if (rcx_169 != 0)
                sub_140a74f90(rcx_169)
        
        rdi_19.b = 1
    else
    label_141fb1895:
        sub_141fbe070(r13, 8)
    label_141fb189a:
        
        if (r12_1 != 0)
            **r12_1 = r12_1[1].b
            j_sub_140a74f90(r12_1)
        
        rdi_19.b = 0
    
    uint64_t rax_154 = var_298
    
    if (rax_154 != 0)
        sub_140a74f90(rax_154)
    
    sub_141fa5ad0(&var_238)
    int32_t var_40_2 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    sub_14100e680(&var_88)
    int32_t var_e0_3 = 0
    
    if (var_e8_1 != 0)
        sub_140a74f90(var_e8_1)
    
    sub_14100e680(&var_128)
    int32_t var_90_3 = 0
    
    if (var_98_1 != 0)
        sub_140a74f90(var_98_1)
    
    sub_140909ff0(&var_d8)
    result = zx.q(rdi_19.b)
else
    if (&r13[0x166] != &var_2c8)
        r13[0x166] = 0
        int64_t* rdi_2 = r13[0x167]
        
        if (rdi_2 != 0)
            r13[0x167] = 0
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    
    result.b = 0
__security_check_cookie(rax_1 ^ &var_308)
return result
