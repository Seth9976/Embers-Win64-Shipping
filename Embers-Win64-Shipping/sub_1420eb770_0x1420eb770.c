// 函数: sub_1420eb770
// 地址: 0x1420eb770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_60
sub_14066d570(arg1, &var_60, arg2)
int64_t rax = sx.q(var_60)
int32_t rsi = 0
void* const rdx_3

if (rax.d == 0xffffffff)
    rdx_3 = nullptr
else
    rdx_3 = (rax << 5) + *arg1

int64_t* result = rdx_3 + 8

if (rdx_3 == 0)
    result = nullptr

void* const r12

if (result == 0)
    r12 = nullptr
else
    r12 = *result

if (r12 != 0)
    int32_t* rdi_1 = arg1[0xa]
    var_60.q = arg2
    void* r14_1 = &rdi_1[sx.q(arg1[0xb].d) * 6]
    
    if (rdi_1 == r14_1)
    label_1420eb819:
        rdi_1 = nullptr
    else
        while (sub_140664af0(rdi_1, &var_60) == 0)
            rdi_1 = &rdi_1[6]
            
            if (rdi_1 == r14_1)
                goto label_1420eb819
    
    double var_88[0x2] = zx.o(0)
    uint64_t* rdi_2
    int64_t* r14_2
    
    if (rdi_1 == 0)
        uint64_t* rax_7 = j_sub_140a82f30(0x10)
        rdi_2 = rax_7
        
        if (rax_7 == 0)
            rdi_2 = nullptr
        else
            *rax_7 = 0
            rax_7[1] = 0
        
        int64_t* rax_8 = j_sub_140a82f30(0x18)
        r14_2 = rax_8
        
        if (rax_8 == 0)
            r14_2 = nullptr
        else
            rax_8[1].d = 1
            *(rax_8 + 0xc) = 1
            *r14_2 = &data_142ee2130
            r14_2[2] = rdi_2
        
        if (r14_2 == 0)
            r14_2 = var_88[1]
        else
            r14_2[1].d += 1
        
        int64_t r13_1 = sx.q(arg1[0xb].d)
        int32_t rax_9 = (r13_1 + 1).d
        arg1[0xb].d = rax_9
        
        if (rax_9 s> *(arg1 + 0x5c))
            sub_1405a4df0(&arg1[0xa])
        
        int64_t rax_10 = arg1[0xa]
        int64_t rcx_6 = r13_1 * 3
        *(rax_10 + (rcx_6 << 3)) = arg2
        *(rax_10 + (rcx_6 << 3) + 8) = rdi_2
        *(rax_10 + (rcx_6 << 3) + 0x10) = r14_2
    else
        var_88[0] = *(rdi_1 + 8)
        void* rax_4 = *(rdi_1 + 0x10)
        var_88[1] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        double zmm0[0x2] = var_88
        int64_t* rbx_1 = _mm_bsrli_si128(zx.o(0), 8).q
        var_88 = zmm0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        r14_2 = var_88[1]
        rdi_2 = var_88[0]
    
    int32_t rdx_9 = *(r12 + 8) - *(r12 + 0x34) + rdi_2[1].d
    
    if (rdx_9 s> *(rdi_2 + 0xc))
        sub_1405a5410(rdi_2, rdx_9)
    
    int32_t r9_1 = *(r12 + 0x28)
    void* r8_2 = r12 + 0x10
    var_88[0].d = 0
    int32_t rcx_8 = 0
    var_88[0]:4.d = 1
    var_88[1] = r8_2
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    int32_t var_70_1 = 0
    
    if (r9_1 != 0)
        void* rax_11 = *(r8_2 + 0x10)
        
        if (rax_11 != 0)
            r8_2 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r9_1 - 1)
        int32_t rdx_12 = *r8_2
        int32_t var_74_3
        
        if (rdx_12 != 0)
        label_1420eb9d6:
            int32_t rax_18 = neg.d(rdx_12) & rdx_12
            uint64_t rflags_1
            int32_t temp0_3
            temp0_3, rflags_1 = _bit_scan_reverse(rax_18)
            var_88[0]:4.d = rax_18
            int32_t rax_19
            
            if (rax_18 == 0)
                rax_19 = 0x20
            else
                rax_19 = 0x1f - temp0_3
            
            int32_t var_74_2 = rcx_8 - rax_19 + 0x1f
            
            if (rcx_8 - rax_19 + 0x1f s> r9_1)
                var_74_3 = r9_1
        else
            while (true)
                int64_t rdx_13 = sx.q(rsi)
                rcx_8 += 0x20
                rsi += 1
                var_70_1 = rcx_8
                var_88[0].d = rsi
                
                if (rdx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_12 = *(r8_2 + (rdx_13 << 2) + 4)
                var_78_1 = 0xffffffff
                
                if (rdx_12 != 0)
                    goto label_1420eb9d6
            
            var_74_3 = r9_1
    
    double zmm2[0x2] = var_78_1.o
    double var_38_1[0x2] = zmm2
    uint128_t zmm1 = var_88
    var_88 = r12.o
    result = zmm2[0] u>> 0x20
    int64_t var_68_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    var_78_1.o = zmm1
    
    if (result.d s< r9_1)
        int32_t i_1
        int32_t i = i_1
        
        do
            int64_t rbx_2 = sx.q(rdi_2[1].d)
            int64_t r15_1 = *var_88[0]
            int32_t rax_23 = (rbx_2 + 1).d
            rdi_2[1].d = rax_23
            
            if (rax_23 s> *(rdi_2 + 0xc))
                sub_1405a4f90(rdi_2)
            
            *(*rdi_2 + rbx_2 * 0x10) = *(r15_1 + sx.q(i) * 0x18)
            var_70_1 &= not.d(var_88[1]:4.d)
            sub_14059bdd0(&var_88[1])
            result = var_78_1.q
            i = i_1
        while (i s< result[3].d)
    
    if (r14_2 != 0)
        r14_2[1].d -= 1
        
        if (r14_2[1].d == 1)
            result = (**r14_2)(r14_2)
            int32_t temp5_1 = *(r14_2 + 0xc)
            *(r14_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                return (*(*r14_2 + 8))(r14_2, 1)

return result
