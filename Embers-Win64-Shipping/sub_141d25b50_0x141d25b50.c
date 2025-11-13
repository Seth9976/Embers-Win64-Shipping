// 函数: sub_141d25b50
// 地址: 0x141d25b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* r15 = arg1
void* var_120 = arg1
int32_t rax_3 = (*(*(arg1 + 0x278) + 0x48))(arg1 + 0x278)
int64_t r12 = sx.q(rax_3)
int32_t var_164 = 0
void* rdx = nullptr
void* var_170 = nullptr
int32_t rbx = 0
int32_t var_168 = 0

if (rax_3 s> 0)
    sub_141d26590(&var_170, r12.d)
    rdx = var_170
    rbx = var_168

int32_t r14 = 0
int64_t rdi = 0

if (r12.d s> 0)
    do
        int64_t rsi_1 = sx.q(rbx)
        rbx = (rsi_1 + 1).d
        int32_t* r15_1 = *arg2 + (sx.q(*(*(r15 + 0x280) + (rdi << 2))) << 2)
        
        if (rbx s> var_164)
            sub_1409da2a0(&var_170)
            rdx = var_170
        
        int32_t rax_6 = *r15_1
        int32_t* rcx_4 = rdx + (rsi_1 << 3)
        r15 = var_120
        rdi += 1
        rcx_4[1] = r14
        r14 += 1
        *rcx_4 = rax_6
    while (rdi s< r12)
    
    r12 = zx.q(r12.d)

void* rdi_2 = var_170
char var_178
sub_14073e070(rdi_2, rbx, var_178)
int64_t var_158 = 0
int64_t var_150 = 0

if (r12.d s> 0)
    sub_1405dadb0(&var_158, r12.d)

void* rbx_1 = rdi_2
void* rsi_2 = rdi_2 + (sx.q(rbx) << 3)

if (rdi_2 != rsi_2)
    do
        int64_t rdi_1 = sx.q(var_150.d)
        int32_t rax_8 = (rdi_1 + 1).d
        var_150.d = rax_8
        
        if (rax_8 s> var_150:4.d)
            sub_1405a4cf0(&var_158)
        
        int32_t rcx_8 = *(rbx_1 + 4)
        rbx_1 += 8
        *(var_158 + (rdi_1 << 2)) = rcx_8
    while (rbx_1 != rsi_2)
    
    rdi_2 = var_170

sub_141d25970(r15, &var_158)
int32_t r13_1 = 0

if ((*(*(r15 + 0xf8) + 0x48))(r15 + 0xf8) s> 0)
    int64_t rdi_3 = 0
    int64_t var_110_1 = 0
    void* r12_2 = nullptr
    void* var_118_1 = nullptr
    int32_t rax_31
    
    do
        int64_t r8_1 = *(r15 + 0x100)
        int64_t rdx_7 = sx.q(*(r12_2 + r8_1))
        
        if (rdx_7.d != 0xffffffff)
            *(r12_2 + r8_1) = rdx_7.d - *(*arg2 + (rdx_7 << 2))
        
        void* rdx_9 = *(r15 + 0x118)
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x2c)
        int64_t r14_2 = sx.q(r13_1) * 0x50
        int32_t var_6c_1 = 0x80
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        int64_t var_58_1 = 0
        int32_t var_50_1 = 0
        sub_140780cc0(&var_98, rdx_9 + r14_2)
        int64_t* rbx_3 = *(r15 + 0x118) + rdi_3
        rbx_3[1].d = 0
        
        if (*(rbx_3 + 0xc) != 0)
            sub_140638cc0(rbx_3, 0)
        
        rbx_3[6].d = 0xffffffff
        *(rbx_3 + 0x34) = 0
        sub_14059a8e0(&rbx_3[2], 0)
        int32_t i_2 = rbx_3[9].d
        
        if (i_2 s> 0)
            int64_t r8_2 = 0
            uint64_t i_1 = zx.q(i_2)
            uint64_t i
            
            do
                void* rcx_16 = rbx_3[8]
                void* rax_13 = &rbx_3[7]
                int64_t rdx_13 = (sx.q(rbx_3[9].d) - 1) & r8_2
                
                if (rcx_16 != 0)
                    rax_13 = rcx_16
                
                r8_2 += 1
                *(rax_13 + (rdx_13 << 2)) = 0xffffffff
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int64_t var_88
        int64_t* var_138_1 = &var_88
        int32_t rcx_17 = 0
        int32_t var_140_1 = 0
        int32_t r8_3 = 0
        int32_t var_13c_1 = 1
        int32_t var_130_1 = 0xffffffff
        int64_t var_12c_1 = 0
        int64_t* var_78
        int32_t var_70
        
        if (var_70 != 0)
            int64_t* r9_1 = &var_88
            
            if (var_78 != 0)
                r9_1 = var_78
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(var_70 - 1)
            int32_t rdx_16 = *r9_1
            
            if (rdx_16 != 0)
            label_141d25e7b:
                int32_t rax_21 = ((rdx_16 - 1) & rdx_16) ^ rdx_16
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_21)
                int32_t var_13c_2 = rax_21
                int32_t rax_22
                
                if (rax_21 == 0)
                    rax_22 = 0x20
                else
                    rax_22 = 0x1f - temp0_2
                
                int32_t rax_23 = r8_3 - rax_22 + 0x1f
                
                if (rax_23 s> var_70)
                    rax_23 = var_70
                
                var_12c_1.d = rax_23
            else
                while (true)
                    int64_t rdx_17 = sx.q(rcx_17)
                    r8_3 += 0x20
                    rcx_17 += 1
                    var_12c_1:4.d = r8_3
                    var_140_1 = rcx_17
                    
                    if (rdx_17.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        var_12c_1.d = var_70
                        break
                    
                    rdx_16 = *(r9_1 + (rdx_17 << 2) + 4)
                    int32_t var_130_2 = 0xffffffff
                    
                    if (rdx_16 != 0)
                        goto label_141d25e7b
        
        int64_t* var_c0_1 = &var_98
        int128_t var_a8_1 = 0xffffffff
        var_12c_1.d = var_70
        int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_b8_1 = var_140_1.o
        int128_t var_108 = var_c0_1.o
        int128_t var_f8_1 = var_b8_1
        int64_t var_e8_1 = temp0_3
        
        while (true)
            int64_t rcx_20 = sx.q(var_f8_1:0xc.d)
            char rax_25
            
            if (rcx_20.d != ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d
                    || var_f8_1.q != &var_88)
                rax_25 = 0
            else
                rax_25 = 1
            
            int64_t* rdx_19 = var_108.q
            
            if (rax_25 == 0 || rdx_19 != &var_98)
                rax_25 = 1
            else
                rax_25 = 0
            
            if (rax_25 == 0)
                break
            
            int64_t rdi_4 = sx.q(*(*rdx_19 + rcx_20 * 0xc))
            int32_t rax_27
            int64_t* rcx_24
            void** rdx_24
            int32_t r8_5
            int32_t* r9_2
            
            if (rdi_4.d s< 0)
                int64_t* rbx_6 = *(r15 + 0x118) + r14_2
                int32_t var_d0
                sub_1409afd50(rbx_6, &var_d0)
                r8_5 = rdi_4.d
                rax_27 = var_d0
                int32_t* var_c8
                r9_2 = var_c8
                rcx_24 = rbx_6
                *var_c8 = rdi_4.d
                var_c8[1] = 0xffffffff
                rdx_24 = &var_120
            else
                int32_t* rbx_4 = *arg2 + (rdi_4 << 2)
                int64_t* rdi_5 = r14_2 + *(r15 + 0x118)
                int32_t var_e0
                sub_1409afd50(rdi_5, &var_e0)
                rcx_24 = rdi_5
                int32_t* var_d8
                r9_2 = var_d8
                *var_d8 = *rbx_4
                rax_27 = var_e0
                var_d8[1] = 0xffffffff
                r8_5 = *var_d8
                void var_160
                rdx_24 = &var_160
            
            sub_1406da850(rcx_24, rdx_24, r8_5, r9_2, rax_27, nullptr)
            var_f8_1:8.d &= not.d(var_108:0xc.d)
            sub_14059bdd0(&var_108:8)
        
        int32_t var_50_2 = 0
        
        if (var_58_1 != 0)
            sub_140a74f90(var_58_1)
        
        int64_t var_90_1
        var_90_1.d = 0
        int32_t var_68_2 = 0xffffffff
        int32_t var_64_2 = 0
        sub_14059a8e0(&var_88, 0)
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        int64_t rcx_31 = var_98
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        rdi_3 = var_110_1 + 0x50
        r12_2 = var_118_1 + 4
        var_110_1 = rdi_3
        r13_1 += 1
        var_118_1 = r12_2
        rax_31 = (*(*(r15 + 0xf8) + 0x48))(r15 + 0xf8)
    while (r13_1 s< rax_31)
    rdi_2 = var_170

int64_t result = sub_141d256e0(r15, data_143f37078, arg2)
int64_t rcx_34 = var_158

if (rcx_34 != 0)
    result = sub_140a74f90(rcx_34)

if (rdi_2 != 0)
    result = sub_140a74f90(rdi_2)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
