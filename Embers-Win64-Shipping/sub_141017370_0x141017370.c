// 函数: sub_141017370
// 地址: 0x141017370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockExclusive(arg1 + 0xb0)
int32_t var_f4 = 1
int32_t var_f8 = 0
int32_t r11 = *(arg1 + 0x38)
void* r9 = arg1 + 0x20
void* var_f0 = r9
int32_t rcx_1 = 0
int32_t var_e8 = 0xffffffff
int32_t r8 = 0
int32_t var_e4 = 0
int32_t var_e0 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    int32_t var_e4_2
    
    if (rdx_3 != 0)
    label_14101742b:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_f4_1 = rax_8
        int32_t arg_8 = temp0_2
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_e4_1 = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_e4_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            int32_t var_e0_1 = rcx_1
            var_f8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_e8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14101742b
        
        var_e4_2 = r11

int64_t var_a0 = 0xffffffff
double var_b0[0x2] = var_f8.o
double zmm1[0x2] = var_b0
double var_90[0x2] = (arg1 + 0x10).o
int64_t var_70 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q

if (0 s< r11)
    int32_t i = zmm1[1]:4.d
    
    do
        void* rdi_1 = *(sx.q(i) * 0x310 + *var_90[0] + 0x300)
        
        if (rdi_1 != 0)
            void* rbx_1 = *(rdi_1 + 0x18)
            
            if (rbx_1 != 0)
                int64_t* rcx_4 = *(rbx_1 + 0x38)
                
                if (rcx_4 == 0)
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0x28))
                        *(rbx_1 + 0x28) = 0
                        z_1 = true
                    else
                        *(rbx_1 + 0x28)
                        z_1 = false
                    
                    if (not(z_1))
                        sub_141060480(rbx_1 + 8)
                        *(rbx_1 + 0x28) -= 1
                    
                    goto label_14101752d
                
                if ((*(*rcx_4 + 0x18))(rcx_4, rbx_1) == 0)
                label_14101752d:
                    
                    if (*(rbx_1 + 0x38) != 0)
                        int64_t* rcx_8 = *(rbx_1 + 0x30)
                        (*(*rcx_8 + 0x20))(rcx_8, 0xffffffff, 0)
                        *(rbx_1 + 0x38) = 0
                else
                    sub_141060480(rbx_1 + 8)
                    *(rbx_1 + 0x28) -= 1
                    int64_t* rcx_6 = *(rbx_1 + 0x30)
                    
                    if (rcx_6 != 0)
                        (*(*rcx_6 + 0x10))(rcx_6)
                    
                    *(rbx_1 + 0x38) = 0
                
                int64_t* rcx_9 = *(rdi_1 + 0x18)
                
                if (rcx_9 != 0)
                    (*(*rcx_9 + 0x10))(rcx_9, 1)
                
                *(rdi_1 + 0x18) = 0
            
            int64_t* rcx_10 = *(rdi_1 + 0x10)
            
            if (rcx_10 != 0)
                (*(*rcx_10 + 0x10))(rcx_10)
            
            j_sub_140a74f90(rdi_1)
        
        zmm1[1].d &= not.d(var_90[1]:4.d)
        sub_14059bdd0(&var_90[1])
        i = zmm1[1]:4.d
    while (i s< *(zmm1[0] i+ 0x18))

sub_14101ed50(arg1 + 0x10, 0)
ReleaseSRWLockExclusive(arg1 + 0xb0)
AcquireSRWLockExclusive(arg1 + 0xb8)
int32_t r11_1 = *(arg1 + 0x88)
void* r9_1 = arg1 + 0x70
int32_t var_d4 = 1
int32_t rcx_16 = 0
int32_t var_d8 = 0
int32_t r8_1 = 0
void* var_d0 = r9_1
int32_t var_c8 = 0xffffffff
int64_t var_c4 = 0

if (r11_1 != 0)
    void* rax_23 = *(r9_1 + 0x10)
    
    if (rax_23 != 0)
        r9_1 = rax_23
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11_1 - 1)
    int32_t rdx_11 = *r9_1
    
    if (rdx_11 != 0)
    label_141017648:
        int32_t rax_30 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
        int32_t var_d4_1 = rax_30
        int32_t arg_10 = temp0_4
        int32_t r15_1
        
        if (rax_30 == 0)
            r15_1 = 0x20
        else
            r15_1 = 0x1f - temp0_4
        
        var_c4.d = r8_1 - r15_1 + 0x1f
        
        if (r8_1 - r15_1 + 0x1f s> r11_1)
            var_c4.d = r11_1
    else
        while (true)
            int64_t rdx_12 = sx.q(rcx_16)
            r8_1 += 0x20
            rcx_16 += 1
            var_c4:4.d = r8_1
            var_d8 = rcx_16
            
            if (rdx_12.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
            int32_t var_c8_1 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141017648
        
        var_c4.d = r11_1

double var_60[0x2] = var_d8.o
int128_t var_50 = 0xffffffff
int64_t* var_b8
var_b8.o = (arg1 + 0x60).o
var_a0 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_58
var_b0 = var_58

if (0 s< r11_1)
    int32_t i_1 = var_a0:4.d
    
    do
        void* rdi_2 = *(sx.q(i_1) * 0x70 + *var_b8 + 0x60)
        
        if (rdi_2 != 0)
            void* rbx_2 = *(rdi_2 + 0x18)
            
            if (rbx_2 != 0)
                int64_t* rcx_19 = *(rbx_2 + 0x38)
                
                if (rcx_19 == 0)
                    bool z_2
                    
                    if (0 == *(rbx_2 + 0x28))
                        *(rbx_2 + 0x28) = 0
                        z_2 = true
                    else
                        *(rbx_2 + 0x28)
                        z_2 = false
                    
                    if (not(z_2))
                        sub_141060480(rbx_2 + 8)
                        *(rbx_2 + 0x28) -= 1
                    
                    goto label_141017737
                
                if ((*(*rcx_19 + 0x18))(rcx_19, rbx_2) == 0)
                label_141017737:
                    
                    if (*(rbx_2 + 0x38) != 0)
                        int64_t* rcx_23 = *(rbx_2 + 0x30)
                        (*(*rcx_23 + 0x20))(rcx_23, 0xffffffff, 0)
                        *(rbx_2 + 0x38) = 0
                else
                    sub_141060480(rbx_2 + 8)
                    *(rbx_2 + 0x28) -= 1
                    int64_t* rcx_21 = *(rbx_2 + 0x30)
                    
                    if (rcx_21 != 0)
                        (*(*rcx_21 + 0x10))(rcx_21)
                    
                    *(rbx_2 + 0x38) = 0
                
                int64_t* rcx_24 = *(rdi_2 + 0x18)
                
                if (rcx_24 != 0)
                    (*(*rcx_24 + 0x10))(rcx_24, 1)
                
                *(rdi_2 + 0x18) = 0
            
            int64_t* rcx_25 = *(rdi_2 + 0x10)
            
            if (rcx_25 != 0)
                (*(*rcx_25 + 0x10))(rcx_25)
            
            j_sub_140a74f90(rdi_2)
        
        var_a0.d &= not.d(var_b0[0]:4.d)
        sub_14059bdd0(&var_b0)
        i_1 = var_a0:4.d
    while (i_1 s< *(var_b0[1] i+ 0x18))

sub_14101ecb0(arg1 + 0x60, 0)
return ReleaseSRWLockExclusive(arg1 + 0xb8) __tailcall
