// 函数: sub_14188e200
// 地址: 0x14188e200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_58 = 0xffffffff
EnterCriticalSection(arg1 + 0x2c0)

if (&var_88 != arg1 + 0x2e8)
    sub_1413c6350(&var_88, arg1 + 0x2e8)
    int64_t rsi_1 = *(arg1 + 0x328)
    void var_50
    
    if (rsi_1 == 0)
        memmove(&var_50, arg1 + 0x320, (rsi_1 + 4).d)
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
        rsi_1 = *(arg1 + 0x328)
    
    var_48 = rsi_1
    *(arg1 + 0x328) = 0
    int32_t var_40_1 = *(arg1 + 0x330)
    *(arg1 + 0x330) = 0

LeaveCriticalSection(arg1 + 0x2c0)
EnterCriticalSection(arg1 + 0x58)
int64_t var_78
int64_t* var_170 = &var_78
int32_t rcx_6 = 0
int32_t var_178 = 0
int32_t var_174 = 1
int32_t r8_2 = 0
int32_t var_168 = 0xffffffff
int64_t var_164 = 0
int64_t* var_68
int32_t var_60

if (var_60 != 0)
    int64_t* r9_1 = &var_78
    
    if (var_68 != 0)
        r9_1 = var_68
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(var_60 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_14188e378:
        int32_t rax_10 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_174_1 = rax_10
        int32_t var_e8_1 = temp0_1
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_1
        
        int32_t rax_12 = r8_2 - rax_11 + 0x1f
        
        if (rax_12 s> var_60)
            rax_12 = var_60
        
        var_164.d = rax_12
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_6)
            r8_2 += 0x20
            rcx_6 += 1
            var_164:4.d = r8_2
            var_178 = rcx_6
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_164.d = var_60
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_168_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_14188e378

int64_t* var_110 = &var_88
int128_t var_108 = var_178.o
int32_t var_bc = var_60
int64_t var_f8 = 0xffffffff
int128_t zmm1 = var_108
int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_138 = var_110.o
int128_t var_128 = zmm1
int64_t var_118 = temp0_2

while (true)
    int64_t rcx_10 = sx.q(var_128:0xc.d)
    int64_t rax_13 = var_138.q
    
    if (rcx_10.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d && var_128.q == &var_78
            && rax_13 == &var_88)
        LeaveCriticalSection(arg1 + 0x58)
        int32_t var_154 = 1
        int64_t* var_150 = &var_78
        int32_t rcx_28 = 0
        int32_t var_158 = 0
        int32_t r8_9 = 0
        int32_t var_148 = 0xffffffff
        int64_t var_144 = 0
        
        if (var_60 != 0)
            int64_t* r10_1 = &var_78
            
            if (var_68 != 0)
                r10_1 = var_68
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(var_60 - 1)
            int32_t rdx_20 = *r10_1
            
            if (rdx_20 != 0)
            label_14188e678:
                int32_t rax_35 = neg.d(rdx_20) & rdx_20
                uint64_t rflags_2
                int32_t temp0_5
                temp0_5, rflags_2 = _bit_scan_reverse(rax_35)
                int32_t var_154_1 = rax_35
                int32_t rbx_6
                
                if (rax_35 == 0)
                    rbx_6 = 0x20
                else
                    rbx_6 = 0x1f - temp0_5
                
                int32_t rax_36 = r8_9 - rbx_6 + 0x1f
                
                if (rax_36 s> var_60)
                    rax_36 = var_60
                
                var_144.d = rax_36
            else
                while (true)
                    int64_t rdx_21 = sx.q(rcx_28)
                    r8_9 += 0x20
                    rcx_28 += 1
                    var_144:4.d = r8_9
                    var_158 = rcx_28
                    
                    if (rdx_21.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                        var_144.d = var_60
                        break
                    
                    rdx_20 = *(r10_1 + (rdx_21 << 2) + 4)
                    int32_t var_148_1 = 0xffffffff
                    
                    if (rdx_20 != 0)
                        goto label_14188e678
        
        var_138.q = &var_88
        var_138 = var_158.o
        int128_t zmm0 = var_138
        var_128 = 0xffffffff
        int32_t var_9c = var_60
        int64_t temp0_6 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_110.o = zmm0
        var_108 = var_128
        var_f8 = temp0_6
        
        while (true)
            int64_t rax_37 = sx.q(var_f8:4.d)
            
            if (rax_37.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d
                    && var_108:8.q == &var_78 && var_110 == &var_88)
                int32_t var_40_2 = 0
                
                if (var_48 != 0)
                    sub_140a74f90(var_48)
                
                int64_t result = sub_1405b8bd0(&var_88, 0)
                
                if (var_68 != 0)
                    result = sub_140a74f90(var_68)
                
                int64_t rcx_37 = var_88
                
                if (rcx_37 != 0)
                    result = sub_140a74f90(rcx_37)
                
                __security_check_cookie(rax_1 ^ &var_198)
                return result
            
            int64_t* rcx_32 = *(arg1 + 0x30)
            int64_t r8_11 = *rcx_32
            (*(r8_11 + 0x18))(rcx_32, *((rax_37 << 5) + *var_110 + 8) + 8, r8_11)
            var_f8.d &= not.d(var_108:4.d)
            sub_14059bdd0(&var_108)
    
    int32_t* rsi_4 = (rcx_10 << 5) + *rax_13
    
    if (*(arg1 + 0x88) != *(arg1 + 0xb4))
        void* rdx_8 = *(arg1 + 0xc0)
        void* r8_4 = arg1 + 0xb8
        int64_t r9_2 = sx.q(*rsi_4)
        
        if (rdx_8 != 0)
            r8_4 = rdx_8
        
        int32_t i = *(r8_4 + (((sx.q(*(arg1 + 0xc8)) - 1) & r9_2) << 2))
        
        if (i != 0xffffffff)
            int64_t r8_5 = *(arg1 + 0x80)
            
            do
                int64_t rdx_10 = sx.q(i) * 6
                
                if (*(r8_5 + (rdx_10 << 3)) == r9_2.d)
                    if (i != 0xffffffff)
                        int64_t var_e0 = *(rsi_4 + 8)
                        int64_t* rax_16 = *(rsi_4 + 0x10)
                        
                        if (rax_16 != 0)
                            rax_16[1].d += 1
                        
                        int64_t rdi_1 = sx.q(*rsi_4)
                        int32_t* rbx_3
                        
                        if (*(arg1 + 0x88) == *(arg1 + 0xb4))
                        label_14188e521:
                            rbx_3 = nullptr
                        else
                            void* rcx_15 = *(arg1 + 0xc0)
                            void* r8_6 = arg1 + 0xb8
                            
                            if (rcx_15 != 0)
                                r8_6 = rcx_15
                            
                            int32_t rax_18 = *(r8_6 + (((sx.q(*(arg1 + 0xc8)) - 1) & rdi_1) << 2))
                            
                            if (rax_18 == 0xffffffff)
                            label_14188e521_1:
                                rbx_3 = nullptr
                            else
                                while (true)
                                    rbx_3 = sx.q(rax_18) * 0x30 + *(arg1 + 0x80)
                                    
                                    if (*rbx_3 == rdi_1.d)
                                        break
                                    
                                    rax_18 = rbx_3[0xa]
                                    
                                    if (rax_18 == 0xffffffff)
                                        goto label_14188e521_2
                                
                                if (rax_18 == 0xffffffff)
                                label_14188e521_2:
                                    rbx_3 = nullptr
                        
                        if (rbx_3[4] != 0)
                            int64_t* rcx_17 = *(rbx_3 + 8)
                            
                            if (rcx_17 != 0 && (*(*rcx_17 + 0x28))(rcx_17) != 0)
                                int64_t* rcx_18
                                
                                if (rbx_3[4] == 0)
                                    rcx_18 = nullptr
                                else
                                    rcx_18 = *(rbx_3 + 8)
                                
                                (*(*rcx_18 + 0x50))(rcx_18, zx.q(rdi_1.d), &var_e0)
                        
                        if (rax_16 != 0)
                            rax_16[1].d -= 1
                            
                            if (rax_16[1].d == 1)
                                (**rax_16)(rax_16)
                                int32_t rax_24 = *(rax_16 + 0xc)
                                *(rax_16 + 0xc) -= 1
                                
                                if (rax_24 == 1)
                                    (*(*rax_16 + 8))(rax_16, 1)
                        
                        int32_t rdi_2 = *rsi_4
                        EnterCriticalSection(arg1 + 0x180)
                        sub_14092f410(arg1 + 0x1a8, rdi_2)
                        sub_1418929b0(arg1 + 0x1f8, rdi_2)
                        
                        if (arg1 != -0x180)
                            LeaveCriticalSection(arg1 + 0x180)
                        
                        sub_141892740(arg1 + 0x80, *rsi_4)
                    
                    break
                
                i = *(r8_5 + (rdx_10 << 3) + 0x28)
            while (i != 0xffffffff)
    
    var_128:8.d &= not.d(var_138:0xc.d)
    sub_14059bdd0(&var_138:8)
