// 函数: sub_141a0a830
// 地址: 0x141a0a830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
uint64_t result = __security_cookie ^ &var_198
uint64_t result_1 = result
uint64_t result_5 = 0
int32_t var_178
int32_t var_170
void* var_168

if (arg2 == 0)
    *(arg1 + 0x318) = 0
    
    if (*(arg1 + 0x31c) != 0)
        sub_1405c5570(arg1 + 0x310, 0)
    
    sub_141a09290(arg1 + 0x320, 0)
    void* var_50_1 = nullptr
    int32_t var_44_1 = 0x18
    int32_t var_48_1 = 0
    void* rax_16 = sub_1424c3700()
    void* rsi_2
    
    if (rax_16 == 0)
        rsi_2 = nullptr
    else
        void* rax_17 = sub_142459c10()
        
        if (rax_17 == 0)
            rsi_2 = nullptr
        else
            int64_t rax_18 = sx.q(*(rax_17 + 0x38))
            
            if (rax_18.d s> *(rax_16 + 0x38))
                rsi_2 = nullptr
            else
                rsi_2 = rax_16
                
                if (*(*(rax_16 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30)
                    rsi_2 = nullptr
    
    void var_110
    void* r8_3 = &var_110
    
    if (rsi_2 != sub_142459c10())
        sub_1419f71f0(arg1, rax_16, r8_3)
    else
        sub_1419f6fe0(arg1, rax_16, r8_3)
    
    void* rsi_3 = &var_110
    int64_t r14_1 = 0
    
    if (var_50_1 != 0)
        rsi_3 = var_50_1
    
    int64_t r12_1 = sx.q(var_48_1) << 3
    uint64_t r12_2 = r12_1 u>> 3
    
    if (rsi_3 u> rsi_3 + r12_1)
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            int64_t* rbx_4 = *rsi_3
            (*(*rbx_4 + 0x940))(rbx_4)
            int64_t rax_24 = *rbx_4
            var_178 = 0
            (*(rax_24 + 0x400))(rbx_4, &var_178)
            (*(*rbx_4 + 0x3a0))(rbx_4, 0)
            r14_1 += 1
            rsi_3 += 8
        while (r14_1 != r12_2)
    
    void* rax_26 = *(arg1 + 0x130)
    int32_t result_2 = 0
    int64_t* r15_1 = nullptr
    var_170.q = 0
    int32_t r12_3 = 0
    var_168:4.d = 0
    int64_t* i = *(rax_26 + 0xd0)
    
    for (void* r13_1 = &i[sx.q(*(rax_26 + 0xd8))]; i != r13_1; i = &i[1])
        void* r14_2 = *i
        
        if (r14_2 != 0)
            void* rax_28 = sub_1424c3700()
            void* rdx_12 = *(r14_2 + 0x10)
            int64_t rax_29 = sx.q(*(rax_28 + 0x38))
            
            if (rax_29.d s<= *(rdx_12 + 0x38)
                    && *(*(rdx_12 + 0x30) + (rax_29 << 3)) == rax_28 + 0x30)
                int64_t result_6 = sx.q(result_2)
                result_2 = (result_6 + 1).d
                var_168.d = result_2
                
                if (result_2 s> r12_3)
                    sub_1405a4d70(&var_170)
                    r12_3 = var_168:4.d
                    result_2 = var_168.d
                    r15_1 = var_170.q
                
                r15_1[result_6] = *i
    
    result = sx.q(result_2)
    int64_t* rsi_4 = r15_1
    void* rcx_23 = &r15_1[result]
    uint64_t r14_6 = (rcx_23 - r15_1 + 7) u>> 3
    
    if (r15_1 u> rcx_23)
        r14_6 = 0
    
    if (r14_6 != 0)
        do
            int64_t* rbx_5 = *rsi_4
            (*(*rbx_5 + 0x940))(rbx_5)
            int64_t rax_33 = *rbx_5
            var_178 = 0
            (*(rax_33 + 0x400))(rbx_5, &var_178)
            result = (*(*rbx_5 + 0x3a0))(rbx_5, 0)
            result_5 += 1
            rsi_4 = &rsi_4[1]
        while (result_5 != r14_6)
    
    if (r15_1 != 0)
        result = sub_140a74f90(r15_1)
    
    if (var_50_1 != 0)
        result = sub_140a74f90(var_50_1)
else
    int64_t* r14 = arg1 + 0x320
    var_170 = 0
    int32_t result_3 = r14[5].d
    void* r8 = &r14[2]
    int32_t var_16c_1 = 1
    int32_t rcx = 0
    var_168 = r8
    int32_t var_160_1 = 0xffffffff
    int32_t var_15c_1 = 0
    int32_t var_158_1 = 0
    
    if (result_3 != 0)
        void* rax_1 = *(r8 + 0x10)
        
        if (rax_1 != 0)
            r8 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(result_3 - 1)
        int32_t rdx_2 = *r8
        result = zx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        
        if (rdx_2 != 0)
        label_141a0a8e9:
            int32_t rax_7 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_16c_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            result = zx.q(rcx - rax_8 + 0x1f)
            
            if (result.d s> result_3)
                result = zx.q(result_3)
            
            result_5 = zx.q(result.d)
            int32_t var_15c_2 = result.d
        else
            while (true)
                int64_t rdx_3 = sx.q(result_5.d)
                rcx += 0x20
                result_5 = zx.q(result_5.d + 1)
                var_158_1 = rcx
                var_170 = result_5.d
                
                if (rdx_3.d s>= result.d)
                    result_5 = zx.q(result_3)
                    int32_t result_4 = result_3
                    break
                
                rdx_2 = *(r8 + (rdx_3 << 2) + 4)
                var_160_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141a0a8e9
    
    int64_t* var_148_1 = r14
    double zmm2[0x2] = var_160_1.o
    int128_t var_130_1 = var_170.o
    double var_120_1[0x2] = zmm2
    int64_t var_150_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    var_170.o = r14.o
    var_160_1.o = var_130_1
    
    if (result_5.d s< result_3)
        int32_t var_154
        int32_t rdi = var_154
        
        while (true)
            int64_t* rbx_1 = var_170.q
            int64_t rsi_1 = sx.q(rdi) * 0x68
            int64_t rax_10 = sub_140d3c6e0(*rbx_1 + rsi_1)
            int32_t* rax_11
            void var_140
            
            if (rax_10 != 0)
                rax_11 = sub_1408296b0(arg2, &var_140, rax_10)
            
            if (rax_10 == 0 || *rax_11 != 0xffffffff)
                int64_t* rax_12 = sub_140d3c6e0(*rbx_1 + 0x28 + rsi_1)
                
                if (rax_12 != 0)
                    int64_t rdx_6 = *rax_12
                    (*(rdx_6 + 0x940))(rax_12, rdx_6)
                    int64_t r8_2 = *rax_12
                    var_178 = 0
                    (*(r8_2 + 0x400))(rax_12, &var_178, r8_2)
                    (*(*rax_12 + 0x3a0))(rax_12, 0)
                
                sub_141a13680(r14, rdi)
            
            var_158_1 &= not.d(var_168:4.d)
            sub_14059bdd0(&var_168)
            result = var_160_1.q
            rdi = var_154
            
            if (rdi s>= *(result + 0x18))
                break
            
            r14 = var_148_1
__security_check_cookie(result_1 ^ &var_198)
return result
