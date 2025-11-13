// 函数: sub_141d034e0
// 地址: 0x141d034e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rdi = 0
int128_t var_98 = data_14321e0d0
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int64_t var_68
__builtin_memset(&var_68, 0, 0x1a)
int64_t* r14 = nullptr
int32_t r12 = 0
int64_t* var_d0 = nullptr
int64_t* var_108 = nullptr
void* var_100 = nullptr
EnterCriticalSection(arg1 + 0x38)
int64_t r13_1 = sx.q(*(arg1 + 0x18))
int32_t temp0 = r13_1.d

if (temp0 != 0)
    if (temp0 s> 0)
        sub_1405a5410(&var_108, r13_1.d)
        r12 = var_100.d
        r14 = var_108
    
    memcpy(&r14[sx.q(r12) * 2], *(arg1 + 0x10), (r13_1 << 4).d)
    var_100.d = r12 + r13_1.d

if (arg1 != -0x38)
    LeaveCriticalSection(arg1 + 0x38)

char rax_2 = sub_141d02340(&var_108, arg3, &var_d0, &var_98)

if (r14 != 0)
    sub_140a74f90(r14)

int64_t r14_1 = -1

if (rax_2 == 0)
label_141d0381f:
    var_108 = nullptr
    int32_t rdx_14 = 0
    var_100.d = 0
    int32_t rcx_23 = 0
    var_100:4.d = 0
    
    if (arg3 != 0 && *arg3 != 0)
        int64_t rbx_5 = -1
        
        do
            rbx_5 += 1
        while (arg3[rbx_5] != 0)
        
        if (rbx_5.d + 1 s> 0)
            sub_1405947f0(&var_108, rbx_5.d + 1)
            rcx_23 = var_100:4.d
            rdx_14 = var_100.d
        
        int32_t rax_25 = rbx_5.d + 1 + rdx_14
        var_100.d = rax_25
        
        if (rax_25 s> rcx_23)
            sub_140594770(&var_108)
        
        UnDecorator::getReferenceType(var_108, arg3, (rbx_5.d + 1) * 2)
    
    char rax_26 = sub_141d06c80(arg1, &var_108)
    int64_t* rcx_28 = var_108
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    if (rax_26 == 0)
        *arg2 = 0
        arg2[1] = 0
        
        if (arg3 != 0 && *arg3 != 0)
            do
                r14_1 += 1
            while (arg3[r14_1] != 0)
            
            if (r14_1.d + 1 s> 0)
                sub_1405947f0(arg2, r14_1.d + 1)
                rdi = arg2[1].d
            
            int32_t rax_36 = r14_1.d + 1 + rdi
            arg2[1].d = rax_36
            
            if (rax_36 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            UnDecorator::getReferenceType(*arg2, arg3, (r14_1.d + 1) * 2)
    else
        int64_t* rcx_29 = *(arg1 + 8)
        (*(*rcx_29 + 0xb8))(rcx_29, arg2, arg3)
else
    var_108 = nullptr
    int32_t rdx_4 = 0
    var_100.d = 0
    int32_t rcx_8 = 0
    var_100:4.d = 0
    
    if (arg3 != 0 && *arg3 != 0)
        int64_t rbx_2 = -1
        
        do
            rbx_2 += 1
        while (arg3[rbx_2] != 0)
        
        if (rbx_2.d + 1 s> 0)
            sub_1405947f0(&var_108, rbx_2.d + 1)
            rcx_8 = var_100:4.d
            rdx_4 = var_100.d
        
        int32_t rax_3 = rbx_2.d + 1 + rdx_4
        var_100.d = rax_3
        
        if (rax_3 s> rcx_8)
            sub_140594770(&var_108)
        
        UnDecorator::getReferenceType(var_108, arg3, (rbx_2.d + 1) * 2)
    
    int16_t* var_e0
    sub_140b1a660(&var_e0, &var_108)
    int64_t* rcx_13 = var_108
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int16_t* const rdx_8 = &data_142d40450
    int64_t* r12_2 = var_d0
    int32_t var_d8
    
    if (var_d8 != 0)
        rdx_8 = var_e0
    
    void* rax_4 = sub_141d01fc0(r12_2, rdx_8)
    
    if (rax_4 == 0)
    label_141d03810:
        int16_t* rcx_22 = var_e0
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        goto label_141d0381f
    
    int32_t r11_1 = *(rax_4 + 0x18)
    var_108:4.d = 1
    int32_t rcx_15 = 0
    var_108.d = 0
    int32_t r8_5 = 0
    var_100 = rax_4 + 0x10
    int32_t var_f8_1 = 0xffffffff
    int64_t var_f4_1 = 0
    
    if (r11_1 != 0)
        void* r9_1 = *(rax_4 + 0x10)
        
        if ((r9_1.b & 1) != 0)
            r9_1 = (r9_1 s>> 1) + rax_4 + 0x10
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_11 = *r9_1
        
        if (rdx_11 != 0)
        label_141d0372c:
            int32_t rax_11 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_11)
            var_108:4.d = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_1
            
            var_f4_1.d = r8_5 - rax_12 + 0x1f
            
            if (r8_5 - rax_12 + 0x1f s> r11_1)
                var_f4_1.d = r11_1
        else
            while (true)
                int64_t rax_8 = sx.q(rcx_15)
                r8_5 += 0x20
                rcx_15 += 1
                var_f4_1:4.d = r8_5
                var_108.d = rcx_15
                
                if (rax_8.d s>= ((temp1_1 & 0x1f) + temp2_1) s>> 5)
                    break
                
                rdx_11 = *(r9_1 + (rax_8 << 2) + 4)
                var_f8_1 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141d0372c
            
            var_f4_1.d = r11_1
    
    double zmm2[0x2] = var_f8_1.o
    double var_a8_1[0x2] = zmm2
    double var_b8_1[0x2] = var_108.o
    var_108.o = rax_4.o
    uint32_t rax_15 = (zmm2[0] u>> 0x20).d
    int64_t var_e8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    var_f8_1.o = var_b8_1
    
    if (rax_15 s>= r11_1)
        goto label_141d03810
    
    int32_t var_ec
    int32_t r9_3 = var_ec
    
    while (true)
        int64_t* r8_7 = var_108
        void* rcx_17 = *r8_7
        
        if ((rcx_17.b & 1) != 0)
            rcx_17 = (rcx_17 s>> 1) + r8_7
        
        int64_t* rax_17 = *r12_2 + 0x10
        void* rdx_12 = *rax_17
        
        if ((rdx_12.b & 1) != 0)
            rdx_12 = (rdx_12 s>> 1) + rax_17
        
        if (*(rdx_12 + sx.q(*((sx.q(r9_3) << 5) + rcx_17 + 0x10)) * 0x50) == var_98.q)
            void* rax_28 = *r8_7
            
            if ((rax_28.b & 1) != 0)
                rax_28 = (rax_28 s>> 1) + r8_7
            
            void* rcx_32 = (sx.q(r9_3) << 5) + rax_28
            void* rsi_1 = *rcx_32
            
            if ((rsi_1.b & 1) != 0)
                rsi_1 = (rsi_1 s>> 1) + rcx_32
            
            int32_t rax_30 = *(rcx_32 + 8)
            int64_t* rbx_8 = nullptr
            var_108 = nullptr
            int32_t rdx_19 = 0
            var_100.d = 0
            int32_t r13_3 = rax_30 - 1
            int32_t rax_31 = 0
            
            if (rax_30 == 0)
                r13_3 = 0
            
            var_100:4.d = 0
            int32_t r14_3
            
            if (rsi_1 != 0 && *rsi_1 != 0 && r13_3 s> 0)
                if (r13_3 + 1 s> 0)
                    sub_1405947f0(&var_108, r13_3 + 1)
                    rax_31 = var_100:4.d
                    rdx_19 = var_100.d
                    rbx_8 = var_108
                
                r14_3 = rdx_19 + 1 + r13_3
                var_100.d = r14_3
                
                if (r14_3 s> rax_31)
                    sub_140594770(&var_108)
                    r14_3 = var_100.d
                    rbx_8 = var_108
                
                UnDecorator::getReferenceType(rbx_8, rsi_1, r13_3 * 2)
                *(rbx_8 + (sx.q(r14_3) << 1) - 2) = 0
            
            int32_t r14_4
            
            if (rsi_1 == 0 || *rsi_1 == 0 || r13_3 s<= 0 || r14_3 == 0)
                r14_4 = 0
            else
                r14_4 = r14_3 - 1
            
            int32_t rax_34
            
            if (var_d8 == 0)
                rax_34 = var_d8 + 2
            
            if (var_d8 != 0 || r14_4 == 0xffffffff)
                rax_34 = 1
            
            int16_t* r12_3 = var_e0
            int32_t rax_35 = rax_34 + r14_4
            *arg2 = 0
            arg2[1].d = var_d8
            
            if (var_d8 != 0 || rax_35 != 0)
                sub_1405a4c70(arg2, var_d8 + rax_35, 0)
                memcpy(*arg2, r12_3, var_d8 * 2)
            else
                *(arg2 + 0xc) = 0
            
            sub_140a2cf70(arg2, rbx_8, r14_4)
            
            if (rbx_8 != 0)
                sub_140a74f90(rbx_8)
            
            int16_t* rcx_41 = var_e0
            
            if (rcx_41 != 0)
                sub_140a74f90(rcx_41)
            
            break
        
        var_f4_1:4.d &= not.d(var_100:4.d)
        sub_141d02a20(&var_100)
        r9_3 = var_ec
        
        if (r9_3 s>= *(var_f8_1.q + 8))
            goto label_141d03810

sub_140a1d5c0(&var_68)
__security_check_cookie(rax_1 ^ &var_128)
return arg2
