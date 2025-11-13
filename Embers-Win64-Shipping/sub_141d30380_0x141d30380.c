// 函数: sub_141d30380
// 地址: 0x141d30380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* rbx = *arg1
int32_t var_108
sub_140ba6ab0(rbx + 0x368, &var_108, arg2)
int64_t rax_2 = sx.q(var_108)
int64_t* result

if (rax_2.d == 0xffffffff)
    result = nullptr
else
    result = rax_2 * 0x60 + *(rbx + 0x368)

uint64_t rsi = &result[1]

if (result == 0)
    rsi = 0

if (rsi != 0)
    int32_t rbx_1 = *(rsi + 0x28)
    int32_t rcx_1 = 0
    int32_t r8_1 = 0
    int32_t var_100 = 0
    int32_t var_fc_1 = 1
    int32_t* var_f8_1 = rsi + 0x10
    int32_t var_f0_1 = 0xffffffff
    int64_t var_ec_1 = 0
    
    if (rbx_1 != 0)
        int32_t* rax_5 = *(rsi + 0x20)
        int32_t* r9_1 = rsi + 0x10
        
        if (rax_5 != 0)
            r9_1 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_141d3048b:
            int32_t rax_12 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_fc_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            var_ec_1.d = r8_1 - rax_13 + 0x1f
            
            if (r8_1 - rax_13 + 0x1f s> rbx_1)
                var_ec_1.d = rbx_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_1)
                r8_1 += 0x20
                rcx_1 += 1
                var_ec_1:4.d = r8_1
                var_100 = rcx_1
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = r9_1[rdx_4 + 1]
                var_f0_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_141d3048b
            
            var_ec_1.d = rbx_1
    
    int32_t rdx_5 = *(rsi + 0x28)
    double zmm2[0x2] = var_f0_1.o
    uint64_t var_98 = rsi
    int32_t r14_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_90 = var_100.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_a0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_f0_2 = r14_1
    var_ec_1.d = rdx_5
    int128_t zmm1 = var_90
    int128_t var_c0 = var_98.o
    int128_t var_b0_1 = zmm1
    
    if (rdx_5 != rbx_1)
        int32_t* rax_15 = *(rsi + 0x20)
        int32_t* r10_1 = rsi + 0x10
        
        if (rax_15 != 0)
            r10_1 = rax_15
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_9 = r10_1[sx.q(r8_4)] & r14_1
        
        if (rdx_9 != 0)
        label_141d30563:
            int32_t rax_22 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t r11_1
            
            if (rax_22 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_ec_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_ec_1.d = rbx_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = r10_1[rcx_6 + 1]
                var_f0_2 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_141d30563
            
            var_ec_1.d = rbx_1
    
    while (true)
        int64_t rcx_8 = sx.q(var_b0_1:0xc.d)
        result = var_c0.q
        
        if (rcx_8.d == (var_f0_2.q u>> 0x20).d && var_b0_1.q == rsi + 0x10 && result == rsi)
            break
        
        int64_t rax_24 = *result
        int64_t* rbx_3 = *arg1 + 0x368
        int64_t var_d8 = arg3
        int64_t var_c8 = *(rax_24 + rcx_8 * 0x10)
        sub_140ba6ab0(rbx_3, &var_108, arg3)
        int64_t rax_25 = sx.q(var_108)
        int64_t rdx_13
        
        if (rax_25.d == 0xffffffff)
            rdx_13 = 0
        else
            rdx_13 = rax_25 * 0x60 + *rbx_3
        
        int64_t rax_26 = rdx_13 + 8
        
        if (rdx_13 == 0)
            rax_26 = 0
        
        if (rax_26 == 0)
            var_98 = 0
            var_100.q = &var_d8
            __builtin_memset(&var_90, 0, 0x24)
            uint64_t* var_f8_2 = &var_98
            int32_t var_6c_1 = 0x80
            int32_t var_68_1 = 0xffffffff
            int32_t var_64_1 = 0
            int64_t var_58_1 = 0
            int32_t var_50_1 = 0
            void var_d0
            sub_141d2be70(rbx_3, &var_d0, &var_100, nullptr)
            int32_t var_50_2 = 0
            
            if (var_58_1 != 0)
                sub_140a74f90(var_58_1)
            
            var_90.d = 0
            
            if (var_90:4.d != 0)
                sub_1405a5410(&var_98, 0)
            
            int32_t var_68_2 = 0xffffffff
            int32_t var_64_2 = 0
            sub_14059a8e0(&var_90:8, 0)
            double rcx_16 = zmm2[1]
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            uint64_t rcx_17 = var_98
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
        
        int32_t var_e0
        sub_140ba6ab0(rbx_3, &var_e0, var_d8)
        int64_t rax_27 = sx.q(var_e0)
        void* rcx_21
        
        if (rax_27.d == 0xffffffff)
            rcx_21 = nullptr
        else
            rcx_21 = rax_27 * 0x60 + *rbx_3
        
        void var_cc
        sub_140946410(rcx_21 + 8, &var_cc, &var_c8, nullptr)
        var_b0_1:8.d &= not.d(var_c0:0xc.d)
        sub_14059bdd0(&var_c0:8)

__security_check_cookie(rax_1 ^ &var_128)
return result
