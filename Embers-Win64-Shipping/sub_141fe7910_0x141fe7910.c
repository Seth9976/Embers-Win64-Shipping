// 函数: sub_141fe7910
// 地址: 0x141fe7910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
int32_t var_2a0 = 0
void* rax_2 = data_143f3d6b0
int64_t* var_248
int64_t var_1d8
int64_t var_198
int64_t* rax_4
int32_t rbx

if (rax_2 == 0)
    rbx = 2
    rax_4 = sub_141fe3cc0(&var_198)
else
    rbx = 1
    var_248 = *(*(rax_2 + 0x50) + 0x18)
    sub_140b63b70(&var_248, &var_1d8)
    rax_4 = &var_1d8

int32_t rsi = rax_4[1].d
uint64_t r13 = 0
int64_t rdi = *rax_4
uint64_t var_1a8 = 0

if (rsi != 0)
    sub_1405a4c70(&var_1a8, rsi, 0)
    r13 = var_1a8
    memcpy(r13, rdi, rsi * 2)

if ((rbx.b & 2) != 0)
    int64_t rcx_4 = var_198
    rbx &= 0xfffffffd
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

if ((rbx.b & 1) != 0)
    int64_t rcx_5 = var_1d8
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

void* rcx_6 = data_143ddb400
int64_t* var_240 = nullptr
int32_t i_4 = 0
sub_140af5330(rcx_6, &data_143de5870, &var_240)
int16_t* var_338 = nullptr
int64_t var_330 = 0
sub_1405947f0(&var_338, 0xf)
int32_t rax_5 = var_330.d + 0xf
var_330.d = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_338)

UnDecorator::getReferenceType(var_338, u"DeviceProfiles", 0x1e)
var_248 = &var_338
sub_140688b80(&var_240, &var_248)
int16_t* rcx_11 = var_338

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t var_b8
__builtin_memset(&var_b8, 0, 0x2c)
int32_t var_8c = 0x80
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int64_t var_78 = 0
int32_t var_70 = 0
sub_1405e1ad0(&data_143a2dce0, 0)
void* rcx_12 = data_143f3d6b0

if (rcx_12 != 0)
    sub_1405e1ad0(rcx_12 + 0x58, 0)

void* rcx_17 = data_143ddb400
int32_t i_2
int16_t* var_278
int32_t var_270

if (rcx_17 != 0)
    bool cond:0_1 = data_143de5788 != 0
    int16_t* const rdi_1 = &data_142d40450
    int32_t rdx_7 = 0
    var_338 = nullptr
    
    if (cond:0_1)
        rdi_1 = data_143de5780
    
    int32_t r8_4 = 0
    var_330.d = 0
    var_330:4.d = 0
    
    if (rdi_1 != 0 && *rdi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rdi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_338, rbx_1.d + 1)
            r8_4 = var_330:4.d
            rdx_7 = var_330.d
        
        int32_t rax_6 = rbx_1.d + 1 + rdx_7
        var_330.d = rax_6
        
        if (rax_6 s> r8_4)
            sub_140594770(&var_338)
        
        UnDecorator::getReferenceType(var_338, rdi_1, (rbx_1.d + 1) * 2)
        rcx_17 = data_143ddb400
    
    int64_t* rax_7 = sub_140af5690(rcx_17, u"ConsoleVariables", 0, 1, &var_338)
    int16_t* rcx_18 = var_338
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    if (rax_7 != 0)
        TEB* gsbase
        
        if (data_143f3e9d0
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f3e9d0)
            
            if (data_143f3e9d0 == 0xffffffff)
                sub_140b58260(&data_143f3e9c8, u"dp.AllowScalabilityGroupsToChangeAtRuntime", 1)
                _Init_thread_footer(&data_143f3e9d0)
        
        sub_14093f560(rax_7, &i_2, data_143f3e9c8)
        int64_t i_5 = sx.q(i_2)
        
        if (i_5.d != 0xffffffff)
            int64_t rax_11 = i_5 * 0x30
            
            if (rax_11 != neg.q(*rax_7))
                void* rbx_4 = rax_11 + *rax_7 + 8
                
                if (rbx_4 != 0)
                    sub_140b63b70(&data_143f3e9c8, &var_278)
                    int32_t rax_13 = *(rbx_4 + 0x18)
                    void* rcx_21 = rbx_4 + 0x10
                    
                    if (rax_13 == 0 || rax_13 - 1 s<= 0)
                        rcx_21 = rbx_4
                    
                    int16_t* const r8_8
                    
                    if (*(rcx_21 + 8) == 0)
                        r8_8 = &data_142d40450
                    else
                        r8_8 = *rcx_21
                    
                    int16_t* const rdx_13 = &data_142d40450
                    int16_t* const rcx_22 = &data_142d40450
                    int64_t* var_348_1
                    var_348_1.b = 0
                    
                    if (var_270 != 0)
                        rdx_13 = var_278
                    
                    if (data_143de5788 != 0)
                        rcx_22 = data_143de5780
                    
                    sub_140afa9b0(rcx_22, rdx_13, r8_8, 0x4000000, var_348_1.b)
                    int16_t* rcx_23 = var_278
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)

uint64_t var_2e8 = 0
int16_t* r15 = nullptr
int32_t var_2e0 = rsi
int32_t var_2dc

if (rsi != 0)
    sub_1405a4c70(&var_2e8, rsi, 0)
    r15 = var_2e8
    memcpy(r15, r13, rsi * 2)
    rsi = var_2e0
else
    var_2dc = 0

if (rsi s> 1)
    int64_t* rbx_5
    
    do
        int64_t var_2a8 = *(sub_14249a9d0() + 0x18)
        sub_140b63b70(&var_2a8, &var_1d8)
        int16_t* const r8_11 = &data_142d40450
        
        if (rsi != 0)
            r8_11 = r15
        
        int16_t* var_1e8
        sub_140a2e390(&var_1e8, u"%s %s", r8_11)
        int64_t rcx_29 = var_1d8
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        rbx_5 = var_240
        void* rdi_4 = &rbx_5[sx.q(i_4) * 2]
        int32_t var_1e0
        int32_t rax_16
        
        if (rbx_5 == rdi_4)
        label_141fe7dde:
            rax_16.b = 0
        else
            while (true)
                int16_t* const rdx_17 = &data_142d40450
                
                if (var_1e0 != 0)
                    rdx_17 = var_1e8
                
                int16_t* const rcx_30
                
                if (rbx_5[1].d == 0)
                    rcx_30 = &data_142d40450
                else
                    rcx_30 = *rbx_5
                
                if (sub_140a54510(rcx_30, rdx_17) == 0)
                    rax_16.b = 1
                    break
                
                rbx_5 = &rbx_5[2]
                
                if (rbx_5 == rdi_4)
                    goto label_141fe7dde
        
        if (rax_16.b == 0)
            rbx_5.b = 1
        else
            wchar16 const* const var_68 = u"_Largest"
            wchar16 const* const var_60_1 = u"_Larger"
            i_2 = 0
            wchar16 const* const var_58_1 = u"_Default"
            int32_t i = 0
            wchar16 const* const var_50_1 = u"_Smaller"
            wchar16 const* const var_48_1 = u"_Smallest"
            wchar16 const* const var_40_1 = u"_Tiniest"
            
            do
                var_338 = nullptr
                int32_t var_330_1 = 0
                sub_1405947f0(&var_338, 6)
                int32_t rax_17 = var_330_1 + 6
                
                if (rax_17 s> 0)
                    sub_140594770(&var_338)
                
                UnDecorator::getReferenceType(var_338, u"CVars", 0xc)
                
                if (i == 0)
                    int64_t r8_12 = -1
                    int64_t rdx_19 = (&var_68)[sx.q(sub_140a47d40())]
                    
                    do
                        r8_12 += 1
                    while (*(rdx_19 + (r8_12 << 1)) != 0)
                    
                    sub_140a20ba0(&var_338, rdx_19, r8_12.d)
                
                int16_t* r8_13 = &data_142d40450
                void* rcx_36 = data_143ddb400
                int16_t* rdx_20 = &data_142d40450
                
                if (rax_17 != 0)
                    r8_13 = var_338
                
                int64_t* var_318 = nullptr
                
                if (var_1e0 != 0)
                    rdx_20 = var_1e8
                
                int64_t var_310_1 = 0
                sub_140af2c50(rcx_36, rdx_20, r8_13, &var_318, &data_143de5870)
                int64_t var_108
                __builtin_memset(&var_108, 0, 0x2c)
                int32_t r12_1 = 0
                int32_t var_dc_1 = 0x80
                int32_t var_d8_1 = 0xffffffff
                int32_t var_d4_1 = 0
                int64_t var_c8_1 = 0
                int32_t var_c0_1 = 0
                int16_t** var_348_2
                uint64_t rbx_6
                
                while (true)
                    rbx_6 = zx.q(var_310_1.d)
                    int32_t* rax_19
                    
                    if (r12_1 s< 0 || r12_1 s>= rbx_6.d)
                        rax_19.b = 0
                    else
                        rax_19.b = 1
                    
                    if (rax_19.b == 0)
                        break
                    
                    int64_t var_230 = 0
                    int64_t var_228_1 = 0
                    int64_t r15_1 = 0
                    uint64_t var_218 = 0
                    uint64_t rdi_5 = 0
                    int64_t var_210_1 = 0
                    int16_t* var_268 = nullptr
                    int32_t var_260_1 = 0
                    sub_1405947f0(&var_268, 2)
                    int32_t r14_1 = var_260_1 + 2
                    
                    if (r14_1 s> 0)
                        sub_140594770(&var_268)
                    
                    int16_t* rsi_1 = var_268
                    UnDecorator::getReferenceType(rsi_1, &data_142e1462c, 4)
                    int16_t* rdx_22 = &data_142d40450
                    void* r13_3 = &var_318[sx.q(r12_1) * 2]
                    var_348_2.d = 0xffffffff
                    
                    if (r14_1 != 0)
                        rdx_22 = rsi_1
                    
                    rax_19 = sub_140a23cf0(r13_3, rdx_22, 1, 0, var_348_2.d)
                    var_2a8.d = rax_19.d
                    
                    if (rax_19.d s>= 0)
                        int32_t rdi_6 = *(r13_3 + 8)
                        int16_t* r12_2
                        
                        if (rdi_6 == 0)
                            r12_2 = &data_142d40450
                        else
                            r12_2 = *r13_3
                        
                        int32_t rdi_7
                        
                        if (rdi_6 == 0)
                            rdi_7 = 0
                        else
                            rdi_7 = rdi_6 - 1
                        
                        int64_t var_2d8 = 0
                        int32_t rbx_7 = 0
                        int32_t var_2cc_1 = 0
                        
                        if (rax_19.d s< rdi_7)
                            rdi_7 = rax_19.d
                        
                        int32_t var_2d0_1 = 0
                        r15_1 = 0
                        int32_t rsi_2 = 0
                        
                        if (r12_2 != 0 && *r12_2 != 0 && rdi_7 s> 0)
                            if (rdi_7 + 1 s> 0)
                                sub_1405947f0(&var_2d8, rdi_7 + 1)
                                rsi_2 = var_2cc_1
                                rbx_7 = var_2d0_1
                                r15_1 = var_2d8
                            
                            rbx_7 += rdi_7 + 1
                            
                            if (rbx_7 s> rsi_2)
                                sub_140594770(&var_2d8)
                                rsi_2 = var_2cc_1
                                r15_1 = var_2d8
                            
                            UnDecorator::getReferenceType(r15_1, r12_2, rdi_7 * 2)
                            *(r15_1 + (sx.q(rbx_7) << 1) - 2) = 0
                            rax_19 = zx.q(var_2a8.d)
                        
                        var_230 = r15_1
                        var_2d8 = 0
                        var_228_1.d = rbx_7
                        var_228_1:4.d = rsi_2
                        var_2d0_1.q = 0
                        int32_t r14_2
                        
                        if (r14_1 == 0)
                            r14_2 = 0
                        else
                            r14_2 = r14_1 - 1
                        
                        int32_t rdx_26 = *(r13_3 + 8)
                        int32_t rcx_44 = rax_19.d + r14_2
                        int32_t rbx_9 = rdx_26 - 1
                        
                        if (rdx_26 == 0)
                            rbx_9 = 0
                        
                        if (rcx_44 s>= 0)
                            rax_19 = zx.q(rbx_9)
                            
                            if (rcx_44 s< rbx_9)
                                rax_19 = zx.q(rcx_44)
                        else
                            rax_19 = nullptr
                        
                        int64_t r9_5 = sx.q(rax_19.d)
                        
                        if (sx.q(rcx_44) + 0x7fffffff s< r9_5)
                            rbx_9 = rax_19.d
                        else if (sx.q(rcx_44) + 0x7fffffff s< sx.q(rbx_9))
                            rbx_9 = rcx_44 + 0x7fffffff
                        
                        int16_t* const rcx_47
                        
                        if (rdx_26 == 0)
                            rcx_47 = &data_142d40450
                        else
                            rcx_47 = *r13_3
                        
                        int16_t* r12_3 = &rcx_47[r9_5]
                        rbx_6 = zx.q(rbx_9 - rax_19.d)
                        uint64_t var_2c8 = 0
                        int64_t var_2c0_1 = 0
                        rdi_5 = 0
                        int32_t rsi_3 = 0
                        int32_t r14_3 = 0
                        
                        if (r12_3 != 0 && *r12_3 != 0 && rbx_6.d s> 0)
                            int32_t rdx_27 = (rbx_6 + 1).d
                            
                            if (rdx_27 s> 0)
                                sub_1405947f0(&var_2c8, rdx_27)
                                r14_3 = var_2c0_1:4.d
                                rsi_3 = var_2c0_1.d
                                rdi_5 = var_2c8
                            
                            rsi_3 += (rbx_6 + 1).d
                            var_2c0_1.d = rsi_3
                            
                            if (rsi_3 s> r14_3)
                                sub_140594770(&var_2c8)
                                r14_3 = var_2c0_1:4.d
                                rsi_3 = var_2c0_1.d
                                rdi_5 = var_2c8
                            
                            UnDecorator::getReferenceType(rdi_5, r12_3, rbx_6.d * 2)
                            *(rdi_5 + (sx.q(rsi_3) << 1) - 2) = 0
                        
                        rbx_6.b = 1
                        var_210_1.d = rsi_3
                        rsi_1 = var_268
                        var_2c8 = 0
                        int64_t var_2c0_2 = 0
                        var_218 = rdi_5
                        var_210_1:4.d = r14_3
                    else
                        rbx_6.b = 0
                    
                    if (rsi_1 != 0)
                        sub_140a74f90(rsi_1)
                    
                    if (rbx_6.b != 0)
                        int32_t var_220
                        sub_14062d6e0(&var_108, &var_220, &var_230)
                        int64_t rax_21 = sx.q(var_220)
                        
                        if (rax_21.d != 0xffffffff)
                            int64_t rax_23 = var_108 + rax_21 * 0x28
                            
                            if (rax_23 != 0 && rax_23 != -0x10)
                                sub_140637dd0(&var_108, &var_230)
                        
                        int32_t var_158
                        sub_1405d1820(&var_108, &var_158)
                        int64_t* var_150
                        sub_140596d10(var_150, &var_230)
                        sub_140596d10(&var_150[2], &var_218)
                        var_150[4].d = 0xffffffff
                        int32_t rax_25 = var_150[1].d
                        int16_t* rdx_36
                        
                        if (rax_25 == 0)
                            rdx_36 = &data_142d40450
                        else
                            rdx_36 = *var_150
                        
                        int32_t rcx_57 = rax_25 - 1
                        
                        if (rax_25 == 0)
                            rcx_57 = 0
                        
                        int32_t rax_26 = sub_1405969c0(rcx_57, rdx_36)
                        var_348_2.d = var_158
                        void var_160
                        sub_1405d2a60(&var_108, &var_160, rax_26, var_150, var_348_2.d, nullptr)
                        r15_1 = var_230
                        rdi_5 = var_218
                    
                    if (rdi_5 != 0)
                        sub_140a74f90(rdi_5)
                    
                    if (r15_1 != 0)
                        sub_140a74f90(r15_1)
                    
                    r12_1 += 1
                
                int64_t* rdi_8 = var_318
                
                if (rbx_6.d != 0)
                    int32_t j
                    
                    do
                        int64_t rcx_62 = *rdi_8
                        
                        if (rcx_62 != 0)
                            sub_140a74f90(rcx_62)
                        
                        rdi_8 = &rdi_8[2]
                        j = rbx_6.d
                        rbx_6 = zx.q(rbx_6.d - 1)
                    while (j != 1)
                
                bool cond:6_1 = var_310_1:4.d == 0
                var_310_1.d = 0
                
                if (not(cond:6_1))
                    sub_14061cd70(&var_318, 0)
                
                int64_t var_f8
                int64_t* var_1c0_1 = &var_f8
                int32_t rcx_64 = 0
                int32_t var_1c8_1 = 0
                int32_t r8_21 = 0
                int32_t var_1c4_1 = 1
                int32_t var_1b8_1 = 0xffffffff
                int64_t var_1b4_1 = 0
                int64_t* var_e8
                int32_t var_e0
                
                if (var_e0 != 0)
                    int64_t* r9_7 = &var_f8
                    
                    if (var_e8 != 0)
                        r9_7 = var_e8
                    
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(var_e0 - 1)
                    int32_t rdx_40 = *r9_7
                    
                    if (rdx_40 != 0)
                    label_141fe83f2:
                        int32_t rax_34 = ((rdx_40 - 1) & rdx_40) ^ rdx_40
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_34)
                        int32_t var_1c4_2 = rax_34
                        int32_t rax_35
                        
                        if (rax_34 == 0)
                            rax_35 = 0x20
                        else
                            rax_35 = 0x1f - temp0_2
                        
                        int32_t rax_36 = r8_21 - rax_35 + 0x1f
                        
                        if (rax_36 s> var_e0)
                            rax_36 = var_e0
                        
                        var_1b4_1.d = rax_36
                    else
                        while (true)
                            int64_t rdx_41 = sx.q(rcx_64)
                            r8_21 += 0x20
                            rcx_64 += 1
                            var_1b4_1:4.d = r8_21
                            var_1c8_1 = rcx_64
                            
                            if (rdx_41.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                var_1b4_1.d = var_e0
                                break
                            
                            rdx_40 = *(r9_7 + (rdx_41 << 2) + 4)
                            int32_t var_1b8_2 = 0xffffffff
                            
                            if (rdx_40 != 0)
                                goto label_141fe83f2
                
                int128_t var_130_1 = var_1c8_1.o
                int128_t var_120_1 = 0xffffffff
                int128_t var_188 = (&var_108).o
                int64_t var_168_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                int128_t var_178_1 = var_130_1
                
                if (0 s< var_e0)
                    int32_t j_1 = var_178_1:0xc.d
                    
                    do
                        int64_t r8_23 = *var_188.q
                        int64_t rcx_66 = sx.q(j_1) * 5
                        
                        if (*(r8_23 + (rcx_66 << 3) + 0x18) != 0)
                            *(r8_23 + (rcx_66 << 3) + 0x10)
                        
                        int16_t* const r8_24
                        
                        if (*(r8_23 + (rcx_66 << 3) + 8) == 0)
                            r8_24 = &data_142d40450
                        else
                            r8_24 = *(r8_23 + (rcx_66 << 3))
                        
                        int64_t var_208
                        sub_140a2e390(&var_208, u"%s=%s", r8_24)
                        rbx_6 = sx.q(var_310_1.d)
                        int32_t rax_39 = (rbx_6 + 1).d
                        var_310_1.d = rax_39
                        
                        if (rax_39 s> var_310_1:4.d)
                            sub_1405a4f90(&var_318)
                        
                        void* rcx_71 = &var_318[rbx_6 * 2]
                        *rcx_71 = 0
                        *rcx_71 = var_208
                        var_208 = 0
                        int32_t var_200
                        *(rcx_71 + 8) = var_200
                        int32_t var_1fc
                        *(rcx_71 + 0xc) = var_1fc
                        int64_t rcx_72 = var_208
                        var_200.q = 0
                        
                        if (rcx_72 != 0)
                            sub_140a74f90(rcx_72)
                        
                        var_178_1:8.d &= not.d(var_188:0xc.d)
                        sub_14059bdd0(&var_188:8)
                        j_1 = var_178_1:0xc.d
                    while (j_1 s< *(var_178_1.q + 0x18))
                
                int32_t var_c0_2 = 0
                
                if (var_c8_1 != 0)
                    sub_140a74f90(var_c8_1)
                
                sub_1405e1b50(&var_108, 0)
                
                if (var_e8 != 0)
                    sub_140a74f90(var_e8)
                
                int64_t rcx_77 = var_108
                
                if (rcx_77 != 0)
                    sub_140a74f90(rcx_77)
                
                int32_t rsi_5 = 0
                int32_t j_3
                
                while (true)
                    j_3 = var_310_1.d
                    int32_t* rax_46
                    
                    if (rsi_5 s< 0 || rsi_5 s>= j_3)
                        rax_46.b = 0
                    else
                        rax_46.b = 1
                    
                    if (rax_46.b == 0)
                        break
                    
                    int16_t* var_308 = nullptr
                    int32_t var_300_1 = 0
                    uint64_t r14_4 = 0
                    uint64_t var_1f8 = 0
                    int32_t r12_4 = 0
                    int64_t var_1f0_1 = 0
                    int16_t* var_258 = nullptr
                    int32_t var_250_1 = 0
                    sub_1405947f0(&var_258, 2)
                    int32_t r15_2 = var_250_1 + 2
                    
                    if (r15_2 s> 0)
                        sub_140594770(&var_258)
                    
                    int16_t* rdi_9 = var_258
                    UnDecorator::getReferenceType(rdi_9, &data_142e1462c, 4)
                    int16_t* rdx_44 = &data_142d40450
                    int64_t* r13_6 = &var_318[sx.q(rsi_5) * 2]
                    var_348_2.d = 0xffffffff
                    
                    if (r15_2 != 0)
                        rdx_44 = rdi_9
                    
                    rax_46 = sub_140a23cf0(r13_6, rdx_44, 1, 0, var_348_2.d)
                    var_2a8.d = rax_46.d
                    
                    if (rax_46.d s>= 0)
                        int32_t rbx_11 = r13_6[1].d
                        int16_t* r12_5
                        
                        if (rbx_11 == 0)
                            r12_5 = &data_142d40450
                        else
                            r12_5 = *r13_6
                        
                        int32_t rbx_12
                        int32_t r14_5
                        
                        if (rbx_11 == 0)
                            r14_5 = 0
                            rbx_12 = 0
                        else
                            rbx_12 = rbx_11 - 1
                            r14_5 = 0
                        
                        int16_t* var_2b8 = nullptr
                        int16_t* rsi_6 = nullptr
                        int64_t var_2b0_1 = 0
                        
                        if (rax_46.d s< rbx_12)
                            rbx_12 = rax_46.d
                        
                        int32_t rdi_10 = 0
                        
                        if (r12_5 != 0 && *r12_5 != 0 && rbx_12 s> 0)
                            if (rbx_12 + 1 s> 0)
                                sub_1405947f0(&var_2b8, rbx_12 + 1)
                                r14_5 = var_2b0_1:4.d
                                rdi_10 = var_2b0_1.d
                                rsi_6 = var_2b8
                            
                            rdi_10 = rdi_10 + 1 + rbx_12
                            var_2b0_1.d = rdi_10
                            
                            if (rdi_10 s> r14_5)
                                sub_140594770(&var_2b8)
                                r14_5 = var_2b0_1:4.d
                                rdi_10 = var_2b0_1.d
                                rsi_6 = var_2b8
                            
                            UnDecorator::getReferenceType(rsi_6, r12_5, rbx_12 * 2)
                            rsi_6[sx.q(rdi_10) - 1] = 0
                        
                        int16_t* rcx_85 = var_308
                        
                        if (rcx_85 != 0)
                            sub_140a74f90(rcx_85)
                        
                        var_308 = rsi_6
                        int32_t rax_48 = r15_2 - 1
                        var_2b8 = nullptr
                        var_300_1 = rdi_10
                        var_300_1 = r14_5
                        int64_t var_2b0_2 = 0
                        
                        if (r15_2 == 0)
                            rax_48 = 0
                        
                        int32_t rdx_48 = r13_6[1].d
                        int32_t rcx_87 = var_2a8.d + rax_48
                        int32_t rbx_13 = rdx_48 - 1
                        
                        if (rdx_48 == 0)
                            rbx_13 = 0
                        
                        if (rcx_87 s>= 0)
                            rax_46 = zx.q(rbx_13)
                            
                            if (rcx_87 s< rbx_13)
                                rax_46 = zx.q(rcx_87)
                        else
                            rax_46 = nullptr
                        
                        int64_t r9_10 = sx.q(rax_46.d)
                        
                        if (sx.q(rcx_87) + 0x7fffffff s< r9_10)
                            rbx_13 = rax_46.d
                        else if (sx.q(rcx_87) + 0x7fffffff s< sx.q(rbx_13))
                            rbx_13 = rcx_87 + 0x7fffffff
                        
                        int16_t* const rcx_90
                        
                        if (rdx_48 == 0)
                            rcx_90 = &data_142d40450
                        else
                            rcx_90 = *r13_6
                        
                        int16_t* rsi_7 = &rcx_90[r9_10]
                        rbx_6 = zx.q(rbx_13 - rax_46.d)
                        uint64_t var_2f8 = 0
                        int64_t var_2f0_1 = 0
                        r14_4 = 0
                        r12_4 = 0
                        int32_t rdi_12 = 0
                        
                        if (rsi_7 != 0 && *rsi_7 != 0 && rbx_6.d s> 0)
                            int32_t rdx_49 = (rbx_6 + 1).d
                            
                            if (rdx_49 s> 0)
                                sub_1405947f0(&var_2f8, rdx_49)
                                rdi_12 = var_2f0_1:4.d
                                r12_4 = var_2f0_1.d
                                r14_4 = var_2f8
                            
                            r12_4 = r12_4 + 1 + rbx_6.d
                            var_2f0_1.d = r12_4
                            
                            if (r12_4 s> rdi_12)
                                sub_140594770(&var_2f8)
                                rdi_12 = var_2f0_1:4.d
                                r12_4 = var_2f0_1.d
                                r14_4 = var_2f8
                            
                            UnDecorator::getReferenceType(r14_4, rsi_7, rbx_6.d * 2)
                            *(r14_4 + (sx.q(r12_4) << 1) - 2) = 0
                        
                        rbx_6.b = 1
                        var_1f0_1:4.d = rdi_12
                        rdi_9 = var_258
                        var_2f8 = 0
                        int64_t var_2f0_2 = 0
                        var_1f8 = r14_4
                        var_1f0_1.d = r12_4
                    else
                        rbx_6.b = 0
                    
                    if (rdi_9 != 0)
                        sub_140a74f90(rdi_9)
                    
                    if (rbx_6.b != 0)
                        sub_14062d6e0(&var_b8, &var_2a0, &var_308)
                        int64_t rax_49 = sx.q(var_2a0)
                        void* rax_51
                        
                        if (rax_49.d != 0xffffffff)
                            rax_51 = var_b8 + rax_49 * 0x28
                        
                        if (rax_49.d == 0xffffffff || rax_51 == 0 || rax_51 == -0x10)
                            int64_t* rcx_96 = data_143db18d0
                            
                            if (rcx_96 == 0)
                                sub_140a53c40()
                                rcx_96 = data_143db18d0
                            
                            int16_t* const rdx_54 = &data_142d40450
                            int64_t r8_31
                            r8_31.b = 1
                            
                            if (var_300_1 != 0)
                                rdx_54 = var_308
                            
                            int64_t* rax_53 = (*(*rcx_96 + 0xb0))(rcx_96, rdx_54, r8_31)
                            
                            if (rax_53 != 0 && data_143f3d6b0 != 0 && arg1 != 0)
                                int64_t r8_32 = *rax_53
                                int64_t var_148
                                (*(r8_32 + 0xa0))(rax_53, &var_148, r8_32)
                                sub_1406253f0(data_143f3d6b0 + 0x58, &var_308, &var_148)
                                int64_t rcx_100 = var_148
                                
                                if (rcx_100 != 0)
                                    sub_140a74f90(rcx_100)
                            
                            rbx_6.b = 1
                            
                            if (*data_143f3d6f8 s> 0
                                    && sub_140a32ae0(&var_308, &data_143293080, 1) != 0)
                                int64_t var_288 = 0
                                uint64_t rdi_13 = &data_142d40450
                                int32_t rdx_57 = 0
                                
                                if (r12_4 != 0)
                                    rdi_13 = r14_4
                                
                                int32_t var_280_1 = 0
                                int32_t rcx_102 = 0
                                int32_t var_27c_1 = 0
                                
                                if (rdi_13 != 0 && *rdi_13 != 0)
                                    int64_t rbx_14 = -1
                                    
                                    do
                                        rbx_14 += 1
                                    while (*(rdi_13 + (rbx_14 << 1)) != 0)
                                    
                                    rbx_6 = zx.q(rbx_14.d + 1)
                                    
                                    if (rbx_6.d s> 0)
                                        sub_1405947f0(&var_288, rbx_6.d)
                                        rcx_102 = var_27c_1
                                        rdx_57 = var_280_1
                                    
                                    int32_t rax_56 = rdx_57 + rbx_6.d
                                    int32_t var_280_2 = rax_56
                                    
                                    if (rax_56 s> rcx_102)
                                        sub_140594770(&var_288)
                                    
                                    UnDecorator::getReferenceType(var_288, rdi_13, rbx_6.d * 2)
                                
                                int16_t* rdi_14 = &data_142d40450
                                int32_t rdx_60 = 0
                                int64_t var_298 = 0
                                
                                if (var_300_1 != 0)
                                    rdi_14 = var_308
                                
                                int32_t rcx_106 = 0
                                int32_t var_290_1 = 0
                                int32_t var_28c_1 = 0
                                
                                if (rdi_14 != 0 && *rdi_14 != 0)
                                    int64_t rbx_15 = -1
                                    
                                    do
                                        rbx_15 += 1
                                    while (rdi_14[rbx_15] != 0)
                                    
                                    rbx_6 = zx.q(rbx_15.d + 1)
                                    
                                    if (rbx_6.d s> 0)
                                        sub_1405947f0(&var_298, rbx_6.d)
                                        rcx_106 = var_28c_1
                                        rdx_60 = var_290_1
                                    
                                    int32_t rax_57 = rdx_60 + rbx_6.d
                                    int32_t var_290_2 = rax_57
                                    
                                    if (rax_57 s> rcx_106)
                                        sub_140594770(&var_298)
                                    
                                    UnDecorator::getReferenceType(var_298, rdi_14, rbx_6.d * 2)
                                
                                sub_140bd2e80(&data_143a2dce0, &var_298, &var_288)
                                int64_t rcx_110 = var_298
                                
                                if (rcx_110 != 0)
                                    sub_140a74f90(rcx_110)
                                
                                int64_t rcx_111 = var_288
                                
                                if (rcx_111 != 0)
                                    sub_140a74f90(rcx_111)
                                
                                rbx_6.b = 0
                            
                            uint64_t r8_39 = &data_142d40450
                            int16_t* rdx_64 = &data_142d40450
                            var_348_2.b = 0
                            int16_t* const rcx_112 = &data_142d40450
                            
                            if (r12_4 != 0)
                                r8_39 = r14_4
                            
                            if (var_300_1 != 0)
                                rdx_64 = var_308
                            
                            if (data_143de5878 != 0)
                                rcx_112 = data_143de5870
                            
                            sub_140afa9b0(rcx_112, rdx_64, r8_39, 
                                (zx.d(rbx_6.b) << 0x1a) + 0x1000000, var_348_2.b)
                            sub_1405d1820(&var_b8, &var_198)
                            uint64_t var_190
                            sub_140596d10(var_190, &var_308)
                            sub_140596d10(var_190 + 0x10, &var_1f8)
                            *(var_190 + 0x20) = 0xffffffff
                            int32_t rax_58 = *(var_190 + 8)
                            int16_t* rdx_68
                            
                            if (rax_58 == 0)
                                rdx_68 = &data_142d40450
                            else
                                rdx_68 = *var_190
                            
                            int32_t rcx_116 = rax_58 - 1
                            
                            if (rax_58 == 0)
                                rcx_116 = 0
                            
                            int32_t rax_59 = sub_1405969c0(rcx_116, rdx_68)
                            var_348_2.d = var_198.d
                            sub_1405d2a60(&var_b8, &var_248, rax_59, var_190, var_348_2.d, nullptr)
                            r14_4 = var_1f8
                    
                    if (r14_4 != 0)
                        sub_140a74f90(r14_4)
                    
                    int16_t* rcx_120 = var_308
                    
                    if (rcx_120 != 0)
                        sub_140a74f90(rcx_120)
                    
                    rsi_5 += 1
                
                rbx_5 = var_318
                
                if (j_3 != 0)
                    int32_t j_2
                    
                    do
                        int64_t rcx_121 = *rbx_5
                        
                        if (rcx_121 != 0)
                            sub_140a74f90(rcx_121)
                        
                        rbx_5 = &rbx_5[2]
                        j_2 = j_3
                        j_3 -= 1
                    while (j_2 != 1)
                    rbx_5 = var_318
                
                if (rbx_5 != 0)
                    sub_140a74f90(rbx_5)
                
                int16_t* rcx_123 = var_338
                
                if (rcx_123 != 0)
                    sub_140a74f90(rcx_123)
                
                i = i_2 + 1
                i_2 = i
            while (i s< 2)
            
            int16_t* rdx_70 = &data_142d40450
            void* rcx_124 = data_143ddb400
            
            if (var_1e0 != 0)
                rdx_70 = var_1e8
            
            var_278 = nullptr
            var_270.q = 0
            
            if (sub_140af5b90(rcx_124, rdx_70, u"BaseProfileName", &var_278, &data_143de5870) == 0)
                rsi = 0
                var_2e0 = 0
                
                if (var_2dc != 0)
                    sub_1405947f0(&var_2e8, 0)
                    rsi = var_2e0
            else
                int16_t** var_348_3
                var_348_3.d = 0
                sub_140596860(&var_2e8, var_278, var_270, var_2dc, var_348_3.d)
                rsi = var_2e0
            
            int16_t* rcx_127 = var_278
            
            if (rcx_127 != 0)
                sub_140a74f90(rcx_127)
            
            r15 = var_2e8
            
            if (rsi s<= 1)
                rbx_5.b = 1
            else
                rbx_5.b = 0
        
        int16_t* rcx_128 = var_1e8
        
        if (rcx_128 != 0)
            sub_140a74f90(rcx_128)
    while (rbx_5.b == 0)
    r13 = var_1a8

if (r15 != 0)
    sub_140a74f90(r15)

int32_t var_70_1 = 0

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t result = sub_1405e1b50(&var_b8, 0)
int64_t var_98

if (var_98 != 0)
    result = sub_140a74f90(var_98)

int64_t rcx_133 = var_b8

if (rcx_133 != 0)
    result = sub_140a74f90(rcx_133)

int32_t i_3 = i_4
int64_t* rbx_16 = var_240

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_134 = *rbx_16
        
        if (rcx_134 != 0)
            result = sub_140a74f90(rcx_134)
        
        rbx_16 = &rbx_16[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_16 = var_240

if (rbx_16 != 0)
    result = sub_140a74f90(rbx_16)

if (r13 != 0)
    result = sub_140a74f90(r13)

__security_check_cookie(rax_1 ^ &var_368)
return result
