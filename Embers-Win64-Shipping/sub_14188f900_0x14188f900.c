// 函数: sub_14188f900
// 地址: 0x14188f900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_58 = 0xffffffff
EnterCriticalSection(arg1 + 0x248)

if (&var_88 != arg1 + 0x270)
    sub_140780e10(&var_88, arg1 + 0x270)
    int64_t rsi_1 = *(arg1 + 0x2b0)
    void var_50
    
    if (rsi_1 == 0)
        memmove(&var_50, arg1 + 0x2a8, (rsi_1 + 4).d)
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
        rsi_1 = *(arg1 + 0x2b0)
    
    var_48 = rsi_1
    *(arg1 + 0x2b0) = 0
    int32_t var_40_1 = *(arg1 + 0x2b8)
    *(arg1 + 0x2b8) = 0

LeaveCriticalSection(arg1 + 0x248)
EnterCriticalSection(arg1 + 0x58)
int64_t var_78
int64_t* var_f0 = &var_78
int32_t rcx_6 = 0
int32_t var_f8 = 0
int32_t var_f4 = 1
int32_t r8_2 = 0
int32_t var_e8 = 0xffffffff
int64_t var_e4 = 0
int64_t* var_68
int32_t var_60

if (var_60 != 0)
    int64_t* r9_1 = &var_78
    
    if (var_68 != 0)
        r9_1 = var_68
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_60 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_14188fa78:
        int32_t rax_10 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_f4_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        int32_t rax_12 = r8_2 - rax_11 + 0x1f
        
        if (rax_12 s> var_60)
            rax_12 = var_60
        
        var_e4.d = rax_12
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_6)
            r8_2 += 0x20
            rcx_6 += 1
            var_e4:4.d = r8_2
            var_f8 = rcx_6
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_e4.d = var_60
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_e8_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_14188fa78

int128_t var_98 = 0xffffffff
var_e4.d = var_60
int128_t var_a8 = var_f8.o
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_d8 = (&var_88).o
int128_t var_c8 = var_a8
int64_t var_b8 = temp0_3

while (true)
    int64_t rcx_10 = sx.q(var_c8:0xc.d)
    int64_t rax_13 = var_d8.q
    
    if (rcx_10.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d && var_c8.q == &var_78
            && rax_13 == &var_88)
        LeaveCriticalSection(arg1 + 0x58)
        int64_t* var_f0_1 = &var_78
        int32_t rcx_17 = 0
        int32_t var_f8_1 = 0
        int32_t r8_8 = 0
        int32_t var_f4_2 = 1
        int32_t var_e8_3 = 0xffffffff
        int64_t var_e4_1 = 0
        
        if (var_60 != 0)
            int64_t* r10_4 = &var_78
            
            if (var_68 != 0)
                r10_4 = var_68
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(var_60 - 1)
            int32_t rdx_15 = *r10_4
            
            if (rdx_15 != 0)
            label_14188fca8:
                int32_t rax_27 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_27)
                int32_t var_f4_3 = rax_27
                int32_t r13_1
                
                if (rax_27 == 0)
                    r13_1 = 0x20
                else
                    r13_1 = 0x1f - temp0_4
                
                int32_t rax_28 = r8_8 - r13_1 + 0x1f
                
                if (rax_28 s> var_60)
                    rax_28 = var_60
                
                var_e4_1.d = rax_28
            else
                while (true)
                    int64_t rdx_16 = sx.q(rcx_17)
                    r8_8 += 0x20
                    rcx_17 += 1
                    var_e4_1:4.d = r8_8
                    var_f8_1 = rcx_17
                    
                    if (rdx_16.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        var_e4_1.d = var_60
                        break
                    
                    rdx_15 = *(r10_4 + (rdx_16 << 2) + 4)
                    int32_t var_e8_4 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_14188fca8
        
        int128_t var_98_1 = 0xffffffff
        int128_t var_a8_1 = var_f8_1.o
        var_e4_1.d = var_60
        int64_t temp0_5 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_d8 = (&var_88).o
        int128_t var_c8_1 = var_a8_1
        int64_t var_b8_1 = temp0_5
        
        while (true)
            int64_t rax_29 = sx.q(var_c8_1:0xc.d)
            int64_t rcx_21 = var_d8.q
            
            if (rax_29.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d
                    && var_c8_1.q == &var_78 && rcx_21 == &var_88)
                int32_t var_40_2 = 0
                
                if (var_48 != 0)
                    sub_140a74f90(var_48)
                
                int64_t var_80
                bool cond:3 = var_80:4.d == 0
                var_80.d = 0
                
                if (not(cond:3))
                    sub_1405a5410(&var_88, 0)
                
                int32_t var_58_1 = 0xffffffff
                int32_t var_54_1 = 0
                void* result = sub_14059a8e0(&var_78, 0)
                
                if (var_68 != 0)
                    result = sub_140a74f90(var_68)
                
                int64_t rcx_28 = var_88
                
                if (rcx_28 != 0)
                    result = sub_140a74f90(rcx_28)
                
                __security_check_cookie(rax_1 ^ &var_118)
                return result
            
            int32_t* rdx_19 = (rax_29 << 4) + *rcx_21
            int64_t* rcx_22 = *(arg1 + 0x30)
            (*(*rcx_22 + 0x10))(rcx_22, zx.q(*rdx_19), zx.q(rdx_19[1]))
            var_c8_1:8.d &= not.d(var_d8:0xc.d)
            sub_14059bdd0(&var_d8:8)
    
    int32_t* r10_3 = (rcx_10 << 4) + *rax_13
    int64_t rdi_1 = sx.q(*r10_3)
    
    if (*(arg1 + 0x88) != *(arg1 + 0xb4))
        void* r8_4 = arg1 + 0xb8
        void* rcx_11 = *(r8_4 + 8)
        
        if (rcx_11 != 0)
            r8_4 = rcx_11
        
        int32_t i_1 = *(r8_4 + (((sx.q(*(arg1 + 0xc8)) - 1) & rdi_1) << 2))
        int32_t i = i_1
        
        if (i_1 != 0xffffffff)
            int64_t r9_2 = *(arg1 + 0x80)
            
            do
                int64_t r8_6 = sx.q(i) * 6
                
                if (*(r9_2 + (r8_6 << 3)) == rdi_1.d)
                    if (i != 0xffffffff)
                        int32_t* rbx_3
                        
                        if (i_1 == 0xffffffff)
                        label_14188fbd1:
                            rbx_3 = nullptr
                        else
                            while (true)
                                rbx_3 = sx.q(i_1) * 0x30 + r9_2
                                
                                if (*rbx_3 == rdi_1.d)
                                    break
                                
                                i_1 = rbx_3[0xa]
                                
                                if (i_1 == 0xffffffff)
                                    goto label_14188fbd1_1
                            
                            if (i_1 == 0xffffffff)
                            label_14188fbd1_1:
                                rbx_3 = nullptr
                        
                        int32_t rsi_2 = r10_3[1]
                        
                        if (rbx_3[8] != 0)
                            int64_t* rcx_13 = *(rbx_3 + 0x18)
                            
                            if (rcx_13 != 0 && (*(*rcx_13 + 0x28))(rcx_13) != 0)
                                int64_t* rcx_14
                                
                                if (rbx_3[8] == 0)
                                    rcx_14 = nullptr
                                else
                                    rcx_14 = *(rbx_3 + 0x18)
                                
                                (*(*rcx_14 + 0x50))(rcx_14, zx.q(rdi_1.d), zx.q(rsi_2))
                    
                    break
                
                i = *(r9_2 + (r8_6 << 3) + 0x28)
            while (i != 0xffffffff)
    
    var_c8:8.d &= not.d(var_d8:0xc.d)
    sub_14059bdd0(&var_d8:8)
