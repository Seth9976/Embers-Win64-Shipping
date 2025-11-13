// 函数: sub_14214abe0
// 地址: 0x14214abe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* result = arg1

if (data_143f4c9a8 == 0)
    sub_14213db70()

int32_t arg_10
sub_140a73990(&data_143a2eb50, &arg_10, *(arg2 + 0x18))
int64_t rax = sx.q(arg_10)
int16_t* r14 = nullptr
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x60 + data_143a2eb50

void* rbx_1 = rax_3 + 8

if (rax_3 == 0)
    rbx_1 = nullptr

if (rbx_1 == 0)
    *result = arg_18
else
    int16_t* var_70
    sub_140b63b70(&arg_18, &var_70)
    int32_t r10_1 = *(rbx_1 + 0x28)
    void* r9_1 = rbx_1 + 0x10
    int32_t var_94_1 = 1
    int32_t rcx_1 = 0
    int32_t var_98 = 0
    int32_t r8_1 = 0
    void* var_90 = r9_1
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r10_1 != 0)
        void* rax_4 = *(r9_1 + 0x10)
        
        if (rax_4 != 0)
            r9_1 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_14214ace8:
            int32_t rax_11 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
            int32_t var_94_2 = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_2
            
            var_84_1.d = r8_1 - rax_12 + 0x1f
            
            if (r8_1 - rax_12 + 0x1f s> r10_1)
                var_84_1.d = r10_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_1)
                r8_1 += 0x20
                rcx_1 += 1
                var_84_1:4.d = r8_1
                var_98 = rcx_1
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                var_88_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_14214ace8
            
            var_84_1.d = r10_1
    
    double zmm2_1[0x2] = var_88_1.o
    double var_48_1[0x2] = zmm2_1
    double var_58_1[0x2] = var_98.o
    var_98.o = rbx_1.o
    uint32_t rax_15 = (zmm2_1[0] u>> 0x20).d
    int64_t var_78_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    var_88_1.o = var_58_1
    
    if (rax_15 s>= r10_1)
    label_14214ada9:
        int16_t* rcx_6 = var_70
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        *result = arg_18
    else
        int32_t var_7c
        int32_t rbx_2 = var_7c
        
        while (true)
            int64_t* r15_1 = var_98.q
            int64_t* rdi = *r15_1 + sx.q(rbx_2) * 0x28
            
            if (sub_140a32a50(&var_70, rdi, 1) != 0)
                int32_t rax_24 = rdi[1].d
                int32_t rcx_7 = rax_24 - 1
                
                if (rax_24 == 0)
                    rcx_7 = 0
                
                int32_t var_68
                int32_t rsi_1 = var_68 - 1
                
                if (var_68 == 0)
                    rsi_1 = 0
                
                int32_t rdx_7
                
                if (rcx_7 s>= 0)
                    rdx_7 = rsi_1
                    
                    if (rcx_7 s< rsi_1)
                        rdx_7 = rcx_7
                else
                    rdx_7 = 0
                
                int64_t r10_2 = sx.q(rdx_7)
                
                if (sx.q(rcx_7) + 0x7fffffff s< r10_2)
                    rsi_1 = rdx_7
                else if (sx.q(rcx_7) + 0x7fffffff s< sx.q(rsi_1))
                    rsi_1 = rcx_7 + 0x7fffffff
                
                var_98.q = 0
                int16_t* r13_1 = &data_142d40450
                int16_t* const rax_26 = &data_142d40450
                
                if (var_68 != 0)
                    rax_26 = var_70
                
                int32_t rsi_2 = rsi_1 - rdx_7
                var_90.d = 0
                int32_t rdi_1 = 0
                void* r12_1 = &rax_26[r10_2]
                int32_t rax_27 = 0
                var_90:4.d = 0
                
                if (r12_1 != 0 && *r12_1 != 0 && rsi_2 s> 0)
                    if (rsi_2 + 1 s> 0)
                        sub_1405947f0(&var_98, rsi_2 + 1)
                        rax_27 = var_90:4.d
                        rdi_1 = var_90.d
                        r14 = var_98.q
                    
                    rdi_1 += rsi_2 + 1
                    var_90.d = rdi_1
                    
                    if (rdi_1 s> rax_27)
                        sub_140594770(&var_98)
                        rdi_1 = var_90.d
                        r14 = var_98.q
                    
                    UnDecorator::getReferenceType(r14, r12_1, rsi_2 * 2)
                    r14[sx.q(rdi_1) - 1] = 0
                
                int64_t rcx_11 = sx.q(rbx_2) * 5
                int64_t rax_30 = *r15_1
                int32_t rbx_3 = *(rax_30 + (rcx_11 << 3) + 0x18)
                int16_t* rbx_4
                
                if (rbx_3 s> 1)
                    int32_t rdi_3
                    
                    if (rdi_1 == 0)
                        rdi_3 = 0
                    else
                        rdi_3 = rdi_1 - 1
                    
                    int32_t rax_31
                    
                    if (rbx_3 == 0)
                        rax_31 = rbx_3 + 1
                    
                    if (rbx_3 != 0 || rdi_3 == 0)
                        rax_31 = 0
                    
                    int64_t rsi_3 = *(rax_30 + (rcx_11 << 3) + 0x10)
                    int32_t rcx_12 = rax_31 + rdi_3
                    var_98.q = 0
                    var_90.d = rbx_3
                    
                    if (rbx_3 != 0 || rcx_12 != 0)
                        sub_1405a4c70(&var_98, rbx_3 + rcx_12, 0)
                        memcpy(var_98.q, rsi_3, rbx_3 * 2)
                    else
                        var_90:4.d = 0
                    
                    sub_140a20ba0(&var_98, r14, rdi_3)
                    rbx_4 = var_98.q
                    rdi_1 = var_90.d
                    
                    if (r14 != 0)
                        sub_140a74f90(r14)
                else
                    rbx_4 = r14
                
                result = arg1
                
                if (rdi_1 != 0)
                    r13_1 = rbx_4
                
                sub_140b58260(result, r13_1, 1)
                
                if (rbx_4 != 0)
                    sub_140a74f90(rbx_4)
                
                int16_t* rcx_19 = var_70
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                break
            
            var_84_1:4.d &= not.d(var_90:4.d)
            sub_14059bdd0(&var_90)
            rbx_2 = var_7c
            
            if (rbx_2 s>= *(var_88_1.q + 0x18))
                result = arg1
                goto label_14214ada9

return result
