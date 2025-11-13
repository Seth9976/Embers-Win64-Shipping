// 函数: sub_140ba3a60
// 地址: 0x140ba3a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x4fa) = 1
void* var_b8 = arg1
int32_t var_b0 = 0
int32_t var_ac = 2
sub_140bb6ac0(*(arg1 + 0x1d8) + 0x340, &var_b8)
void* rax = *(arg1 + 0x50)
*(arg1 + 0x238) = 7
*(arg1 + 0x340) = -1
*(arg1 + 0x348) = -1

if (*(rax + 0x295) == 0)
    void* const rcx_2
    
    if (*(rax + 0x2a2) == 0)
        rcx_2 = nullptr
    else
        rcx_2 = *(rax + 0x2d8)
    
    sub_140ba9200(rcx_2)

sub_140b9db90(arg1)
void* r14 = arg1 + 0x490
int32_t r10 = *(r14 + 0x28)
void* rbx = r14 + 0x10
int32_t r12 = *(arg1 + 0x23c)
int32_t rcx_4 = 0
int64_t var_c4 = 0
int32_t r8 = 0
var_b8 = *(arg1 + 0x14)
int32_t var_d8 = 0
int32_t var_d4 = 1
void* var_d0 = rbx
int32_t var_c8 = 0xffffffff

if (r10 != 0)
    void* rax_2 = *(rbx + 0x10)
    void* r9_1 = rbx
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_140ba3b89:
        int32_t rax_9 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_d4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_c4.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r10)
            var_c4.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_4)
            r8 += 0x20
            rcx_4 += 1
            var_c4:4.d = r8
            var_d8 = rcx_4
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_c8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140ba3b89
        
        var_c4.d = r10

int32_t rdx_5 = *(r14 + 0x28)
void* var_a8 = r14
uint128_t var_a0 = var_d8.o
int32_t rsi = 0xffffffff << (rdx_5.b & 0x1f)
uint128_t zmm0 = var_a8.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int128_t var_90 = 0xffffffff
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
uint128_t zmm1 = var_a0
var_a0:8.d = rsi
var_a0:0xc.d = rdx_5
uint128_t var_68 = zmm0
uint128_t var_58 = zmm1

if (rdx_5 != r10)
    void* rax_12 = *(rbx + 0x10)
    void* r11_1 = rbx
    
    if (rax_12 != 0)
        r11_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *(r11_1 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_9 != 0)
    label_140ba3c53:
        int32_t rax_19 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rdi_1
        
        if (rax_19 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_a0:0xc.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r10)
            var_a0:0xc.d = r10
    else
        while (true)
            int64_t rcx_9 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r11_1 + (rcx_9 << 2) + 4)
            var_a0:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140ba3c53
        
        var_a0:0xc.d = r10
    
    rbx = var_d0

uint64_t rax_22 = var_a0:8.q u>> 0x20
uint64_t arg_10 = rax_22

while (true)
    int64_t rcx_11 = sx.q(var_58:0xc.d)
    
    if (rcx_11.d != rax_22.d || var_58.q != rbx)
        rax_22.b = 0
    else
        rax_22.b = 1
    
    int64_t* rdx_10 = var_68.q
    
    if (rax_22.b == 0 || rdx_10 != r14)
        rax_22.b = 1
    else
        rax_22.b = 0
    
    if (rax_22.b == 0)
        break
    
    int64_t rdx_11 = *rdx_10
    int64_t rcx_12 = rcx_11 * 5
    void* rbx_1 = *(arg1 + 0x1d8)
    int32_t r15_1 = *(rdx_11 + (rcx_12 << 2) + 8)
    uint64_t var_78_1 = *(rdx_11 + (rcx_12 << 2))
    int32_t rdi_2 = var_78_1.d
    int32_t rsi_1 = var_78_1:4.d
    
    if ((rsi_1 != 0 | sub_140b5b8a0(rdi_2, 0) == 0) != 0 && r15_1 != 0
            && *(rbx_1 + 0x1c0) != *(rbx_1 + 0x1ec))
        int32_t rax_25 = sub_140b5ead0(rdi_2)
        void* r8_4 = rbx_1 + 0x1f0
        void* rcx_15 = *(r8_4 + 8)
        
        if (rcx_15 != 0)
            r8_4 = rcx_15
        
        int32_t i = *(r8_4 + (((sx.q(*(rbx_1 + 0x200)) - 1) & sx.q(rax_25 + rsi_1)) << 2))
        
        if (i != 0xffffffff)
            int64_t r9_5 = *(rbx_1 + 0x1b8)
            
            do
                int64_t i_1 = sx.q(i)
                int64_t r8_5 = i_1 * 3
                
                if (*(r9_5 + (r8_5 << 3)) == var_78_1)
                    if (i != 0xffffffff)
                        void* rcx_17 = r9_5 + i_1 * 0x18
                        
                        if (rcx_17 != 0)
                            void* r14_1 = *(rcx_17 + 8)
                            
                            if (r14_1 != 0 && *(r14_1 + 0x23c) == r15_1)
                                if (*(r14_1 + 0x448) != *(r14_1 + 0x474))
                                    int32_t rax_31 = sub_140b5ead0(var_b8.d) + var_b8:4.d
                                    void* r10_1 = r14_1 + 0x478
                                    void* rdx_16 = *(r14_1 + 0x480)
                                    int64_t r11_2 = sx.q(*(r14_1 + 0x488) - 1)
                                    
                                    if (rdx_16 != 0)
                                        r10_1 = rdx_16
                                    
                                    int64_t rax_33 = sx.q(rax_31) & r11_2
                                    void* rdx_17 = r10_1 + (rax_33 << 2)
                                    int32_t j = *(r10_1 + (rax_33 << 2))
                                    
                                    if (j != 0xffffffff)
                                        int64_t r8_6 = *(r14_1 + 0x440)
                                        
                                        do
                                            int64_t rcx_21 = sx.q(j) * 5
                                            
                                            if (*(r8_6 + (rcx_21 << 2) + 8) == r12)
                                                int64_t rdx_19 = sx.q(*rdx_17)
                                                
                                                if (*(r14_1 + 0x448) != *(r14_1 + 0x474))
                                                    int64_t r9_6 = rdx_19 * 5
                                                    int64_t rax_37 =
                                                        sx.q(*(r8_6 + (r9_6 << 2) + 0x10)) & r11_2
                                                    void* rcx_22 = r10_1 + (rax_37 << 2)
                                                    int32_t k = *(r10_1 + (rax_37 << 2))
                                                    
                                                    while (k != 0xffffffff)
                                                        if (k == rdx_19.d)
                                                            *rcx_22 = *(r8_6 + (r9_6 << 2) + 0xc)
                                                            break
                                                        
                                                        int64_t k_1 = sx.q(k)
                                                        k = *(r8_6 + ((k_1 * 5 + 3) << 2))
                                                        rcx_22 = r8_6 + ((k_1 * 5 + 3) << 2)
                                                
                                                sub_1405c3870(r14_1 + 0x440, rdx_19.d, 1)
                                                break
                                            
                                            j = *(r8_6 + 0xc + (rcx_21 << 2))
                                            rdx_17 = r8_6 + 0xc + (rcx_21 << 2)
                                        while (j != 0xffffffff)
                                
                                sub_140a9e570(r14_1 + 0x3f0, &var_a8)
                                int64_t* rdi_3 = var_a0.q
                                *rdi_3 = var_b8
                                rdi_3[1].d = r12
                                *(rdi_3 + 0xc) = 0xffffffff
                                int64_t rbx_3 = *rdi_3
                                void arg_8
                                sub_140ba2440(r14_1 + 0x3f0, &arg_8, 
                                    (rbx_3 u>> 0x20).d + sub_140b5ead0(rbx_3.d), rdi_3, var_a8.d, 
                                    nullptr)
                                sub_140b9db90(r14_1)
                            
                            r14 = arg1 + 0x490
                    
                    break
                
                i = *(r9_5 + (r8_5 << 3) + 0x10)
            while (i != 0xffffffff)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
    rax_22 = arg_10
    rbx = var_d0

return sub_140aa8b70(r14, 0) __tailcall
