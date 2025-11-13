// 函数: sub_140938bf0
// 地址: 0x140938bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg3

if (sub_14092d020(arg1) == 0)
    *(*r13 + 0x58) = 3
    return sub_140926490(arg4, arg2, 0)

void** const var_90 = &data_142e1f860
int128_t var_88 = zx.o(0)
int16_t* var_78
(*(*arg2 + 0x30))(arg2, &var_78)
void var_68
(*(*arg2 + 0x10))(arg2, &var_68)
var_90 = &data_142e1f860
void* rcx_8
int32_t r8

if (arg1[6].d == *(arg1 + 0x5c))
label_140938d1f:
    rcx_8 = nullptr
else
    int32_t var_70
    int32_t rcx_3
    int16_t* rdx_3
    
    if (var_70 == 0)
        rdx_3 = &data_142d40450
        rcx_3 = 0
    else
        rdx_3 = var_78
        rcx_3 = var_70 - 1
    
    void* rbx_1 = arg1[0xd]
    void* rdi_1 = &arg1[0xc]
    int32_t rax_7
    rax_7, r8 = sub_1405969c0(rcx_3, rdx_3)
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    int32_t rbx_2 = *(rdi_1 + ((sx.q(rax_7) & (sx.q(arg1[0xe].d) - 1)) << 2))
    
    if (rbx_2 == 0xffffffff)
    label_140938d1f_1:
        rcx_8 = nullptr
    else
        int64_t* rdx_4 = arg1[5]
        
        while (true)
            char rax_12
            rax_12, r8 = (*rdx_4[sx.q(rbx_2) * 9])(&rdx_4[sx.q(rbx_2) * 9], &var_90)
            
            if (rax_12 != 0)
                break
            
            rdx_4 = arg1[5]
            rbx_2 = rdx_4[sx.q(rbx_2) * 9 + 8].d
            
            if (rbx_2 == 0xffffffff)
                goto label_140938d1f_2
        
        if (rbx_2 == 0xffffffff)
        label_140938d1f_2:
            rcx_8 = nullptr
        else
            rcx_8 = arg1[5] + sx.q(rbx_2) * 0x48

int64_t* r14 = rcx_8 + 0x30

if (rcx_8 == 0)
    r14 = nullptr

if (r14 != 0)
    int32_t rcx_10 = 0
    void* rbx_4 = *r13 + 8
    int32_t var_d8 = 0
    int32_t r10_1 = *(rbx_4 + 0x28)
    void* r9 = rbx_4 + 0x10
    int32_t var_d4_1 = 1
    r8 = 0
    int32_t var_d0_1 = r9.d
    int32_t var_c8_1 = 0xffffffff
    int64_t var_c4_1 = 0
    
    if (r10_1 != 0)
        void* rax_14 = *(r9 + 0x10)
        
        if (rax_14 != 0)
            r9 = rax_14
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_8 = *r9
        
        if (rdx_8 != 0)
        label_140938dd8:
            int32_t rax_21 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_21)
            int32_t var_d4_2 = rax_21
            int32_t rax_22
            
            if (rax_21 == 0)
                rax_22 = 0x20
            else
                rax_22 = 0x1f - temp0_2
            
            int32_t rax_23 = r8 - rax_22 + 0x1f
            var_c4_1.d = rax_23
            
            if (rax_23 s> r10_1)
                var_c4_1.d = r10_1
        else
            while (true)
                int64_t rdx_9 = sx.q(rcx_10)
                r8 += 0x20
                rcx_10 += 1
                var_c4_1:4.d = r8
                var_d8 = rcx_10
                
                if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r9 + (rdx_9 << 2) + 4)
                var_c8_1 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_140938dd8
            
            var_c4_1.d = r10_1
    
    double zmm2_1[0x2] = var_c8_1.o
    int64_t rsi_1 = sx.q(r14[1].d)
    double var_58_1[0x2] = var_d8.o
    uint32_t rax_25 = (zmm2_1[0] u>> 0x20).d
    double var_48_1[0x2] = zmm2_1
    double var_b8[0x2] = rbx_4.o
    int64_t var_98_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    
    if (rax_25 s< r10_1)
        int32_t i = var_58_1[1]:4.d
        
        do
            sub_140b63b70(*var_b8[0] + sx.q(i) * 0x28, &var_d8)
            int64_t rbx_5 = 0
            
            if (rsi_1 s> 0)
                int64_t* rdi_3 = nullptr
                
                do
                    int16_t* const rdx_12 = &data_142d40450
                    int64_t rax_28 = *r14
                    
                    if (var_d0_1 != 0)
                        rdx_12 = var_d8.q
                    
                    int16_t* const rcx_14
                    
                    if (*(rdi_3 + rax_28 + 8) == 0)
                        rcx_14 = &data_142d40450
                    else
                        rcx_14 = *(rdi_3 + rax_28)
                    
                    if (sub_140a54510(rcx_14, rdx_12) == 0)
                        (*(*arg1 + 0x50))(arg1, arg2, &var_d8)
                        break
                    
                    rbx_5 += 1
                    rdi_3 = &rdi_3[3]
                while (rbx_5 s< rsi_1)
            
            int64_t rcx_16 = var_d8.q
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            var_58_1[1].d &= not.d(var_b8[1]:4.d)
            sub_14059bdd0(&var_b8[1])
            i = var_58_1[1]:4.d
        while (i s< *(var_58_1[0] i+ 0x18))
        
        r13 = arg3
    
    r8.b = 1
    *(*r13 + 0x58) = 2
else
    r8.b = 0
    *(*r13 + 0x58) = 3

int64_t result = sub_140926490(arg4, arg2, r8)
int16_t* rcx_19 = var_78

if (rcx_19 != 0)
    result = sub_140a74f90(rcx_19)

int64_t* rcx_20 = var_88:8.q

if (rcx_20 != 0)
    int32_t temp2_1 = *(rcx_20 + 0xc)
    *(rcx_20 + 0xc) -= 1
    
    if (temp2_1 == 1)
        return (*(*rcx_20 + 8))(rcx_20, 1)

return result
