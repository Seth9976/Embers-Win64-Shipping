// 函数: sub_1418b0650
// 地址: 0x1418b0650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t rdi = 0
int16_t* const r13 = &data_142d40450
int16_t* const rdx = &data_142d40450
bool arg_8 = false

if (data_143efaf18 != 0)
    rdx = data_143efaf10

int16_t* const rcx

if (arg4[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg4

int32_t rax = sub_140a54510(rcx, rdx)

if (rax == 0)
    (*(*arg1 + 0x60))(arg1)

int16_t* rdx_1

if (arg2[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *arg2

void* var_b8
sub_140b58260(&var_b8, rdx_1, 1)
void* rax_2 = var_b8
int32_t r10_1 = sub_140b5ead0(rax_2.d) + rax_2:4.d
void* result_1

if (arg1[0x19].d == *(arg1 + 0xf4))
label_1418b0757_1:
    result_1 = sub_1418aeaf0(&arg1[0x18], r10_1, &var_b8)
else
    void* rcx_4 = arg1[0x20]
    void* r8 = &arg1[0x1f]
    
    if (rcx_4 != 0)
        r8 = rcx_4
    
    int32_t rax_6 = *(r8 + (((sx.q(arg1[0x21].d) - 1) & sx.q(r10_1)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_1418b0757_2:
        result_1 = sub_1418aeaf0(&arg1[0x18], r10_1, &var_b8)
    else
        int64_t* r8_3
        
        while (true)
            r8_3 = (sx.q(rax_6) << 5) + arg1[0x18]
            
            if (*r8_3 == var_b8)
                break
            
            rax_6 = r8_3[3].d
            
            if (rax_6 == 0xffffffff)
                goto label_1418b0757
        
        if (rax_6 == 0xffffffff || r8_3 == 0)
        label_1418b0757:
            result_1 = sub_1418aeaf0(&arg1[0x18], r10_1, &var_b8)
        else
            result_1 = &r8_3[1]

int64_t* result
void* var_a0
int32_t var_98
int64_t var_90

if (*result_1 != 0)
label_1418b089c:
    int16_t* var_b0
    int32_t var_94
    int64_t* rax_17
    void* rbx_3
    int32_t r15_1
    
    if (rax != 0)
        int32_t rsi_2 = arg4[1].d
        rbx_3 = nullptr
        int64_t r14_1 = *arg4
        var_a0 = nullptr
        var_98 = rsi_2
        
        if (rsi_2 != 0)
            sub_1405a4c70(&var_a0, rsi_2, 0)
            rbx_3 = var_a0
            memcpy(rbx_3, r14_1, rsi_2 * 2)
        else
            var_94 = 0
        
        rax_17 = &var_a0
        r15_1 = 2
    else
        rax_17 = (*(*arg1 + 0x68))(arg1, &var_b0)
        rbx_3 = var_a0
        r15_1 = 1
    
    int32_t r14_2 = rax_17[1].d
    int64_t rsi_3 = 0
    int64_t r12_1 = *rax_17
    var_90 = 0
    
    if (r14_2 != 0)
        sub_1405a4c70(&var_90, r14_2, 0)
        rsi_3 = var_90
        memcpy(rsi_3, r12_1, r14_2 * 2)
    else
        int32_t var_84_1 = 0
    
    if ((r15_1.b & 2) != 0)
        r15_1 &= 0xfffffffd
        
        if (rbx_3 != 0)
            sub_140a74f90(rbx_3)
    
    if ((r15_1.b & 1) != 0)
        int16_t* rcx_18 = var_b0
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
    
    var_b0 = nullptr
    int32_t var_a8_1 = 0
    sub_1405947f0(&var_b0, 3)
    int32_t rbx_4 = var_a8_1 + 3
    
    if (rbx_4 s> 0)
        sub_140594770(&var_b0)
    
    int16_t* r15_2 = var_b0
    UnDecorator::getReferenceType(r15_2, &data_142e5c258, 6)
    int16_t* const rcx_22 = &data_142d40450
    
    if (rbx_4 != 0)
        rcx_22 = r15_2
    
    int16_t* rax_18
    
    if (arg3[1].d == 0)
        rax_18 = &data_142d40450
    else
        rax_18 = *arg3
    
    void* rcx_23 = rcx_22 - rax_18
    uint32_t i
    uint32_t rbx_5
    
    do
        rbx_5 = zx.d(*rax_18)
        i = zx.d(*(rax_18 + rcx_23))
        
        if (rbx_5 != i)
            break
        
        rax_18 = &rax_18[1]
    while (i != 0)
    
    if (r15_2 != 0)
        sub_140a74f90(r15_2)
    
    if (rbx_5 - i != 0)
        int16_t* rbx_7 = nullptr
        __builtin_memset(&var_b0, 0, 0x20)
        sub_1405947f0(&var_a0, 3)
        int32_t rsi_4 = var_98 + 3
        
        if (rsi_4 s> var_94)
            sub_140594770(&var_a0)
        
        void* r14_3 = var_a0
        UnDecorator::getReferenceType(r14_3, &data_142fead28, 6)
        int16_t* const rdx_18 = &data_142d40450
        
        if (rsi_4 != 0)
            rdx_18 = r14_3
        
        int16_t* const rcx_32
        
        if (arg3[1].d == 0)
            rcx_32 = &data_142d40450
        else
            rcx_32 = *arg3
        
        rsi_4.b = sub_140a54510(rcx_32, rdx_18) == 0
        
        if (r14_3 != 0)
            sub_140a74f90(r14_3)
        
        int64_t var_a8_2
        
        if (rsi_4.b == 0)
            var_a0 = nullptr
            int32_t var_98_1
            var_98_1.q = 0
            sub_1405947f0(&var_a0, 3)
            int32_t rsi_7 = var_98_1 + 3
            
            if (rsi_7 s> var_94)
                sub_140594770(&var_a0)
            
            void* r14_6 = var_a0
            UnDecorator::getReferenceType(r14_6, &data_142fead30, 6)
            int16_t* const rdx_26 = &data_142d40450
            
            if (rsi_7 != 0)
                rdx_26 = r14_6
            
            int16_t* const rcx_44
            
            if (arg3[1].d == 0)
                rcx_44 = &data_142d40450
            else
                rcx_44 = *arg3
            
            rsi_7.b = sub_140a54510(rcx_44, rdx_26) == 0
            
            if (r14_6 != 0)
                sub_140a74f90(r14_6)
            
            if (rsi_7.b == 0)
                var_a0 = nullptr
                int32_t var_98_2
                var_98_2.q = 0
                sub_1405947f0(&var_a0, 3)
                int32_t rsi_17 = var_98_2 + 3
                
                if (rsi_17 s> var_94)
                    sub_140594770(&var_a0)
                
                void* r14_16 = var_a0
                UnDecorator::getReferenceType(r14_16, &data_142fead38, 6)
                void* rdx_47 = &data_142d40450
                
                if (rsi_17 != 0)
                    rdx_47 = r14_16
                
                int16_t* const rcx_69
                
                if (arg3[1].d == 0)
                    rcx_69 = &data_142d40450
                else
                    rcx_69 = *arg3
                
                rsi_17.b = sub_140a54510(rcx_69, rdx_47) == 0
                
                if (r14_16 != 0)
                    sub_140a74f90(r14_16)
                
                if (rsi_17.b == 0)
                    var_a0 = nullptr
                    int32_t var_98_3
                    var_98_3.q = 0
                    sub_1405947f0(&var_a0, 8)
                    int32_t rsi_20 = var_98_3 + 8
                    
                    if (rsi_20 s> var_94)
                        sub_140594770(&var_a0)
                    
                    void* r14_19 = var_a0
                    UnDecorator::getReferenceType(r14_19, u"zh-hans", 0x10)
                    void* rdx_54 = &data_142d40450
                    
                    if (rsi_20 != 0)
                        rdx_54 = r14_19
                    
                    int16_t* const rcx_80
                    
                    if (arg3[1].d == 0)
                        rcx_80 = &data_142d40450
                    else
                        rcx_80 = *arg3
                    
                    rsi_20.b = sub_140a54510(rcx_80, rdx_54) == 0
                    
                    if (r14_19 != 0)
                        sub_140a74f90(r14_19)
                    
                    int32_t rsi_21
                    
                    if (rsi_20.b == 0)
                        var_a0 = nullptr
                        int32_t var_98_4
                        var_98_4.q = 0
                        sub_1405947f0(&var_a0, 8)
                        rsi_21 = var_98_4 + 8
                        
                        if (rsi_21 s> var_94)
                            sub_140594770(&var_a0)
                        
                        void* r14_20 = var_a0
                        UnDecorator::getReferenceType(r14_20, u"zh-hant", 0x10)
                        void* rdx_56 = &data_142d40450
                        
                        if (rsi_21 != 0)
                            rdx_56 = r14_20
                        
                        int16_t* const rcx_85
                        
                        if (arg3[1].d == 0)
                            rcx_85 = &data_142d40450
                        else
                            rcx_85 = *arg3
                        
                        rsi_21.b = sub_140a54510(rcx_85, rdx_56) == 0
                        
                        if (r14_20 != 0)
                            sub_140a74f90(r14_20)
                    
                    if (rsi_20.b != 0 || rsi_21.b != 0)
                        var_a8_2.d = 1
                        sub_140594770(&var_b0)
                        int64_t r14_21 = sx.q(var_a8_2.d)
                        rbx_7 = var_b0
                        int32_t rcx_88 = var_a8_2:4.d
                        int32_t rsi_22 = (r14_21 + 1).d
                        var_a8_2.d = rsi_22
                        *rbx_7 = 0x73
                        
                        if (rsi_22 s> rcx_88)
                            sub_140594770(&var_b0)
                            rcx_88 = var_a8_2:4.d
                            rbx_7 = var_b0
                            rsi_22 = var_a8_2.d
                        
                        rbx_7[r14_21] = 0x9d
                        int32_t r14_22 = rsi_22 + 1
                        var_a8_2.d = r14_22
                        
                        if (r14_22 s> rcx_88)
                            sub_140594770(&var_b0)
                            rcx_88 = var_a8_2:4.d
                            rbx_7 = var_b0
                            r14_22 = var_a8_2.d
                        
                        int32_t rsi_23 = r14_22 + 1
                        var_a8_2.d = rsi_23
                        rbx_7[sx.q(rsi_22)] = 0x97
                        
                        if (rsi_23 s> rcx_88)
                            sub_140594770(&var_b0)
                            rcx_88 = var_a8_2:4.d
                            rbx_7 = var_b0
                            rsi_23 = var_a8_2.d
                        
                        int32_t r14_23 = rsi_23 + 1
                        var_a8_2.d = r14_23
                        rbx_7[sx.q(r14_22)] = 0x10d
                        
                        if (r14_23 s> rcx_88)
                            sub_140594770(&var_b0)
                            rcx_88 = var_a8_2:4.d
                            rbx_7 = var_b0
                            r14_23 = var_a8_2.d
                        
                        int32_t rsi_24 = r14_23 + 1
                        var_a8_2.d = rsi_24
                        rbx_7[sx.q(rsi_23)] = 0x66
                        
                        if (rsi_24 s> rcx_88)
                            sub_140594770(&var_b0)
                            rcx_88 = var_a8_2:4.d
                            rbx_7 = var_b0
                            rsi_24 = var_a8_2.d
                        
                        int32_t r14_24 = rsi_24 + 1
                        var_a8_2.d = r14_24
                        rbx_7[sx.q(r14_23)] = 0x70
                        
                        if (r14_24 s> rcx_88)
                            sub_140594770(&var_b0)
                            rcx_88 = var_a8_2:4.d
                            rbx_7 = var_b0
                            r14_24 = var_a8_2.d
                        
                        int32_t rsi_25 = r14_24 + 1
                        var_a8_2.d = rsi_25
                        rbx_7[sx.q(rsi_24)] = 0x69
                        
                        if (rsi_25 s> rcx_88)
                            sub_140594770(&var_b0)
                            rcx_88 = var_a8_2:4.d
                            rbx_7 = var_b0
                            rsi_25 = var_a8_2.d
                        
                        int32_t r14_25 = rsi_25 + 1
                        var_a8_2.d = r14_25
                        rbx_7[sx.q(r14_24)] = 0x76
                        
                        if (r14_25 s> rcx_88)
                            sub_140594770(&var_b0)
                            rcx_88 = var_a8_2:4.d
                            rbx_7 = var_b0
                            r14_25 = var_a8_2.d
                        
                        int32_t rsi_26 = r14_25 + 1
                        var_a8_2.d = rsi_26
                        rbx_7[sx.q(rsi_25)] = 0x74
                        
                        if (rsi_26 s> rcx_88)
                            sub_140594770(&var_b0)
                            rcx_88 = var_a8_2:4.d
                            rbx_7 = var_b0
                            rsi_26 = var_a8_2.d
                        
                        int32_t r15_4 = rsi_26 + 1
                        var_a8_2.d = r15_4
                        rbx_7[sx.q(r14_25)] = 0x109
                        
                        if (r15_4 s> rcx_88)
                            sub_140594770(&var_b0)
                            rcx_88 = var_a8_2:4.d
                            rbx_7 = var_b0
                            r15_4 = var_a8_2.d
                        
                        int32_t r14_26 = r15_4 + 1
                        var_a8_2.d = r14_26
                        rbx_7[sx.q(rsi_26)] = 0x10a
                        
                        if (r14_26 s> rcx_88)
                            sub_140594770(&var_b0)
                            rcx_88 = var_a8_2:4.d
                            rbx_7 = var_b0
                            r14_26 = var_a8_2.d
                        
                        int32_t rsi_27 = r14_26 + 1
                        var_a8_2.d = rsi_27
                        rbx_7[sx.q(r15_4)] = 0x10b
                        
                        if (rsi_27 s> rcx_88)
                            sub_140594770(&var_b0)
                            rcx_88 = var_a8_2:4.d
                            rbx_7 = var_b0
                            rsi_27 = var_a8_2.d
                        
                        rbx_7[sx.q(r14_26)] = 0x10c
                        var_a8_2.d = rsi_27 + 1
                        
                        if (rsi_27 + 1 s> rcx_88)
                            sub_140594770(&var_b0)
                            rbx_7 = var_b0
                        
                        rbx_7[sx.q(rsi_27)] = 0x72
                else
                    var_a8_2.d = 1
                    sub_140594770(&var_b0)
                    int64_t r14_17 = sx.q(var_a8_2.d)
                    rbx_7 = var_b0
                    int32_t rcx_72 = var_a8_2:4.d
                    int32_t rsi_18 = (r14_17 + 1).d
                    *rbx_7 = 0x24
                    var_a8_2.d = rsi_18
                    
                    if (rsi_18 s> rcx_72)
                        sub_140594770(&var_b0)
                        rcx_72 = var_a8_2:4.d
                        rsi_18 = var_a8_2.d
                        rbx_7 = var_b0
                    
                    rbx_7[r14_17] = 0x86
                    int32_t r14_18 = rsi_18 + 1
                    var_a8_2.d = r14_18
                    
                    if (r14_18 s> rcx_72)
                        sub_140594770(&var_b0)
                        rcx_72 = var_a8_2:4.d
                        r14_18 = var_a8_2.d
                        rbx_7 = var_b0
                    
                    int32_t rsi_19 = r14_18 + 1
                    var_a8_2.d = rsi_19
                    rbx_7[sx.q(rsi_18)] = 0x92
                    
                    if (rsi_19 s> rcx_72)
                        sub_140594770(&var_b0)
                        rcx_72 = var_a8_2:4.d
                        rsi_19 = var_a8_2.d
                        rbx_7 = var_b0
                    
                    rbx_7[sx.q(r14_18)] = 0x6d
                    var_a8_2.d = rsi_19 + 1
                    
                    if (rsi_19 + 1 s> rcx_72)
                        sub_140594770(&var_b0)
                        rbx_7 = var_b0
                    
                    rbx_7[sx.q(rsi_19)] = 0x91
            else
                var_a8_2.d = 1
                sub_140594770(&var_b0)
                int64_t r14_7 = sx.q(var_a8_2.d)
                rbx_7 = var_b0
                int32_t rcx_47 = var_a8_2:4.d
                int32_t rsi_8 = (r14_7 + 1).d
                *rbx_7 = 0x73
                var_a8_2.d = rsi_8
                
                if (rsi_8 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    rsi_8 = var_a8_2.d
                    rbx_7 = var_b0
                
                rbx_7[r14_7] = 0x9d
                int32_t r14_8 = rsi_8 + 1
                var_a8_2.d = r14_8
                
                if (r14_8 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    r14_8 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t rsi_9 = r14_8 + 1
                var_a8_2.d = rsi_9
                rbx_7[sx.q(rsi_8)] = 0x97
                
                if (rsi_9 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    rsi_9 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t r14_9 = rsi_9 + 1
                var_a8_2.d = r14_9
                rbx_7[sx.q(r14_8)] = 0x10d
                
                if (r14_9 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    r14_9 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t rsi_10 = r14_9 + 1
                var_a8_2.d = rsi_10
                rbx_7[sx.q(rsi_9)] = 0x66
                
                if (rsi_10 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    rsi_10 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t r14_10 = rsi_10 + 1
                var_a8_2.d = r14_10
                rbx_7[sx.q(r14_9)] = 0x70
                
                if (r14_10 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    r14_10 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t rsi_11 = r14_10 + 1
                var_a8_2.d = rsi_11
                rbx_7[sx.q(rsi_10)] = 0x69
                
                if (rsi_11 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    rsi_11 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t r14_11 = rsi_11 + 1
                var_a8_2.d = r14_11
                rbx_7[sx.q(r14_10)] = 0x76
                
                if (r14_11 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    r14_11 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t rsi_12 = r14_11 + 1
                var_a8_2.d = rsi_12
                rbx_7[sx.q(rsi_11)] = 0x74
                
                if (rsi_12 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    rsi_12 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t r14_12 = rsi_12 + 1
                var_a8_2.d = r14_12
                rbx_7[sx.q(r14_11)] = 0x109
                
                if (r14_12 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    r14_12 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t rsi_13 = r14_12 + 1
                var_a8_2.d = rsi_13
                rbx_7[sx.q(rsi_12)] = 0x10a
                
                if (rsi_13 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    rsi_13 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t r14_13 = rsi_13 + 1
                var_a8_2.d = r14_13
                rbx_7[sx.q(r14_12)] = 0x10b
                
                if (r14_13 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    r14_13 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t rsi_14 = r14_13 + 1
                var_a8_2.d = rsi_14
                rbx_7[sx.q(rsi_13)] = 0x10c
                
                if (rsi_14 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    rsi_14 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t r14_14 = rsi_14 + 1
                var_a8_2.d = r14_14
                rbx_7[sx.q(r14_13)] = 0x72
                
                if (r14_14 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    r14_14 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t rsi_15 = r14_14 + 1
                var_a8_2.d = rsi_15
                rbx_7[sx.q(rsi_14)] = 0x6a
                
                if (rsi_15 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    rsi_15 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t r14_15 = rsi_15 + 1
                var_a8_2.d = r14_15
                rbx_7[sx.q(r14_14)] = 0x6b
                
                if (r14_15 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    r14_15 = var_a8_2.d
                    rbx_7 = var_b0
                
                int32_t rsi_16 = r14_15 + 1
                var_a8_2.d = rsi_16
                rbx_7[sx.q(rsi_15)] = 0x71
                
                if (rsi_16 s> rcx_47)
                    sub_140594770(&var_b0)
                    rcx_47 = var_a8_2:4.d
                    rsi_16 = var_a8_2.d
                    rbx_7 = var_b0
                
                rbx_7[sx.q(r14_15)] = 0x6e
                var_a8_2.d = rsi_16 + 1
                
                if (rsi_16 + 1 s> rcx_47)
                    sub_140594770(&var_b0)
                    rbx_7 = var_b0
                
                rbx_7[sx.q(rsi_16)] = 0xa0
        else
            var_a8_2.d = 1
            sub_140594770(&var_b0)
            int64_t r14_4 = sx.q(var_a8_2.d)
            rbx_7 = var_b0
            int32_t rcx_35 = var_a8_2:4.d
            int32_t rsi_5 = (r14_4 + 1).d
            *rbx_7 = 0xd
            var_a8_2.d = rsi_5
            
            if (rsi_5 s> rcx_35)
                sub_140594770(&var_b0)
                rcx_35 = var_a8_2:4.d
                rsi_5 = var_a8_2.d
                rbx_7 = var_b0
            
            int32_t r15_3 = rsi_5 + 1
            rbx_7[r14_4] = 0x14
            var_a8_2.d = r15_3
            
            if (r15_3 s> rcx_35)
                sub_140594770(&var_b0)
                rcx_35 = var_a8_2:4.d
                r15_3 = var_a8_2.d
                rbx_7 = var_b0
            
            int32_t r14_5 = r15_3 + 1
            var_a8_2.d = r14_5
            rbx_7[sx.q(rsi_5)] = 0xfb
            
            if (r14_5 s> rcx_35)
                sub_140594770(&var_b0)
                rcx_35 = var_a8_2:4.d
                r14_5 = var_a8_2.d
                rbx_7 = var_b0
            
            int32_t rsi_6 = r14_5 + 1
            var_a8_2.d = rsi_6
            rbx_7[sx.q(r15_3)] = 0x99
            
            if (rsi_6 s> rcx_35)
                sub_140594770(&var_b0)
                rcx_35 = var_a8_2:4.d
                rsi_6 = var_a8_2.d
                rbx_7 = var_b0
            
            rbx_7[sx.q(r14_5)] = 0x9f
            var_a8_2.d = rsi_6 + 1
            
            if (rsi_6 + 1 s> rcx_35)
                sub_140594770(&var_b0)
                rbx_7 = var_b0
            
            rbx_7[sx.q(rsi_6)] = 0xf
        
        void* rsi_28 = *result_1
        int64_t r14_27 = sx.q(*(rsi_28 + 0x30))
        int32_t rax_66 = (r14_27 + 1).d
        *(rsi_28 + 0x30) = rax_66
        
        if (rax_66 s> *(rsi_28 + 0x34))
            sub_1407c3b60(rsi_28 + 0x28)
        
        int64_t rax_67 = *(rsi_28 + 0x28)
        int64_t* rdx_72 = r14_27 * 0x38
        *(rdx_72 + rax_67) = 0
        *(rdx_72 + rax_67 + 8) = 0
        __builtin_memset(rdx_72 + rax_67 + 0x18, 0, 0x20)
        *(rdx_72 + rax_67 + 0x10) = 0x3f800000
        int32_t rax_69 = arg3[1].d
        void* rsi_30 = *(*result_1 + 0x28) + rdx_72
        int32_t r8_12 = rax_69 - 1
        
        if (rax_69 == 0)
            r8_12 = 0
        
        sub_140a20ba0(rsi_30 + 0x28, *arg3, r8_12)
        int16_t* r12_3 = rbx_7
        void* rcx_104 = &rbx_7[sx.q(var_a8_2.d)]
        uint64_t rax_74 = (rcx_104 - rbx_7 + 1) u>> 1
        
        if (rbx_7 u> rcx_104)
            rax_74 = 0
        
        if (rax_74 != 0)
            do
                void var_80
                int16_t* rax_75 = sub_140dab0d0(&var_80, *r12_3)
                int64_t r14_28 = sx.q(*(rsi_30 + 0x20))
                int32_t rcx_106 = (r14_28 + 1).d
                *(rsi_30 + 0x20) = rcx_106
                
                if (rcx_106 s> *(rsi_30 + 0x24))
                    sub_1405a4f90(rsi_30 + 0x18)
                
                *(*(rsi_30 + 0x18) + r14_28 * 0x10) = *(rax_75 + 0x20)
                void var_78
                sub_1405970a0(&var_78)
                r12_3 = &r12_3[1]
                rdi += 1
            while (rdi != rax_74)
            
            r13 = &data_142d40450
        
        int64_t* rax_77 = arg_10
        
        if (rax_77[1].d != 0)
            r13 = *rax_77
        
        sub_140b58260(&arg_10, r13, 1)
        result = sub_140d99fb0(rsi_30, &arg_10, sub_140596d10(&var_a0, &var_90), 0, 0)
        
        if (rbx_7 != 0)
            result = sub_140a74f90(rbx_7)
        
        rsi_3 = var_90
    else
        int64_t* rax_19 = arg_10
        
        if (rax_19[1].d != 0)
            r13 = *rax_19
        
        sub_140b58260(&arg_10, r13, 1)
        var_90 = 0
        int32_t var_88_2 = r14_2
        
        if (r14_2 != 0)
            sub_1405a4c70(&var_90, r14_2, 0)
            memcpy(var_90, rsi_3, r14_2 * 2)
        else
            int32_t var_84_2 = 0
        
        result = sub_140d99fb0(*result_1, &arg_10, &var_90, 0, 0)
    
    if (rsi_3 != 0)
        return sub_140a74f90(rsi_3)
else
    void*** rax_8 = j_sub_140a82f30(0x48)
    
    if (rax_8 == 0)
        rax_8 = nullptr
    else
        rax_8[1].d = 1
        *rax_8 = &data_142feadd8
        *(rax_8 + 0xc) = 1
        __builtin_memset(&rax_8[2], 0, 0x20)
        rax_8[6].d = 0x3f800000
        rax_8[7] = 0
        rax_8[8] = 0
    
    var_98.q = rax_8
    var_a0 = &rax_8[2]
    int64_t* rbx_2 = var_98.q
    int64_t* rsi_1 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        rbx_2 = var_98.q
    
    if (result_1 == &var_90)
    label_1418b0839:
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d != 1)
                rbx_2 = var_98.q
            else
                (**rsi_1)(rsi_1)
                int32_t temp2_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp2_1 != 1)
                    rbx_2 = var_98.q
                else
                    (*(*rsi_1 + 8))(rsi_1, 1)
                    rbx_2 = var_98.q
    else
        *result_1 = var_a0
        int64_t* r14 = *(result_1 + 8)
        
        if (rsi_1 == r14)
            goto label_1418b0839
        
        *(result_1 + 8) = rsi_1
        
        if (r14 != 0)
            r14[1].d -= 1
            
            if (r14[1].d != 1)
                rbx_2 = var_98.q
            else
                (**r14)(r14)
                int32_t temp5_1 = *(r14 + 0xc)
                *(r14 + 0xc) -= 1
                
                if (temp5_1 != 1)
                    rbx_2 = var_98.q
                else
                    (*(*r14 + 8))(r14, 1)
                    rbx_2 = var_98.q
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    result = result_1
    
    if (*result != 0)
        goto label_1418b089c
return result
