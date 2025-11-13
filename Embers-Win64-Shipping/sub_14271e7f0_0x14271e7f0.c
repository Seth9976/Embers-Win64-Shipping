// 函数: sub_14271e7f0
// 地址: 0x14271e7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
char rax_2 = sub_140d3e110(arg2)
void* rax_4

if (rax_2 != 0)
    rax_4 = sub_1426fb720(sub_140d3c6e0(arg2))

int32_t r9

if (rax_2 == 0 || rax_4 == 0)
    r9 = -1
else
    r9 = *(rax_4 + 0xc)

int32_t rax_5 = *(arg1 + 0x88)
int32_t var_100 = r9
int32_t* var_110
int64_t var_c8[0x2]
void** const var_a8
int64_t var_88
int64_t var_78

if (rax_5 != *(arg1 + 0xb4))
    void* r8_1 = arg1 + 0xb8
    void* rcx_3 = *(r8_1 + 8)
    
    if (rcx_3 != 0)
        r8_1 = rcx_3
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0xc8)) - 1) & sx.q(r9)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x80)
        
        do
            int64_t rdx_3 = sx.q(i) * 5
            void* rcx_5 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == r9)
                if (i != 0xffffffff && rcx_5 != 0 && rcx_5 != -8)
                    void*** var_b8_1 = nullptr
                    int32_t** rdx_4 = &var_110
                    
                    if (sub_140d3e110(rcx_5 + 8) == 0)
                        var_c8[0] = 0
                        var_110 = &var_100
                        int64_t (* var_108_2)[0x2] = &var_c8
                        sub_142719d90(arg1 + 0x138, rdx_4)
                        char rax_14 = sub_142719d90(arg1 + 0x128, &var_110)
                        
                        if (rax_14 == 1)
                            *(arg1 + 0x124) = rax_14
                        
                        if (var_c8[0] != 0)
                            void*** rcx_19 = &var_a8
                            
                            if (var_b8_1 != 0)
                                rcx_19 = var_b8_1
                            
                            (*rcx_19)[2](rcx_19)
                    else
                        __builtin_memset(&var_88, 0, 0x2c)
                        int64_t* var_a0_1 = &var_88
                        var_a8 = &data_142da2668
                        var_c8[0] = sub_14271bcf0
                        var_110 = &var_100
                        int64_t (* var_108_1)[0x2] = &var_c8
                        int32_t var_5c_1 = 0x80
                        int32_t var_58_1 = 0xffffffff
                        int32_t var_54_1 = 0
                        int64_t var_48_1 = 0
                        int32_t var_40_1 = 0
                        sub_142719d90(arg1 + 0x138, rdx_4)
                        char rax_8 = sub_142719d90(arg1 + 0x128, &var_110)
                        
                        if (rax_8 == 1)
                            *(arg1 + 0x124) = rax_8
                        
                        if (var_c8[0] != 0)
                            void** const* rcx_9 = &var_a8
                            
                            if (var_b8_1 != 0)
                                rcx_9 = var_b8_1
                            
                            (*rcx_9)[2](rcx_9)
                        
                        void*** var_b8_2 = nullptr
                        int64_t* var_a0_2 = &var_88
                        var_a8 = &data_142da2668
                        var_c8[0] = sub_14271bd50
                        sub_14271fba0(arg1, sub_140d3c6e0(rcx_5 + 8), &var_c8)
                        
                        if (var_c8[0] != 0)
                            void** const* rcx_12 = &var_a8
                            
                            if (var_b8_2 != 0)
                                rcx_12 = var_b8_2
                            
                            (*rcx_12)[2](rcx_12)
                        
                        int32_t var_40_2 = 0
                        
                        if (var_48_1 != 0)
                            sub_140a74f90(var_48_1)
                        
                        int64_t var_80
                        var_80.d = 0
                        int32_t var_58_2 = 0xffffffff
                        int32_t var_54_2 = 0
                        sub_14059a8e0(&var_78, 0)
                        int64_t var_68
                        
                        if (var_68 != 0)
                            sub_140a74f90(var_68)
                        
                        int64_t rcx_17 = var_88
                        
                        if (rcx_17 != 0)
                            sub_140a74f90(rcx_17)
                
                break
            
            i = *(rcx_5 + 0x20)
        while (i != 0xffffffff)

int64_t rbx_2 = sx.q(arg2[0xb])
bool c = test_bit(arg2[2], zx.d(*(arg1 + 0x44)))
int32_t var_fc = rbx_2.d
void*** var_b8_3 = nullptr
uint64_t result
int32_t var_118

if (not(c))
    int32_t rax_36 = *(arg1 + 0x140)
    var_c8[0] = 0
    *(arg1 + 0x130)
    
    if (rax_36 != neg.d(*(arg1 + 0x130)))
        var_118 = rbx_2.d
        var_110 = &var_118
        int64_t (* var_108_4)[0x2] = &var_c8
        sub_142719ea0(arg1 + 0x138, &var_110)
        char rax_38 = sub_142719ea0(arg1 + 0x128, &var_110)
        
        if (rax_38 == 1)
            *(arg1 + 0x124) = rax_38
        
        if (var_c8[0] != 0)
            void*** rcx_42 = &var_a8
            
            if (var_b8_3 != 0)
                rcx_42 = var_b8_3
            
            (*rcx_42)[2](rcx_42)
    
    result = sub_1427208f0(arg1 + 0xd0, &var_fc)
else
    int32_t rcx_21 = *(arg1 + 0x140)
    int64_t* var_a0_3 = &var_88
    var_a8 = &data_142da2668
    var_c8[0] = sub_14271bd20
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_5c_2 = 0x80
    int32_t var_58_3 = 0xffffffff
    int32_t var_54_3 = 0
    int64_t var_48_2 = 0
    int32_t var_40_3 = 0
    *(arg1 + 0x130)
    
    if (rcx_21 != neg.d(*(arg1 + 0x130)))
        var_118 = rbx_2.d
        var_110 = &var_118
        int64_t (* var_108_3)[0x2] = &var_c8
        sub_142719ea0(arg1 + 0x138, &var_110)
        char rax_18 = sub_142719ea0(arg1 + 0x128, &var_110)
        
        if (rax_18 == 1)
            *(arg1 + 0x124) = rax_18
    
    if (var_c8[0] != 0)
        void** const* rcx_25 = &var_a8
        
        if (var_b8_3 != 0)
            rcx_25 = var_b8_3
        
        (*rcx_25)[2](rcx_25)
    
    var_110.b = *(arg1 + 0x44)
    var_110 = *(arg1 + 0x48)
    void* rax_24 = sub_142702010(sub_140d3c6e0(arg2), &var_110)
    void* const r14_1 = rax_24
    void* rax_25
    int64_t rax_26
    void* rdx_11
    
    if (rax_24 != 0)
        rax_25 = sub_14272a9f0()
        rdx_11 = *(r14_1 + 0x10)
        rax_26 = sx.q(*(rax_25 + 0x38))
    
    if (rax_24 == 0 || rax_26.d s> *(rdx_11 + 0x38)
            || *(*(rdx_11 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30)
        r14_1 = nullptr
    
    int32_t* rdx_17
    
    if (*(arg1 + 0xd8) == *(arg1 + 0x104))
    label_14271ec3a:
        int32_t var_f8
        sub_140de7870(arg1 + 0xd0, &var_f8)
        int128_t zmm0_1 = data_143482b80
        int32_t* var_f0
        *var_f0 = rbx_2.d
        *(var_f0 + 4) = zmm0_1
        var_f0[5] = 0xff.d
        int32_t rax_31 = var_f8
        char* var_120_1 = nullptr
        var_f0[6] = 0xffffffff
        sub_1409b8650(arg1 + 0xd0, &var_118, rbx_2.d, var_f0, rax_31, var_120_1)
        rdx_17 = (sx.q(var_118) << 5) + *(arg1 + 0xd0)
    else
        void* rcx_29 = *(arg1 + 0x110)
        void* r8_5 = arg1 + 0x108
        
        if (rcx_29 != 0)
            r8_5 = rcx_29
        
        int32_t rax_29 = *(r8_5 + (((sx.q(*(arg1 + 0x118)) - 1) & rbx_2) << 2))
        
        if (rax_29 == 0xffffffff)
            goto label_14271ec3a
        
        while (true)
            rdx_17 = (sx.q(rax_29) << 5) + *(arg1 + 0xd0)
            
            if (*rdx_17 == rbx_2.d)
                break
            
            rax_29 = rdx_17[6]
            
            if (rax_29 == 0xffffffff)
                goto label_14271ec3a
        
        if (rax_29 == 0xffffffff || rdx_17 == 0)
            goto label_14271ec3a
    
    float var_e8[0x4]
    float* rax_32 = sub_14271a2c0(&var_e8, r14_1)
    void*** var_b8_4 = nullptr
    *(rdx_17 + 4) = *rax_32
    rdx_17[5] = rax_32[4]
    int64_t* var_a0_4 = &var_88
    var_a8 = &data_142da2668
    var_c8[0] = sub_14271bdc0
    sub_14271cfe0(arg1, arg2, &rdx_17[1], &var_c8)
    
    if (var_c8[0] != 0)
        void** const* rcx_34 = &var_a8
        
        if (var_b8_4 != 0)
            rcx_34 = var_b8_4
        
        (*rcx_34)[2](rcx_34)
    
    int32_t var_40_4 = 0
    
    if (var_48_2 != 0)
        sub_140a74f90(var_48_2)
    
    int64_t var_80_1
    var_80_1.d = 0
    int32_t var_58_4 = 0xffffffff
    int32_t var_54_4 = 0
    result = sub_14059a8e0(&var_78, 0)
    int64_t var_68_1
    
    if (var_68_1 != 0)
        result = sub_140a74f90(var_68_1)
    
    int64_t rcx_39 = var_88
    
    if (rcx_39 != 0)
        result = sub_140a74f90(rcx_39)
__security_check_cookie(rax_1 ^ &var_148)
return result
