// 函数: sub_141d1fb30
// 地址: 0x141d1fb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* rbx = arg1
int32_t** r14 = arg4
int32_t var_6c = 0x80
int64_t i_2 = sx.q((*(*arg1 + 0x48))())
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int32_t var_68 = 0xffffffff
sub_140909f10(&var_98, r14)
int64_t i_1 = i_2
int32_t r12 = 0

if (i_2.d s> 0)
    int64_t r13_1 = 0
    int64_t var_178_1 = 0
    int64_t i
    
    do
        void* rcx_1 = rbx[1]
        int32_t* rbx_1 = *r14
        int64_t r14_1 = 0
        int64_t* rsi_1 = rcx_1 + r13_1
        uint64_t r15_2 = sx.q(r14[1].d) << 2 u>> 2
        
        if (rbx_1 u> &rbx_1[r14[1]])
            r15_2 = 0
        
        if (r15_2 != 0)
            do
                int32_t r9 = rsi_1[1].d
                int64_t r8 = sx.q(*rbx_1)
                
                if (r9 != *(rsi_1 + 0x34))
                    void* r10_1 = &rsi_1[7]
                    void* rcx_2 = rsi_1[8]
                    int64_t r11_1 = sx.q(rsi_1[9].d - 1)
                    
                    if (rcx_2 != 0)
                        r10_1 = rcx_2
                    
                    int64_t rax_9 = r8 & r11_1
                    void* rdx_1 = r10_1 + (rax_9 << 2)
                    int32_t j = *(r10_1 + (rax_9 << 2))
                    
                    if (j != 0xffffffff)
                        int64_t rdi = *rsi_1
                        
                        do
                            int64_t rcx_3 = sx.q(j) * 3
                            
                            if (*(rdi + (rcx_3 << 2)) == r8.d)
                                int64_t rdx_3 = sx.q(*rdx_1)
                                
                                if (r9 - *(rsi_1 + 0x34) != 0)
                                    int64_t rcx_4 = rdx_3 * 3
                                    int64_t rax_12 = sx.q(*(rdi + (rcx_4 << 2) + 8)) & r11_1
                                    void* rcx_5 = r10_1 + (rax_12 << 2)
                                    int32_t k = *(r10_1 + (rax_12 << 2))
                                    
                                    while (k != 0xffffffff)
                                        if (k == rdx_3.d)
                                            *rcx_5 = *(rdi + (rcx_4 << 2) + 4)
                                            break
                                        
                                        int64_t k_1 = sx.q(k)
                                        k = *(rdi + ((k_1 * 3 + 1) << 2))
                                        rcx_5 = rdi + ((k_1 * 3 + 1) << 2)
                                
                                sub_14090a460(rsi_1, rdx_3.d, 1)
                                break
                            
                            j = *(rdi + ((rcx_3 + 1) << 2))
                            rdx_1 = rdi + ((rcx_3 + 1) << 2)
                        while (j != 0xffffffff)
                
                rbx_1 = &rbx_1[1]
                r14_1 += 1
            while (r14_1 != r15_2)
            
            rcx_1 = arg1[1]
        
        int64_t var_e8
        __builtin_memset(&var_e8, 0, 0x2c)
        int32_t var_bc_1 = 0x80
        int32_t var_b8_1 = 0xffffffff
        int32_t var_b4_1 = 0
        int64_t var_a8_1 = 0
        int32_t var_a0_1 = 0
        sub_140780cc0(&var_e8, sx.q(r12) * 0x50 + rcx_1)
        
        if (rsi_1[1].d != *(rsi_1 + 0x34))
            int32_t rax_16 = *(rsi_1 + 0xc)
            rsi_1[1].d = 0
            
            if (rax_16 s< 0 && rax_16 != 0)
                sub_140638cc0(rsi_1, 0)
            
            rsi_1[6].d = 0xffffffff
            *(rsi_1 + 0x34) = 0
            sub_140774790(&rsi_1[2])
            int64_t rcx_13 = sx.q(rsi_1[9].d)
            void* rdi_1 = &rsi_1[7]
            void* rax_17 = *(rdi_1 + 8)
            
            if (rcx_13 s> 0)
                if (rax_17 != 0)
                    rdi_1 = rax_17
                
                __builtin_memset(rdi_1, 0xffffffff, rcx_13 << 2)
        
        int64_t var_d8
        int64_t* var_190_1 = &var_d8
        int32_t rcx_14 = 0
        int32_t var_198_1 = 0
        int32_t rdi_2 = 0
        int32_t var_194_1 = 1
        int32_t var_188_1 = 0xffffffff
        int64_t var_184_1 = 0
        int64_t* var_c8
        int32_t var_c0
        
        if (var_c0 != 0)
            int64_t* r8_2 = &var_d8
            
            if (var_c8 != 0)
                r8_2 = var_c8
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(var_c0 - 1)
            int32_t rdx_9 = *r8_2
            
            if (rdx_9 != 0)
            label_141d1fe27:
                int32_t rax_25 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_25)
                int32_t var_194_2 = rax_25
                int32_t rax_26
                
                if (rax_25 == 0)
                    rax_26 = 0x20
                else
                    rax_26 = 0x1f - temp0_2
                
                int32_t rax_27 = rdi_2 - rax_26 + 0x1f
                
                if (rax_27 s> var_c0)
                    rax_27 = var_c0
                
                var_184_1.d = rax_27
            else
                while (true)
                    int64_t rdx_10 = sx.q(rcx_14)
                    rdi_2 += 0x20
                    rcx_14 += 1
                    var_184_1:4.d = rdi_2
                    var_198_1 = rcx_14
                    
                    if (rdx_10.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                        var_184_1.d = var_c0
                        break
                    
                    rdx_9 = *(r8_2 + (rdx_10 << 2) + 4)
                    int32_t var_188_2 = 0xffffffff
                    
                    if (rdx_9 != 0)
                        goto label_141d1fe27
        
        int64_t* var_110_1 = &var_e8
        int128_t var_f8_1 = 0xffffffff
        var_184_1.d = var_c0
        int64_t zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        int128_t var_108_1 = var_198_1.o
        int128_t var_148 = var_110_1.o
        int128_t var_138_1 = var_108_1
        int64_t var_128_1 = zmm2
        
        while (true)
            int64_t rcx_17 = sx.q(var_138_1:0xc.d)
            char rax_29
            
            if (rcx_17.d != ((0xffffffff << (var_c0.b & 0x1f)).q u>> 0x20).d
                    || var_138_1.q != &var_d8)
                rax_29 = 0
            else
                rax_29 = 1
            
            int64_t* rdx_12 = var_148.q
            
            if (rax_29 == 0 || rdx_12 != &var_e8)
                rax_29 = 1
            else
                rax_29 = 0
            
            if (rax_29 == 0)
                break
            
            int64_t rdi_4 = sx.q(*(*rdx_12 + rcx_17 * 0xc))
            int32_t rdi_5 = rdi_4.d - *(*arg2 + (rdi_4 << 2))
            int32_t var_120
            sub_1409afd50(rsi_1, &var_120)
            int32_t rax_30 = var_120
            char* var_1a0_1 = nullptr
            int32_t* var_118
            *var_118 = rdi_5
            var_118[1] = 0xffffffff
            void var_160
            sub_1406da850(rsi_1, &var_160, rdi_5, var_118, rax_30, var_1a0_1)
            var_138_1:8.d &= not.d(var_148:0xc.d)
            sub_14059bdd0(&var_148:8)
        
        int32_t var_a0_2 = 0
        
        if (var_a8_1 != 0)
            sub_140a74f90(var_a8_1)
        
        int64_t var_e0_1
        var_e0_1.d = 0
        int32_t var_b8_2 = 0xffffffff
        int32_t var_b4_2 = 0
        sub_14059a8e0(&var_d8, 0)
        
        if (var_c8 != 0)
            sub_140a74f90(var_c8)
        
        int64_t rcx_28 = var_e8
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        rbx = arg1
        r13_1 = var_178_1 + 0x50
        r14 = arg4
        r12 += 1
        i = i_1
        i_1 -= 1
        var_178_1 = r13_1
    while (i != 1)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_90
bool cond:0 = var_90:4.d == 0
var_90.d = 0

if (not(cond:0))
    sub_140638cc0(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_88
void* result = sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_33 = var_98

if (rcx_33 != 0)
    result = sub_140a74f90(rcx_33)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
