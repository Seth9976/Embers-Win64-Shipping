// 函数: sub_1418a87e0
// 地址: 0x1418a87e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
EnterCriticalSection(arg1 + 0xf8)
sub_14189b810(arg1 + 0x10, arg2, arg3)

if (arg4 != 0)
    int64_t* rcx_2 = *(arg1 + 0x70)
    (*(*rcx_2 + 8))(rcx_2, arg2)
    sub_1418ad410(arg1)

int64_t* rcx_4 = *(arg1 + 0x60)
uint64_t r8_1 = zx.q(*(arg1 + 8))
int32_t var_6c = 0x80
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
(*(*rcx_4 + 8))(rcx_4, arg1 + 0x10, r8_1, &var_98, &var_e8)
int64_t var_88
int64_t* var_170 = &var_88
int32_t var_178 = 0
int32_t rcx_5 = 0
int32_t var_174 = 1
int32_t r8_2 = 0
int32_t var_168 = 0xffffffff
int64_t var_164 = 0
int64_t* var_78
int32_t var_70

if (var_70 != 0)
    int64_t* r9_1 = &var_88
    
    if (var_78 != 0)
        r9_1 = var_78
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_70 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_1418a8958:
        int32_t rax_11 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_174_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        int32_t rax_13 = r8_2 - rax_12 + 0x1f
        
        if (rax_13 s> var_70)
            rax_13 = var_70
        
        var_164.d = rax_13
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_5)
            r8_2 += 0x20
            rcx_5 += 1
            var_164:4.d = r8_2
            var_178 = rcx_5
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_164.d = var_70
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_168_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_1418a8958

int128_t var_100 = 0xffffffff
var_164.d = var_70
int128_t var_110 = var_178.o
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_150 = (&var_98).o
int128_t var_140 = var_110
int64_t var_130 = temp0_3

while (true)
    int64_t rax_14 = sx.q(var_140:0xc.d)
    int64_t* rdx_8 = var_150.q
    
    if (rax_14.d == ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d && var_140.q == &var_88
            && rdx_8 == &var_98)
        int32_t var_174_2 = 1
        int32_t var_178_1 = 0
        int32_t rcx_13 = 0
        int64_t var_d8
        int64_t* var_170_1 = &var_d8
        int32_t r8_4 = 0
        int32_t var_168_3 = 0xffffffff
        int64_t var_164_1 = 0
        int64_t* var_c8
        int32_t var_c0
        
        if (var_c0 != 0)
            int64_t* r10_1 = &var_d8
            
            if (var_c8 != 0)
                r10_1 = var_c8
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(var_c0 - 1)
            int32_t rdx_13 = *r10_1
            
            if (rdx_13 != 0)
            label_1418a8ab8:
                int32_t rax_26 = neg.d(rdx_13) & rdx_13
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
                int32_t var_174_3 = rax_26
                int32_t r13_1
                
                if (rax_26 == 0)
                    r13_1 = 0x20
                else
                    r13_1 = 0x1f - temp0_4
                
                int32_t rax_27 = r8_4 - r13_1 + 0x1f
                
                if (rax_27 s> var_c0)
                    rax_27 = var_c0
                
                var_164_1.d = rax_27
            else
                while (true)
                    int64_t rdx_14 = sx.q(rcx_13)
                    r8_4 += 0x20
                    rcx_13 += 1
                    var_164_1:4.d = r8_4
                    var_178_1 = rcx_13
                    
                    if (rdx_14.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        var_164_1.d = var_c0
                        break
                    
                    rdx_13 = *(r10_1 + (rdx_14 << 2) + 4)
                    int32_t var_168_4 = 0xffffffff
                    
                    if (rdx_13 != 0)
                        goto label_1418a8ab8
        
        int128_t var_100_1 = 0xffffffff
        int128_t var_110_1 = var_178_1.o
        var_164_1.d = var_c0
        int64_t temp0_5 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_150 = (&var_e8).o
        int128_t var_140_1 = var_110_1
        int64_t var_130_1 = temp0_5
        
        while (true)
            int64_t rax_28 = sx.q(var_140_1:0xc.d)
            int64_t* rdx_15 = var_150.q
            
            if (rax_28.d == ((0xffffffff << (var_c0.b & 0x1f)).q u>> 0x20).d
                    && var_140_1.q == &var_d8 && rdx_15 == &var_e8)
                int32_t var_a0_1 = 0
                
                if (var_a8 != 0)
                    sub_140a74f90(var_a8)
                
                int64_t var_e0
                bool cond:3 = var_e0:4.d == 0
                var_e0.d = 0
                
                if (not(cond:3))
                    sub_1405a5130(&var_e8, 0)
                
                int32_t var_b8_1 = 0xffffffff
                int32_t var_b4_1 = 0
                sub_14059a8e0(&var_d8, 0)
                
                if (var_c8 != 0)
                    sub_140a74f90(var_c8)
                
                int64_t rcx_34 = var_e8
                
                if (rcx_34 != 0)
                    sub_140a74f90(rcx_34)
                
                int32_t var_50_1 = 0
                
                if (var_58 != 0)
                    sub_140a74f90(var_58)
                
                int64_t var_90
                bool cond:4 = var_90:4.d == 0
                var_90.d = 0
                
                if (not(cond:4))
                    sub_1405a5130(&var_98, 0)
                
                int32_t var_68_1 = 0xffffffff
                int32_t var_64_1 = 0
                void* result = sub_14059a8e0(&var_88, 0)
                
                if (var_78 != 0)
                    result = sub_140a74f90(var_78)
                
                int64_t rcx_39 = var_98
                
                if (rcx_39 != 0)
                    result = sub_140a74f90(rcx_39)
                
                if (arg1 != -0xf8)
                    result = LeaveCriticalSection(arg1 + 0xf8)
                
                int64_t* rcx_42 = *arg3
                
                if (rcx_42 != 0)
                    result = (**rcx_42)(rcx_42, 1)
                
                __security_check_cookie(rax_1 ^ &var_1a8)
                return result
            
            int64_t* r14_2 = *rdx_15 + rax_28 * 0x18
            
            if (*(arg1 + 0x68) == 0)
                EnterCriticalSection(arg1 + 0x78)
                
                if (*(arg1 + 0xa0) != 0)
                    void* rax_33 = *(arg1 + 0xb0)
                    void* rcx_24 = arg1 + 0xc0
                    
                    if (rax_33 != 0)
                        rcx_24 = rax_33
                    
                    (*(arg1 + 0xa0))((*(*rcx_24 + 8))(rcx_24), r14_2)
                
                if (arg1 != -0x78)
                    LeaveCriticalSection(arg1 + 0x78)
            else
                int32_t var_158
                sub_140cba0f0(arg1 + 0x10, &var_158, r14_2)
                int64_t rax_30 = sx.q(var_158)
                void* const rcx_21
                
                if (rax_30.d == 0xffffffff)
                    rcx_21 = nullptr
                else
                    rcx_21 = (rax_30 << 5) + *(arg1 + 0x10)
                
                int64_t var_128 = *(rcx_21 + 0x10)
                *(rcx_21 + 0x10) = 0
                int64_t* rcx_22 = *(arg1 + 0x68)
                (*(*rcx_22 + 8))(rcx_22, r14_2, &var_128)
            
            sub_1418aa6e0(arg1 + 0x10, r14_2)
            int64_t* rcx_28 = *(arg1 + 0x70)
            (*(*rcx_28 + 0x18))(rcx_28, r14_2)
            var_140_1:8.d &= not.d(var_150:0xc.d)
            sub_14059bdd0(&var_150:8)
    
    int64_t* rbx_1 = *rdx_8 + rax_14 * 0x18
    sub_1418aa6e0(arg1 + 0x10, rbx_1)
    int64_t* rcx_11 = *(arg1 + 0x70)
    (*(*rcx_11 + 0x10))(rcx_11, rbx_1)
    var_140:8.d &= not.d(var_150:0xc.d)
    sub_14059bdd0(&var_150:8)
