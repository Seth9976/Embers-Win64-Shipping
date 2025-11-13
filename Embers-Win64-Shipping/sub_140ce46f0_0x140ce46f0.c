// 函数: sub_140ce46f0
// 地址: 0x140ce46f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rax_2

if (arg2 != 0)
    rax_2 = sub_140d21d80(arg2)

int32_t* result
int128_t var_108

if (arg2 == 0 || rax_2 == 0)
    int32_t var_6c_1 = 0x80
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    EnterCriticalSection(arg1 + 0x58)
    sub_140cd48b0(&var_98, arg1 + 8)
    
    if (arg1 != -0x58)
        LeaveCriticalSection(arg1 + 0x58)
    
    int64_t var_88
    int64_t* var_120_2 = &var_88
    int32_t rcx_21 = 0
    int32_t var_128_2 = 0
    int32_t var_118_3 = 0xffffffff
    int32_t r8_5 = 0
    int32_t var_124_3 = 1
    int64_t var_114_2 = 0
    int64_t* var_78
    int32_t var_70
    
    if (var_70 != 0)
        int64_t* r11_2 = &var_88
        
        if (var_78 != 0)
            r11_2 = var_78
        
        int32_t temp0_4
        int32_t temp1_1
        temp0_4:temp1_1 = sx.q(var_70 - 1)
        int32_t rdx_16 = *r11_2
        
        if (rdx_16 != 0)
        label_140ce4ab8:
            int32_t rax_33 = neg.d(rdx_16) & rdx_16
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_33)
            int32_t var_124_4 = rax_33
            int32_t r11_3
            
            if (rax_33 == 0)
                r11_3 = 0x20
            else
                r11_3 = 0x1f - temp0_5
            
            int32_t rax_34 = r8_5 - r11_3 + 0x1f
            
            if (rax_34 s> var_70)
                rax_34 = var_70
            
            var_114_2.d = rax_34
        else
            while (true)
                int64_t rdx_17 = sx.q(rcx_21)
                r8_5 += 0x20
                rcx_21 += 1
                var_114_2:4.d = r8_5
                var_128_2 = rcx_21
                
                if (rdx_17.d s>= (temp1_1 + (temp0_4 & 0x1f)) s>> 5)
                    var_114_2.d = var_70
                    break
                
                rdx_16 = *(r11_2 + (rdx_17 << 2) + 4)
                int32_t var_118_4 = 0xffffffff
                
                if (rdx_16 != 0)
                    goto label_140ce4ab8
    
    int128_t var_c8_2 = 0xffffffff
    int128_t var_d8_2
    var_d8_2:8.d = 0xffffffff << (var_70.b & 0x1f)
    var_d8_2:0xc.d = var_70
    int64_t temp0_6 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_108 = (&var_98).o
    int128_t var_f8_2 = var_128_2.o
    int64_t var_e8_2 = temp0_6
    
    while (true)
        int64_t rax_35 = sx.q(var_f8_2:0xc.d)
        int64_t* rdx_18 = var_108.q
        
        if (rax_35.d == (var_d8_2:8.q u>> 0x20).d && var_f8_2.q == &var_88 && rdx_18 == &var_98)
            break
        
        void* rbx_3 = *(*rdx_18 + rax_35 * 0x10)
        sub_140cb70e0(rbx_3)
        sub_140ce4270(arg1, rbx_3)
        var_f8_2:8.d &= not.d(var_108:0xc.d)
        sub_14059bdd0(&var_108:8)
    
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    int64_t var_90
    var_90.d = 0
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    result = sub_14059a8e0(&var_88, 0)
    
    if (var_78 != 0)
        result = sub_140a74f90(var_78)
    
    int64_t rcx_35 = var_98
    
    if (rcx_35 != 0)
        result = sub_140a74f90(rcx_35)
else
    result = sub_140cba0e0(rax_2)
    
    if (result != 0)
        EnterCriticalSection(arg1 + 0x58)
        int32_t var_124_1 = 1
        int64_t var_114_1 = 0
        int32_t r15_1 = *(arg1 + 0x30)
        void* r14_1 = arg1 + 0x18
        int32_t rcx_3 = 0
        int32_t var_128_1 = 0
        void* var_120_1 = r14_1
        int32_t r8_1 = 0
        int32_t var_118_1 = 0xffffffff
        
        if (r15_1 != 0)
            void* rax_3 = *(r14_1 + 0x10)
            void* r10_1 = r14_1
            
            if (rax_3 != 0)
                r10_1 = rax_3
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r15_1 - 1)
            int32_t rdx_2 = *r10_1
            
            if (rdx_2 != 0)
            label_140ce4808:
                int32_t rax_10 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
                int32_t var_124_2 = rax_10
                int32_t rax_11
                
                if (rax_10 == 0)
                    rax_11 = 0x20
                else
                    rax_11 = 0x1f - temp0_1
                
                var_114_1.d = r8_1 - rax_11 + 0x1f
                
                if (r8_1 - rax_11 + 0x1f s> r15_1)
                    var_114_1.d = r15_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx_3)
                    r8_1 += 0x20
                    rcx_3 += 1
                    var_114_1:4.d = r8_1
                    var_128_1 = rcx_3
                    
                    if (rdx_3.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r10_1 + (rdx_3 << 2) + 4)
                    int32_t var_118_2 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_140ce4808
                
                var_114_1.d = r15_1
            
            r14_1 = var_120_1
        
        int32_t rdx_4 = *(arg1 + 0x30)
        int32_t r13_2 = *(r14_1 + 0x18)
        int128_t var_d8_1 = var_128_1.o
        int32_t r12_1 = 0xffffffff << (rdx_4.b & 0x1f)
        int32_t r8_4 = rdx_4 s>> 5
        int128_t var_c8_1 = 0xffffffff
        int32_t r10_3 = rdx_4 & 0xffffffe0
        int64_t var_e8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t zmm1 = var_d8_1
        var_d8_1:8.d = r12_1
        var_d8_1:0xc.d = rdx_4
        var_108 = (arg1 + 8).o
        int128_t var_f8_1 = zmm1
        
        if (rdx_4 != r13_2)
            void* rax_13 = *(r14_1 + 0x10)
            
            if (rax_13 != 0)
                r14_1 = rax_13
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r13_2 - 1)
            int32_t rdx_8 = *(r14_1 + (sx.q(r8_4) << 2)) & r12_1
            
            if (rdx_8 != 0)
            label_140ce48e2:
                int32_t rax_20 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rax_20)
                int32_t r11_1
                
                if (rax_20 == 0)
                    r11_1 = 0x20
                else
                    r11_1 = 0x1f - temp0_3
                
                var_d8_1:0xc.d = r10_3 - r11_1 + 0x1f
                
                if (r10_3 - r11_1 + 0x1f s> r13_2)
                    var_d8_1:0xc.d = r13_2
            else
                while (true)
                    int64_t rcx_8 = sx.q(r8_4)
                    r10_3 += 0x20
                    r8_4 += 1
                    
                    if (rcx_8.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = *(r14_1 + (rcx_8 << 2) + 4)
                    var_d8_1:8.d = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_140ce48e2
                
                var_d8_1:0xc.d = r13_2
        
        while (true)
            int64_t rcx_10 = sx.q(var_f8_1:0xc.d)
            int64_t* rax_22 = var_108.q
            
            if (rcx_10.d == (var_d8_1:8.q u>> 0x20).d && var_f8_1.q == var_120_1
                    && rax_22 == arg1 + 8)
                break
            
            void* rdx_9 = *(*rax_22 + rcx_10 * 0x10)
            
            if (*(rdx_9 + 0xa0) != rax_2)
                void* i = *(rdx_9 + 8)
                
                for (void* rdx_11 = sx.q(*(rdx_9 + 0x10)) * 0x38 + i; i != rdx_11; i += 0x38)
                    if (*(i + 0x28) == result)
                        *(i + 0x28) = 0
                        *(i + 0x30) = 0xffffffff
            
            var_f8_1:8.d &= not.d(var_108:0xc.d)
            sub_14059bdd0(&var_108:8)
        
        if (arg1 != -0x58)
            LeaveCriticalSection(arg1 + 0x58)
        
        sub_140cb70e0(result)
        result = sub_140ce4270(arg1, result)
__security_check_cookie(rax_1 ^ &var_148)
return result
