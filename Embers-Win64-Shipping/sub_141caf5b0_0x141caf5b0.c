// 函数: sub_141caf5b0
// 地址: 0x141caf5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
uint64_t rsi = arg3
uint64_t var_290 = arg3
uint64_t* var_2a8 = arg7
void* performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* r13 = *arg2
int64_t* var_2b8 = nullptr
int32_t i_24 = 0
int32_t i_25 = 0
int32_t i_22 = 0
int32_t i_29 = 0
uint64_t rdi
rdi.b = 0
int32_t i_30 = 0
int64_t* var_2e8 = nullptr
int32_t i_27 = 0
int64_t var_2e0 = 0
void* performanceCount_1 = &r13[sx.q(arg2[1].d) * 2]
char var_308 = 0
performanceCount = performanceCount_1
char var_318
void* var_300
int32_t var_2f4
int32_t var_2d8
void* var_2d0
int32_t var_2a0
int64_t* var_298
int32_t var_268
int64_t* var_260
int32_t var_230
uint64_t var_228
int32_t r9

if (r13 != performanceCount_1)
    do
        int32_t rbx_1 = r13[1].d
        int64_t rdi_1 = *r13
        char var_306_1 = 0
        var_300 = nullptr
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_300, rbx_1, 0)
            memcpy(var_300, rdi_1, rbx_1 * 2)
        else
            var_2f4 = 0
        
        if (sub_140a237d0(&var_300, &data_142d5a024, 0) == 0)
            sub_140a20ba0(&var_300, &data_142d5a024, 1)
        
        int32_t rbx_2 = *(arg1 + 0x698)
        int32_t var_2d4_1 = 1
        int32_t rcx_5 = 0
        var_2d8 = 0
        var_2d0 = arg1 + 0x680
        int32_t r8_2 = 0
        int64_t var_2c8
        var_2c8.d = 0xffffffff
        var_2c8 = 0
        
        if (rbx_2 != 0)
            void* rax_7 = *(arg1 + 0x690)
            void* r9_1 = arg1 + 0x680
            
            if (rax_7 != 0)
                r9_1 = rax_7
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rbx_2 - 1)
            int32_t rdx_4 = *r9_1
            
            if (rdx_4 != 0)
            label_141caf76c:
                int32_t rax_14 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_14)
                int32_t var_2d4_2 = rax_14
                int32_t rax_15
                
                if (rax_14 == 0)
                    rax_15 = 0x20
                else
                    rax_15 = 0x1f - temp0_1
                
                var_2c8:4.d = r8_2 - rax_15 + 0x1f
                
                if (r8_2 - rax_15 + 0x1f s> rbx_2)
                    var_2c8:4.d = rbx_2
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_5)
                    r8_2 += 0x20
                    rcx_5 += 1
                    int32_t var_2c0_1 = r8_2
                    var_2d8 = rcx_5
                    
                    if (rdx_5.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                    var_2c8.d = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_141caf76c
                
                var_2c8:4.d = rbx_2
        
        int32_t rdx_6 = *(arg1 + 0x698)
        double zmm2[0x2] = var_2c8.o
        var_230.q = arg1 + 0x670
        var_2c8:4.d = rdx_6
        double var_218_1[0x2] = zmm2
        var_228.o = var_2d8.o
        rdi = zx.q(0xffffffff << (rdx_6 & 0x1f).b)
        int128_t zmm0 = var_230.o
        int32_t r8_5 = rdx_6 s>> 5
        r9 = rdx_6 & 0xffffffe0
        int64_t var_248_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_2c8.d = rdi.d
        var_268.o = zmm0
        int64_t var_258
        int64_t var_220
        var_258.o = var_220.o
        int32_t rax_18
        
        if (rdx_6 != rbx_2)
            void* rax_19 = *(arg1 + 0x690)
            void* r10_1 = arg1 + 0x680
            
            if (rax_19 != 0)
                r10_1 = rax_19
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(rbx_2 - 1)
            int32_t rdx_10 = *(r10_1 + (sx.q(r8_5) << 2)) & rdi.d
            
            if (rdx_10 != 0)
            label_141caf848:
                int32_t rax_25 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rax_25)
                int32_t rax_26
                
                if (rax_25 == 0)
                    rax_26 = 0x20
                else
                    rax_26 = 0x1f - temp0_3
                
                rax_18 = r9 - rax_26 + 0x1f
                var_2c8:4.d = rax_18
                
                if (rax_18 s> rbx_2)
                    var_2c8:4.d = rbx_2
            else
                while (true)
                    int64_t rcx_9 = sx.q(r8_5)
                    r9 += 0x20
                    r8_5 += 1
                    
                    if (rcx_9.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_10 = *(r10_1 + (rcx_9 << 2) + 4)
                    var_2c8.d = 0xffffffff
                    
                    if (rdx_10 != 0)
                        goto label_141caf848
                
                var_2c8:4.d = rbx_2
        
        char rax_27
        
        while (true)
            int32_t var_24c
            int64_t rcx_11 = sx.q(var_24c)
            
            if (rcx_11.d != (var_2c8 u>> 0x20).d || var_258 != arg1 + 0x680)
                rax_18.b = 0
            else
                rax_18.b = 1
            
            int64_t* rdx_11 = var_268.q
            
            if (rax_18.b == 0 || rdx_11 != arg1 + 0x670)
                rax_18.b = 1
            else
                rax_18.b = 0
            
            if (rax_18.b == 0)
                rax_27 = var_306_1
                break
            
            rax_27, r9 = sub_140a32a50(&var_300, *rdx_11 + rcx_11 * 0x18, 1)
            
            if (rax_27 != 0)
                rax_27 = 1
                break
            
            int32_t var_250 = var_250 & not.d(var_260:4.d)
            rax_18, r9 = sub_14059bdd0(&var_260)
        
        if (arg4 != 0 || rax_27 == 0)
            int64_t i_33 = sx.q(i_24)
            i_24 = (i_33 + 1).d
            i_29 = i_24
            
            if (i_24 s> i_22)
                sub_1405a4f90(&var_2b8)
                i_24 = i_29
                i_22 = i_30
            
            sub_140596d10(&var_2b8[i_33 * 2], r13)
            sub_140598750(arg1 + 0x670, &var_2a0)
            *var_298 = 0
            void* rsi_2 = var_300
            var_298[1].d = rbx_1
            
            if (rbx_1 != 0)
                sub_1405a4c70(var_298, rbx_1, 0)
                memcpy(*var_298, rsi_2, rbx_1 * 2)
            else
                *(var_298 + 0xc) = 0
            
            var_298[2].d = 0xffffffff
            int32_t rax_30 = var_298[1].d
            int16_t* rdx_19
            
            if (rax_30 == 0)
                rdx_19 = &data_142d40450
            else
                rdx_19 = *var_298
            
            int32_t rcx_22 = rax_30 - 1
            
            if (rax_30 == 0)
                rcx_22 = 0
            
            int32_t rax_31 = sub_1405969c0(rcx_22, rdx_19)
            var_318.d = var_2a0
            sub_14059a6d0(arg1 + 0x670, &i_25, rax_31, var_298, var_318, nullptr)
            rdi = zx.q(var_308)
        else
            rdi.b = 1
            var_308 = 1
        
        void* rcx_25 = var_300
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        r13 = &r13[2]
    while (r13 != performanceCount)
    
    i_22 = i_27
    rsi = var_290
    i_25 = i_24

int64_t* rbx_6 = *rsi
void* r14_4 = &rbx_6[sx.q(*(rsi + 8)) * 2]

if (rbx_6 != r14_4)
    int64_t* r13_1 = var_2e8
    int32_t r15 = var_2e0:4.d
    
    do
        int32_t* rax_32
        
        if (arg4 == 0)
            rax_32, r9 = sub_140960120(arg1 + 0x670, &i_27, rbx_6)
        
        if (arg4 != 0 || *rax_32 == 0xffffffff)
            int64_t i_34 = sx.q(i_22)
            i_22 = (i_34 + 1).d
            var_2e0.d = i_22
            
            if (i_22 s> r15)
                sub_1405a4f90(&var_2e8)
                i_22 = var_2e0.d
                r13_1 = var_2e8
                r15 = var_2e0:4.d
            
            sub_140596d10(&r13_1[i_34 * 2], rbx_6)
            sub_140598750(arg1 + 0x670, &var_2a0)
            sub_140596d10(var_298, rbx_6)
            var_298[2].d = 0xffffffff
            int32_t rax_33 = var_298[1].d
            int16_t* rdx_26
            
            if (rax_33 == 0)
                rdx_26 = &data_142d40450
            else
                rdx_26 = *var_298
            
            int32_t rcx_33 = rax_33 - 1
            
            if (rax_33 == 0)
                rcx_33 = 0
            
            int32_t rax_34 = sub_1405969c0(rcx_33, rdx_26)
            var_318.d = var_2a0
            sub_14059a6d0(arg1 + 0x670, &performanceCount, rax_34, var_298, var_318, nullptr)
            rdi = zx.q(var_308)
        else
            rdi.b = 1
            var_308 = 1
        
        rbx_6 = &rbx_6[2]
    while (rbx_6 != r14_4)
    
    i_24 = i_25

char result = arg5

if (result == 1 && rdi.b != 0)
    result = 2

if (i_24 s> 0 || i_22 s> 0)
    r9.b = 1
    void** var_1f8
    sub_141c91b40(&var_1f8, &var_2b8, &var_2e8, r9.b, result)
    int32_t r13_2 = 0
    var_230 = 0
    var_228 = 0
    int32_t rsi_5 = 0
    int32_t var_220_1 = 0
    int32_t i_37 = 0
    int32_t var_280 = 0
    int64_t* r12 = nullptr
    uint64_t var_278 = 0
    int32_t i_36 = 0
    int32_t i_31 = 0
    var_2d8 = 0
    var_2d0 = nullptr
    int32_t i_28 = 0
    var_268 = 0
    var_260 = nullptr
    int32_t i_32 = 0
    var_290 = 0
    int32_t var_288_1 = 0
    CRITICAL_SECTION criticalSection[0x2]
    EnterCriticalSection(&criticalSection)
    int32_t var_190
    int64_t rbx_7 = sx.q(var_190)
    int32_t temp0_4 = rbx_7.d
    uint64_t var_198
    
    if (temp0_4 != 0)
        if (temp0_4 s> 0)
            sub_1405c5570(&var_228, rbx_7.d)
            rsi_5 = var_220_1
            r13_2 = var_230
        
        memmove(var_228 + (sx.q(rsi_5) << 3), var_198, (rbx_7 << 3).d)
        rsi_5 += rbx_7.d
        var_220_1 = rsi_5
    
    int32_t var_190_1 = 0
    int32_t var_18c
    
    if (var_18c s< 0 && var_18c != 0)
        sub_1405c5570(&var_198, 0)
    
    int32_t var_150
    int64_t rbx_8 = sx.q(var_150)
    int32_t i_17 = rbx_8.d
    int32_t temp2_1 = rbx_8.d
    uint64_t var_158
    
    if (temp2_1 != 0)
        if (temp2_1 s> 0)
            sub_14061cd70(&var_278, rbx_8.d)
            i_37 = i_31
        
        memmove((sx.q(i_37) << 4) + var_278, var_158, (rbx_8 << 4).d)
        i_37 += rbx_8.d
        int32_t var_150_1 = 0
        i_31 = i_37
        rbx_8 = 0
        i_17 = 0
    
    int32_t var_14c
    int32_t rax_37 = var_14c
    
    if (rax_37 s< 0)
        uint64_t rbx_9 = var_158
        
        if (i_17 != 0)
            int32_t i
            
            do
                int64_t rcx_47 = *rbx_9
                
                if (rcx_47 != 0)
                    sub_140a74f90(rcx_47)
                
                rbx_9 += 0x10
                i = i_17
                i_17 -= 1
            while (i != 1)
            rax_37 = var_14c
        
        int32_t var_150_3 = 0
        
        if (rax_37 != 0)
            sub_14061cd70(&var_158, 0)
    else
        uint64_t rdi_4 = var_158
        
        if (rbx_8.d != 0)
            int32_t i_1
            
            do
                int64_t rcx_46 = *rdi_4
                
                if (rcx_46 != 0)
                    sub_140a74f90(rcx_46)
                
                rdi_4 += 0x10
                i_1 = rbx_8.d
                rbx_8 = zx.q(rbx_8.d - 1)
            while (i_1 != 1)
        
        int32_t var_150_2 = 0
    
    void var_188
    sub_141c8f050(&var_2d0, &var_188)
    sub_141cabd20(&var_188, 0)
    int32_t var_170
    int64_t rbx_10 = sx.q(var_170)
    int32_t i_18 = rbx_10.d
    int32_t temp8_1 = rbx_10.d
    uint64_t var_178
    
    if (temp8_1 != 0)
        if (temp8_1 s> 0)
            sub_14061cd70(&var_260, rbx_10.d)
            i_36 = i_32
            r12 = var_260
        
        memmove(&r12[sx.q(i_36) * 2], var_178, (rbx_10 << 4).d)
        int32_t var_170_1 = 0
        i_32 = i_36 + rbx_10.d
        rbx_10 = 0
        i_18 = 0
    
    int32_t var_16c
    int32_t rax_38 = var_16c
    
    if (rax_38 s< 0)
        uint64_t rbx_11 = var_178
        
        if (i_18 != 0)
            int32_t i_2
            
            do
                int64_t rcx_56 = *rbx_11
                
                if (rcx_56 != 0)
                    sub_140a74f90(rcx_56)
                
                rbx_11 += 0x10
                i_2 = i_18
                i_18 -= 1
            while (i_2 != 1)
            rax_38 = var_16c
        
        int32_t var_170_3 = 0
        
        if (rax_38 != 0)
            sub_14061cd70(&var_178, 0)
    else
        uint64_t rdi_5 = var_178
        
        if (rbx_10.d != 0)
            int32_t i_3
            
            do
                int64_t rcx_55 = *rdi_5
                
                if (rcx_55 != 0)
                    sub_140a74f90(rcx_55)
                
                rdi_5 += 0x10
                i_3 = rbx_10.d
                rbx_10 = zx.q(rbx_10.d - 1)
            while (i_3 != 1)
        
        int32_t var_170_2 = 0
    
    int32_t var_160
    int64_t rbx_12 = sx.q(var_160)
    int32_t temp12_1 = rbx_12.d
    uint64_t var_168
    
    if (temp12_1 != 0)
        if (temp12_1 s> 0)
            sub_1405c5570(&var_290, rbx_12.d)
        
        memmove(var_290 + (sx.q(var_288_1) << 3), var_168, (rbx_12 << 3).d)
    
    int32_t var_160_1 = 0
    int32_t var_15c
    
    if (var_15c s< 0 && var_15c != 0)
        sub_1405c5570(&var_168, 0)
    
    LeaveCriticalSection(&criticalSection)
    
    if (arg6 != 0)
        int32_t rdx_40 = arg6[1].d - r13_2 + rsi_5
        
        if (rdx_40 s> *(arg6 + 0xc))
            sub_140638c50(arg6, rdx_40)
        
        uint64_t i_14 = zx.q(rsi_5 - r13_2)
        
        if (i_14.d s> 0)
            int64_t rdi_6 = var_228 + (sx.q(r13_2) << 3)
            uint64_t i_4
            
            do
                int64_t rbx_13 = sx.q(arg6[1].d)
                int64_t* r14_6 = *rdi_6
                int32_t rax_42 = (rbx_13 + 1).d
                arg6[1].d = rax_42
                
                if (rax_42 s> *(arg6 + 0xc))
                    sub_1405a4d70(arg6)
                
                rdi_6 += 8
                *(*arg6 + (rbx_13 << 3)) = *r14_6
                i_4 = i_14
                i_14 -= 1
            while (i_4 != 1)
    
    uint64_t* r14_7 = var_2a8
    
    if (r14_7 != 0)
        int64_t rbx_14 = sx.q(var_280)
        int32_t rdx_44 = r14_7[1].d - rbx_14.d + i_37
        
        if (rdx_44 s> *(r14_7 + 0xc))
            sub_140638c50(r14_7, rdx_44)
        
        int32_t i_35 = i_37 - rbx_14.d
        
        if (i_35 s> 0)
            int64_t rbx_16 = (rbx_14 << 4) + var_278
            uint64_t i_15 = zx.q(i_35)
            uint64_t i_5
            
            do
                int16_t* rdx_45
                
                if (*(rbx_16 + 8) == 0)
                    rdx_45 = &data_142d40450
                else
                    rdx_45 = *rbx_16
                
                sub_140b58260(&var_2a8, rdx_45, 1)
                int64_t rdi_7 = sx.q(r14_7[1].d)
                int32_t rax_44 = (rdi_7 + 1).d
                r14_7[1].d = rax_44
                
                if (rax_44 s> *(r14_7 + 0xc))
                    sub_1405a4d70(r14_7)
                
                rbx_16 += 0x10
                *(*r14_7 + (rdi_7 << 3)) = var_2a8
                i_5 = i_15
                i_15 -= 1
            while (i_5 != 1)
    
    sub_141c9a130(arg1, 
        sub_141c9a540(arg1, 
            sub_141ca7da0(arg1, sub_141c990b0(arg1, -0x4010000000000000, &var_230), &var_280), 
            &var_2d8), 
        &var_268)
    int32_t i_23 = i_29
    void* r15_1 = nullptr
    var_300 = nullptr
    int32_t i_16 = i_23
    i_25 = i_23
    int32_t i_26 = i_23
    int32_t rax_46
    
    if (i_23 != 0)
        sub_1405a4be0(&var_300, i_23, 0)
        r15_1 = var_300
        int64_t* rbx_18 = var_2b8
        void* rsi_7 = r15_1 - rbx_18
        int32_t i_6
        
        do
            *(rsi_7 + rbx_18) = 0
            void* r14_8 = rsi_7 + rbx_18
            int32_t rdi_8 = rbx_18[1].d
            int64_t r13_3 = *rbx_18
            *(rsi_7 + rbx_18 + 8) = rdi_8
            
            if (rdi_8 != 0)
                sub_1405a4c70(r14_8, rdi_8, 0)
                memcpy(*r14_8, r13_3, rdi_8 * 2)
            else
                *(rsi_7 + rbx_18 + 0xc) = 0
            
            rbx_18 = &rbx_18[2]
            i_6 = i_23
            i_23 -= 1
        while (i_6 != 1)
        rax_46 = var_2f4
        i_16 = i_26
    else
        rax_46 = 0
        int32_t var_2f4_1 = 0
    
    i_22 = var_2e0.d
    i_27 = i_22
    
    if (i_22 != 0)
        int32_t rdx_50 = i_16 + i_22
        
        if (rdx_50 s> rax_46)
            sub_14061cd70(&var_300, rdx_50)
            i_16 = i_26
            r15_1 = var_300
        
        int64_t rax_48 = sx.q(i_16) << 4
        void* rdi_9 = rax_48 + r15_1
        void* rax_49 = rax_48 - var_2e8
        void* rcx_80 = r15_1 + 8 + rax_49
        void* rbx_22 = rdi_9 - rax_48 - r15_1 + var_2e8
        uint64_t* rax_51 = rax_49 + 0xc + r15_1
        void* var_238_1 = rcx_80
        var_2a8 = rax_51
        int32_t i_7
        
        do
            *rdi_9 = 0
            int32_t r14_9 = *(rbx_22 + 8)
            int64_t r13_4 = *rbx_22
            *(rcx_80 + rbx_22) = r14_9
            
            if (r14_9 != 0)
                sub_1405a4c70(rdi_9, r14_9, 0)
                memcpy(*rdi_9, r13_4, r14_9 * 2)
                rax_51 = var_2a8
                rcx_80 = var_238_1
            else
                *(rax_51 + rbx_22) = 0
            
            rdi_9 += 0x10
            rbx_22 += 0x10
            i_7 = i_22
            i_22 -= 1
        while (i_7 != 1)
        i_22 = i_27
        i_16 += i_22
    
    if (i_16 s<= 1)
        int16_t* const rax_53
        
        if (*(r15_1 + 8) == 0)
            rax_53 = &data_142d40450
        else
            rax_53 = *r15_1
        
        sub_140a2e390(&var_2a0, u"'%s'", rax_53)
    else
        int16_t* const rax_52
        
        if (*(r15_1 + 8) == 0)
            rax_52 = &data_142d40450
        else
            rax_52 = *r15_1
        
        sub_140a2e390(&var_2a0, u"'%s' and %d other paths/filenames", rax_52)
    
    int64_t rcx_85 = var_2a0.q
    
    if (rcx_85 != 0)
        sub_140a74f90(rcx_85)
    
    void* rbx_23 = r15_1
    
    if (i_16 != 0)
        int32_t i_8
        
        do
            int64_t rcx_86 = *rbx_23
            
            if (rcx_86 != 0)
                sub_140a74f90(rcx_86)
            
            rbx_23 += 0x10
            i_8 = i_16
            i_16 -= 1
        while (i_8 != 1)
    
    sub_140a74f90(r15_1)
    uint64_t rax_54 = var_290
    
    if (rax_54 != 0)
        sub_140a74f90(rax_54)
    
    int64_t* rsi_8 = var_260
    int32_t i_19 = i_32
    int64_t* rbx_24 = rsi_8
    
    if (i_19 != 0)
        int32_t i_9
        
        do
            int64_t rcx_89 = *rbx_24
            
            if (rcx_89 != 0)
                sub_140a74f90(rcx_89)
            
            rbx_24 = &rbx_24[2]
            i_9 = i_19
            i_19 -= 1
        while (i_9 != 1)
    
    if (rsi_8 != 0)
        sub_140a74f90(rsi_8)
    
    void* rsi_9 = var_2d0
    int32_t i_20 = i_28
    void* rbx_25 = rsi_9
    
    if (i_20 != 0)
        int32_t i_10
        
        do
            sub_140cad990(rbx_25)
            rbx_25 += 0xc8
            i_10 = i_20
            i_20 -= 1
        while (i_10 != 1)
    
    if (rsi_9 != 0)
        sub_140a74f90(rsi_9)
    
    uint64_t rsi_10 = var_278
    int32_t i_21 = i_31
    uint64_t rbx_26 = rsi_10
    
    if (i_21 != 0)
        int32_t i_11
        
        do
            int64_t rcx_93 = *rbx_26
            
            if (rcx_93 != 0)
                sub_140a74f90(rcx_93)
            
            rbx_26 += 0x10
            i_11 = i_21
            i_21 -= 1
        while (i_11 != 1)
    
    if (rsi_10 != 0)
        sub_140a74f90(rsi_10)
    
    uint64_t rcx_95 = var_228
    
    if (rcx_95 != 0)
        sub_140a74f90(rcx_95)
    
    result = sub_141c943e0(&var_1f8)
    i_24 = i_25

int64_t* rdi_10 = var_2e8
int64_t* rbx_27 = rdi_10

if (i_22 != 0)
    int32_t i_12
    
    do
        int64_t rcx_97 = *rbx_27
        
        if (rcx_97 != 0)
            result = sub_140a74f90(rcx_97)
        
        rbx_27 = &rbx_27[2]
        i_12 = i_22
        i_22 -= 1
    while (i_12 != 1)

if (rdi_10 != 0)
    result = sub_140a74f90(rdi_10)

int64_t* rdi_11 = var_2b8
int64_t* rbx_28 = rdi_11

if (i_24 != 0)
    int32_t i_13
    
    do
        int64_t rcx_99 = *rbx_28
        
        if (rcx_99 != 0)
            result = sub_140a74f90(rcx_99)
        
        rbx_28 = &rbx_28[2]
        i_13 = i_24
        i_24 -= 1
    while (i_13 != 1)

if (rdi_11 != 0)
    result = sub_140a74f90(rdi_11)

__security_check_cookie(rax_1 ^ &var_338)
return result
