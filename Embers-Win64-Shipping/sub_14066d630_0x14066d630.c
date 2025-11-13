// 函数: sub_14066d630
// 地址: 0x14066d630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_b4 = 1
*arg2 = 0
int32_t* r9 = arg1 + 0x158
arg2[1] = 0
int32_t r10 = r9[6]
int32_t rcx = 0
int32_t var_b8 = 0
int32_t* var_b0 = r9
int32_t r8 = 0
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (r10 != 0)
    int32_t* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_14066d6d8:
        int32_t rax_7 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_b4_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r10)
            var_a4.d = r10
    else
        while (true)
            rcx += 1
            r8 += 0x20
            var_b8 = rcx
            var_a4:4.d = r8
            
            if (rcx s> ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            var_a8 = 0xffffffff
            rdx_2 = r9[sx.q(rcx)]
            
            if (rdx_2 != 0)
                goto label_14066d6d8
        
        var_a4.d = r10

double zmm2[0x2] = var_a8.o
double var_38[0x2] = zmm2
int96_t zmm1 = var_b8.o[1].12
double var_78[0x2] = (arg1 + 0x148).o
uint32_t rax_11 = (zmm2[0] u>> 0x20).d
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int96_t var_68 = zmm1

if (rax_11 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t var_98 = 0
        int64_t rdx_3 = sx.q(i) * 5
        int64_t rcx_2 = *var_78[0]
        int32_t rbx_1 = *(rcx_2 + (rdx_3 << 3) + 8)
        int64_t* r14_1 = rcx_2 + (rdx_3 << 3)
        int64_t rdi_1 = *r14_1
        sub_1405a4c70(&var_98, sbb.d(rdx_3.d, rdx_3.d, rbx_1 != 0) + 3 + rbx_1, 0)
        memcpy(var_98, rdi_1, rbx_1 * 2)
        sub_140a20ba0(&var_98, &data_142d85f5c, 2)
        int64_t r12_1 = var_98
        int32_t rbx_2 = r14_1[3].d
        var_98 = 0
        int32_t var_90_1
        var_90_1.q = 0
        int64_t rdi_2
        int32_t r15_1
        
        if (rbx_1 s> 1)
            int32_t rdi_3 = rbx_2 - 1
            
            if (rbx_2 == 0)
                rdi_3 = 0
            
            int32_t rax_16
            
            if (rbx_1 == 0)
                rax_16 = rbx_1 + 1
            
            if (rbx_1 != 0 || rdi_3 == 0)
                rax_16 = 0
            
            int64_t var_88 = r12_1
            int32_t rdx_11 = rax_16 + rbx_1 + rdi_3
            r12_1 = 0
            int32_t var_8c
            
            if (rdx_11 s> var_8c)
                sub_1405947f0(&var_88, rdx_11)
            
            sub_140a20ba0(&var_88, r14_1[2], rdi_3)
            rdi_2 = var_88
            rbx_2 = rbx_1
            r15_1 = var_8c
            var_88 = 0
            int32_t var_80_1
            var_80_1.q = 0
        else
            int64_t r14_2 = r14_1[2]
            rdi_2 = 0
            var_b8.q = 0
            var_b0.d = rbx_2
            
            if (rbx_2 != 0)
                sub_1405a4c70(&var_b8, rbx_2, 0)
                rdi_2 = var_b8.q
                memcpy(rdi_2, r14_2, rbx_2 * 2)
                r15_1 = var_b0:4.d
                rbx_2 = var_b0.d
            else
                r15_1 = 0
        
        int64_t r14_3 = sx.q(arg2[1].d)
        int32_t rax_17 = (r14_3 + 1).d
        arg2[1].d = rax_17
        
        if (rax_17 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        var_b8.q = 0
        int64_t* rax_20 = (r14_3 << 4) + *arg2
        var_b0 = nullptr
        *rax_20 = rdi_2
        rax_20[1].d = rbx_2
        *(rax_20 + 0xc) = r15_1
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        var_68:8.d &= not.d(var_78[1]:4.d)
        sub_14059bdd0(&var_78[1])
        i = i_1
    while (i s< *(var_68.q + 0x18))

return arg2
