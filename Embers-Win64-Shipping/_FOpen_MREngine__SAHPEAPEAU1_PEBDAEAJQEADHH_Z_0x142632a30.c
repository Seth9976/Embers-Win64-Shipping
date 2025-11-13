// 函数: ?FOpen@MREngine@@SAHPEAPEAU1@PEBDAEAJQEADHH@Z
// 地址: 0x142632a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6b8
int64_t rax_1 = __security_cookie ^ &var_6b8
int32_t i_12 = arg2[2]
int64_t r14 = 0
int32_t r9 = 0
char* var_618 = nullptr

if (i_12 s> 0)
    int64_t r8 = *(arg2 + 0x18)
    uint64_t i_9 = zx.q(i_12)
    uint64_t i
    
    do
        int32_t rdx = 0
        int64_t rax_2 = 0
        
        while (*(r8 + (rax_2 << 1)) != 0xffff)
            rdx += 1
            rax_2 += 1
            
            if (rax_2 s>= 6)
                rdx = 6
                break
        
        int64_t j = 0
        
        if (rdx s> 0)
            do
                int32_t rax_3 = r9 + 1
                
                if (*(r8 + (j << 1)) != arg3)
                    rax_3 = r9
                
                j += 1
                r9 = rax_3
            while (j s< sx.q(rdx))
        
        r8 += 0x18
        i = i_9
        i_9 -= 1
    while (i != 1)

int32_t rsi = *arg2
int32_t var_688 = 0
uint64_t rbp = 0
uint64_t rsi_1

if (r9 s<= divs.dp.d(0:0x30, rsi))
    rsi_1 = 0
else
    rsi_1 = zx.q(rsi * r9)

uint32_t rcx = (rsi_1 << 2).d
int16_t* r15

if (rcx == 0)
    r15 = nullptr
else
    r15 = j_sub_1426075c0(zx.q(rcx * 2), 1)

int16_t* var_668 = r15
int16_t* var_680
void* var_660
void* var_640
void var_4d8
void* r12
void* r13

if (rsi_1.d == 0)
    r12 = nullptr
    var_660 = nullptr
    r13 = nullptr
    var_640 = nullptr
    var_680 = &var_4d8
else
    uint32_t rbx_1 = (rsi_1 * 2).d
    void* rax_6 = j_sub_1426075c0(zx.q(rbx_1), 1)
    var_660 = rax_6
    r12 = rax_6
    void* rax_7 = j_sub_1426075c0(zx.q(rbx_1), 1)
    var_640 = rax_7
    r13 = rax_7
    
    if (rsi_1.d s<= 0)
        var_680 = &var_4d8
    else
        var_680 = r15

int32_t* r11_1 = arg2
void var_598
void* rbx_2 = &var_598
int32_t temp9 = rsi_1.d
int32_t var_684 = 0
void var_538
void* r8_1 = &var_538

if (temp9 s> 0)
    rbx_2 = r12

if (temp9 s> 0)
    r8_1 = r13

void* var_670 = rbx_2

if (r11_1[2] s> 0)
    int64_t rsi_2 = 0
    int32_t r15_1 = 0
    int32_t rcx_12
    
    do
        int64_t i_6 = 0
        int16_t* r10_3 = *(r11_1 + 0x18) + r14
        
        while (r10_3[i_6] != 0xffff)
            i_6 += 1
            
            if (i_6 s>= 6)
                i_6 = 6
                break
        
        char rax_8 = 0
        int64_t rcx_4 = 0
        
        if (i_6 s> 0)
            do
                if (r10_3[rcx_4] == arg3)
                    rax_8 = 1
                
                rcx_4 += 1
            while (rcx_4 s< i_6)
        
        if (i_6 s<= 0 || rax_8 == 0)
            rcx_12 = var_684
        else
            int16_t* r9_1 = r10_3
            void* r11_3 = &var_680[2 + rsi_2 * 3]
            void* rcx_5 = (i_6 << 1) + -fffffffffffffffe
            int64_t i_1
            
            do
                if (*r9_1 != arg3)
                    int16_t rax_10 = *(r10_3 + rcx_5)
                    
                    if (rax_10 != arg3)
                        *(r11_3 - 4) = rax_10
                        r15_1 += 1
                        rsi_2 += 1
                        *(r11_3 - 2) = *r9_1
                        *r11_3 = zx.w(*(*(arg2 + 0x28) + rbp))
                        r11_3 += 6
                
                int16_t* rcx_7 = r9_1
                r9_1 = &r9_1[1]
                rcx_5 = rcx_7 - r10_3
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
            r11_1 = arg2
            var_688 = r15_1
            int64_t rax_14 = *(arg2 + 0x18)
            int64_t rdx_1 = sx.q(arg2[2] * 0xc)
            *r10_3 = *(rax_14 + (rdx_1 << 1) - 0x18)
            *(r10_3 + 8) = *(rax_14 + (rdx_1 << 1) - 0x10)
            *(r10_3 + 0xc) = -1
            *(r10_3 + 0x14) = 0xffffffff
            char* rdx_2 = *(arg2 + 0x28)
            rdx_2[rbp] = rdx_2[sx.q(arg2[2]) - 1]
            rbp -= 1
            arg2[2] -= 1
            rcx_12 = var_684 - 1
            r14 -= 0x18
        
        rbp += 1
        var_684 = rcx_12 + 1
        r14 += 0x18
    while (rcx_12 + 1 s< r11_1[2])
    r15 = var_668
    r12 = var_660
    r13 = var_640
    rbx_2 = var_670
    rbp = zx.q(var_688)

int32_t rcx_17 = r11_1[1]
uint64_t r9_2 = zx.q(arg3)

if (r9_2.d s< rcx_17 - 1)
    uint64_t rdx_4 = r9_2 * 6
    
    do
        int64_t rcx_14 = *(r11_1 + 0x10)
        rdx_4 += 6
        r9_2 = zx.q(r9_2.d + 1)
        *(rcx_14 + rdx_4 - 6) = *(rcx_14 + rdx_4)
        int64_t rcx_15 = *(r11_1 + 0x10)
        *(rcx_15 + rdx_4 - 4) = *(rcx_15 + rdx_4 + 2)
        int64_t rcx_16 = *(r11_1 + 0x10)
        *(rcx_16 + rdx_4 - 2) = *(rcx_16 + rdx_4 + 4)
        rcx_17 = r11_1[1]
    while (r9_2.d s< rcx_17 - 1)

r11_1[1] = rcx_17 - 1
int32_t r11_4 = 0

if (arg2[2] s> 0)
    int64_t r10_4 = 0
    
    while (true)
        int32_t i_13 = 0
        int16_t* rcx_19 = *(arg2 + 0x18) + r10_4
        int64_t rax_24 = 0
        
        while (true)
            if (rcx_19[rax_24] != 0xffff)
                i_13 += 1
                rax_24 += 1
                
                if (rax_24 s< 6)
                    continue
                else
                    i_13 = 6
            else if (i_13 s<= 0)
                break
            
            uint64_t i_8 = zx.q(i_13)
            uint64_t i_2
            
            do
                int16_t rax_25 = *rcx_19
                
                if (rax_25 u> arg3)
                    *rcx_19 = rax_25 - 1
                
                rcx_19 = &rcx_19[1]
                i_2 = i_8
                i_8 -= 1
            while (i_2 != 1)
            break
        
        r11_4 += 1
        r10_4 += 0x18
        
        if (r11_4 s>= arg2[2])
            break

int64_t i_4 = sx.q(rbp.d)
int32_t temp10 = rbp.d
bool cond:3 = temp10 == 0

if (temp10 s> 0)
    int16_t* rax_26 = var_680
    int64_t i_7 = i_4
    int64_t i_3
    
    do
        int16_t rcx_20 = *rax_26
        
        if (rcx_20 u> arg3)
            *rax_26 = rcx_20 - 1
        
        int16_t rcx_21 = rax_26[1]
        
        if (rcx_21 u> arg3)
            rax_26[1] = rcx_21 - 1
        
        rax_26 = &rax_26[3]
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)
    cond:3 = rbp.d == 0

int32_t var_684_2

if (cond:3)
    var_684_2 = 0x40000000
else
    *rbx_2 = *var_680
    int64_t j_3 = 1
    uint64_t j_4 = 1
    *r8_1 = var_680[2]
    int32_t r13_2 = 1
    int32_t var_688_1 = 1
    
    do
        uint64_t j_1
        j_1.b = 0
        int64_t r9_4 = 0
        
        if (i_4 s<= 0)
            break
        
        int16_t* rdx_5 = var_680
        void* rdi_2 = &var_680[-2 + i_4 * 3]
        
        do
            int16_t rax_30 = rdx_5[1]
            int16_t rsi_4 = *rdx_5
            int16_t rbp_1 = rdx_5[2]
            
            if (*rbx_2 == rax_30)
                j_1 = j_4
                
                if (j_4 s> 0)
                    do
                        *(rbx_2 + (j_1 << 1)) = *(rbx_2 + (j_1 << 1) - 2)
                        j_1 -= 1
                    while (j_1 s> 0)
                
                *rbx_2 = rsi_4
                int64_t j_2 = j_3
                
                if (j_3 s> 0)
                    do
                        *(r8_1 + (j_2 << 1)) = *(r8_1 + (j_2 << 1) - 2)
                        j_2 -= 1
                    while (j_2 s> 0)
                
                *r8_1 = rbp_1
                goto label_142632eff
            
            if (*(rbx_2 + (j_4 << 1) - 2) == rsi_4)
                *(rbx_2 + (j_4 << 1)) = rax_30
                *(r8_1 + (j_3 << 1)) = rbp_1
            label_142632eff:
                i_4 -= 1
                *rdx_5 = *(rdi_2 - 2)
                r9_4 -= 1
                j_1.b = 1
                rdx_5[1] = *rdi_2
                int16_t rax_34 = *(rdi_2 + 2)
                rdi_2 -= 6
                rdx_5[2] = rax_34
                rdx_5 -= 6
                r13_2 += 1
                j_4 += 1
                j_3 += 1
            
            r9_4 += 1
            rdx_5 = &rdx_5[3]
        while (r9_4 s< i_4)
        
        var_688_1 = r13_2
        
        if (j_1.b == 0)
            break
    while (i_4 != 0)
    
    r15 = var_668
    r13 = var_640
    r12 = var_660
    
    if (r13_2 s< 3)
        var_684_2 = 0x40000000
    else
        uint64_t rcx_22 = zx.q(var_688_1)
        uint64_t rdi_3 = 0
        
        if ((rcx_22 << 2).d s> 0x90)
            rdi_3 = zx.q(rcx_22.d)
        
        uint32_t rcx_23 = (rdi_3 * 3).d
        void* var_5e8_1
        void* rbp_2
        
        if (rcx_23 == 0)
            rbp_2 = nullptr
            var_5e8_1 = nullptr
        else
            void* rax_36 = j_sub_1426075c0(zx.q(rcx_23 * 2), 1)
            rbp_2 = rax_36
            var_5e8_1 = rax_36
        
        uint32_t rcx_25 = (rdi_3 << 2).d
        void* r14_1
        
        if (rcx_25 == 0)
            r14_1 = nullptr
        else
            r14_1 = j_sub_1426075c0(zx.q(rcx_25 * 2), 1)
        
        void* var_680_1
        void* var_5f0_1
        void* rsi_5
        
        if (rdi_3.d == 0)
            rsi_5 = nullptr
            var_5f0_1 = nullptr
            var_680_1 = &var_4d8
        else
            void* rax_38 = j_sub_1426075c0(zx.q((rdi_3 * 2).d), 1)
            var_5f0_1 = rax_38
            rsi_5 = rax_38
            
            if (rdi_3.d s<= 0)
                var_680_1 = &var_4d8
            else
                var_680_1 = rbp_2
        
        int32_t temp14_1 = rdi_3.d
        void var_3b8
        void* rax_39 = &var_3b8
        void var_298
        void* r8_2 = &var_298
        
        if (temp14_1 s> 0)
            rax_39 = r14_1
        
        if (temp14_1 s> 0)
            r8_2 = rsi_5
        
        int32_t r11_5 = 0
        
        if (var_688_1 s> 0)
            void* r9_5 = rax_39 + 4
            void* r10_5 = r8_2
            
            do
                r9_5 += 8
                uint64_t rdx_6 = zx.q(*(rbx_2 - r8_2 + r10_5)) * 3
                *(r9_5 - 0xc) = *(*(arg2 + 0x10) + (rdx_6 << 1))
                *(r9_5 - 0xa) = *(*(arg2 + 0x10) + (rdx_6 << 1) + 2)
                *(r9_5 - 8) = *(*(arg2 + 0x10) + (rdx_6 << 1) + 4)
                *(r9_5 - 6) = 0
                *r10_5 = r11_5.w
                r11_5 += 1
                r10_5 += 2
            while (r11_5 s< var_688_1)
            
            r15 = var_668
            r12 = var_660
        
        int32_t i_14 = sub_142634770(var_688_1, rax_39, r8_2, var_680_1)
        int32_t i_11 = i_14
        
        if (i_14 s< 0)
            i_14 = neg.d(i_14)
            i_11 = i_14
        
        uint64_t rax_44 = zx.q(i_14 + 1)
        
        if (rax_44.d s<= 0x30)
            rax_44 = 0
        
        int32_t var_688_2 = rax_44.d
        uint32_t rcx_32 = (rax_44 * 3).d
        void* rdi_5
        
        if (rcx_32 == neg.d(rcx_32))
            rdi_5 = nullptr
        else
            rdi_5 = j_sub_1426075c0(zx.q(rcx_32 * 4), 1)
            rax_44 = zx.q(var_688_2)
        
        void* rbx_5
        
        if (rax_44.d == 0)
            rbx_5 = nullptr
        else
            rbx_5 = j_sub_1426075c0(zx.q(rax_44.d), 1)
            rax_44 = zx.q(var_688_2)
        
        int32_t temp17_1 = rax_44.d
        void* rcx_36 = &var_298
        
        if (temp17_1 s> 0)
            rcx_36 = rdi_5
        
        int32_t var_688_3 = 0
        void var_5c8
        void* rdx_8 = &var_5c8
        
        if (temp17_1 s> 0)
            rdx_8 = rbx_5
        
        memset(rcx_36, 0xff, sx.q(i_11 * 6) * 2)
        
        if (sx.q(i_11) s<= 0)
            var_684_2 = 0x40000000
        else
            void* r12_2 = rdx_8
            void* r11_7 = rcx_36 + 4
            void* r9_7 = var_680_1 + 4
            int64_t i_10 = sx.q(i_11)
            int32_t r13_3 = var_688_3
            void* var_5d8_1 = r11_7
            int64_t i_5
            
            do
                int16_t r10_6 = *(r9_7 - 2)
                int16_t rax_52 = *(r9_7 - 4)
                
                if (rax_52 != r10_6)
                    int16_t rcx_37 = *r9_7
                    
                    if (rax_52 != rcx_37 && r10_6 != rcx_37)
                        r13_3 += 1
                        *(r11_7 - 4) = *(var_670 + (zx.q(rax_52) << 1))
                        *(r11_7 - 2) = *(var_670 + (zx.q(*(r9_7 - 2)) << 1))
                        *r11_7 = *(var_670 + (zx.q(*r9_7) << 1))
                        r11_7 += 0xc
                        *r12_2 = *(r8_1 + (zx.q(*(r9_7 - 4)) << 1))
                        r12_2 += 1
                
                r9_7 += 6
                i_5 = i_10
                i_10 -= 1
            while (i_5 != 1)
            r15 = var_668
            r12 = var_660
            int32_t var_688_4 = r13_3
            r13 = var_640
            
            if (r13_3 == 0)
                var_684_2 = 0x40000000
            else
                int64_t r10_7 = sx.q(var_688_4)
                void* r11_8 = rcx_36
                int64_t rbp_3 = r10_7
                int64_t var_670_1 = r10_7
                void* var_628_1 = r11_8 + (r10_7 - 1) * 0xc
                int32_t rsi_6 = (r10_7 - 1).d
                
                while (true)
                    int32_t rax_57 = 0
                    int32_t var_648_1 = rsi_6
                    int32_t var_684_1 = 0
                    int32_t r14_2 = 0
                    char* var_5f8_1 = nullptr
                    uint64_t rbx_6 = 0
                    int32_t var_658_1 = 0
                    uint64_t rdx_10 = 0
                    int32_t var_654_1 = 0
                    int32_t r8_6 = 0
                    int32_t var_650_1 = 0
                    int32_t r9_8 = 0
                    
                    if (rsi_6 s<= 0)
                        break
                    
                    char* rcx_45 = 1
                    int32_t r10_8 = 6
                    char* var_630_1 = 1
                    void* rdi_6 = r11_8
                    int32_t var_64c_1 = 6
                    
                    do
                        rax_57 += 1
                        char* r15_3 = rcx_45
                        var_680_1.d = rax_57
                        int32_t r12_3 = rax_57
                        
                        if (rcx_45 s< rbp_3)
                            int32_t r13_4 = r10_8
                            
                            do
                                int32_t var_610
                                int32_t var_60c
                                int32_t rax_60 = sub_14262c8f0(rdi_6, r11_8 + (sx.q(r13_4) << 1), 
                                    *(arg2 + 0x10), &var_610, &var_60c)
                                
                                if (rax_60 s<= r14_2)
                                    rdx_10 = zx.q(var_684_1)
                                    r8_6 = var_658_1
                                    r9_8 = var_654_1
                                else
                                    r8_6 = var_610
                                    rdx_10 = zx.q(r12_3)
                                    r9_8 = var_60c
                                    r14_2 = rax_60
                                    var_684_1 = rdx_10.d
                                    rbx_6 = zx.q(var_650_1)
                                    var_5f8_1 = r15_3
                                    var_658_1 = r8_6
                                    var_654_1 = r9_8
                                
                                r11_8 = rcx_36
                                r12_3 += 1
                                r13_4 += 6
                                r15_3 = &r15_3[1]
                            while (r15_3 s< var_670_1)
                            
                            rcx_45 = var_630_1
                            rbp_3 = var_670_1
                            rsi_6 = var_648_1
                            r10_8 = var_64c_1
                            rax_57 = var_680_1.d
                        
                        r10_8 += 6
                        var_650_1 = rax_57
                        rcx_45 = &rcx_45[1]
                        var_64c_1 = r10_8
                        rdi_6 += 0xc
                        var_630_1 = rcx_45
                    while (rax_57 s< rsi_6)
                    
                    if (r14_2 s<= 0)
                        r10_7 = zx.q(var_688_4)
                        break
                    
                    void* rdx_12 = r11_8 + (sx.q((rdx_10 * 3).d * 2) << 1)
                    sub_14262d220(r11_8 + (sx.q((rbx_6 * 3).d * 2) << 1), rdx_12, r8_6, r9_8)
                    rsi_6 -= 1
                    r10_7 = zx.q(var_688_4 - 1)
                    r11_8 = rcx_36
                    *rdx_12 = *var_628_1
                    *(rdx_12 + 8) = *(var_628_1 + 8)
                    char rax_68 = *(rdx_8 + rbp_3 - 1)
                    rbp_3 -= 1
                    var_628_1 -= 0xc
                    var_688_4 = r10_7.d
                    var_670_1 = rbp_3
                    *(var_5f8_1 + rdx_8) = rax_68
                
                rsi_5 = var_5f0_1
                rbp_2 = var_5e8_1
                r15 = var_668
                r12 = var_660
                r13 = var_640
                
                if (r10_7.d s<= 0)
                label_142633561:
                    var_684_2 = 0x40000000
                else
                    void* r10_10 = var_5d8_1
                    uint64_t r8_8 = zx.q(arg2[2])
                    
                    while (true)
                        if (r8_8.d s>= arg4)
                            goto label_142633561
                        
                        int64_t rcx_50 = sx.q((r8_8 * 3).d << 2)
                        int64_t rax_72 = *(arg2 + 0x18)
                        *(rax_72 + (rcx_50 << 1)) = -1
                        *(rax_72 + (rcx_50 << 1) + 8) = -1
                        *(rax_72 + (rcx_50 << 1) + 0x10) = -1
                        int16_t* rdx_14 = rax_72 + (rcx_50 << 1)
                        *rdx_14 = *(r10_10 - 4)
                        rdx_14[1] = *(r10_10 - 2)
                        rdx_14[2] = *r10_10
                        rdx_14[3] = *(r10_10 + 2)
                        rdx_14[4] = *(r10_10 + 4)
                        rdx_14[5] = *(r10_10 + 6)
                        *(sx.q(arg2[2]) + *(arg2 + 0x28)) = *(var_618 + rdx_8)
                        r8_8 = zx.q(arg2[2] + 1)
                        arg2[2] = r8_8.d
                        
                        if (r8_8.d s> arg4)
                            if (arg1 != 0)
                                sub_142627b60(arg1, "removeVertex: Too many polygons %d (max:%d).", 
                                    r8_8)
                            
                            break
                        
                        r10_10 += 0xc
                        void* rax_84 = &var_618[1]
                        var_618 = rax_84
                        
                        if (rax_84 s>= sx.q(r10_7.d))
                            goto label_142633561
                    
                    var_684_2 = -0x7ffffff0
        
        sub_142609160(rbx_5)
        sub_142609160(rdi_5)
        sub_142609160(rsi_5)
        sub_142609160(r14_1)
        sub_142609160(rbp_2)

sub_142609160(r13)
sub_142609160(r12)
sub_142609160(r15)
__security_check_cookie(rax_1 ^ &var_6b8)
return zx.q(var_684_2)
