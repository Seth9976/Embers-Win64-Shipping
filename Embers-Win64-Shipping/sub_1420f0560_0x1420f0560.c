// 函数: sub_1420f0560
// 地址: 0x1420f0560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg3
sub_140b33630("WorldTickMisc")
sub_140b34170("EventWait/WorldTickMisc")
int64_t rax = j_sub_140a82f30(1)

if (sub_140a80f40() == 0)
    if (data_143f138f4 != 0)
    label_1420f060b:
        void var_b8
        int64_t* rax_3 = sub_141b53010(&var_b8, nullptr, 0xff)
        *(*rax_3 + 0x10) = rax
        void* rcx_2 = *rax_3
        int32_t r8_1 = rax_3[2].d
        int64_t* rdx = rax_3[1]
        int64_t* rbx_1 = *(rcx_2 + 0x20)
        int64_t* var_208_1 = rbx_1
        int32_t* rsi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rsi_1 += 1
            rbx_1 = var_208_1
        
        zmm6 = sub_1405a5630(rcx_2, rdx, r8_1, 1)
        
        if (rbx_1 != 0)
            int32_t rax_4 = *rsi_1
            *rsi_1 -= 1
            
            if (rax_4 == 1)
                zmm6 = sub_140a2f6e0(var_208_1)
    else if (data_143de5480 != 0)
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b == 0)
            goto label_1420f060b

sub_1420de430(&data_143a30620, arg1, arg2, zmm6, zmm6)
sub_1420a6c20(*(arg1 + 0x5a0))
sub_1420a6c20(*(arg1 + 0x5a0) + 0x60)
void* rcx_7 = data_143f5b298
int64_t* rsi_2 = *(rcx_7 + 0xb08)

if (rsi_2 != 0)
    (*(*rsi_2 + 0x148))(rsi_2, sub_1423de4f0(rcx_7, arg1))

int64_t* rax_6 = sub_142437e30(arg1, 0, 1)
char arg_8 = 0
char* var_e8 = &arg_8
void*** (* var_f0)() = j_sub_140597fc0
int64_t* rax_8 = sub_140a756e0(&var_f0, &data_143958018) + 0x10
int64_t* var_280 = rax_8
int64_t var_278 = *rax_8
int64_t rcx_12 = rax_8[2]
char var_268 = 0
int64_t rcx_13 = rax_8[3]
rax_8[3] = &var_280
int64_t* rax_9 = var_280
rax_9[4].d += 1
*(arg1 + 0x11b) |= 4
char rax_10
int128_t zmm6_1
rax_10, zmm6_1 = sub_1420e6500(arg1)
char r12 = rax_10
sub_140b33630("NetworkIncoming")
sub_140b34170("EventWait/NetworkTick")
uint128_t zmm6_2 = sub_140e59cd0(arg1 + 0x370, zmm6_1)
sub_140599090(arg1 + 0x388)
void* rax_11 = *(arg1 + 0x38)
uint64_t* var_2a8

if (rax_11 != 0)
    void* rax_12 = *(rax_11 + 0x88)
    
    if (rax_12 != 0 && *(rax_12 + 0x134) == 1)
        int64_t rax_13
        rax_13, zmm6_2 = sub_1423ea780(data_143f5b298, arg1)
        
        if (rax_13 == 0)
            void var_d0
            int64_t* rax_15 = sub_140ac6680(
                _vfprintf_p_l(&var_d0, Your connection to the host has been lost.", Engine"))
            uint64_t var_258 = 0
            int32_t rbx_3 = rax_15[1].d
            int64_t r15_1 = *rax_15
            int32_t var_250_1 = rbx_3
            
            if (rbx_3 != 0)
                sub_1405a4c70(&var_258, rbx_3, 0)
                memcpy(var_258, r15_1, rbx_3 * 2)
            else
                int32_t var_24c_1 = rbx_3
            
            int64_t* var_c8
            
            if (var_c8 != 0)
                var_c8[1].d -= 1
                
                if (var_c8[1].d == 1)
                    (**var_c8)(var_c8)
                    int32_t rax_18 = *(var_c8 + 0xc)
                    *(var_c8 + 0xc) -= 1
                    
                    if (rax_18 == 1)
                        (*(*var_c8 + 8))(var_c8, 1)
            
            var_2a8 = &var_258
            sub_1423d2710(data_143f5b298, arg1, *(arg1 + 0x38), 3, var_2a8)
            uint64_t rcx_25 = var_258
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)

sub_140b38630()
sub_140b37f60("NetworkIncoming")
uint128_t zmm0
zmm0.d = zmm6_2.d f+ *(arg1 + 0x528)
*(arg1 + 0x528) = zmm0.d

if (r12 == 0)
    zmm0.d = zmm6_2.d f+ *(arg1 + 0x52c)
    *(arg1 + 0x52c) = zmm0.d

uint128_t zmm7 = zmm6_2
(*(*rax_6 + 0x638))(rax_6)
zmm6_2.d = zmm6_2.d f* zmm0.d
(*(*rax_6 + 0x640))(rax_6, zmm6_2.d, zmm7)
zmm6_2 = zmm0
*(arg1 + 0x530) = zmm6_2.d
*(arg1 + 0x524) = zmm0.d f+ *(arg1 + 0x524)

if (r12 == 0)
    *(arg1 + 0x520) = zmm0.d f+ *(arg1 + 0x520)

int32_t r15_2 = 1

if ((*(arg1 + 0x11d) & 4) == 0)
    r15_2 = arg2

int32_t arg_20 = r15_2
char rax_22

if ((*(rax_6 + 0x22e) & 0x30) == 0)
    rax_22, zmm6_2, zmm7 = sub_14243ae00(arg1)

if ((*(rax_6 + 0x22e) & 0x30) != 0 || rax_22 != 0)
    sub_140b34170("EventWait/AsyncLoading")
    int64_t rdx_8
    rdx_8.b = 1
    uint128_t zmm2
    zmm2.d = data_143a2d8c0.d f* 0.00100000005f
    sub_140bcd2b0(1, rdx_8, zmm2)
    sub_140b38630()

if (*(arg1 + 0x538) != *(arg1 + 0x544) || *(arg1 + 0x53c) != *(arg1 + 0x548)
        || *(arg1 + 0x540) != *(arg1 + 0x54c))
    int32_t rax_27 = *(arg1 + 0x54c)
    uint64_t var_128 = *(arg1 + 0x544)
    int32_t var_120_1 = rax_27
    zmm6_2, zmm7 = sub_142444ea0(arg1, &var_128)
else
    *(arg1 + 0x550) = data_143dbb1f8.q
    *(arg1 + 0x558) = data_143dbb200

if (*(arg1 + 0x120) != 0)
    sub_140b33630("NavigationBuild")
    int64_t* rcx_30 = *(arg1 + 0x120)
    int512_t zmm1_3
    zmm1_3.o = zmm6_2
    (*(*rcx_30 + 0x260))(rcx_30, zmm1_3)
    sub_140b37f60("NavigationBuild")

void* rax_29
void* rax_30

if (r15_2 != 0 && r12 == 0)
    rax_29 = *(arg1 + 0x38)
    
    if (rax_29 != 0)
        rax_30 = *(rax_29 + 0x88)

int64_t* rsi_3

if (r15_2 != 0 && r12 == 0 && (rax_29 == 0 || rax_30 == 0 || *(rax_30 + 0x134) == 3))
    rsi_3.b = 1
else
    rsi_3.b = 0

void* rax_31 = *(arg1 + 0x188)
char arg_10 = rsi_3.b
int64_t* rbx_5

if (rax_31 == 0)
    rbx_5 = arg1 + 0x308
else
    rbx_5 = *(rax_31 + 0xc8)

int32_t r11 = rbx_5[5].d
void* r9_3 = &rbx_5[2]
int32_t rcx_31 = 0
int32_t r8_7 = 0
int32_t var_248 = 0
int32_t var_244 = 1
void* var_240 = r9_3
int32_t var_238 = 0xffffffff
int64_t var_234 = 0

if (r11 != 0)
    void* rax_32 = *(r9_3 + 0x10)
    
    if (rax_32 != 0)
        r9_3 = rax_32
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_12 = *r9_3
    
    if (rdx_12 != 0)
    label_1420f0b08:
        int32_t rax_39 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_1
        int32_t temp0_4
        temp0_4, rflags_1 = _bit_scan_reverse(rax_39)
        int32_t var_244_1 = rax_39
        int32_t var_138_1 = temp0_4
        int32_t rax_40
        
        if (rax_39 == 0)
            rax_40 = 0x20
        else
            rax_40 = 0x1f - temp0_4
        
        var_234.d = r8_7 - rax_40 + 0x1f
        
        if (r8_7 - rax_40 + 0x1f s> r11)
            var_234.d = r11
    else
        while (true)
            int64_t rdx_13 = sx.q(rcx_31)
            r8_7 += 0x20
            rcx_31 += 1
            var_234:4.d = r8_7
            var_248 = rcx_31
            
            if (rdx_13.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r9_3 + (rdx_13 << 2) + 4)
            int32_t var_238_1 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_1420f0b08
        
        var_234.d = r11

int64_t* var_180 = rbx_5
uint128_t zmm0_1 = var_248.o
int128_t var_190 = 0xffffffff
int16_t var_140 = 0
void* rax_42 = zmm0_1.q
uint128_t var_168 = zmm0_1
uint128_t var_178 = rbx_5.o
zmm0_1.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
uint128_t var_158 = zmm0_1

if (0 s< *(rax_42 + 0x18))
    int32_t i = var_168:0xc.d
    
    do
        *(*((sx.q(i) << 5) + *var_178.q + 8) + 0x50) = 0
        var_168:8.d &= not.d(var_178:0xc.d)
        sub_14059bdd0(&var_178:8)
        i = var_168:0xc.d
    while (i s< *(var_168.q + 0x18))
    
    if (var_140.b != 0 && var_140:1.b != 0)
        sub_141b50c00(rbx_5, rbx_5[1].d - *(rbx_5 + 0x34), 1)

if (rsi_3.b != 0)
    uint128_t zmm6_3 = sub_141ec9d30(arg1)
    zmm6_2 = sub_1420de430(&data_143a30638, arg1, r15_2, zmm6_3, zmm6_3)
    int32_t rax_48 = *(arg1 + 0x90)
    int64_t rbx_6 = sx.q(rax_48 - 1)
    
    if (rax_48 - 1 s>= 0)
        int64_t temp4_1
        
        do
            int64_t* rcx_37 = *(*(arg1 + 0x88) + (rbx_6 << 3))
            
            if (rcx_37 != 0)
                (*(*rcx_37 + 0x450))(rcx_37, zmm6_2)
            
            temp4_1 = rbx_6
            rbx_6 -= 1
        while (temp4_1 - 1 s>= 0)

int32_t var_298 = 0

if (*(arg1 + 0x160) s> 0)
    void* r14_1 = nullptr
    void* var_1f8_1 = nullptr
    
    while (true)
        int32_t rsi_4 = 0
        void* r12_2 = *(arg1 + 0x158) + 0x28
        uint64_t var_290 = 0
        void* r12_3 = r12_2 + r14_1
        int64_t var_288_1 = 0
        int32_t r11_1 = *(r12_3 + 0x28)
        int32_t var_228_1 = 0
        int32_t r15_3 = 0
        int32_t var_224_1 = 1
        int32_t rcx_38 = 0
        void* var_220_1 = r12_3 + 0x10
        int32_t r8_11 = 0
        int32_t var_218_1 = 0xffffffff
        int64_t var_214_1 = 0
        
        if (r11_1 != 0)
            void* rax_52 = *(r12_3 + 0x20)
            void* r9_4 = r12_3 + 0x10
            
            if (rax_52 != 0)
                r9_4 = rax_52
            
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = sx.q(r11_1 - 1)
            int32_t rdx_21 = *r9_4
            
            if (rdx_21 != 0)
            label_1420f0d18:
                int32_t rax_59 = neg.d(rdx_21) & rdx_21
                uint64_t rflags_2
                int32_t temp0_6
                temp0_6, rflags_2 = _bit_scan_reverse(rax_59)
                int32_t var_224_2 = rax_59
                int32_t var_134_1 = temp0_6
                int32_t rax_60
                
                if (rax_59 == 0)
                    rax_60 = 0x20
                else
                    rax_60 = 0x1f - temp0_6
                
                var_214_1.d = r8_11 - rax_60 + 0x1f
                
                if (r8_11 - rax_60 + 0x1f s> r11_1)
                    var_214_1.d = r11_1
            else
                while (true)
                    int64_t rdx_22 = sx.q(rcx_38)
                    r8_11 += 0x20
                    rcx_38 += 1
                    var_214_1:4.d = r8_11
                    var_228_1 = rcx_38
                    
                    if (rdx_22.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_21 = *(r9_4 + (rdx_22 << 2) + 4)
                    int32_t var_218_2 = 0xffffffff
                    
                    if (rdx_21 != 0)
                        goto label_1420f0d18
                
                var_214_1.d = r11_1
        
        int32_t rdx_23 = *(r12_3 + 0x28)
        uint128_t var_1a0_1 = var_228_1.o
        int32_t r8_14 = rdx_23 s>> 5
        int32_t r14_2 = 0xffffffff << (rdx_23.b & 0x1f)
        int32_t r9_6 = rdx_23 & 0xffffffe0
        int32_t var_1c8_1 = r8_14
        int32_t var_1b8_1 = r14_2
        int32_t var_1b4_1 = rdx_23
        int32_t var_1b0_1 = r9_6
        int128_t var_190_1 = 0xffffffff
        uint64_t var_f8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        uint128_t var_118 = r12_3.o
        uint128_t var_108_1 = var_1a0_1
        
        if (rdx_23 != r11_1)
            void* rax_62 = *(r12_3 + 0x20)
            void* r10_1 = r12_3 + 0x10
            
            if (rax_62 != 0)
                r10_1 = rax_62
            
            int32_t temp7_1
            int32_t temp8_1
            temp7_1:temp8_1 = sx.q(r11_1 - 1)
            int32_t rdx_27 = *(r10_1 + (sx.q(r8_14) << 2)) & r14_2
            int32_t var_1b4_3
            
            if (rdx_27 != 0)
            label_1420f0e0a:
                int32_t rax_69 = neg.d(rdx_27) & rdx_27
                uint64_t rflags_3
                int32_t temp0_8
                temp0_8, rflags_3 = _bit_scan_reverse(rax_69)
                int32_t var_130_1 = temp0_8
                int32_t rax_70
                
                if (rax_69 == 0)
                    rax_70 = 0x20
                else
                    rax_70 = 0x1f - temp0_8
                
                int32_t var_1b4_2 = r9_6 - rax_70 + 0x1f
                
                if (r9_6 - rax_70 + 0x1f s> r11_1)
                    var_1b4_3 = r11_1
            else
                while (true)
                    int64_t rcx_43 = sx.q(r8_14)
                    r9_6 += 0x20
                    r8_14 += 1
                    int32_t var_1b0_2 = r9_6
                    int32_t var_1c8_2 = r8_14
                    
                    if (rcx_43.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_27 = *(r10_1 + (rcx_43 << 2) + 4)
                    var_1b8_1 = 0xffffffff
                    
                    if (rdx_27 != 0)
                        goto label_1420f0e0a
                
                var_1b4_3 = r11_1
        
        while (true)
            int64_t rcx_45 = sx.q(var_108_1:0xc.d)
            int64_t* rax_72 = var_118.q
            
            if (rcx_45.d == (var_1b8_1.q u>> 0x20).d && var_108_1.q == r12_3 + 0x10
                    && rax_72 == r12_3)
                break
            
            int64_t rbx_7 = *(*rax_72 + rcx_45 * 0x10)
            
            for (int64_t* i_1 = *(arg1 + 0x148); i_1 != &i_1[sx.q(*(arg1 + 0x150))]; i_1 = &i_1[1])
                if (*i_1 == rbx_7)
                    var_288_1.d = rsi_4 + 1
                    
                    if (rsi_4 + 1 s> r15_3)
                        sub_1405a4d70(&var_290)
                    
                    *(var_290 + (sx.q(rsi_4) << 3)) = rbx_7
                    break
            
            var_108_1:8.d &= not.d(var_118:0xc.d)
            sub_14059bdd0(&var_118:8)
            r15_3 = var_288_1:4.d
            rsi_4 = var_288_1.d
        
        int32_t rbx_8 = var_298
        void var_e0
        double zmm6_4[0x2] = sub_142428200(&var_e0, rbx_8, arg1)
        rsi_3 = zx.q(arg_10)
        
        if (rsi_3.b == 0)
            r12 = rax_10
            
            if (r12 != 0)
                j_sub_1423c0390()
                var_2a8 = &var_290
                int64_t r8_21 = data_143f5b210
                (*(r8_21 + 0x20))(&data_143f5b210, arg1, r8_21, 3, var_2a8)
            
            r15_2 = arg_20
        else
            sub_14227ac70(arg1, zmm6_4)
            *(arg1 + 0x119) = 0
            j_sub_1423c0390()
            r15_2 = arg_20
            var_2a8 = &var_290
            int64_t r8_16 = data_143f5b210
            (*(r8_16 + 0x18))(&data_143f5b210, arg1, r8_16, zx.q(r15_2), var_2a8)
            sub_140b33630("PrePhysicsMisc")
            sub_140b34170("EventWait/PrePhysics")
            j_sub_1423c0390()
            int64_t r8_17
            r8_17.b = 1
            int64_t r9_9 = data_143f5b210
            (*(r9_9 + 0x28))(&data_143f5b210, 0, r8_17, r9_9)
            *(arg1 + 0x119) += 1
            sub_140b38630()
            sub_140b37f60("PrePhysicsMisc")
            *(arg1 + 0x11b) &= 0xfb
            zmm6_4 = sub_142432b80(arg1)
            *(arg1 + 0x11b) |= 4
            sub_140b33630("StartPhysicsMisc")
            sub_140b34170("EventWait/StartPhysics")
            j_sub_1423c0390()
            int64_t r8_18
            r8_18.b = 1
            int64_t r9_10 = data_143f5b210
            (*(r9_10 + 0x28))(&data_143f5b210, 1, r8_18, r9_10)
            *(arg1 + 0x119) += 1
            sub_140b38630()
            sub_140b37f60("StartPhysicsMisc")
            sub_140b33630("DuringPhysicsMisc")
            sub_140b34170("EventWait/DuringPhysics")
            j_sub_1423c0390()
            int64_t r9_11 = data_143f5b210
            (*(r9_11 + 0x28))(&data_143f5b210, 2, 0, r9_11)
            *(arg1 + 0x119) += 1
            sub_140b38630()
            sub_140b37f60("DuringPhysicsMisc")
            *(arg1 + 0x119) = 3
            sub_140b33630("EndPhysicsMisc")
            sub_140b34170("EventWait/EndPhysics")
            j_sub_1423c0390()
            int64_t r8_19
            r8_19.b = 1
            int64_t r9_12 = data_143f5b210
            (*(r9_12 + 0x28))(&data_143f5b210, 3, r8_19, r9_12)
            *(arg1 + 0x119) += 1
            sub_140b38630()
            sub_140b37f60("EndPhysicsMisc")
            sub_140b33630("PostPhysicsMisc")
            sub_140b34170("EventWait/PostPhysics")
            j_sub_1423c0390()
            int64_t r9_13 = data_143f5b210
            int64_t r8_20
            r8_20.b = 1
            (*(r9_13 + 0x28))(&data_143f5b210, 4, r8_20, r9_13)
            *(arg1 + 0x119) += 1
            sub_140b38630()
            sub_140b37f60("PostPhysicsMisc")
            r12 = rax_10
        
        char* r14_5 = var_1f8_1
        
        if (r14_5[*(arg1 + 0x158)] == 0)
            if (r12 == 0)
                zmm6_4 = sub_1420e7dd0(rbx_5, nullptr, zmm6_4)
            
            if (r15_2 != 0 && r12 == 0)
                zmm6_4 = sub_1423f25a0(sub_1420e4c60(arg1), zmm6_4)
            
            int128_t zmm6_5 = sub_1423cadb0(arg1, r15_2, r12, zmm6_4)
            sub_140b33630("Camera")
            int64_t* var_1d8
            sub_1424373a0(arg1, &var_1d8)
            int32_t i_3
            int32_t i_2 = i_3
            
            while (i_2 s>= 0)
                int64_t* rdx_35 = var_1d8
                
                if (i_2 s>= rdx_35[1].d)
                    break
                
                int64_t* rax_82 = sub_140d3c6e0(*rdx_35 + (sx.q(i_2) << 3))
                
                if (rax_82 != 0)
                    char rax_83
                    
                    if (r12 != 0)
                        rax_83 = sub_14227b450(rax_82)
                    
                    int512_t zmm1_5
                    
                    if (r12 == 0 || rax_83 != 0)
                        zmm1_5.o = zmm6_5
                        (*(*rax_82 + 0xce8))(rax_82, zmm1_5)
                    else if (rax_82[0x57] != 0)
                        char rax_84
                        rax_84, zmm1_5, zmm6_5 = sub_141ea6070(arg1)
                        
                        if (rax_84 != 0)
                            int64_t* rcx_62 = rax_82[0x57]
                            (*(*rcx_62 + 0x688))(rcx_62)
                            i_2 = i_3 + 1
                            i_3 = i_2
                            continue
                
                i_2 = i_3 + 1
                i_3 = i_2
            
            if (r12 == 0 && sub_14243ade0(arg1) != 0)
                sub_1420e85e0(arg1, nullptr)
                void* rcx_66 = *(arg1 + 0x560)
                
                if (rcx_66 != 0)
                    sub_142450440(rcx_66)
            
            sub_140b37f60("Camera")
            rbx_8 = var_298
        
        if (rsi_3.b != 0)
            sub_140b34170("EventWait/PostUpdateWork")
            j_sub_1423c0390()
            int64_t r8_23
            r8_23.b = 1
            int64_t r9_14 = data_143f5b210
            (*(r9_14 + 0x28))(&data_143f5b210, 5, r8_23, r9_14, var_2a8)
            *(arg1 + 0x119) += 1
            sub_140b38630()
            sub_140b34170("EventWait/LastDemotable")
            j_sub_1423c0390()
            int64_t r8_24
            r8_24.b = 1
            int64_t r9_15 = data_143f5b210
            (*(r9_15 + 0x28))(&data_143f5b210, 6, r8_24, r9_15)
            *(arg1 + 0x119) += 1
            sub_140b38630()
            j_sub_1423c0390()
            int64_t rdx_36 = data_143f5b210
            (*(rdx_36 + 0x30))(&data_143f5b210, rdx_36)
        
        zmm6_2, zmm7 = sub_1424294e0(&var_e0)
        uint64_t rcx_68 = var_290
        
        if (rcx_68 != 0)
            sub_140a74f90(rcx_68)
        
        r14_1 = &r14_5[0x78]
        var_298 = rbx_8 + 1
        var_1f8_1 = r14_1
        
        if (rbx_8 + 1 s>= *(arg1 + 0x160))
            break

if (rsi_3.b != 0)
    sub_1420de430(&data_143a30650, arg1, r15_2, zmm6_2, zmm6_2)
    
    if (*(arg1 + 0x1f8) != 0)
        sub_142249870(data_143f52708)
    
    zmm7 = sub_141ec3a30(arg1)

float zmm6_6[0x2] = sub_140e59cd0(arg1 + 0x3a0, zmm7)
sub_140599090(arg1 + 0x3b8)
int64_t* rcx_73 = *(arg1 + 0x1b0)

if (rcx_73 != 0)
    (*(*rcx_73 + 0x218))(rcx_73, _mm_cvtps_pd(*(arg1 + 0x520)).q)

if (r12 == 0)
    int64_t* rcx_74 = *(arg1 + 0x468)
    
    if (rcx_74 != 0)
        (*(*rcx_74 + 0x18))(rcx_74, zmm6_6)

*(arg1 + 0x11b) &= 0xfb

if (var_268 == 0)
    int64_t* rax_92 = var_280
    var_268 = 1
    rax_92[4].d -= 1
    int64_t* rcx_75 = var_280
    
    if (rcx_12 != rcx_75[2])
        sub_140b16b40(rcx_75, rcx_12)
        rcx_75 = var_280
    
    *rcx_75 = var_278
    var_280[3] = rcx_13
    var_278 = 0

sub_1423d52c0(data_143f5b298)
uint8_t rcx_78 = *(arg1 + 0x11d)

if ((rcx_78 & 8) != 0)
    *(arg1 + 0x11d) = (rcx_78 u>> 1 & 4) | (rcx_78 & 0xf3)

*(arg1 + 0x110) = 0

if (*(arg1 + 0x114) s<= 0xffffffff)
    sub_140638cc0(arg1 + 0x108, 0)

void* rcx_80 = data_143f5b298
int64_t* rsi_5 = *(rcx_80 + 0xb08)

if (rsi_5 != 0)
    (*(*rsi_5 + 0x150))(rsi_5, sub_1423de4f0(rcx_80, arg1))

if (sub_140a80f40() != 0)
    sub_1420a6c20(*(arg1 + 0x5a0) + 0x30)
else if (data_143f138f4 != 0)
label_1420f1476:
    void var_a0
    void** rax_99 = sub_1420e0b30(&var_a0, nullptr, 0xff)
    *(*rax_99 + 0x10) = arg1
    void* rcx_86 = *rax_99
    int32_t r8_26 = rax_99[2].d
    int64_t* rdx_41 = rax_99[1]
    int64_t* rbx_12 = *(rcx_86 + 0x20)
    int64_t* var_1f0_1 = rbx_12
    int32_t* rdi_1 = &rbx_12[9]
    
    if (rbx_12 != 0)
        *rdi_1 += 1
        rbx_12 = var_1f0_1
    
    sub_1405a5630(rcx_86, rdx_41, r8_26, 1)
    
    if (rbx_12 != 0)
        int32_t rax_100 = *rdi_1
        *rdi_1 -= 1
        
        if (rax_100 == 1)
            sub_140a2f6e0(var_1f0_1)
else if (data_143de5480 == 0)
    sub_1420a6c20(*(arg1 + 0x5a0) + 0x30)
else
    uint32_t rax_98
    rax_98.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_98.b == 0)
        goto label_1420f1476
    
    sub_1420a6c20(*(arg1 + 0x5a0) + 0x30)

char rax_101 = sub_140a80f40()

if (rax_101 != 0)
    j_sub_140a74f90(rax)
else if (data_143f138f4 != rax_101)
label_1420f1506:
    void var_88
    int64_t* rax_103 = sub_1420ba0a0(&var_88, nullptr, 0xff)
    *(*rax_103 + 0x10) = rax
    void* rcx_90 = *rax_103
    int32_t r8_28 = rax_103[2].d
    int64_t* rdx_42 = rax_103[1]
    int64_t* rbx_13 = *(rcx_90 + 0x20)
    int64_t* var_1e8_1 = rbx_13
    int32_t* rdi_2 = &rbx_13[9]
    
    if (rbx_13 != 0)
        *rdi_2 += 1
        rbx_13 = var_1e8_1
    
    sub_1405a5630(rcx_90, rdx_42, r8_28, 1)
    
    if (rbx_13 != 0)
        int32_t r13_2 = *rdi_2
        *rdi_2 -= 1
        
        if (r13_2 == 1)
            sub_140a2f6e0(var_1e8_1)
else if (data_143de5480 == rax_101)
    j_sub_140a74f90(rax)
else
    uint32_t rax_102
    rax_102.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_102.b == 0)
        goto label_1420f1506
    
    j_sub_140a74f90(rax)

if (var_268 == 0)
    int64_t* rax_104 = var_280
    char var_268_1 = 1
    rax_104[4].d -= 1
    int64_t* rcx_93 = var_280
    
    if (rcx_12 != rcx_93[2])
        sub_140b16b40(rcx_93, rcx_12)
        rcx_93 = var_280
    
    *rcx_93 = var_278
    var_280[3] = rcx_13
    int64_t var_278_1 = 0

sub_140b38630()
return sub_140b37f60("WorldTickMisc")
