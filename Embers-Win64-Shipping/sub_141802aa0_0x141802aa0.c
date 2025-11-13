// 函数: sub_141802aa0
// 地址: 0x141802aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_b4 = 1
*arg2 = 0
int32_t* r9 = arg1 + 0xa0
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
    label_141802b48:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_a4.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_a4:4.d = r8
            var_b8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9[rdx_3 + 1]
            var_a8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141802b48
        
        var_a4.d = r10

double zmm2[0x2] = var_a8.o
double var_38[0x2] = zmm2
int96_t zmm1 = var_b8.o[1].12
double var_78[0x2] = (arg1 + 0x90).o
uint32_t rax_12 = (zmm2[0] u>> 0x20).d
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int96_t var_68 = zmm1

if (rax_12 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t var_98 = 0
        int64_t rdx_4 = sx.q(i) * 5
        int64_t rcx_2 = *var_78[0]
        int32_t rbx_1 = *(rcx_2 + (rdx_4 << 3) + 8)
        int64_t* r14_1 = rcx_2 + (rdx_4 << 3)
        int64_t rdi_1 = *r14_1
        sub_1405a4c70(&var_98, sbb.d(rdx_4.d, rdx_4.d, rbx_1 != 0) + 3 + rbx_1, 0)
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
            
            int32_t rax_17
            
            if (rbx_1 == 0)
                rax_17 = rbx_1 + 1
            
            if (rbx_1 != 0 || rdi_3 == 0)
                rax_17 = 0
            
            int64_t var_88 = r12_1
            int32_t rdx_12 = rax_17 + rdi_3 + rbx_1
            r12_1 = 0
            int32_t var_8c
            
            if (rdx_12 s> var_8c)
                sub_1405947f0(&var_88, rdx_12)
            
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
        int32_t rax_18 = (r14_3 + 1).d
        arg2[1].d = rax_18
        
        if (rax_18 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        var_b8.q = 0
        int64_t* rax_21 = (r14_3 << 4) + *arg2
        var_b0 = nullptr
        *rax_21 = rdi_2
        rax_21[1].d = rbx_2
        *(rax_21 + 0xc) = r15_1
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        var_68:8.d &= not.d(var_78[1]:4.d)
        sub_14059bdd0(&var_78[1])
        i = i_1
    while (i s< *(var_68.q + 0x18))

return arg2
