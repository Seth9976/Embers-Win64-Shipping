// 函数: sub_1403f5520
// 地址: 0x1403f5520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
uint128_t zmm6
uint128_t var_38 = zmm6
int32_t var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* r13 = *arg1
int64_t r15 = sx.q(*(arg1 + 0xc))
int32_t r14 = arg1[2].d
int32_t rdi = 0
int64_t* rsi = arg1
int32_t var_124 = 0
int32_t var_128 = 0
int64_t rbx = sx.q(*(r13 + 8))
int32_t i = arg5 * *(rsi + 0x14)
int64_t rax_2 = *(r13 + 0x20)
int32_t rcx = *(r13 + 4)
uint64_t r9 = zx.q(arg3)
int32_t var_134 = r15.d
int32_t var_110 = 0
var_188 = r14
int32_t var_170 = rbx.d
int64_t rdx = 0
void* var_98

do
    int64_t rcx_1 = sx.q(rdi)
    rdx += 1
    rdi += rcx + 0x800
    (&var_98)[rdx] = rsi + ((rcx_1 + 0x16) << 2)
while (rdx s< r15)

uint64_t r15_1 = 0
int32_t var_180 = 0
int32_t rax_7 = (rbx * 2).d
void* r8_2 = rsi + ((sx.q((rcx + 0x800) * r15.d) + sx.q((r15 * 3).d << 3) + 0x16) << 2)
int64_t rax_8 = sx.q(rax_7)
void* rcx_6 = r8_2 + (rax_8 << 2)
void* var_178 = r8_2
void* rcx_7 = rcx_6 + (rax_8 << 2)
void* rdx_1 = rcx_7 + (rax_8 << 2)
void* var_108 = rcx_7
int32_t rdx_2 = *(r13 + 0x28)

if (rdx_2 s>= 0)
    while (*(r13 + 0x30) << r15_1.b != i)
        r15_1 = zx.q(r15_1.d + 1)
        
        if (r15_1.d s> rdx_2)
            break
    
    var_180 = r15_1.d

int32_t rax_11

if (r15_1.d s<= rdx_2)
    rax_11 = 1 << r15_1.b

uint64_t result

if (r15_1.d s> rdx_2 || r9.d u> 0x4fb || arg4 == 0)
    result = 0xffffffff
else
    int32_t rcx_10 = *(rsi + 0x1c)
    int32_t rdx_4 = *(r13 + 0x30) * rax_11
    
    if (rcx_10 s> *(r13 + 0xc))
        rcx_10 = *(r13 + 0xc)
    
    if (arg2 == 0 || r9.d s<= 1)
        sub_1403f43c0(rsi, arg4, rdx_4, r15_1.d)
        *(rsi + 0x14)
        result = zx.q(divs.dp.d(sx.q(i), *(rsi + 0x14)))
    else
        void* r12_1 = arg6
        
        if (r12_1 == 0)
            void var_80
            sub_1403f7420(&var_80, arg2, r9.d)
            r9 = zx.q(arg3)
            r8_2 = var_178
            r12_1 = &var_80
            arg6 = &var_80
        
        if (r14 == 1)
            uint32_t rdi_3 = 0
            uint64_t rax_12 = 0
            int128_t zmm0
            int128_t zmm1
            
            if (rbx.d s>= 4)
                void* rcx_12 = r8_2 + 4
                uint64_t rax_15 = zx.q(((rbx - 4).d u>> 2) + 1)
                uint64_t i_25 = zx.q(rax_15.d)
                rdi_3 = (rax_15 << 2).d
                rax_12 = rax_15 << 2
                uint64_t i_1
                
                do
                    zmm0 = *(rcx_12 - 4)
                    zmm1 = *(rcx_12 + (rbx << 2) - 4)
                    
                    if (not(zmm0.d f> zmm1.d))
                        zmm0 = zmm1
                    
                    *(rcx_12 - 4) = zmm0.d
                    zmm0 = *rcx_12
                    zmm1 = *(rcx_12 + (rbx << 2))
                    
                    if (not(zmm0.d f> zmm1.d))
                        zmm0 = zmm1
                    
                    zmm1 = *(rcx_12 + 4)
                    *rcx_12 = zmm0.d
                    zmm0 = *(rcx_12 + (rbx << 2) + 4)
                    
                    if (not(zmm1.d f> zmm0.d))
                        zmm1 = zmm0
                    
                    zmm0 = *(rcx_12 + 8)
                    *(rcx_12 + 4) = zmm1.d
                    zmm1 = *(rcx_12 + (rbx << 2) + 8)
                    
                    if (not(zmm0.d f> zmm1.d))
                        zmm0 = zmm1
                    
                    *(rcx_12 + 8) = zmm0.d
                    rcx_12 += 0x10
                    i_1 = i_25
                    i_25 -= 1
                while (i_1 != 1)
            
            if (rdi_3 s< rbx.d)
                void* rcx_13 = r8_2 + (rax_12 << 2)
                uint64_t i_26 = zx.q(rbx.d - rdi_3)
                uint64_t i_2
                
                do
                    zmm0 = *rcx_13
                    zmm1 = *(rcx_13 + (rbx << 2))
                    
                    if (not(zmm0.d f> zmm1.d))
                        zmm0 = zmm1
                    
                    *rcx_13 = zmm0.d
                    rcx_13 += 4
                    i_2 = i_26
                    i_26 -= 1
                while (i_2 != 1)
        
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = __bsr_gprv_memv(*(r12_1 + 0x20))
        uint32_t rbx_1 = (r9 << 3).d
        uint32_t rdi_6 = *(r12_1 + 0x18) - temp0_1 - 1
        int32_t var_13c_1
        
        if (rdi_6 s>= rbx_1)
            var_13c_1 = 1
        label_1403f5821:
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = __bsr_gprv_memv(*(r12_1 + 0x20))
            rdi_6 = rbx_1
            *(r12_1 + 0x18) = temp0_2 + 1 + rbx_1
        else if (rdi_6 != 1)
            var_13c_1 = 0
        else
            int32_t rax_17 = sub_1403f72f0(r12_1, rdi_6.b + 0xe)
            var_13c_1 = rax_17
            
            if (rax_17 != 0)
                goto label_1403f5821
        
        int32_t var_138_1 = 0
        int32_t var_148_1 = 0
        int32_t var_140_1 = 6
        int64_t i_19 = 2
        
        if (rsi[3].d == 0 && rdi_6 + 0x10 s<= rbx_1)
            if (sub_1403f72f0(r12_1, 1) != 0)
                int32_t rax_23 = sub_1403f7510(r12_1, 6)
                var_138_1 = (0x10 << rax_23.b) + sub_1403f7340(r12_1, rax_23 + 4) - 1
                int32_t rax_27 = sub_1403f7340(r12_1, 3)
                int32_t rcx_20 = *(r12_1 + 0x18)
                uint64_t rflags_3
                int32_t temp0_3
                temp0_3, rflags_3 = __bsr_gprv_memv(*(r12_1 + 0x20))
                
                if (rcx_20 - temp0_3 + 1 s<= rbx_1)
                    var_148_1 = sub_1403f73c0(r12_1, &data_1436fdda0, 2)
                
                zmm6.d = _mm_cvtepi32_ps(zx.o(rax_27 + 1)).d f* 0.09375f
            
            uint64_t rflags_4
            int32_t temp0_5
            temp0_5, rflags_4 = __bsr_gprv_memv(*(r12_1 + 0x20))
            rdi_6 = *(r12_1 + 0x18) - temp0_5 - 1
        
        int32_t var_144_1
        int32_t var_130_1
        int32_t rbx_2
        
        if (r15_1.d s<= 0 || rdi_6 + 3 s> rbx_1)
            rbx_2 = 0
            var_130_1 = 0
            var_144_1 = 0
        else
            int32_t rax_33 = sub_1403f72f0(r12_1, 3)
            int32_t rdi_11 = *(r12_1 + 0x18)
            rbx_2 = rax_33
            var_130_1 = rax_33
            uint64_t rflags_5
            int32_t temp0_6
            temp0_6, rflags_5 = __bsr_gprv_memv(*(r12_1 + 0x20))
            rdi_6 = rdi_11 - temp0_6 - 1
            
            var_144_1 = rbx_2 == 0 ? 0 : rax_11
        
        int32_t rax_37
        
        if (rdi_6 + 3 s> rbx_1)
            rax_37 = 0
        else
            rax_37 = sub_1403f72f0(r12_1, 3)
        
        sub_140409670(r13, rsi[3].d, *(rsi + 0x1c), var_178, rax_37, r12_1, var_188, r15_1.d)
        int64_t rdi_13 = rbx << 2
        int64_t rax_38 = rdi_13 + 0xf
        
        if (rax_38 u<= rdi_13)
            rax_38 = 0xffffffffffffff0
        
        int64_t rax_39 = rax_38 & 0xfffffffffffffff0
        __chkstk(rax_39)
        uint64_t rdx_11 = zx.q(*(rsi + 0x1c))
        uint64_t rcx_28 = zx.q(rsi[3].d)
        void var_228
        void* rsp_1 = &var_228 - rax_39
        *(rsp_1 + 0x28) = r12_1
        *(rsp_1 + 0x20) = r15_1.d
        int64_t var_100[0x2]
        var_100[0] = rsp_1 + 0xa0
        sub_1403f7180(rcx_28, rdx_11, zx.q(rbx_2), rsp_1 + 0xa0)
        uint64_t rflags_6
        int32_t temp0_7
        temp0_7, rflags_6 = __bsr_gprv_memv(*(r12_1 + 0x20))
        int32_t var_118_1 = 2
        int32_t var_14c_1 = 5
        void* r12_2
        
        if (*(r12_1 + 0x18) - temp0_7 + 3 s> rbx_1)
            r12_2 = arg6
        else
            r12_2 = arg6
            var_118_1 = sub_1403f73c0(r12_2, &data_1436fdd9c, 5)
        
        int64_t rax_43 = rdi_13 + 0xf
        
        if (rax_43 u<= rdi_13)
            rax_43 = 0xffffffffffffff0
        
        int64_t rax_44 = rax_43 & 0xfffffffffffffff0
        __chkstk(rax_44)
        void* rsp_2 = rsp_1 - rax_44
        void* r13_2 = rsp_2 + 0xa0
        sub_14037e6c0(r13, r13_2, r15_1.d, var_188)
        int64_t rax_45 = rdi_13 + 0xf
        
        if (rax_45 u<= rdi_13)
            rax_45 = 0xffffffffffffff0
        
        int64_t rax_46 = rax_45 & 0xfffffffffffffff0
        __chkstk(rax_46)
        void* rsp_3 = rsp_2 - rax_46
        void* rbx_3 = rsp_3 + 0xa0
        uint32_t r14_2 = rbx_1 << 3
        int32_t rax_47 = sub_140403430(r12_2)
        int64_t rdi_14 = sx.q(rsi[3].d)
        int32_t r8_7 = rax_47
        int32_t var_11c_1 = rdi_14.d
        
        if (rdi_14.d s< *(rsi + 0x1c))
            void* r12_3 = rbx_3 + (rdi_14 << 2)
            int16_t* rax_48 = rax_2 + (rdi_14 << 1)
            
            do
                void* r9_4 = &rax_48[1]
                int32_t rdx_14 = sx.d(rax_48[1]) - sx.d(*rax_48)
                var_98 = r9_4
                uint64_t rdx_16 = zx.q((rdx_14 * var_188) << r15_1.b)
                uint64_t rcx_37 = zx.q(var_140_1)
                uint32_t rax_50 = (rdx_16 << 3).d
                uint32_t r15_2 = rdx_16.d
                
                if (rdx_16.d s< 0x30)
                    r15_2 = 0x30
                
                char rdx_17 = rcx_37.b
                
                if (rax_50 s< r15_2)
                    r15_2 = rax_50
                
                int32_t i_3 = 0
                
                if (r8_7 + (rcx_37 << 3).d s< r14_2)
                    while (i_3 s< *(r13_2 - rbx_3 + r12_3))
                        int32_t rax_52 = sub_1403f72f0(arg6, rdx_17)
                        int32_t rax_53 = sub_140403430(arg6)
                        r8_7 = rax_53
                        
                        if (rax_52 == 0)
                            break
                        
                        r14_2 -= r15_2
                        i_3 += r15_2
                        rdx_17 = 1
                        
                        if (rax_53 + 8 s>= r14_2)
                            break
                    
                    rsi = arg1
                    rdi_14 = zx.q(var_11c_1)
                    rcx_37 = zx.q(var_140_1)
                    r9_4 = var_98
                
                *r12_3 = i_3
                
                if (i_3 s> 0)
                    int32_t rax_55 = (rcx_37 - 1).d
                    int32_t rcx_40 = rax_55
                    
                    if (rax_55 s< 2)
                        rcx_40 = 2
                    
                    var_140_1 = rcx_40
                
                r15_1 = zx.q(var_180)
                rdi_14 = zx.q(rdi_14.d + 1)
                r12_3 += 4
                var_11c_1 = rdi_14.d
                rax_48 = r9_4
            while (rdi_14.d s< *(rsi + 0x1c))
            
            r12_2 = arg6
        
        int64_t rax_56 = rdi_13 + 0xf
        
        if (rax_56 u<= rdi_13)
            rax_56 = 0xffffffffffffff0
        
        int64_t rax_57 = rax_56 & 0xfffffffffffffff0
        __chkstk(rax_57)
        void* rsp_4 = rsp_3 - rax_57
        
        if (r8_7 + 0x30 s<= r14_2)
            var_14c_1 = sub_1403f73c0(r12_2, "~|wmW)", 7)
        
        int32_t r14_4 = arg3 << 6
        int32_t rcx_46 = r14_4 - sub_140403430(r12_2) - 1
        int32_t r14_5
        
        if (var_130_1 == 0 || r15_1.d s< 2 || rcx_46 s< ((r15_1 << 3) + 0x10).d)
            r14_5 = 0
        else
            r14_5 = 8
        
        int64_t rax_62 = rdi_13 + 0xf
        
        if (rax_62 u<= rdi_13)
            rax_62 = 0xffffffffffffff0
        
        int64_t rax_63 = rax_62 & 0xfffffffffffffff0
        __chkstk(rax_63)
        void* rsp_5 = rsp_4 - rax_63
        int64_t rax_64 = rdi_13 + 0xf
        
        if (rax_64 u<= rdi_13)
            rax_64 = 0xffffffffffffff0
        
        int64_t rax_65 = rax_64 & 0xfffffffffffffff0
        __chkstk(rax_65)
        void* rsp_6 = rsp_5 - rax_65
        *(rsp_6 + 0x90) = 0
        *(rsp_6 + 0x88) = 0
        *(rsp_6 + 0x80) = 0
        uint64_t r8_8 = zx.q(*(rsi + 0x1c))
        *(rsp_6 + 0x78) = arg6
        uint64_t rdx_20 = zx.q(rsi[3].d)
        *(rsp_6 + 0x70) = r15_1.d
        int32_t r15_3 = var_188
        *(rsp_6 + 0x68) = r15_3
        *(rsp_6 + 0x60) = rsp_6 + 0xa0
        *(rsp_6 + 0x58) = rsp_4 + 0xa0
        *(rsp_6 + 0x50) = rsp_5 + 0xa0
        int32_t var_e8
        *(rsp_6 + 0x48) = &var_e8
        *(rsp_6 + 0x40) = rcx_46 - r14_5
        *(rsp_6 + 0x38) = &var_128
        *(rsp_6 + 0x30) = &var_124
        *(rsp_6 + 0x28) = var_14c_1
        *(rsp_6 + 0x20) = r13_2
        int32_t rax_68 = sub_140403490(r13, rdx_20, r8_8, rbx_3)
        uint64_t r8_9 = zx.q(*(rsi + 0x1c))
        uint64_t rdx_21 = zx.q(rsi[3].d)
        *(rsp_6 + 0x30) = r15_3
        *(rsp_6 + 0x28) = arg6
        *(rsp_6 + 0x20) = rsp_4 + 0xa0
        sub_140409a10(r13, rdx_21, r8_9, var_178)
        int64_t r13_4 = sx.q(var_170 * r15_3)
        int64_t rax_72 = r13_4 + 0xf
        
        if (rax_72 u<= r13_4)
            rax_72 = 0xffffffffffffff0
        
        int64_t rax_73 = rax_72 & 0xfffffffffffffff0
        __chkstk(rax_73)
        int64_t r8_10 = sx.q(rdx_4)
        void* rsp_7 = rsp_6 - rax_73
        int64_t rbx_4 = sx.q(r8_10.d * r15_3)
        int64_t rax_76 = rbx_4 << 2
        int64_t rcx_50 = rax_76 + 0xf
        
        if (rcx_50 u<= rax_76)
            rcx_50 = 0xffffffffffffff0
        
        int64_t rcx_51 = rcx_50 & 0xfffffffffffffff0
        __chkstk(rcx_51)
        void* rsp_8 = rsp_7 - rcx_51
        void* rcx_52
        
        if (r15_3 != 2)
            rcx_52 = nullptr
        else
            rcx_52 = rsp_8 + 0xa0 + (r8_10 << 2)
        
        uint64_t r9_7 = zx.q(*(rsi + 0x1c))
        uint64_t r8_11 = zx.q(rsi[3].d)
        *(rsp_8 + 0x98) = &rsi[5]
        *(rsp_8 + 0x90) = rax_68
        *(rsp_8 + 0x88) = var_180
        *(rsp_8 + 0x80) = arg6
        *(rsp_8 + 0x78) = var_e8
        int64_t rax_83 = var_100[0]
        *(rsp_8 + 0x70) = r14_4 - r14_5
        *(rsp_8 + 0x68) = rax_83
        *(rsp_8 + 0x60) = var_124
        *(rsp_8 + 0x58) = var_128
        *(rsp_8 + 0x50) = var_118_1
        *(rsp_8 + 0x48) = var_144_1
        *(rsp_8 + 0x40) = rsp_5 + 0xa0
        *(rsp_8 + 0x38) = 0
        *(rsp_8 + 0x30) = rsp_7 + 0xa0
        *(rsp_8 + 0x28) = rcx_52
        *(rsp_8 + 0x20) = rsp_8 + 0xa0
        sub_140405fc0(0, r13, r8_11, r9_7)
        
        if (r14_5 s> 0)
            var_110 = sub_1403f7340(arg6, 1)
        
        int32_t r14_6 = var_188
        int32_t rcx_56 = rbx_1 - *(arg6 + 0x18)
        uint64_t rflags_7
        int32_t temp0_8
        temp0_8, rflags_7 = __bsr_gprv_memv(*(arg6 + 0x20))
        uint64_t r8_12 = zx.q(*(rsi + 0x1c))
        *(rsp_8 + 0x40) = r14_6
        *(rsp_8 + 0x38) = arg6
        *(rsp_8 + 0x30) = temp0_8 + rcx_56 + 1
        uint64_t rdx_28 = zx.q(rsi[3].d)
        *(rsp_8 + 0x28) = rsp_6 + 0xa0
        *(rsp_8 + 0x20) = rsp_4 + 0xa0
        sub_1404098a0(r13, rdx_28, r8_12, var_178)
        void* r12_5
        void* r15_5
        
        if (var_110 == 0)
            r12_5 = var_178
            r15_5 = r13
        else
            r15_5 = r13
            *(rsp_8 + 0x60) = rsi[5].d
            void* rax_91 = var_108
            *(rsp_8 + 0x58) = rsp_5 + 0xa0
            r12_5 = var_178
            *(rsp_8 + 0x50) = rax_91
            *(rsp_8 + 0x48) = rcx_6
            int32_t rax_93 = *(rsi + 0x1c)
            *(rsp_8 + 0x40) = r12_5
            *(rsp_8 + 0x38) = rax_93
            *(rsp_8 + 0x30) = rsi[3].d
            *(rsp_8 + 0x28) = rdx_4
            *(rsp_8 + 0x20) = r14_6
            sub_140404310(r15_5, rsp_8 + 0xa0, rsp_7 + 0xa0, zx.q(var_180))
        
        int32_t rax_96 = r14_6
        
        if (var_134 s> r14_6)
            rax_96 = var_134
        
        int64_t rcx_63 = sx.q(rax_96 * rdx_4) << 2
        int64_t rax_98 = rcx_63 + 0xf
        
        if (rax_98 u<= rcx_63)
            rax_98 = 0xffffffffffffff0
        
        int64_t rax_99 = rax_98 & 0xfffffffffffffff0
        __chkstk(rax_99)
        void* rsp_9 = rsp_8 - rax_99
        void* rcx_64 = rsp_9 + 0xa0
        var_170.q = rcx_64
        
        if (var_13c_1 == 0)
            *(rsp_9 + 0x38) = rax_11
            int32_t rax_101 = rsi[3].d
            *(rsp_9 + 0x30) = r14_6
            *(rsp_9 + 0x28) = rcx_10
            *(rsp_9 + 0x20) = rax_101
            sub_140405430(r15_5, rsp_8 + 0xa0, rcx_64, r12_5)
        else
            if (r13_4 s> 0)
                int64_t rcx_66
                int64_t rdi_19
                rdi_19, rcx_66 = __memfill_u32(r12_5, 0xc1e00000, r13_4)
                rcx_64 = var_170.q
            
            if (rbx_4 s> 0)
                __builtin_memset(rcx_64, 0, rbx_4 << 2)
        
        int64_t rcx_69 = sx.q(rdx_4)
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(rcx)
        int64_t r14_7 = rcx_69 << 2
        int64_t rdi_21 = 0
        var_100[0] = r14_7
        int64_t var_90[0x2]
        
        do
            int64_t rcx_70 = var_90[rdi_21]
            memmove(rcx_70, rcx_70 + r14_7, (((temp11_1 - temp10_1) s>> 1) - rcx_69.d + 0x800) << 2)
            rdi_21 += 1
        while (rdi_21 s< r15)
        
        int32_t r10_1 = *(rsi + 0x14)
        int64_t r11_1 = sx.q(var_188)
        int64_t r8_16 = 0
        int64_t r9_11 = 0
        
        do
            int32_t rcx_72 = sx.d(*(rax_2 + (sx.q(rcx_10) << 1))) * rax_11
            
            if (r10_1 != 1)
                int32_t temp0_9 = divs.dp.d(sx.q(rdx_4), r10_1)
                
                if (rcx_72 s>= temp0_9)
                    rcx_72 = temp0_9
            
            int64_t rdx_35 = sx.q(rcx_72)
            
            if (rdx_35 s< rcx_69)
                __builtin_memset(var_170.q + ((rdx_35 + r9_11) << 2), 0, (rcx_69 - rdx_35) << 2)
            
            r8_16 += 1
            r9_11 += rcx_69
        while (r8_16 s< r11_1)
        
        int32_t* r14_9 = var_100[0]
        int32_t r13_8 = var_188
        int64_t rdx_36 = 0
        
        do
            int64_t rax_112 = var_90[rdx_36]
            rdx_36 += 1
            (&var_108)[rdx_36] = rax_112 + ((0x800 - rcx_69) << 2)
        while (rdx_36 s< r15)
        
        int32_t r8_17 = r15.d
        void* r13_9
        
        if (r15.d == 2)
            r13_9 = var_170.q
            
            if (r13_8 == 1)
                int64_t rdi_23 = 0
                
                if (rcx_69 s>= 4)
                    void* rcx_76 = r13_9 + 4
                    int64_t i_27 = ((rcx_69 - 4) u>> 2) + 1
                    rdi_23 = i_27 << 2
                    int64_t i_4
                    
                    do
                        int32_t rax_113 = *(rcx_76 - 4)
                        rcx_76 += 0x10
                        *(r14_9 + rcx_76 - 0x14) = rax_113
                        *(r14_9 + rcx_76 - 0x10) = *(rcx_76 - 0x10)
                        *(r14_9 + rcx_76 - 0xc) = *(rcx_76 - 0xc)
                        *(rcx_76 + (rcx_69 << 2) - 8) = *(rcx_76 - 8)
                        i_4 = i_27
                        i_27 -= 1
                    while (i_4 != 1)
                
                if (rdi_23 s< rcx_69)
                    void* rcx_78 = (rdi_23 << 2) + r13_9
                    int64_t i_31 = rcx_69 - rdi_23
                    int64_t i_5
                    
                    do
                        int32_t rax_117 = *rcx_78
                        rcx_78 += 4
                        *(rcx_78 + r14_9 - 4) = rax_117
                        i_5 = i_31
                        i_31 -= 1
                    while (i_5 != 1)
        else if (r8_17 != 1)
            r13_9 = var_170.q
        else
            r13_9 = var_170.q
            
            if (r13_8 == 2)
                int64_t rdx_39 = 0
                float zmm0_1
                
                if (rcx_69 s>= 4)
                    void* rax_118 = r13_9 + 4
                    int64_t i_22 = ((rcx_69 - 4) u>> 2) + 1
                    rdx_39 = i_22 << 2
                    int64_t i_6
                    
                    do
                        zmm0_1 = *(rax_118 - 4)
                        rax_118 += 0x10
                        *(rax_118 - 0x14) = (zmm0_1 f+ *(rax_118 + r14_9 - 0x14)) * 0.5f
                        *(rax_118 - 0x10) = (*(rax_118 + r14_9 - 0x10) f+ *(rax_118 - 0x10)) * 0.5f
                        *(rax_118 - 0xc) = (*(rax_118 + r14_9 - 0xc) f+ *(rax_118 - 0xc)) * 0.5f
                        *(rax_118 - 8) = (*(rax_118 + (rcx_69 << 2) - 8) f+ *(rax_118 - 8)) * 0.5f
                        i_6 = i_22
                        i_22 -= 1
                    while (i_6 != 1)
                
                if (rdx_39 s< rcx_69)
                    void* rax_120 = (rdx_39 << 2) + r13_9
                    int64_t i_32 = rcx_69 - rdx_39
                    int64_t i_7
                    
                    do
                        zmm0_1 = *(r14_9 + rax_120)
                        rax_120 += 4
                        *(rax_120 - 4) = (zmm0_1 f+ *(rax_120 - 4)) * 0.5f
                        i_7 = i_32
                        i_32 -= 1
                    while (i_7 != 1)
        
        void* r12_8 = r13
        *(rsp_9 + 0x28) = var_180
        *(rsp_9 + 0x20) = r8_17
        sub_1403f6990(r12_8, zx.q(var_144_1), r13_9, &var_100)
        int64_t rbx_6 = 0
        int32_t rdi_27
        int32_t r12_9
        float zmm0_2
        float zmm1_2
        
        while (true)
            int64_t rax_121 = *(r12_8 + 0x48)
            int64_t rdi_24 = var_100[rbx_6]
            zmm0_2 = arg1[8].d
            zmm1_2 = *(arg1 + 0x44)
            *(rsp_9 + 0x50) = rcx
            *(rsp_9 + 0x48) = rax_121
            uint64_t r9_13 = 0xf
            uint64_t r8_19 = 0xf
            bool cond:7_1 = arg1[7].d s> 0xf
            *(rsp_9 + 0x40) = arg1[9].d
            
            if (cond:7_1)
                r9_13 = zx.q(arg1[7].d)
            
            bool cond:8_1 = *(arg1 + 0x3c) s> 0xf
            *(rsp_9 + 0x38) = *(arg1 + 0x4c)
            *(rsp_9 + 0x30) = zmm0_2
            *(rsp_9 + 0x28) = zmm1_2
            
            if (cond:8_1)
                r8_19 = zx.q(*(arg1 + 0x3c))
            
            arg1[7].d = r9_13.d
            *(rsp_9 + 0x20) = *(r12_8 + 0x30)
            *(arg1 + 0x3c) = r8_19.d
            zmm6 = sub_14037de40(rdi_24, rdi_24, r8_19, r9_13)
            
            if (var_180 == 0)
                r12_9 = var_148_1
                rdi_27 = var_138_1
            else
                int64_t rdx_42 = sx.q(*(r12_8 + 0x30))
                int64_t rax_125 = *(r12_8 + 0x48)
                zmm0_2 = arg1[8].d
                r12_9 = var_148_1
                uint64_t r8_20 = zx.q(arg1[7].d)
                *(rsp_9 + 0x50) = rcx
                *(rsp_9 + 0x48) = rax_125
                int32_t rax_126 = arg1[9].d
                int64_t rcx_83 = rdi_24 + (rdx_42 << 2)
                *(rsp_9 + 0x40) = r12_9
                *(rsp_9 + 0x38) = rax_126
                *(rsp_9 + 0x30) = zmm6.d
                *(rsp_9 + 0x28) = zmm0_2
                *(rsp_9 + 0x20) = rdx_4 - rdx_42.d
                rdi_27 = var_138_1
                zmm6 = sub_14037de40(rcx_83, rcx_83, r8_20, zx.q(rdi_27))
            
            rbx_6 += 1
            
            if (rbx_6 s>= r15)
                break
            
            r12_8 = r13
        
        arg1[7].d = rdi_27
        *(arg1 + 0x3c) = arg1[7].d
        *(arg1 + 0x44) = arg1[8].d
        arg1[8].d = zmm6.d
        arg1[9].d = r12_9
        *(arg1 + 0x4c) = arg1[9].d
        
        if (var_180 != 0)
            *(arg1 + 0x44) = zmm6.d
            *(arg1 + 0x3c) = rdi_27
            *(arg1 + 0x4c) = r12_9
        
        if (var_188 == 1)
            int64_t rdi_28 = 0
            int64_t r8_21 = rbx << 2
            
            if (rbx s>= 4)
                void* rcx_84 = var_178 + 4
                int64_t i_28 = ((rbx - 4) u>> 2) + 1
                rdi_28 = i_28 << 2
                int64_t i_8
                
                do
                    int32_t rax_130 = *(rcx_84 - 4)
                    rcx_84 += 0x10
                    *(r8_21 + rcx_84 - 0x14) = rax_130
                    *(r8_21 + rcx_84 - 0x10) = *(rcx_84 - 0x10)
                    *(r8_21 + rcx_84 - 0xc) = *(rcx_84 - 0xc)
                    *(rcx_84 + (rbx << 2) - 8) = *(rcx_84 - 8)
                    i_8 = i_28
                    i_28 -= 1
                while (i_8 != 1)
            
            if (rdi_28 s< rbx)
                void* rcx_85 = var_178 + (rdi_28 << 2)
                int64_t i_29 = rbx - rdi_28
                int64_t i_9
                
                do
                    int32_t rax_134 = *rcx_85
                    rcx_85 += 4
                    *(rcx_85 + r8_21 - 4) = rax_134
                    i_9 = i_29
                    i_29 -= 1
                while (i_9 != 1)
        
        int64_t r8_22 = 0
        void* r8_25
        uint128_t zmm2_1
        
        if (var_130_1 != 0)
            uint32_t rdi_41 = 0
            
            if (rax_7 s>= 4)
                float* rcx_98 = rcx_6 + 4
                uint128_t* rdx_64 = var_178 - rcx_6
                uint64_t i_21 = zx.q(((rax_7 - 4) u>> 2) + 1)
                rdi_41 = (i_21 << 2).d
                r8_22 = i_21 << 2
                uint64_t i_10
                
                do
                    zmm0_2 = rcx_98[-1]
                    zmm1_2 = *(rdx_64 + rcx_98 - 4)
                    
                    if (not(zmm1_2 > zmm0_2))
                        zmm0_2 = zmm1_2
                    
                    zmm1_2 = *rcx_98
                    rcx_98[-1] = zmm0_2
                    zmm2_1 = *(rdx_64 + rcx_98)
                    
                    if (not(zmm2_1.d f> zmm1_2))
                        zmm1_2 = zmm2_1.d
                    
                    zmm0_2 = rcx_98[1]
                    *rcx_98 = zmm1_2
                    zmm1_2 = *(rdx_64 + rcx_98 + 4)
                    
                    if (not(zmm1_2 > zmm0_2))
                        zmm0_2 = zmm1_2
                    
                    rcx_98[1] = zmm0_2
                    zmm0_2 = rcx_98[2]
                    zmm1_2 = *(rdx_64 + rcx_98 + 8)
                    
                    if (not(zmm1_2 > zmm0_2))
                        zmm0_2 = zmm1_2
                    
                    rcx_98[2] = zmm0_2
                    rcx_98 = &rcx_98[4]
                    i_10 = i_21
                    i_21 -= 1
                while (i_10 != 1)
            
            if (rdi_41 s>= rax_7)
                r8_25 = rcx_6
            else
                float* rax_157 = rcx_6 + (r8_22 << 2)
                r8_25 = rcx_6
                uint64_t i_24 = zx.q(rax_7 - rdi_41)
                uint64_t i_11
                
                do
                    zmm0_2 = *rax_157
                    zmm1_2 = *(rax_157 + var_178 - r8_25)
                    
                    if (not(zmm1_2 > zmm0_2))
                        zmm0_2 = zmm1_2
                    
                    *rax_157 = zmm0_2
                    rax_157 = &rax_157[1]
                    i_11 = i_24
                    i_24 -= 1
                while (i_11 != 1)
        else
            int64_t rbx_7 = sx.q(rax_7)
            void* r11_2 = var_108
            
            if (rbx_7 s>= 4)
                void* rcx_86 = r11_2 + 4
                int64_t rdx_48 = rcx_6 - r11_2
                int64_t i_33 = ((rbx_7 - 4) u>> 2) + 1
                r8_22 = i_33 << 2
                int64_t i_12
                
                do
                    int32_t rax_135 = *(rcx_86 + rdx_48 - 4)
                    rcx_86 += 0x10
                    *(rcx_86 - 0x14) = rax_135
                    *(rcx_86 - 0x10) = *(rcx_86 + rdx_48 - 0x10)
                    *(rcx_86 - 0xc) = *(rcx_86 + rdx_48 - 0xc)
                    *(rcx_86 - 8) = *(rcx_86 + rdx_48 - 8)
                    i_12 = i_33
                    i_33 -= 1
                while (i_12 != 1)
            
            if (r8_22 s< rbx_7)
                void* rcx_87 = r11_2 + (r8_22 << 2)
                int64_t i_30 = rbx_7 - r8_22
                int64_t i_13
                
                do
                    int32_t rax_139 = *(rcx_87 + rcx_6 - r11_2)
                    rcx_87 += 4
                    *(rcx_87 - 4) = rax_139
                    i_13 = i_30
                    i_30 -= 1
                while (i_13 != 1)
            
            int64_t r8_23 = 0
            
            if (rbx_7 s>= 4)
                void* rcx_88 = rcx_6 + 4
                int64_t rdx_51 = var_178 - rcx_6
                int64_t i_34 = ((rbx_7 - 4) u>> 2) + 1
                r8_23 = i_34 << 2
                int64_t i_14
                
                do
                    int32_t rax_140 = *(rdx_51 + rcx_88 - 4)
                    rcx_88 += 0x10
                    *(rcx_88 - 0x14) = rax_140
                    *(rcx_88 - 0x10) = *(rdx_51 + rcx_88 - 0x10)
                    *(rcx_88 - 0xc) = *(rdx_51 + rcx_88 - 0xc)
                    *(rcx_88 - 8) = *(rdx_51 + rcx_88 - 8)
                    i_14 = i_34
                    i_34 -= 1
                while (i_14 != 1)
            
            if (r8_23 s< rbx_7)
                void* rcx_89 = rcx_6 + (r8_23 << 2)
                int64_t i_35 = rbx_7 - r8_23
                int64_t i_15
                
                do
                    int32_t rax_144 = *(rcx_89 + var_178 - rcx_6)
                    rcx_89 += 4
                    *(rcx_89 - 4) = rax_144
                    i_15 = i_35
                    i_35 -= 1
                while (i_15 != 1)
            
            uint32_t rdi_35 = 0
            uint64_t r8_24 = 0
            
            if (rbx_7.d s>= 4)
                int32_t* rdx_55 = var_178 - rdx_1
                void* rcx_90 = rdx_1 + 4
                uint64_t i_20 = zx.q(((rbx_7 - 4).d u>> 2) + 1)
                zmm2_1.d = _mm_cvtepi32_ps(zx.o(rax_11)).d f* 0.00100000005f
                rdi_35 = (i_20 << 2).d
                r8_24 = i_20 << 2
                uint64_t i_16
                
                do
                    zmm1_2 = *(rdx_55 + rcx_90 - 4)
                    zmm0_2 = zmm2_1.d f+ *(rcx_90 - 4)
                    
                    if (not(zmm1_2 > zmm0_2))
                        zmm0_2 = zmm1_2
                    
                    *(rcx_90 - 4) = zmm0_2
                    float zmm3_1 = *(rdx_55 + rcx_90)
                    zmm1_2 = zmm2_1.d f+ *rcx_90
                    
                    if (not(zmm3_1 > zmm1_2))
                        zmm1_2 = zmm3_1
                    
                    *rcx_90 = zmm1_2
                    zmm3_1 = *(rdx_55 + rcx_90 + 4)
                    zmm0_2 = zmm2_1.d f+ *(rcx_90 + 4)
                    
                    if (not(zmm3_1 > zmm0_2))
                        zmm0_2 = zmm3_1
                    
                    *(rcx_90 + 4) = zmm0_2
                    zmm1_2 = *(rdx_55 + rcx_90 + 8)
                    zmm0_2 = zmm2_1.d f+ *(rcx_90 + 8)
                    
                    if (not(zmm1_2 > zmm0_2))
                        zmm0_2 = zmm1_2
                    
                    *(rcx_90 + 8) = zmm0_2
                    rcx_90 += 0x10
                    i_16 = i_20
                    i_20 -= 1
                while (i_16 != 1)
            
            if (rdi_35 s< rbx_7.d)
                void* rax_147 = rdx_1 + (r8_24 << 2)
                uint64_t i_23 = zx.q(rbx_7.d - rdi_35)
                zmm2_1.d = _mm_cvtepi32_ps(zx.o(rax_11)).d f* 0.00100000005f
                uint64_t i_17
                
                do
                    zmm1_2 = *(var_178 - rdx_1 + rax_147)
                    zmm0_2 = zmm2_1.d f+ *rax_147
                    
                    if (not(zmm1_2 > zmm0_2))
                        zmm0_2 = zmm1_2
                    
                    *rax_147 = zmm0_2
                    rax_147 += 4
                    i_17 = i_23
                    i_23 -= 1
                while (i_17 != 1)
            
            r8_25 = rcx_6
        void* r14_13 = var_108
        int64_t r11_4 = 0
        int32_t* r10_5 = r14_13
        int64_t i_18
        
        do
            int32_t j = 0
            
            if (arg1[3].d s> 0)
                int32_t* rax_148 = r10_5
                
                do
                    *(var_178 - r14_13 + rax_148) = 0
                    *rax_148 = 0xc1e00000
                    *(rax_148 + r8_25 - r14_13) = 0xc1e00000
                    j += 1
                    rax_148 = &rax_148[1]
                while (j s< arg1[3].d)
            
            int64_t r8_26 = sx.q(*(arg1 + 0x1c))
            
            if (r8_26 s< rbx)
                int32_t* rcx_91 = r14_13 + ((r11_4 + r8_26) << 2)
                int64_t j_2 = rbx - r8_26
                int64_t j_1
                
                do
                    *(rcx_91 + var_178 - r14_13) = 0
                    *rcx_91 = 0xc1e00000
                    *(rcx_91 + rcx_6 - r14_13) = 0xc1e00000
                    rcx_91 = &rcx_91[1]
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
            
            r8_25 = rcx_6
            r11_4 += rbx
            r10_5 = &r10_5[rbx]
            i_18 = i_19
            i_19 -= 1
        while (i_18 != 1)
        arg1[5].d = *(arg6 + 0x20)
        *(rsp_9 + 0x38) = var_170.q
        *(rsp_9 + 0x30) = &arg1[0xa]
        int32_t rax_153 = *(arg1 + 0x14)
        *(rsp_9 + 0x28) = r13 + 0x10
        *(rsp_9 + 0x20) = rax_153
        sub_1403f6ac0(&var_100, arg4, zx.q(rdx_4), zx.q(var_134))
        uint64_t rflags_8
        int32_t temp0_12
        temp0_12, rflags_8 = __bsr_gprv_memv(*(arg6 + 0x20))
        int32_t rcx_95 = *(arg6 + 0x18)
        *(arg1 + 0x34) = 0
        
        if (rcx_95 - temp0_12 - 1 s<= rbx_1)
            if (*(arg6 + 0x30) != 0)
                *(arg1 + 0x2c) = 1
            
            *(arg1 + 0x14)
            result = zx.q(divs.dp.d(sx.q(i), *(arg1 + 0x14)))
        else
            result = 0xfffffffd

__security_check_cookie(rax_1 ^ &var_188)
return result
