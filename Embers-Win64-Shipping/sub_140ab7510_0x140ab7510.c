// 函数: sub_140ab7510
// 地址: 0x140ab7510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = zx.q(data_14401b1a0)
void* rsi = arg1
char r15 = arg3
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
void* r12 = ThreadLocalStoragePointer + (r9 << 3)
int32_t* rbx_1 = *(ThreadLocalStoragePointer + (r9 << 3)) + 0x14
void* var_138 = r12

if (data_143dba298 s> *rbx_1)
    _Init_thread_header(&data_143dba298)
    
    if (data_143dba298 == 0xffffffff)
        sub_140b58260(&data_143dba290, u"BootGlobal", 1)
        _Init_thread_footer(&data_143dba298)

if (data_143dba2a8 s> *rbx_1)
    _Init_thread_header(&data_143dba2a8)
    
    if (data_143dba2a8 == 0xffffffff)
        sub_140b58260(&data_143dba2a0, u"Reset", 1)
        _Init_thread_footer(&data_143dba2a8)

int32_t rbx_2 = arg2[1].d
int64_t rdi_1 = *arg2
int64_t var_188 = 0
int32_t var_180 = rbx_2

if (rbx_2 != 0)
    sub_1405a4c70(&var_188, rbx_2, 0)
    memcpy(var_188, rdi_1, rbx_2 * 2)
else
    int32_t var_17c_1 = 0

int64_t var_130
int64_t var_120
int64_t var_110
int64_t* rax_4 =
    sub_140a35fd0(sub_140a35de0(sub_140a35fa0(&var_188, &var_130), &var_120, nullptr), &var_110)

if (&var_188 != rax_4)
    int64_t rcx_5 = var_188
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    var_188 = *rax_4
    *rax_4 = 0
    int32_t var_180_1 = rax_4[1].d
    int32_t var_17c_2 = *(rax_4 + 0xc)
    rax_4[1] = 0

int64_t rcx_7 = var_110

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = var_120

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_130

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t* var_148 = nullptr
int32_t i_18 = 0
sub_140a2ccb0(&var_188, &var_148, U",", 1)
int32_t i_13 = i_18
int32_t result = 0
int32_t result_1 = 0

if (i_13 s> 0)
    uint64_t r14
    uint64_t var_38_1 = r14
    
    do
        int64_t var_158
        sub_140a35fa0(&var_148[sx.q(result) * 2], &var_158)
        
        if (sub_140a32ae0(&var_158, u"Log ", 1) != 0)
            int32_t var_150
            int32_t rax_8 = var_150
            int32_t r8_2 = rax_8 - 1
            
            if (rax_8 == 0)
                r8_2 = 0
            
            int32_t rcx_15 = rax_8 - 1
            
            if (rax_8 == 0)
                rcx_15 = 0
            
            int32_t rdx_7
            
            if (r8_2 - 4 s>= 0)
                rdx_7 = rcx_15
                
                if (r8_2 - 4 s< rcx_15)
                    rdx_7 = r8_2 - 4
            else
                rdx_7 = 0
            
            int32_t rcx_16 = rcx_15 - rdx_7
            int32_t rbx_4 = rax_8 - 1
            
            if (rax_8 == 0)
                rbx_4 = 0
            
            if (rcx_16 s>= 0)
                if (rcx_16 s< rbx_4)
                    rbx_4 = rcx_16
                
                if (rbx_4 != 0)
                    if (rax_8 != rbx_4)
                        int64_t rcx_19 = var_158
                        memmove(rcx_19, rcx_19 + (sx.q(rbx_4) << 1), (rax_8 - rbx_4) * 2)
                        rax_8 = var_150
                    
                    var_150 = rax_8 - rbx_4
        
        int64_t* var_198 = nullptr
        int32_t i_17 = 0
        sub_140a2cee0(&var_158, &var_198, nullptr, 1)
        int32_t i_14 = i_17
        
        if (i_14 s>= 1)
            int64_t* rax_11 = var_198
            int16_t* rdx_10
            
            if (rax_11[1].d == 0)
                rdx_10 = &data_142d40450
            else
                rdx_10 = *rax_11
            
            int32_t var_1c8
            sub_140b58260(&var_1c8, rdx_10, 1)
            int32_t var_1c4
            int32_t rcx_25
            rcx_25.b = var_1c4 == 0
            
            if ((rcx_25.b & sub_140b5b8a0(var_1c8, 0xd3)) != 0)
                int64_t rax_13 = var_1c8.q
                
                if (r15 != 0)
                    rax_13 = data_143dba290
                
                var_1c8.q = rax_13
            
            r14.b = 0
            void** var_168 = nullptr
            int32_t i_19 = 0
            int32_t var_15c_1 = 0
            char arg_10 = 0
            int32_t i_9
            void* var_1a8
            
            if (r15 == 0)
                int64_t rdi_2 = var_1c8.q
                int32_t i_12 = -1
                int32_t i_7 = 0xffffffff
                i_9 = 0xffffffff
                sub_1405b6730(rsi + 0x820, *(rsi + 0x828) - *(rsi + 0x854), 0)
                
                if (*(rsi + 0x868) != 0)
                    int32_t rax_30 = sub_140b5ead0(rdi_2.d) + rdi_2:4.d
                    void* r8_10 = rsi + 0x858
                    void* rcx_34 = *(r8_10 + 8)
                    
                    if (rcx_34 != 0)
                        r8_10 = rcx_34
                    
                    int32_t i = *(r8_10 + (((sx.q(*(rsi + 0x868)) - 1) & sx.q(rax_30)) << 2))
                    i_12 = i
                    i_9 = i
                    i_7 = i
                    
                    if (i != 0xffffffff)
                        int64_t r8_11 = *(rsi + 0x820)
                        int32_t i_8 = i
                        
                        do
                            i = *(r8_11 + sx.q(i) * 0x18 + 0x10)
                            
                            if (*(r8_11 + sx.q(i_12) * 0x18) == rdi_2)
                                break
                            
                            i_12 = i
                        while (i != 0xffffffff)
                        
                        i_9 = i
                        i_7 = i_12
                
                var_1a8 = rsi + 0x820
                uint128_t zmm0_1 = (rsi + 0x820).o
                int64_t var_88_1 = i_7.o.q
                
                if (i_12 != 0xffffffff)
                    int64_t* r13_1 = zmm0_1.q
                    int32_t i_1 = var_88_1:4.d
                    int32_t i_11 = var_88_1.d
                    int32_t r9_3 = var_15c_1
                    void** r10_1 = var_168
                label_140ab7ac0:
                    int64_t i_23 = sx.q(i_19)
                    int64_t r15_1 = *r13_1
                    int32_t i_24 = (i_23 + 1).d
                    i_19 = i_24
                    int64_t rsi_2 = sx.q(i_11) * 0x18
                    char* rcx_38 = *(rsi_2 + r15_1 + 8)
                    r14.b = sbb.b(r14.b, r14.b, rcx_38[1] != 0)
                    r14.b &= 0x80
                    r14.b |= *rcx_38
                    arg_10 = r14.b
                    
                    if (i_24 s> r9_3)
                        sub_1405a4d70(&var_168)
                        r9_3 = var_15c_1
                        r10_1 = var_168
                        i_19 = i_24
                    
                    i_11 = i_1
                    r10_1[i_23] = *(rsi_2 + r15_1 + 8)
                    
                    if (i_1 != 0xffffffff)
                        int64_t r8_12 = *r13_1
                        
                        do
                            i_1 = *(r8_12 + sx.q(i_1) * 0x18 + 0x10)
                            
                            if (*(r8_12 + sx.q(i_11) * 0x18) == zmm0_1:8.q)
                                goto label_140ab7ac0
                            
                            i_11 = i_1
                        while (i_1 != 0xffffffff)
                    
                    r15 = arg3
                    r12 = var_138
                
                rsi = arg1
            else
                int64_t rbx_7 = var_1c8.q
                
                if (*(rsi + 0x878) == *(rsi + 0x8a4))
                label_140ab78fb:
                    int64_t rbx_8 = data_143dba290
                    
                    if (*(rsi + 0x878) != *(rsi + 0x8a4))
                        int32_t rax_21 = sub_140b5ead0(rbx_8.d) + rbx_8:4.d
                        void* r8_8 = rsi + 0x8a8
                        void* rcx_30 = *(r8_8 + 8)
                        
                        if (rcx_30 != 0)
                            r8_8 = rcx_30
                        
                        int32_t i_2 = *(r8_8 + (((sx.q(*(rsi + 0x8b8)) - 1) & sx.q(rax_21)) << 2))
                        
                        if (i_2 != 0xffffffff)
                            int64_t r8_9 = *(rsi + 0x870)
                            
                            do
                                int64_t i_10 = sx.q(i_2)
                                int64_t rcx_31 = i_10 * 5
                                
                                if (*(r8_9 + (rcx_31 << 2)) == rbx_8)
                                    if (i_2 != 0xffffffff)
                                        void* rax_27 = r8_9 + i_10 * 0x14
                                        
                                        if (rax_27 != 0 && rax_27 != -8)
                                            r14 = zx.q(*(rax_27 + 8))
                                            arg_10 = r14.b
                                    
                                    break
                                
                                i_2 = *(r8_9 + (rcx_31 << 2) + 0xc)
                            while (i_2 != 0xffffffff)
                else
                    int32_t rax_16 = sub_140b5ead0(rbx_7.d) + rbx_7:4.d
                    void* r8_6 = rsi + 0x8a8
                    void* rcx_27 = *(r8_6 + 8)
                    
                    if (rcx_27 != 0)
                        r8_6 = rcx_27
                    
                    int32_t rax_18 = *(r8_6 + (((sx.q(*(rsi + 0x8b8)) - 1) & sx.q(rax_16)) << 2))
                    
                    if (rax_18 == 0xffffffff)
                        goto label_140ab78fb
                    
                    int64_t r8_7 = *(rsi + 0x870)
                    int64_t rdx_14
                    
                    while (true)
                        rdx_14 = sx.q(rax_18)
                        int64_t rcx_28 = rdx_14 * 5
                        
                        if (*(r8_7 + (rcx_28 << 2)) == rbx_7)
                            break
                        
                        rax_18 = *(r8_7 + (rcx_28 << 2) + 0xc)
                        
                        if (rax_18 == 0xffffffff)
                            goto label_140ab78fb
                    
                    if (rax_18 == 0xffffffff)
                        goto label_140ab78fb
                    
                    void* rax_24 = r8_7 + rdx_14 * 0x14
                    
                    if (rax_24 == 0 || rax_24 == -8)
                        goto label_140ab78fb
                    
                    r14 = zx.q(*(rax_24 + 8))
                    arg_10 = r14.b
            
            if (i_17 != 1)
                int32_t rsi_3 = 1
                
                if (i_17 s> 1)
                    void* rax_74 = *r12
                    int64_t rdi_5 = 0x10
                    arg_10.q = 0x14 + rax_74
                    int32_t* rbx_14 = 0x14 + rax_74
                    int32_t* var_c8_1 = rbx_14
                    
                    do
                        int64_t* rax_76 = var_198
                        int16_t* rdx_42
                        
                        if (*(rax_76 + rdi_5 + 8) == 0)
                            rdx_42 = &data_142d40450
                        else
                            rdx_42 = *(rax_76 + rdi_5)
                        
                        int32_t var_1a0
                        sub_140b58260(&var_1a0, rdx_42, 1)
                        
                        if (data_143dba2b8 s> *arg_10.q)
                            _Init_thread_header(&data_143dba2b8)
                            
                            if (data_143dba2b8 == 0xffffffff)
                                sub_140b58260(&data_143dba2b0, u"Verbose", 1)
                                _Init_thread_footer(&data_143dba2b8)
                        
                        if (data_143dba2c8 s> *(0x14 + rax_74))
                            _Init_thread_header(&data_143dba2c8)
                            
                            if (data_143dba2c8 == 0xffffffff)
                                sub_140b58260(&data_143dba2c0, u"VeryVerbose", 1)
                                _Init_thread_footer(&data_143dba2c8)
                        
                        if (data_143dba2d8 s> *(0x14 + rax_74))
                            _Init_thread_header(&data_143dba2d8)
                            
                            if (data_143dba2d8 == 0xffffffff)
                                sub_140b58260(&data_143dba2d0, &data_142dd8278, 1)
                                _Init_thread_footer(&data_143dba2d8)
                        
                        if (data_143dba2e8 s> *(0x14 + rax_74))
                            _Init_thread_header(&data_143dba2e8)
                            
                            if (data_143dba2e8 == 0xffffffff)
                                sub_140b58260(&data_143dba2e0, u"Default", 1)
                                _Init_thread_footer(&data_143dba2e8)
                        
                        if (data_143dba2f8 s> *rbx_14)
                            _Init_thread_header(&data_143dba2f8)
                            
                            if (data_143dba2f8 == 0xffffffff)
                                sub_140b58260(&data_143dba2f0, &data_142e657e0, 1)
                                _Init_thread_footer(&data_143dba2f8)
                        
                        if (data_143dba308 s> *(0x14 + rax_74))
                            _Init_thread_header(&data_143dba308)
                            
                            if (data_143dba308 == 0xffffffff)
                                sub_140b58260(&data_143dba300, &data_142e657e8, 1)
                                _Init_thread_footer(&data_143dba308)
                        
                        if (data_143dba318 s> *(0x14 + rax_74))
                            _Init_thread_header(&data_143dba318)
                            
                            if (data_143dba318 == 0xffffffff)
                                sub_140b58260(&data_143dba310, u"Break", 1)
                                _Init_thread_footer(&data_143dba318)
                        
                        if (data_143dba328 s> *(0x14 + rax_74))
                            _Init_thread_header(&data_143dba328)
                            
                            if (data_143dba328 == 0xffffffff)
                                sub_140b58260(&data_143dba320, u"Fatal", 1)
                                _Init_thread_footer(&data_143dba328)
                        
                        if (data_143dba338 s> *(rax_74 + 0x14))
                            _Init_thread_header(&data_143dba338)
                            
                            if (data_143dba338 == 0xffffffff)
                                sub_140b58260(&data_143dba330, &data_142e65810, 1)
                                _Init_thread_footer(&data_143dba338)
                        
                        if (data_143dba348 s> *rbx_1)
                            _Init_thread_header(&data_143dba348)
                            
                            if (data_143dba348 == 0xffffffff)
                                sub_140b58260(&data_143dba340, u"Display", 1)
                                _Init_thread_footer(&data_143dba348)
                        
                        int32_t var_19c
                        int32_t rcx_64
                        rcx_64.b = var_19c == 0
                        
                        if ((rcx_64.b & sub_140b5b8a0(var_1a0, 0)) == 0)
                            int64_t rax_93 = var_1a0.q
                            
                            if (rax_93 != data_143dba320)
                                int32_t rcx_65
                                rcx_65.b = var_19c == 0
                                
                                if ((rcx_65.b & sub_140b5b8a0(rax_93.d, 0x164)) == 0)
                                    int32_t rcx_66
                                    rcx_66.b = var_19c == 0
                                    
                                    if ((rcx_66.b & sub_140b5b8a0(var_1a0, 0x163)) == 0)
                                        int64_t rax_96 = var_1a0.q
                                        
                                        if (rax_96 == data_143dba330)
                                            r14.b &= 0xf5
                                            r14.b |= 5
                                        else if (rax_96 == data_143dba340)
                                            r14.b &= 0xf4
                                            r14.b |= 4
                                        else if (rax_96 == data_143dba2b0)
                                            r14.b &= 0xf6
                                            r14.b |= 6
                                        else if (rax_96 == data_143dba2c0
                                                || rax_96 == data_143dba2d0)
                                            r14.b &= 0xf7
                                        labelid_b4:
                                            r14.b |= 7
                                        else if (rax_96 != data_143dba2e0)
                                            if (rax_96 == data_143dba300)
                                                r14.b &= 0xf1
                                                r14.b |= 1
                                            else if (rax_96 == data_143dba2f0)
                                                r14.b &= 0xf0
                                                int64_t rbx_18 = var_1c8.q
                                                
                                                if (*(arg1 + 0x8c8) == *(arg1 + 0x8f4))
                                                labelid_b4:
                                                    r14.b |= 7
                                                else
                                                    int64_t rax_102 =
                                                        sx.q(sub_140b5ead0(rbx_18.d) + rbx_18:4.d)
                                                    void* r8_21 = arg1 + 0x8f8
                                                    void* rcx_68 = *(r8_21 + 8)
                                                    
                                                    if (rcx_68 != 0)
                                                        r8_21 = rcx_68
                                                    
                                                    int32_t rax_103 = *(r8_21 + (((
                                                        sx.q(*(arg1 + 0x908)) - 1) & rax_102) << 2))
                                                    
                                                    if (rax_103 == 0xffffffff)
                                                    labelid_b4:
                                                        r14.b |= 7
                                                    else
                                                        int64_t r8_22 = *(arg1 + 0x8c0)
                                                        int64_t rdx_46
                                                        
                                                        while (true)
                                                            rdx_46 = sx.q(rax_103)
                                                            int64_t rcx_69 = rdx_46 * 5
                                                            
                                                            if (*(r8_22 + (rcx_69 << 2)) == rbx_18)
                                                                break
                                                            
                                                            rax_103 = *(r8_22 + (rcx_69 << 2) + 0xc)
                                                            
                                                            if (rax_103 == 0xffffffff)
                                                                goto label_140ab8451_2
                                                        
                                                        if (rax_103 == 0xffffffff)
                                                        label_140ab8451:
                                                            r14.b |= 7
                                                        else
                                                            void* rax_105 = r8_22 + rdx_46 * 0x14
                                                            
                                                            if (rax_105 == 0 || rax_105 == -8)
                                                            label_140ab8451_1:
                                                                r14.b |= 7
                                                            else
                                                                char rax_107 = *(rax_105 + 8)
                                                                
                                                                if (rax_107 == 0)
                                                                label_140ab8451_2:
                                                                    r14.b |= 7
                                                                else
                                                                    r14.b |= rax_107
                                            else if (rax_96 == data_143dba310)
                                                r14.b ^= 0x80
                                        else if (i_19 != 0 && arg3 == 0)
                                            r14 = zx.q(*(*var_168 + 2))
                                    else
                                        r14.b &= 0xf3
                                        r14.b |= 3
                                else
                                    r14.b &= 0xf2
                                    r14.b |= 2
                            else
                                r14.b &= 0xf1
                                r14.b |= 1
                        else
                            r14.b &= 0xf1
                            r14.b |= 1
                        
                        rbx_14 = var_c8_1
                        rsi_3 += 1
                        rdi_5 += 0x10
                    while (rsi_3 s< i_17)
            else if (r15 == 0)
                if (var_1c8.q == data_143dba2a0)
                    int32_t rcx_42 = 0
                    void* var_1c0
                    var_1c0:4.d = 1
                    var_1c0.d = 0
                    int32_t i_21 = *(rsi + 0x848)
                    int32_t r8_13 = 0
                    void* var_1b8_2 = rsi + 0x830
                    int32_t var_1b0_1 = 0xffffffff
                    i_9.q = 0
                    
                    if (i_21 != 0)
                        void* rax_40 = *(rsi + 0x840)
                        void* r9_4 = rsi + 0x830
                        
                        if (rax_40 != 0)
                            r9_4 = rax_40
                        
                        int32_t temp5_1
                        int32_t temp6_1
                        temp5_1:temp6_1 = sx.q(i_21 - 1)
                        int32_t rdx_27 = *r9_4
                        int32_t i_22
                        
                        if (rdx_27 != 0)
                        label_140ab7c3c:
                            int32_t rax_47 = ((rdx_27 - 1) & rdx_27) ^ rdx_27
                            uint64_t rflags_1
                            int32_t temp0_1
                            temp0_1, rflags_1 = _bit_scan_reverse(rax_47)
                            var_1c0:4.d = rax_47
                            int32_t rax_48
                            
                            if (rax_47 == 0)
                                rax_48 = 0x20
                            else
                                rax_48 = 0x1f - temp0_1
                            
                            int32_t var_1ac = r8_13 - rax_48 + 0x1f
                            
                            if (r8_13 - rax_48 + 0x1f s> i_21)
                                i_22 = i_21
                        else
                            while (true)
                                int64_t rdx_28 = sx.q(rcx_42)
                                r8_13 += 0x20
                                rcx_42 += 1
                                var_1a8.d = r8_13
                                var_1c0.d = rcx_42
                                
                                if (rdx_28.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_27 = *(r9_4 + (rdx_28 << 2) + 4)
                                int32_t var_1b0_2 = 0xffffffff
                                
                                if (rdx_27 != 0)
                                    goto label_140ab7c3c
                            
                            i_22 = i_21
                    
                    int32_t i_20 = *(rsi + 0x848)
                    i_9 = i_20
                    int128_t var_60_1 = 0xffffffff
                    uint128_t var_70_1 = var_1c0.o
                    int32_t rbx_9 = 0xffffffff << (i_20 & 0x1f).b
                    int32_t r8_16 = i_20 s>> 5
                    int32_t r9_6 = i_20 & 0xffffffe0
                    int64_t var_a0_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
                    int32_t var_1b0_3 = rbx_9
                    uint128_t var_c0 = (rsi + 0x820).o
                    uint128_t var_b0_1 = var_70_1
                    
                    if (i_20 != i_21)
                        void* rax_52 = *(rsi + 0x840)
                        void* r10_3 = rsi + 0x830
                        
                        if (rax_52 != 0)
                            r10_3 = rax_52
                        
                        int32_t temp8_1
                        int32_t temp9_1
                        temp8_1:temp9_1 = sx.q(i_21 - 1)
                        int32_t rdx_32 = *(r10_3 + (sx.q(r8_16) << 2)) & rbx_9
                        
                        if (rdx_32 != 0)
                        label_140ab7d38:
                            int32_t rax_58 = ((rdx_32 - 1) & rdx_32) ^ rdx_32
                            uint64_t rflags_2
                            int32_t temp0_3
                            temp0_3, rflags_2 = _bit_scan_reverse(rax_58)
                            int32_t rax_59
                            
                            if (rax_58 == 0)
                                rax_59 = 0x20
                            else
                                rax_59 = 0x1f - temp0_3
                            
                            i_9 = r9_6 - rax_59 + 0x1f
                            
                            if (r9_6 - rax_59 + 0x1f s> i_21)
                                i_9 = i_21
                        else
                            while (true)
                                int64_t rcx_46 = sx.q(r8_16)
                                r9_6 += 0x20
                                r8_16 += 1
                                
                                if (rcx_46.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_32 = *(r10_3 + (rcx_46 << 2) + 4)
                                var_1b0_3 = 0xffffffff
                                
                                if (rdx_32 != 0)
                                    goto label_140ab7d38
                            
                            i_9 = i_21
                    
                    while (true)
                        int64_t rcx_48 = sx.q(var_b0_1:0xc.d)
                        int32_t rax_51
                        
                        if (rcx_48.d != (var_1b0_3.q u>> 0x20).d || var_b0_1.q != rsi + 0x830)
                            rax_51.b = 0
                        else
                            rax_51.b = 1
                        
                        int64_t* rdx_33 = var_c0.q
                        
                        if (rax_51.b == 0 || rdx_33 != rsi + 0x820)
                            rax_51.b = 1
                        else
                            rax_51.b = 0
                        
                        if (rax_51.b == 0)
                            break
                        
                        char* r9_8 = _mm_bsrli_si128(*(*rdx_33 + rcx_48 * 0x18), 8).q
                        uint8_t r8_17 = r9_8[2]
                        uint8_t rcx_50 = r9_8[3]
                        uint8_t rdx_35 = r8_17 & 0xf
                        uint8_t rbx_10 = rdx_35
                        
                        if (rcx_50 u<= rdx_35)
                            rbx_10 = rcx_50
                        
                        *r9_8 = rbx_10
                        r9_8[1] = r8_17 u>> 7
                        
                        if (rbx_10 != 0)
                            sub_140a9e570(arg1 + 0x8c0, &var_130)
                            int64_t rax_60 = var_1c8.q
                            int64_t* var_128
                            var_128[1].b = rbx_10
                            *var_128 = rax_60
                            *(var_128 + 0xc) = 0xffffffff
                            void var_100
                            sub_14095c550(arg1 + 0x8c0, &var_100, 
                                (rax_60 u>> 0x20).d + sub_140b5ead0(rax_60.d), var_128, var_130.d, 
                                nullptr)
                        
                        var_b0_1:8.d &= not.d(var_c0:0xc.d)
                        sub_14059bdd0(&var_c0:8)
                    
                    r14 = zx.q(arg_10)
                else if ((r14.b & 0xf) == 0)
                    int64_t rbx_13 = var_1c8.q
                    
                    if (*(rsi + 0x8c8) == *(rsi + 0x8f4))
                    labelid_8a:
                        r14.b |= 7
                    else
                        arg_10.q = rbx_13
                        int32_t rax_67 = sub_140b5ead0(rbx_13.d) + arg4
                        void* r8_19 = rsi + 0x8f8
                        void* rcx_56 = *(r8_19 + 8)
                        
                        if (rcx_56 != 0)
                            r8_19 = rcx_56
                        
                        int32_t rax_69 =
                            *(r8_19 + (((sx.q(*(rsi + 0x908)) - 1) & sx.q(rax_67)) << 2))
                        
                        if (rax_69 == 0xffffffff)
                        labelid_8a:
                            r14.b |= 7
                        else
                            int64_t r8_20 = *(rsi + 0x8c0)
                            int64_t rdx_41
                            
                            while (true)
                                rdx_41 = sx.q(rax_69)
                                int64_t rcx_57 = rdx_41 * 5
                                
                                if (*(r8_20 + (rcx_57 << 2)) == rbx_13)
                                    break
                                
                                rax_69 = *(r8_20 + (rcx_57 << 2) + 0xc)
                                
                                if (rax_69 == 0xffffffff)
                                    goto label_140ab7ed9_2
                            
                            if (rax_69 == 0xffffffff)
                            label_140ab7ed9:
                                r14.b |= 7
                            else
                                void* rax_71 = r8_20 + rdx_41 * 0x14
                                
                                if (rax_71 == 0 || rax_71 == -8)
                                label_140ab7ed9_1:
                                    r14.b |= 7
                                else
                                    char rax_73 = *(rax_71 + 8)
                                    
                                    if (rax_73 == 0)
                                    label_140ab7ed9_2:
                                        r14.b |= 7
                                    else
                                        r14.b |= rax_73
                else
                    r14.b &= 0xf0
            
            int64_t rbx_19 = var_1c8.q
            
            if (rbx_19 != data_143dba2a0)
                void* r15_5
                
                if (arg3 == 0)
                    if (i_19 s> 0)
                        void** r9_13 = var_168
                        char r10_4 = r14.b & 0xf
                        uint64_t i_16 = zx.q(i_19)
                        uint64_t i_3
                        
                        do
                            char* r8_24 = *r9_13
                            r9_13 = &r9_13[1]
                            char rdx_49 = r10_4
                            char rcx_74 = r8_24[3]
                            r8_24[1] = r14.b u>> 7
                            
                            if (rcx_74 u<= r10_4)
                                rdx_49 = rcx_74
                            
                            *r8_24 = rdx_49
                            i_3 = i_16
                            i_16 -= 1
                        while (i_3 != 1)
                    
                    r15_5 = arg1
                    int32_t rcx_75
                    rcx_75.b = var_1c4 == 0
                    
                    if ((rcx_75.b & sub_140b5b8a0(var_1c8, 0xd3)) != 0)
                        sub_140a9f730(r15_5)
                else
                    r15_5 = arg1
                    
                    if (rbx_19 == data_143dba290)
                        sub_140aa8b70(r15_5 + 0x870, 0)
                    
                    sub_140a9e570(r15_5 + 0x870, &var_120)
                    int64_t rax_108 = var_1c8.q
                    int64_t* var_118
                    *var_118 = rax_108
                    var_118[1].b = r14.b
                    *(var_118 + 0xc) = 0xffffffff
                    void var_fc
                    sub_14095c550(r15_5 + 0x870, &var_fc, 
                        (rax_108 u>> 0x20).d + sub_140b5ead0(rax_108.d), var_118, var_120.d, 
                        nullptr)
                
                r14.b &= 0xf
                
                if (r14.b != 0)
                    sub_140a9e570(r15_5 + 0x8c0, &var_110)
                    int64_t rax_113 = var_1c8.q
                    int64_t* var_108
                    *var_108 = rax_113
                    var_108[1].b = r14.b
                    *(var_108 + 0xc) = 0xffffffff
                    void var_f8
                    sub_14095c550(r15_5 + 0x8c0, &var_f8, 
                        (rax_113 u>> 0x20).d + sub_140b5ead0(rax_113.d), var_108, var_110.d, 
                        nullptr)
            
            void** rax_116 = var_168
            
            if (rax_116 != 0)
                sub_140a74f90(rax_116)
            
            int32_t i_15 = i_17
            int64_t* rbx_26 = var_198
            
            if (i_15 != 0)
                int32_t i_4
                
                do
                    int64_t rcx_81 = *rbx_26
                    
                    if (rcx_81 != 0)
                        sub_140a74f90(rcx_81)
                    
                    rbx_26 = &rbx_26[2]
                    i_4 = i_15
                    i_15 -= 1
                while (i_4 != 1)
                rbx_26 = var_198
            
            if (rbx_26 != 0)
                sub_140a74f90(rbx_26)
            
            int64_t rcx_83 = var_158
            
            if (rcx_83 != 0)
                sub_140a74f90(rcx_83)
            
            r12 = var_138
            r15 = arg3
            rsi = arg1
        else
            int64_t* rbx_5 = var_198
            
            if (i_14 != 0)
                int32_t i_5
                
                do
                    int64_t rcx_21 = *rbx_5
                    
                    if (rcx_21 != 0)
                        sub_140a74f90(rcx_21)
                    
                    rbx_5 = &rbx_5[2]
                    i_5 = i_14
                    i_14 -= 1
                while (i_5 != 1)
                rbx_5 = var_198
            
            if (rbx_5 != 0)
                sub_140a74f90(rbx_5)
            
            int64_t rcx_23 = var_158
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
        
        i_13 = i_18
        result = result_1 + 1
        result_1 = result
    while (result s< i_13)

int64_t* rbx_27 = var_148

if (i_13 != 0)
    int32_t i_6
    
    do
        int64_t rcx_84 = *rbx_27
        
        if (rcx_84 != 0)
            result = sub_140a74f90(rcx_84)
        
        rbx_27 = &rbx_27[2]
        i_6 = i_13
        i_13 -= 1
    while (i_6 != 1)
    rbx_27 = var_148

if (rbx_27 != 0)
    result = sub_140a74f90(rbx_27)

int64_t rcx_86 = var_188

if (rcx_86 == 0)
    return result

return sub_140a74f90(rcx_86)
