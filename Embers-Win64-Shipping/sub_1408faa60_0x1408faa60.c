// 函数: sub_1408faa60
// 地址: 0x1408faa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rbx = arg1
int64_t* r12 = *(rbx + 0x308)
void* r13_2 = &r12[sx.q(*(rbx + 0x310)) * 2]
void* rcx = nullptr
int64_t* r15 = nullptr
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int128_t zmm6 = zx.o(0)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
void* var_58 = nullptr
int32_t var_50 = 0
int64_t var_90
int32_t rdx

if (r12 != r13_2)
    void* rbx_1 = rbx + 0x380
    void* var_100_1 = rbx_1
    
    do
        int32_t var_108
        sub_1408f9e80(rbx_1, &var_108, r12)
        int64_t rax_2 = sx.q(var_108)
        void* const rax_4
        
        if (rax_2.d == 0xffffffff)
            rax_4 = nullptr
        else
            rax_4 = rax_2 * 0x68 + *rbx_1
        
        void* rsi_1 = rax_4 + 0x10
        
        if (rax_4 == 0)
            rsi_1 = nullptr
        
        if (rsi_1 != 0)
            int32_t r10_1 = *(rsi_1 + 0x28)
            int32_t var_124_1 = 1
            int32_t rcx_2 = 0
            int32_t var_128_1 = 0
            int32_t r8_2 = 0
            void* var_120_1 = rsi_1 + 0x10
            int32_t var_118_1 = 0xffffffff
            int64_t var_114_1 = 0
            
            if (r10_1 != 0)
                void* rax_5 = *(rsi_1 + 0x20)
                void* r9_1 = rsi_1 + 0x10
                
                if (rax_5 != 0)
                    r9_1 = rax_5
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r10_1 - 1)
                int32_t rdx_4 = *r9_1
                
                if (rdx_4 != 0)
                label_1408fabcb:
                    int32_t rax_12 = neg.d(rdx_4) & rdx_4
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
                    int32_t var_124_2 = rax_12
                    int32_t rax_13
                    
                    if (rax_12 == 0)
                        rax_13 = 0x20
                    else
                        rax_13 = 0x1f - temp0_2
                    
                    var_114_1.d = r8_2 - rax_13 + 0x1f
                    
                    if (r8_2 - rax_13 + 0x1f s> r10_1)
                        var_114_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_5 = sx.q(rcx_2)
                        r8_2 += 0x20
                        rcx_2 += 1
                        var_114_1:4.d = r8_2
                        var_128_1 = rcx_2
                        
                        if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                        int32_t var_118_2 = 0xffffffff
                        
                        if (rdx_4 != 0)
                            goto label_1408fabcb
                    
                    var_114_1.d = r10_1
            
            rdx = *(rsi_1 + 0x28)
            int128_t var_b0_1 = 0xffffffff
            int32_t rdi_1 = 0xffffffff << (rdx.b & 0x1f)
            int128_t var_c0_1 = var_128_1.o
            int32_t r8_5 = rdx s>> 5
            int32_t r9_3 = rdx & 0xffffffe0
            int64_t var_d0_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int32_t var_118_3 = rdi_1
            var_114_1.d = rdx
            int128_t var_f0 = rsi_1.o
            int128_t var_e0_1 = var_c0_1
            
            if (rdx != r10_1)
                void* rax_15 = *(rsi_1 + 0x20)
                void* r11_1 = rsi_1 + 0x10
                
                if (rax_15 != 0)
                    r11_1 = rax_15
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r10_1 - 1)
                rdx = *(r11_1 + (sx.q(r8_5) << 2)) & rdi_1
                
                if (rdx != 0)
                label_1408faca3:
                    int32_t rax_22 = neg.d(rdx) & rdx
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
                    int32_t rax_23
                    
                    if (rax_22 == 0)
                        rax_23 = 0x20
                    else
                        rax_23 = 0x1f - temp0_4
                    
                    var_114_1.d = r9_3 - rax_23 + 0x1f
                    
                    if (r9_3 - rax_23 + 0x1f s> r10_1)
                        var_114_1.d = r10_1
                else
                    while (true)
                        int64_t rcx_7 = sx.q(r8_5)
                        r9_3 += 0x20
                        r8_5 += 1
                        
                        if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx = *(r11_1 + (rcx_7 << 2) + 4)
                        var_118_3 = 0xffffffff
                        
                        if (rdx != 0)
                            goto label_1408faca3
                    
                    var_114_1.d = r10_1
            
            while (true)
                int64_t rcx_9 = sx.q(var_e0_1:0xc.d)
                int64_t rax_25 = var_f0.q
                
                if (rcx_9.d == (var_118_3.q u>> 0x20).d && var_e0_1.q == rsi_1 + 0x10
                        && rax_25 == rsi_1)
                    break
                
                int32_t var_104 = 0
                int64_t* rbx_4 = (rcx_9 << 5) + *rax_25
                int64_t r9_5 = *rbx_4
                uint32_t rcx_11 = (r9_5 u>> 4).d
                int32_t rdx_10 = (0x9e3779b9 - rcx_11) ^ rcx_11 << 8
                int32_t r10_4 = neg.d(rdx_10 + rcx_11) ^ rdx_10 u>> 0xd
                int32_t rcx_14 = (rcx_11 - rdx_10 - r10_4) ^ r10_4 u>> 0xc
                int32_t rdx_13 = (rdx_10 - rcx_14 - r10_4) ^ rcx_14 << 0x10
                int32_t r10_7 = (r10_4 - rdx_13 - rcx_14) ^ rdx_13 u>> 5
                int32_t rcx_17 = (rcx_14 - rdx_13 - r10_7) ^ r10_7 u>> 3
                int32_t rdx_16 = (rdx_13 - rcx_17 - r10_7) ^ rcx_17 << 0xa
                int32_t r10_10 = (r10_7 - rdx_16 - rcx_17) ^ rdx_16 u>> 0xf
                int32_t* rax_46
                
                if (var_90.d == var_64)
                labelid_4:
                    rax_46 = sub_1408f7ca0(&var_98, r10_10, rbx_4, &var_104)
                else
                    void var_60
                    void* rcx_18 = &var_60
                    
                    if (var_58 != 0)
                        rcx_18 = var_58
                    
                    int32_t rax_45 = *(rcx_18 + ((sx.q(var_50 - 1) & sx.q(r10_10)) << 2))
                    
                    if (rax_45 == 0xffffffff)
                    label_1408fade6:
                        rax_46 = sub_1408f7ca0(&var_98, r10_10, rbx_4, &var_104)
                    else
                        int64_t r8_6 = var_98
                        int64_t rdx_20
                        
                        while (true)
                            rdx_20 = sx.q(rax_45) * 3
                            
                            if (*(r8_6 + (rdx_20 << 3)) == r9_5)
                                break
                            
                            rax_45 = *(r8_6 + (rdx_20 << 3) + 0x10)
                            
                            if (rax_45 == 0xffffffff)
                                goto label_1408fade6_2
                        
                        if (rax_45 == 0xffffffff)
                        label_1408fade6_1:
                            rax_46 = sub_1408f7ca0(&var_98, r10_10, rbx_4, &var_104)
                        else
                            void* rax_49 = r8_6 + (rdx_20 << 3)
                            
                            if (rax_49 == 0)
                            label_1408fade6_2:
                                rax_46 = sub_1408f7ca0(&var_98, r10_10, rbx_4, &var_104)
                            else
                                rax_46 = rax_49 + 8
                
                int128_t zmm0_1
                zmm0_1.d = rbx_4[1].d.d f+ *rax_46
                *rax_46 = zmm0_1.d
                
                if (not(zmm0_1.d f<= zmm6.d))
                    r15 = *rbx_4
                    zmm6 = zmm0_1
                
                var_e0_1:8.d &= not.d(var_f0:0xc.d)
                sub_14059bdd0(&var_f0:8)
            
            rbx_1 = var_100_1
        
        r12 = &r12[2]
    while (r12 != r13_2)
    
    rcx = var_58
    rbx = arg1

int64_t* rax_50 = *(rbx + 0x3d0)

if (r15 != rax_50 && r15 != 0)
    if (rax_50 != 0)
        sub_1408fbcb0(rax_50, 0)
    
    rdx.b = 1
    *(rbx + 0x3d0) = r15
    sub_1408fbcb0(r15, rdx.b)
    rcx = var_58

int32_t var_50_1 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = var_90:4.d == 0
var_90.d = 0

if (not(cond:0))
    sub_1405a5130(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_88
void* result = sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_27 = var_98

if (rcx_27 != 0)
    result = sub_140a74f90(rcx_27)

__security_check_cookie(rax_1 ^ &var_148)
return result
