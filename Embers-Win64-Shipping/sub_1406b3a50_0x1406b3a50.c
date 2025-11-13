// 函数: sub_1406b3a50
// 地址: 0x1406b3a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rdi = 0
int64_t var_88 = 0
int32_t r9 = 0
int32_t var_80 = 0
int32_t var_5c = 0x80
int128_t var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t var_58 = 0xffffffff
int32_t r10 = 0
int32_t var_54 = 0
void* rbx = nullptr
void* var_48 = nullptr
int32_t rsi = 0
int32_t var_40 = 0
int32_t rcx = 0
int32_t var_e8 = 0
int32_t var_e4 = 1
int32_t* r11 = arg1 + 0x10
int32_t* var_e0 = r11
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0
int32_t r8 = 0
int32_t r14 = r11[6]

if (r14 != 0)
    int32_t* rax_2 = *(r11 + 0x10)
    
    if (rax_2 != 0)
        r11 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r14 - 1)
    int32_t rdx_2 = *r11
    
    if (rdx_2 != 0)
    label_1406b3b4a:
        int32_t rax_8 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        int32_t var_e4_1 = rax_8
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_d4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r14)
            var_d4.d = r14
    else
        while (true)
            rcx += 1
            var_e8 = rcx
            r8 += 0x20
            var_d4:4.d = r8
            
            if (rcx s> ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = r11[sx.q(rcx)]
            var_d8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1406b3b4a
        
        var_d4.d = r14

double var_a8[0x2] = var_e8.o
int128_t var_98 = 0xffffffff
var_e8.o = arg1.o
var_d8.o = var_a8
int64_t var_c8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q

if (0 s< r14)
    int32_t var_cc
    int32_t rcx_2 = var_cc
    
    while (true)
        int64_t r12_3 = sx.q(rcx_2) * 0x28
        int64_t* r13_1 = var_e8.q
        int64_t* r14_2 = *r13_1 + r12_3
        
        if (r9 == r10)
        label_1406b3c74:
            int64_t* rsi_2 = *r13_1
            int64_t rbx_2 = sx.q(arg2[1].d)
            int32_t rax_17 = (rbx_2 + 1).d
            arg2[1].d = rax_17
            
            if (rax_17 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            int64_t* rbx_4 = (rbx_2 << 4) + *arg2
            int64_t* var_b8_1 = rbx_4
            *rbx_4 = 0
            int32_t rdi_1 = rsi_2[sx.q(rcx_2) * 5 + 1].d
            int64_t rsi_3 = rsi_2[sx.q(rcx_2) * 5]
            rbx_4[1].d = rdi_1
            
            if (rdi_1 != 0)
                sub_1405a4c70(rbx_4, rdi_1, 0)
                memcpy(*rbx_4, rsi_3, rdi_1 * 2)
            else
                *(rbx_4 + 0xc) = 0
            
            void var_c0
            sub_1406b3860(&var_88, &var_c0, *r13_1 + r12_3, nullptr)
        else
            int32_t rax_12 = r14_2[1].d
            int32_t rcx_4
            int16_t* rdx_3
            
            if (rax_12 == 0)
                rdx_3 = &data_142d40450
                rcx_4 = 0
            else
                rdx_3 = *r14_2
                rcx_4 = rax_12 - 1
            
            int32_t rax_13 = sub_1405969c0(rcx_4, rdx_3)
            void var_50
            void* r8_2 = &var_50
            
            if (rbx != 0)
                r8_2 = rbx
            
            int32_t rbx_1 = *(r8_2 + ((sx.q(rsi - 1) & sx.q(rax_13)) << 2))
            
            if (rbx_1 == 0xffffffff)
                goto label_1406b3c74
            
            while (true)
                int64_t rsi_1 = sx.q(rbx_1) * 0x18
                int16_t* rdx_6
                
                if (r14_2[1].d == 0)
                    rdx_6 = &data_142d40450
                else
                    rdx_6 = *r14_2
                
                int16_t* const rcx_7
                
                if (*(rsi_1 + rdi + 8) == 0)
                    rcx_7 = &data_142d40450
                else
                    rcx_7 = *(rsi_1 + rdi)
                
                if (sub_140a54510(rcx_7, rdx_6) == 0)
                    break
                
                rdi = var_88
                rbx_1 = *(rsi_1 + rdi + 0x10)
                
                if (rbx_1 == 0xffffffff)
                    goto label_1406b3c74
            
            if (rbx_1 == 0xffffffff)
                goto label_1406b3c74
        
        var_d4:4.d &= not.d(var_e0:4.d)
        sub_14059bdd0(&var_e0)
        rcx_2 = var_cc
        rbx = var_48
        
        if (rcx_2 s>= *(var_d8.q + 0x18))
            break
        
        rsi = var_40
        r10 = var_54
        r9 = var_80
        rdi = var_88

int32_t rdi_2 = arg2[1].d
int32_t var_40_1 = 0

if (rbx != 0)
    sub_140a74f90(rbx)

sub_140669e00(&var_88)
__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rdi_2)
