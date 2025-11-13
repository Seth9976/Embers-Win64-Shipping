// 函数: sub_141dc21a0
// 地址: 0x141dc21a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_418
int64_t rax_1 = __security_cookie ^ &var_418
*(arg1 + 0x168) |= 1
int64_t* rcx = *(arg1 + 0x130)
float (* r14)[0x4] = arg2

if (rcx != 0 && arg5 == 0)
    if (arg3 != 0)
        sub_141f48e30(rcx, arg3)
        rcx = *(arg1 + 0x130)
    
    sub_141f4a580(rcx, r14, 0, 0, 1)

void* rcx_1 = *(arg1 + 0x10)
int64_t r15 = 0
uint64_t var_388 = 0
int32_t var_380 = 0
char rax_2 = sub_141ea2f60(rcx_1, &var_388)
void* i = *(arg1 + 0x10)
int64_t rcx_2 = 0
int64_t var_398 = 0
int32_t rsi = 0
int32_t r12 = 0
int32_t var_38c = 0

if (i != 0)
    do
        void* rax_3 = sub_140bdf670()
        void* rdx_3 = *(i + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
            rcx_2 = var_398
        else
            int64_t r14_1 = sx.q(rsi)
            rsi = (r14_1 + 1).d
            
            if (rsi s> r12)
                sub_1405a4d70(&var_398)
                r12 = var_38c
            
            rcx_2 = var_398
            *(rcx_2 + (r14_1 << 3)) = i
        
        i = *(i + 0x40)
    while (i != 0)
    
    r14 = arg2

int64_t rbx = sx.q(rsi - 1)

if (rsi - 1 s>= 0)
    int64_t temp0_1
    
    do
        sub_141e98930(*(rcx_2 + (rbx << 3)), arg1)
        temp0_1 = rbx
        rbx -= 1
        rcx_2 = var_398
    while (temp0_1 - 1 s>= 0)

char r12_1

if (var_380 s<= 0)
    sub_141dd2e20(arg1)
    sub_141e95820(*(arg1 + 0x10), arg1)
    r12_1 = rax_2
else
    r12_1 = rax_2
    char var_3f8
    
    if (r12_1 == 0)
        if (*(arg1 + 0x130) == 0)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            int64_t var_3c0_1 = 0
            var_3f8.d = 0
            int64_t* rax_79 = sub_140d2dfc0(sub_1424753d0(), arg1, 0, 0, var_3f8, 0, 0, 0, 0)
            char var_3f8_1 = 0
            rax_79[1].d |= 8
            *(rax_79 + 0x8c) = 1
            sub_141f49090(rax_79, r14, 0, 0, var_3f8_1)
            
            if (rax_79[0x14] == arg1)
                *(arg1 + 0x130) = rax_79
            
            sub_141ef1390(rax_79)
            int64_t r14_6 = sx.q(*(arg1 + 0x208))
            int32_t rax_80 = (r14_6 + 1).d
            *(arg1 + 0x208) = rax_80
            
            if (rax_80 s> *(arg1 + 0x20c))
                sub_1405a4d70(arg1 + 0x200)
            
            *(*(arg1 + 0x200) + (r14_6 << 3)) = rax_79
        
        if ((*(arg1 + 0x5c) & 1) != 0)
            (*(*arg1 + 0x4b0))(arg1)
    else
        void* i_3 = nullptr
        int32_t var_1fc_1 = 0x18
        int32_t var_200_1 = 0
        void* rax_7 = sub_142459c10()
        void* const rsi_1
        
        if (rax_7 == 0)
            rsi_1 = nullptr
        else
            void* rax_8 = sub_142459c10()
            
            if (rax_8 == 0)
                rsi_1 = nullptr
            else
                int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_9.d s> *(rax_7 + 0x38))
                    rsi_1 = nullptr
                else
                    rsi_1 = rax_7
                    
                    if (*(*(rax_7 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                        rsi_1 = nullptr
        
        void var_2c8
        void* r8_1 = &var_2c8
        
        if (rsi_1 != sub_142459c10())
            sub_1419f71f0(arg1, rax_7, r8_1)
        else
            sub_1419f6fe0(arg1, rax_7, r8_1)
        
        void* i_1 = &var_2c8
        void* var_138_1 = nullptr
        int32_t var_130_1 = 0
        
        if (i_3 != 0)
            i_1 = i_3
        
        int32_t var_12c_1 = 0x18
        void var_1f8
        
        for (void* r12_2 = i_1 + (sx.q(var_200_1) << 3); i_1 != r12_2; i_1 += 8)
            void* rsi_2 = *i_1
            
            if (rsi_2 != 0)
                void* rax_14 = sub_1425881f0()
                void* rdx_8 = *(rsi_2 + 0x10)
                int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                
                if (rax_15.d s<= *(rdx_8 + 0x38)
                        && *(*(rdx_8 + 0x30) + (rax_15 << 3)) == rax_14 + 0x30
                        && *(rsi_2 + 0x8c) == 0)
                    void* rbx_2 = *(rsi_2 + 0x20)
                    void* rax_17 = sub_142452380()
                    void* rdx_9 = *(rbx_2 + 0x10)
                    int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                    
                    if (rax_18.d s<= *(rdx_9 + 0x38)
                            && *(*(rdx_9 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
                        if (*(arg1 + 0x130) == 0 && *(rsi_2 + 0xc0) == 0 && *(rsi_2 + 0xa0) == arg1)
                            *(arg1 + 0x130) = rsi_2
                        
                        int64_t rbx_3 = sx.q(var_130_1)
                        int32_t rax_20 = (rbx_3 + 1).d
                        var_130_1 = rax_20
                        
                        if (rax_20 s> var_12c_1)
                            sub_141a14450(&var_1f8, rbx_3.d)
                        
                        void* rcx_11 = &var_1f8
                        
                        if (var_138_1 != 0)
                            rcx_11 = var_138_1
                        
                        *(rcx_11 + (rbx_3 << 3)) = rsi_2
        
        uint8_t rcx_13 = *((*(*arg1 + 0x150))(arg1) + 0x11c)
        int64_t rax_24 = *arg1
        uint8_t var_3c7 = rcx_13 u>> 1 & 1
        void* rax_25 = (*(rax_24 + 0x150))(arg1)
        int64_t var_338_1 = 0
        *(rax_25 + 0x11c) |= 2
        uint8_t* var_3b0_1 = &var_3c7
        void* (* var_348_1)(int64_t* arg1) = sub_141dbba30
        void* (* var_308_1)(int64_t* arg1) = sub_141dbba30
        int128_t* var_2f8_1 = nullptr
        int128_t var_320_1 = arg1.o
        int128_t var_2e8 = (&data_142d42ed8).o
        int128_t var_318
        int128_t var_2d8_1 = var_318
        int64_t rsi_3 = sx.q(var_380 - 1)
        
        if (var_380 - 1 s>= 0)
            int64_t temp2_1
            
            do
                void* r14_2 = *(var_388 + (rsi_3 << 3))
                void* rbx_4 = *(r14_2 + 0x278)
                
                if (rbx_4 != 0)
                    sub_14230c5d0(rbx_4)
                    var_3f8.q = arg3
                    sub_14230d870(rbx_4, arg1, &var_1f8, arg2, var_3f8, arg5)
                
                sub_141e98930(r14_2, arg1)
                temp2_1 = rsi_3
                rsi_3 -= 1
            while (temp2_1 - 1 s>= 0)
            r15 = 0
        
        if ((*(arg1 + 0x5c) & 1) != 0)
            (*(*arg1 + 0x4b0))(arg1)
        
        void* var_68_1 = nullptr
        int32_t var_5c_1 = 0x18
        int32_t var_60_1 = 0
        void* rax_30 = sub_142459c10()
        void* const rsi_4
        
        if (rax_30 == 0)
            rsi_4 = nullptr
        else
            void* rax_31 = sub_142459c10()
            
            if (rax_31 == 0)
                rsi_4 = nullptr
            else
                int64_t rax_32 = sx.q(*(rax_31 + 0x38))
                
                if (rax_32.d s> *(rax_30 + 0x38))
                    rsi_4 = nullptr
                else
                    rsi_4 = rax_30
                    
                    if (*(*(rax_30 + 0x30) + (rax_32 << 3)) != rax_31 + 0x30)
                        rsi_4 = nullptr
        
        void var_128
        void* r8_5 = &var_128
        
        if (rsi_4 != sub_142459c10())
            sub_1419f71f0(arg1, rax_30, r8_5)
        else
            sub_1419f6fe0(arg1, rax_30, r8_5)
        
        void* rbx_6 = &var_128
        int64_t rsi_5 = 0
        
        if (var_68_1 != 0)
            rbx_6 = var_68_1
        
        int64_t r14_3 = sx.q(var_60_1) << 3
        uint64_t r14_4 = r14_3 u>> 3
        
        if (rbx_6 u> rbx_6 + r14_3)
            r14_4 = 0
        
        if (r14_4 != 0)
            void* i_4 = i_3
            
            do
                int64_t* r8_6 = *rbx_6
                
                if ((r8_6[0x11].b & 1) == 0 && (*(r8_6 + 0x89) & 2) != 0)
                    int32_t rax_38 = *(r8_6 + 0xc)
                    void* const rax_42
                    
                    if (rax_38 s>= data_143e1d9b4)
                        rax_42 = nullptr
                    else
                        uint32_t rdx_15 = zx.d(rax_38.w)
                        
                        if (rax_38 s< 0)
                            rax_38 += 0xffff
                            rdx_15 -= 0x10000
                        
                        rax_42 =
                            *(data_143e1d9a0 + (sx.q(rax_38 s>> 0x10) << 3)) + sx.q(rdx_15) * 0x18
                    
                    if (((*(rax_42 + 8) u>> 0x1d).b & 1) == 0)
                        if (*(r8_6 + 0x8c) != 1)
                            void* i_2 = &var_2c8
                            
                            if (i_4 != 0)
                                i_2 = i_4
                            
                            for (void* rdx_17 = i_2 + (sx.q(var_200_1) << 3); i_2 != rdx_17; 
                                    i_2 += 8)
                                if (*i_2 == r8_6)
                                    goto label_141dc26ed
                        
                        sub_14231ab40(r8_6)
                        i_4 = i_3
                
            label_141dc26ed:
                rbx_6 += 8
                rsi_5 += 1
            while (rsi_5 != r14_4)
        
        int64_t* rbx_10 = arg4
        
        if (rbx_10 != 0)
            sub_141eb98e0(rbx_10, arg1, 0)
        
        sub_141dd2e20(arg1)
        
        if (sub_14243ade0((*(*arg1 + 0x150))(arg1)) == 0)
            void* var_3b8_1
            var_3b8_1:4.d = 1
            int32_t r10_1 = *(arg1 + 0x1c8)
            void* var_3b0_2 = arg1 + 0x1b0
            int32_t rcx_29 = 0
            var_3b8_1.d = 0
            int32_t r8_7 = 0
            int32_t var_3a8_1 = 0xffffffff
            int64_t var_3a4_1 = 0
            
            if (r10_1 != 0)
                void* rax_49 = *(arg1 + 0x1c0)
                void* r9_1 = arg1 + 0x1b0
                
                if (rax_49 != 0)
                    r9_1 = rax_49
                
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(r10_1 - 1)
                int32_t rdx_21 = *r9_1
                
                if (rdx_21 != 0)
                label_141dc27cb:
                    int32_t rax_56 = neg.d(rdx_21) & rdx_21
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_56)
                    var_3b8_1:4.d = rax_56
                    int32_t rax_57
                    
                    if (rax_56 == 0)
                        rax_57 = 0x20
                    else
                        rax_57 = 0x1f - temp0_2
                    
                    var_3a4_1.d = r8_7 - rax_57 + 0x1f
                    
                    if (r8_7 - rax_57 + 0x1f s> r10_1)
                        var_3a4_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_22 = sx.q(rcx_29)
                        r8_7 += 0x20
                        rcx_29 += 1
                        var_3a4_1:4.d = r8_7
                        var_3b8_1.d = rcx_29
                        
                        if (rdx_22.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_21 = *(r9_1 + (rdx_22 << 2) + 4)
                        int32_t var_3a8_2 = 0xffffffff
                        
                        if (rdx_21 != 0)
                            goto label_141dc27cb
                    
                    var_3a4_1.d = r10_1
            
            int32_t rdx_23 = *(arg1 + 0x1c8)
            var_3a4_1.d = rdx_23
            int128_t var_330 = 0xffffffff
            int128_t var_340_1 = var_3b8_1.o
            int32_t r14_5 = 0xffffffff << (rdx_23 & 0x1f).b
            int32_t r8_10 = rdx_23 s>> 5
            int32_t r9_3 = rdx_23 & 0xffffffe0
            int64_t var_350_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int32_t var_3a8_3 = r14_5
            int128_t var_370 = (arg1 + 0x1a0).o
            int128_t var_360_1 = var_338_1.o
            
            if (rdx_23 != r10_1)
                void* rax_61 = *(arg1 + 0x1c0)
                void* r11_1 = arg1 + 0x1b0
                
                if (rax_61 != 0)
                    r11_1 = rax_61
                
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(r10_1 - 1)
                int32_t rdx_27 = *(r11_1 + (sx.q(r8_10) << 2)) & r14_5
                
                if (rdx_27 != 0)
                label_141dc28a6:
                    int32_t rax_67 = neg.d(rdx_27) & rdx_27
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_67)
                    int32_t rsi_6
                    
                    if (rax_67 == 0)
                        rsi_6 = 0x20
                    else
                        rsi_6 = 0x1f - temp0_4
                    
                    var_3a4_1.d = r9_3 - rsi_6 + 0x1f
                    
                    if (r9_3 - rsi_6 + 0x1f s> r10_1)
                        var_3a4_1.d = r10_1
                else
                    while (true)
                        int64_t rcx_33 = sx.q(r8_10)
                        r9_3 += 0x20
                        r8_10 += 1
                        
                        if (rcx_33.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_27 = *(r11_1 + (rcx_33 << 2) + 4)
                        var_3a8_3 = 0xffffffff
                        
                        if (rdx_27 != 0)
                            goto label_141dc28a6
                    
                    var_3a4_1.d = r10_1
            
            while (true)
                int64_t rcx_35 = sx.q(var_360_1:0xc.d)
                int32_t rax_60
                
                if (rcx_35.d != (var_3a8_3.q u>> 0x20).d || var_360_1.q != arg1 + 0x1b0)
                    rax_60.b = 0
                else
                    rax_60.b = 1
                
                int64_t* rdx_28 = var_370.q
                
                if (rax_60.b == 0 || rdx_28 != arg1 + 0x1a0)
                    rax_60.b = 1
                else
                    rax_60.b = 0
                
                if (rax_60.b == 0)
                    break
                
                void* rcx_37 = *(*rdx_28 + rcx_35 * 0x10)
                
                if (rcx_37 != 0)
                    sub_141edf440(rcx_37)
                
                var_360_1:8.d &= not.d(var_370:0xc.d)
                sub_14059bdd0(&var_370:8)
            
            rbx_10 = arg4
        
        sub_141e95820(*(arg1 + 0x10), arg1)
        
        if (rbx_10 != 0)
            sub_141eb98e0(rbx_10, arg1, 1)
        
        uint64_t rbx_11 = var_388
        int64_t rcx_41 = rbx_11 + (sx.q(var_380) << 3)
        uint64_t rsi_10 = (rcx_41 - rbx_11 + 7) u>> 3
        
        if (rbx_11 u> rcx_41)
            rsi_10 = 0
        
        if (rsi_10 != 0)
            do
                void* rcx_42 = *(*rbx_11 + 0x278)
                
                if (rcx_42 != 0)
                    sub_14231acb0(rcx_42)
                
                rbx_11 += 8
                r15 += 1
            while (r15 != rsi_10)
        
        if (var_68_1 != 0)
            sub_140a74f90(var_68_1)
        
        int128_t* rcx_44 = &var_2e8
        
        if (var_2f8_1 != 0)
            rcx_44 = var_2f8_1
        
        var_308_1((*(*rcx_44 + 8))(rcx_44))
        
        if (var_308_1 != 0)
            int128_t* rcx_46 = &var_2e8
            
            if (var_2f8_1 != 0)
                rcx_46 = var_2f8_1
            
            (*(*rcx_46 + 0x10))(rcx_46)
        
        if (var_138_1 != 0)
            sub_140a74f90(var_138_1)
        
        if (i_3 != 0)
            sub_140a74f90(i_3)
        
        r12_1 = rax_2

sub_142449550((*(*arg1 + 0x150))(arg1), arg1, nullptr)
(*(*arg1 + 0x520))(arg1, arg2)
int64_t rcx_60 = var_398

if (rcx_60 != 0)
    sub_140a74f90(rcx_60)

uint64_t rcx_61 = var_388

if (rcx_61 != 0)
    sub_140a74f90(rcx_61)

*(arg1 + 0x168) &= 0xfe
sub_141dd41f0(&data_143a2d050, arg1)
__security_check_cookie(rax_1 ^ &var_418)
return zx.q(r12_1)
