// 函数: sub_14205d6f0
// 地址: 0x14205d6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_b4 = 1
*arg1 = 0
void* r9 = &data_143a2e2e0
arg1[1] = 0
int32_t r10 = (data_143a2e2f8).d
int32_t rcx = 0
int32_t var_b8 = 0
int32_t r12 = 0
int32_t var_b0 = 0x43a2e2e0
int32_t r8 = 0
int32_t var_a8 = 0xffffffff
int32_t var_a4 = 0
int32_t var_a0 = 0

if (r10 != 0)
    void* rax_1 = data_143a2e2f0
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_14205d798:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t rax_10 = rcx - rax_9 + 0x1f
        
        if (rax_10 s> r10)
            rax_10 = r10
        
        int32_t var_a4_2 = rax_10
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_a0_1 = rcx
            var_b8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                int32_t var_a4_1 = r10
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14205d798

double zmm2[0x2] = var_a8.o
uint32_t rax_12 = (zmm2[0] u>> 0x20).d
double var_38[0x2] = zmm2
int96_t zmm1 = var_b8.o[1].12
double var_78[0x2] = (&data_143a2e2d0).o
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int96_t var_68 = zmm1

if (rax_12 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        int32_t rax_13 = r12
        r12 += 1
        
        if (rax_13 s> 0)
            sub_140a20ba0(arg1, &data_142d8adc4, 2)
        
        double rbx_1 = var_78[0]
        int64_t rdi_2 = sx.q(i) << 5
        int32_t rcx_5 = sub_140b63b70(*rbx_1 + rdi_2, &var_b8)
        int64_t rax_14 = *rbx_1
        uint64_t r14_1 = 0
        uint64_t var_88 = 0
        int32_t rsi_1 = *(rax_14 + rdi_2 + 0x10)
        int64_t rbx_2 = *(rax_14 + rdi_2 + 8)
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_88, rsi_1, 0)
            r14_1 = var_88
            rcx_5 = memcpy(r14_1, rbx_2, rsi_1 * 2)
        else
            int32_t var_7c_1 = 0
        
        int64_t rbx_3 = var_b8.q
        uint64_t var_d8 = 0
        sub_1405a4c70(&var_d8, sbb.d(rcx_5, rcx_5, var_b0 != 0) + 2 + var_b0, 0)
        memcpy(var_d8, rbx_3, var_b0 * 2)
        sub_140a20ba0(&var_d8, &data_142e1462c, 1)
        uint64_t rdi_4 = var_d8
        var_d8 = 0
        int32_t var_d0_1
        var_d0_1.q = 0
        uint64_t rbx_4
        
        if (var_b0 s> 1)
            int32_t rsi_2
            
            if (rsi_1 == 0)
                rsi_2 = 0
            else
                rsi_2 = rsi_1 - 1
            
            int32_t rax_17
            
            if (var_b0 == 0)
                rax_17 = var_b0 + 1
            
            if (var_b0 != 0 || rsi_2 == 0)
                rax_17 = 0
            
            uint64_t var_c8 = rdi_4
            int32_t rdx_15 = rax_17 + var_b0 + rsi_2
            rdi_4 = 0
            int32_t var_cc
            
            if (rdx_15 s> var_cc)
                sub_1405947f0(&var_c8, rdx_15)
            
            sub_140a20ba0(&var_c8, r14_1, rsi_2)
            rbx_4 = var_c8
            rsi_1 = var_b0
            int32_t var_8c_2 = var_cc
            int32_t var_c0_1
            var_c0_1.q = 0
            var_c8 = 0
        else
            rbx_4 = 0
            uint64_t var_98 = 0
            
            if (rsi_1 != 0)
                sub_1405a4c70(&var_98, rsi_1, 0)
                rbx_4 = var_98
                memcpy(rbx_4, r14_1, rsi_1 * 2)
            else
                int32_t var_8c_1 = 0
        
        int32_t r8_9 = rsi_1 - 1
        
        if (rsi_1 == 0)
            r8_9 = 0
        
        sub_140a20ba0(arg1, rbx_4, r8_9)
        
        if (rbx_4 != 0)
            sub_140a74f90(rbx_4)
        
        if (rdi_4 != 0)
            sub_140a74f90(rdi_4)
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        int64_t rcx_21 = var_b8.q
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        var_68:8.d &= not.d(var_78[1]:4.d)
        sub_14059bdd0(&var_78[1])
        i = i_1
    while (i s< *(var_68.q + 0x18))

return arg1
