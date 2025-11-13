// 函数: sub_141cff690
// 地址: 0x141cff690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t rcx = arg2[1]
int128_t* rdi = nullptr
int128_t* var_150
int128_t var_118

if (rcx != 0)
    if ((*(arg1 + 0x78) & 1) != 0)
        int32_t rdx = arg2[4].d
        var_118 = *(arg1 + 0x160)
        sub_141cff040(rcx, rdx, &var_118)
    
    int128_t* rax_2 = sub_140a82f30(sx.q(arg2[5].d), 0)
    int32_t rcx_2 = *(arg2 + 0x24)
    char* r9_1 = arg2[1]
    rdi = rax_2
    int32_t r8_2 = arg2[5].d
    int32_t var_168_1 = 0
    int32_t var_170_1 = 0
    void** rcx_3 = *(arg1 + 0x14c)
    var_150 = rax_2
    
    if (sub_140b02330(rcx_3, rax_2, r8_2, r9_1, rcx_2, var_170_1) == 0)
        int32_t r8_3 = 0x20
        
        if (*(arg2 + 0x24) s<= 0x20)
            r8_3 = *(arg2 + 0x24)
        
        int64_t var_e0
        sub_141829dd0(&var_e0, arg2[1], r8_3)
        int64_t rcx_5 = var_e0
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        char* buffer1_1 = sub_140a82f30(sx.q(arg2[4].d), 0)
        char* buffer1 = buffer1_1
        int64_t r9_2 = EnterCriticalSection(arg1 + 0x120)
        void* rcx_8 = *arg2
        
        if (rcx_8 == 0)
            sub_140af98a0("Unknown", 0xf38, u"Cannot retry because Block.RawRequest is null.", r9_2)
            sub_140afbb40()
            rcx_8 = *arg2
        
        sub_141d0b280(rcx_8, buffer1)
        
        if (arg1 != -0x120)
            LeaveCriticalSection(arg1 + 0x120)
        
        if ((*(arg1 + 0x78) & 1) != 0)
            int32_t rdx_4 = arg2[4].d
            int128_t var_c8 = *(arg1 + 0x160)
            sub_141cff040(buffer1, rdx_4, &var_c8)
        
        uint64_t count = sx.q(*(arg2 + 0x24))
        int64_t buffer2 = arg2[1]
        int32_t rax_4
        int64_t r9_3
        rax_4, r9_3 = memcmp(buffer1, buffer2, count)
        
        if (rax_4 != 0)
            int32_t r15_1 = 0
            
            if (count.d s> 0)
                char* buffer1_2 = buffer1
                
                while (*buffer1_2 == *(buffer2 - buffer1 + buffer1_2))
                    r15_1 += 1
                    buffer1_2 = &buffer1_2[1]
                    
                    if (r15_1 s>= count.d)
                        break
            
            if (r15_1 s>= count.d)
                sub_140af98a0("Unknown", 0xf4d, 
                    Buffers were different yet all bytes were the same????", r9_3)
                sub_140afbb40()
                count = zx.q(*(arg2 + 0x24))
            
            int32_t r12_1 = count.d - r15_1
            int64_t rbx_3 = sx.q(r15_1)
            int32_t rdi_1 = 0x40
            int32_t r8_6 = 0x40
            
            if (r12_1 s<= 0x40)
                r8_6 = r12_1
            
            int64_t var_a8
            sub_141829dd0(&var_a8, arg2[1] + rbx_3, r8_6)
            int32_t rax_7 = *(arg2 + 0x24) - r15_1
            
            if (rax_7 s<= 0x40)
                rdi_1 = rax_7
            
            int64_t var_b8
            sub_141829dd0(&var_b8, &buffer1_1[rbx_3], rdi_1)
            int64_t rcx_14 = var_b8
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            int64_t rcx_15 = var_a8
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            buffer1 = buffer1_1
        
        int32_t var_168_2 = 0
        char rax_9
        int64_t r9_5
        rax_9, r9_5 = sub_140b02330(*(arg1 + 0x14c), var_150, arg2[5].d, buffer1, *(arg2 + 0x24), 0)
        
        if (rax_9 == 0)
            sub_140af98a0("Unknown", 0xf57, u"Retry was NOT sucessful.", r9_5)
            sub_140afbb40()
        
        sub_140a74f90(buffer1)
        rdi = var_150
    
    sub_140a74f90(arg2[1])
    arg2[1] = 0
    arg2[4].d = 0

void* lpCriticalSection = arg1 + 0x120
EnterCriticalSection(lpCriticalSection)
int64_t* rcx_20 = *arg2
arg2[2] = rdi

if (rcx_20 != 0)
    if (*(rcx_20 + 0x61) == 0)
        (*(*rcx_20 + 8))(rcx_20, zx.o(0))
        rcx_20 = *arg2
    
    if (rcx_20 != 0)
        (**rcx_20)(rcx_20, 1)
    
    *arg2 = 0
    *(arg1 + 0x148) -= 1

void* result

if (*(arg2 + 0x2c) s<= 0)
    sub_140865c40(arg1 + 0x170, &var_150, arg2)
    int64_t rax_50 = sx.q(var_150.d)
    void* const rdi_5
    
    if (rax_50.d == 0xffffffff)
        rdi_5 = nullptr
    else
        rdi_5 = *(arg1 + 0x170) + rax_50 * 0x18
    
    void* rdi_6 = *(rdi_5 + 8)
    sub_140868c90(arg1 + 0x170, arg2)
    sub_1409740e0(rdi_6 + 0x98, arg2)
    
    if (*(rdi_6 + 0xa0) == *(rdi_6 + 0xcc))
        EnterCriticalSection(&data_143f366b8)
        int64_t* rcx_44 = *(rdi_6 + 0x80)
        *(rdi_6 + 0x90) = 0
        
        if (rcx_44 != 0)
            (*(*rcx_44 + 0x10))(rcx_44)
        
        sub_140a536a0(rdi_6)
        LeaveCriticalSection(&data_143f366b8)
        sub_1409740e0(arg1 + 0x80, rdi_6)
    
    *arg2 = 0
    int64_t* rcx_47 = arg2[3]
    arg2[3] = 0
    
    if (rcx_47 != 0)
        rcx_47[9].d -= 1
        
        if (rcx_47[9].d == 1)
            sub_140a2f6e0(rcx_47)
    
    int64_t rcx_48 = arg2[1]
    
    if (rcx_48 != 0)
        sub_140a74f90(rcx_48)
        arg2[1] = 0
    
    int64_t rcx_49 = arg2[2]
    arg2[4].d = 0
    
    if (rcx_49 != 0)
        sub_140a74f90(rcx_49)
        arg2[2] = 0
    
    arg2[5].d = 0
    *(arg2 + 0x34) = 0
    int64_t* rcx_50 = arg2[3]
    
    if (rcx_50 != 0)
        rcx_50[9].d -= 1
        
        if (rcx_50[9].d == 1)
            sub_140a2f6e0(rcx_50)
    
    result = j_sub_140a74f90(arg2)
else
    void* rax_12 = arg1 + 0x80
    void* var_50_1 = nullptr
    void* r11_1 = rax_12 + 0x10
    int32_t var_48_1 = 0
    int32_t var_44_1 = 4
    int32_t rcx_21 = 0
    int32_t r15_2 = *(r11_1 + 0x18)
    var_118.q = rax_12
    void* r10_1 = nullptr
    int32_t var_140_1 = 0
    int32_t r8_9 = 0
    int32_t var_13c_1 = 1
    void* var_138_1 = r11_1
    int32_t var_130_1 = 0xffffffff
    int64_t var_12c_1 = 0
    
    if (r15_2 != 0)
        void* rax_13 = *(r11_1 + 0x10)
        void* r9_6 = r11_1
        
        if (rax_13 != 0)
            r9_6 = rax_13
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r15_2 - 1)
        int32_t rdx_13 = *r9_6
        
        if (rdx_13 != 0)
        label_141cffa27:
            int32_t rax_20 = neg.d(rdx_13) & rdx_13
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_20)
            int32_t var_13c_2 = rax_20
            int32_t rax_21
            
            if (rax_20 == 0)
                rax_21 = 0x20
            else
                rax_21 = 0x1f - temp0_1
            
            var_12c_1.d = r8_9 - rax_21 + 0x1f
            
            if (r8_9 - rax_21 + 0x1f s> r15_2)
                var_12c_1.d = r15_2
        else
            while (true)
                int64_t rdx_14 = sx.q(rcx_21)
                r8_9 += 0x20
                rcx_21 += 1
                var_12c_1:4.d = r8_9
                var_140_1 = rcx_21
                
                if (rdx_14.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_13 = *(r9_6 + (rdx_14 << 2) + 4)
                int32_t var_130_2 = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_141cffa27
            
            var_12c_1.d = r15_2
        
        r11_1 = var_138_1
        rax_12 = arg1 + 0x80
    
    int32_t rdx_15 = *(rax_12 + 0x28)
    int32_t r8_12 = rdx_15 s>> 5
    int128_t var_90_1 = var_140_1.o
    int32_t rcx_25 = *(r11_1 + 0x18)
    int32_t r9_8 = rdx_15 & 0xffffffe0
    int32_t var_158 = rdx_15
    var_150.d = rcx_25
    int128_t var_80_1 = 0xffffffff
    int64_t var_e8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_108 = rax_12.o
    int128_t var_f8_1 = var_90_1
    
    if (rdx_15 != rcx_25)
        void* rax_23 = *(r11_1 + 0x10)
        
        if (rax_23 != 0)
            r11_1 = rax_23
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rcx_25 - 1)
        int32_t rdx_19 = *(r11_1 + (sx.q(r8_12) << 2)) & 0xffffffff << (rdx_15.b & 0x1f)
        
        if (rdx_19 != 0)
        label_141cffafb:
            int32_t rax_30 = neg.d(rdx_19) & rdx_19
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_30)
            int32_t r12_2
            
            if (rax_30 == 0)
                r12_2 = 0x20
            else
                r12_2 = 0x1f - temp0_3
            
            int32_t rax_31 = var_150.d
            var_158 = r9_8 - r12_2 + 0x1f
            
            if (r9_8 - r12_2 + 0x1f s> rax_31)
                var_158 = rax_31
        else
            while (true)
                int64_t rcx_27 = sx.q(r8_12)
                r9_8 += 0x20
                r8_12 += 1
                
                if (rcx_27.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_19 = *(r11_1 + (rcx_27 << 2) + 4)
                
                if (rdx_19 != 0)
                    goto label_141cffafb
            
            var_158 = var_150.d
        
        r11_1 = var_138_1
    
    int32_t rbx_4 = var_158
    void var_70
    
    while (true)
        int64_t rcx_29 = sx.q(var_f8_1:0xc.d)
        int64_t* rax_32 = var_108.q
        
        if (rcx_29.d == rbx_4 && var_f8_1.q == r11_1 && rax_32 == arg1 + 0x80)
            break
        
        void* rdi_3 = *(*rax_32 + rcx_29 * 0x10)
        
        if (*(rdi_3 + 0x90) != 0 && *(rdi_3 + 0x92) == 0 && *(rdi_3 + 0x91) == 0)
            int64_t rdx_21 = sx.q(arg2[6].d)
            uint64_t r8_13 = zx.q(*(arg1 + 0x70))
            int64_t r9_10 = *(rdi_3 + 0x70)
            
            if (r9_10 s< sx.q((rdx_21 + 1).d) * r8_13)
                int64_t rax_36 = *(rdi_3 + 0x78) + r9_10
                
                if (rax_36 s> rdx_21 * r8_13)
                    int32_t temp0_4 = (divs.dp.q(sx.o(rax_36 - 1), r8_13)).d
                    int32_t i_1 = (divs.dp.q(sx.o(r9_10), r8_13)).d
                    
                    if (i_1 s<= temp0_4)
                        int64_t i = sx.q(i_1)
                        int64_t* rdx_25 = *(arg1 + 0xd0) + (i << 3)
                        
                        do
                            if (*(*rdx_25 + 0x10) == 0)
                                goto label_141cffc45
                            
                            i += 1
                            rdx_25 = &rdx_25[1]
                        while (i s<= sx.q(temp0_4))
                    
                    *(rdi_3 + 0x92) = 1
                    int64_t r15_3 = sx.q(var_48_1)
                    int32_t rax_45 = (r15_3 + 1).d
                    var_48_1 = rax_45
                    
                    if (rax_45 s> var_44_1)
                        sub_140869430(&var_70, r15_3.d)
                    
                    void* rcx_36 = &var_70
                    
                    if (var_50_1 != 0)
                        rcx_36 = var_50_1
                    
                    *(rcx_36 + (r15_3 << 3)) = rdi_3
        
    label_141cffc45:
        var_f8_1:8.d &= not.d(var_108:0xc.d)
        sub_14059bdd0(&var_108:8)
        r10_1 = var_50_1
        r11_1 = arg1 + 0x90
    
    void* rdi_4 = &var_70
    int64_t r14_2 = 0
    
    if (r10_1 != 0)
        rdi_4 = r10_1
    
    int64_t r12_3 = sx.q(var_48_1) << 3
    result = rdi_4 + r12_3
    uint64_t r12_4 = r12_3 u>> 3
    
    if (rdi_4 u> result)
        r12_4 = 0
    
    if (r12_4 != 0)
        int64_t* r13_1 = var_118.q
        
        do
            void* r15_4 = *rdi_4
            int64_t rdx_28
            result, rdx_28 = sub_1408296b0(r13_1, &var_158, r15_4)
            
            if (*result != 0xffffffff)
                result = sub_141d0e380(r15_4, rdx_28)
            
            rdi_4 += 8
            r14_2 += 1
        while (r14_2 != r12_4)
        
        r10_1 = var_50_1
    
    *(arg2 + 0x35) = 1
    
    if (r10_1 != 0)
        result = sub_140a74f90(r10_1)

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)

__security_check_cookie(rax_1 ^ &var_198)
return result
