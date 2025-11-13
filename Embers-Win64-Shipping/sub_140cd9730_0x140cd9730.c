// 函数: sub_140cd9730
// 地址: 0x140cd9730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
EnterCriticalSection(arg1 + 0xd0)
void var_50

if (&var_88 != arg1 + 0x80)
    sub_140780e10(&var_88, arg1 + 0x80)
    int64_t r14_1 = *(arg1 + 0xc0)
    
    if (r14_1 == 0)
        memmove(&var_50, arg1 + 0xb8, 4)
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
        r14_1 = *(arg1 + 0xc0)
    
    *(arg1 + 0xc0) = 0
    int32_t var_40_1 = *(arg1 + 0xc8)
    *(arg1 + 0xc8) = 0
    var_48 = r14_1

if (arg1 != -0xd0)
    LeaveCriticalSection(arg1 + 0xd0)

int64_t var_78
int64_t* var_f0 = &var_78
int32_t rcx_5 = 0
int32_t var_f8 = 0
int32_t var_e8 = 0xffffffff
int32_t r8 = 0
int32_t var_f4 = 1
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
    label_140cd9898:
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
        
        int32_t rax_12 = r8 - rax_11 + 0x1f
        
        if (rax_12 s> var_60)
            rax_12 = var_60
        
        var_e4.d = rax_12
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_5)
            r8 += 0x20
            rcx_5 += 1
            var_e4:4.d = r8
            var_f8 = rcx_5
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_e4.d = var_60
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_e8_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_140cd9898

int128_t var_98 = 0xffffffff
var_e4.d = var_60
int128_t var_a8 = var_f8.o
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_d8 = (&var_88).o
int128_t var_c8 = var_a8
int64_t var_b8 = temp0_3

while (true)
    int64_t rcx_9 = sx.q(var_c8:0xc.d)
    int64_t* rax_13 = var_d8.q
    
    if (rcx_9.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d && var_c8.q == &var_78
            && rax_13 == &var_88)
        int32_t var_40_2 = 0
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        int64_t var_80
        bool cond:1 = var_80:4.d == 0
        var_80.d = 0
        
        if (not(cond:1))
            sub_1405a5410(&var_88, 0)
        
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        sub_14059a8e0(&var_78, 0)
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rcx_22 = var_88
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        __builtin_memset(&var_88, 0, 0x2c)
        int32_t var_5c_1 = 0x80
        int32_t var_58_2 = 0xffffffff
        int32_t var_54_2 = 0
        int64_t var_48_1 = 0
        int32_t var_40_3 = 0
        EnterCriticalSection(arg1 + 0x148)
        
        if (&var_88 != arg1 + 0xf8)
            sub_140780e10(&var_88, arg1 + 0xf8)
            int64_t r14_2 = *(arg1 + 0x138)
            
            if (r14_2 == 0)
                memmove(&var_50, arg1 + 0x130, (r14_2 + 4).d)
            
            if (var_48_1 != 0)
                sub_140a74f90(var_48_1)
                r14_2 = *(arg1 + 0x138)
            
            *(arg1 + 0x138) = 0
            int32_t var_40_4 = *(arg1 + 0x140)
            *(arg1 + 0x140) = 0
            var_48_1 = r14_2
        
        if (arg1 != -0x148)
            LeaveCriticalSection(arg1 + 0x148)
        
        int64_t* var_f0_1 = &var_78
        int32_t rcx_28 = 0
        int32_t var_f8_1 = 0
        int32_t r8_5 = 0
        int32_t var_f4_2 = 1
        int32_t var_e8_3 = 0xffffffff
        int64_t var_e4_1 = 0
        int64_t* var_68_1
        int32_t var_60_1
        
        if (var_60_1 != 0)
            int64_t* r10_1 = &var_78
            
            if (var_68_1 != 0)
                r10_1 = var_68_1
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(var_60_1 - 1)
            int32_t rdx_16 = *r10_1
            
            if (rdx_16 != 0)
            label_140cd9bc8:
                int32_t rax_37 = neg.d(rdx_16) & rdx_16
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_37)
                int32_t var_f4_3 = rax_37
                int32_t r12_1
                
                if (rax_37 == 0)
                    r12_1 = 0x20
                else
                    r12_1 = 0x1f - temp0_4
                
                int32_t rax_38 = r8_5 - r12_1 + 0x1f
                
                if (rax_38 s> var_60_1)
                    rax_38 = var_60_1
                
                var_e4_1.d = rax_38
            else
                while (true)
                    int64_t rdx_17 = sx.q(rcx_28)
                    r8_5 += 0x20
                    rcx_28 += 1
                    var_e4_1:4.d = r8_5
                    var_f8_1 = rcx_28
                    
                    if (rdx_17.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        var_e4_1.d = var_60_1
                        break
                    
                    rdx_16 = *(r10_1 + (rdx_17 << 2) + 4)
                    int32_t var_e8_4 = 0xffffffff
                    
                    if (rdx_16 != 0)
                        goto label_140cd9bc8
        
        int128_t var_98_1 = 0xffffffff
        int128_t var_a8_1 = var_f8_1.o
        var_e4_1.d = var_60_1
        int64_t temp0_5 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_d8 = (&var_88).o
        int128_t var_c8_1 = var_a8_1
        int64_t var_b8_1 = temp0_5
        
        while (true)
            int64_t rax_39 = sx.q(var_c8_1:0xc.d)
            int64_t* rdx_18 = var_d8.q
            
            if (rax_39.d == ((0xffffffff << (var_60_1.b & 0x1f)).q u>> 0x20).d
                    && var_c8_1.q == &var_78 && rdx_18 == &var_88)
                int32_t var_40_5 = 0
                
                if (var_48_1 != 0)
                    sub_140a74f90(var_48_1)
                
                int64_t var_80_1
                bool cond:3 = var_80_1:4.d == 0
                var_80_1.d = 0
                
                if (not(cond:3))
                    sub_1405a5410(&var_88, 0)
                
                int32_t var_58_3 = 0xffffffff
                int32_t var_54_3 = 0
                void* result = sub_14059a8e0(&var_78, 0)
                
                if (var_68_1 != 0)
                    result = sub_140a74f90(var_68_1)
                
                int64_t rcx_42 = var_88
                
                if (rcx_42 != 0)
                    result = sub_140a74f90(rcx_42)
                
                __security_check_cookie(rax_1 ^ &var_118)
                return result
            
            void* rsi_1 = *(*rdx_18 + rax_39 * 0x10)
            void* i = *(rsi_1 + 0x18)
            
            for (void* rdi_6 = (sx.q(*(rsi_1 + 0x20)) << 7) + i; i != rdi_6; i -= -0x80)
                void* rcx_34 = *(i + 0x40)
                
                if (rcx_34 != 0 && *(i + 0x4c) != 0)
                    int32_t r9_3
                    r9_3.b = 1
                    sub_140d3e8d0(rcx_34, nullptr, 0xffffffff, r9_3.b)
                    *(i + 0x40) = 0
                    *(i + 0x51) = 0
                    *(i + 0x53) = 0
            
            if (sub_140baa940() != 0)
                *(sub_140baa940() + 8) = 0
            
            var_c8_1:8.d &= not.d(var_d8:0xc.d)
            sub_14059bdd0(&var_d8:8)
    
    int32_t i_1 = 0
    void* rbx_1 = *(*rax_13 + rcx_9 * 0x10)
    
    if (*(rbx_1 + 0x10) s> 0)
        int64_t r9_2 = 0
        
        do
            void* r8_3 = *(rbx_1 + 8) + r9_2
            void* rcx_11 = *(r8_3 + 0x28)
            int64_t rax_15
            
            if (rcx_11 != 0)
                rax_15 = sx.q(*(r8_3 + 0x30))
            
            if (rcx_11 == 0 || rax_15.d == 0xffffffff
                    || *((rax_15 << 7) + *(rcx_11 + 0x18) + 0x40) == *(r8_3 + 0x20))
                void* rax_17 = *(r8_3 + 0x20)
                
                if (rax_17 != 0)
                    int32_t rax_18 = *(rax_17 + 0xc)
                    void* const rax_22
                    
                    if (rax_18 s>= data_143e1d9b4)
                        rax_22 = nullptr
                    else
                        uint32_t rdx_10 = zx.d(rax_18.w)
                        
                        if (rax_18 s< 0)
                            rax_18 += 0xffff
                            rdx_10 -= 0x10000
                        
                        rax_22 =
                            *(data_143e1d9a0 + (sx.q(rax_18 s>> 0x10) << 3)) + sx.q(rdx_10) * 0x18
                    
                    if (((*(rax_22 + 8) u>> 0x19).b & 1) == 0)
                        *(r8_3 + 0x20) = 0
            else
                *(r8_3 + 0x20) = 0
            
            i_1 += 1
            *(r8_3 + 0x28) = 0
            r9_2 += 0x38
            *(r8_3 + 0x30) = 0xffffffff
        while (i_1 s< *(rbx_1 + 0x10))
    
    if (sub_140baa940() != 0)
        *(sub_140baa940() + 4) = 0
    
    var_c8:8.d &= not.d(var_d8:0xc.d)
    sub_14059bdd0(&var_d8:8)
