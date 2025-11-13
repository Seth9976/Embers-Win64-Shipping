// 函数: sub_1405bab40
// 地址: 0x1405bab40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t rdx = 0
void* rax = &data_143cd6048
int16_t* var_98
int64_t arg_8
int64_t rbx_1
int64_t rsi
int16_t* const r15_1

while (true)
    r15_1 = &data_142d40450
    
    if (arg2 == *rax)
        rsi.b = 1
    else
        rdx += 1
        rax += 8
        
        if (rdx u< 2)
            continue
        else
            int64_t* rcx = data_143cd6040
            int64_t* rax_2 = (*(*rcx + 0xa0))(rcx, &var_98)
            int16_t* rdx_2
            
            if (rax_2[1].d == 0)
                rdx_2 = &data_142d40450
            else
                rdx_2 = *rax_2
            
            sub_140b58260(&arg_8, rdx_2, 1)
            int16_t* rcx_2 = var_98
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            int64_t temp0_1 = arg_8
            rsi.b = arg2 == temp0_1
            
            if (arg2 != temp0_1)
                rbx_1 = arg_10
                break
    
    int64_t* rcx_3 = data_143cd6040
    int64_t* rax_4 = (*(*rcx_3 + 0xa0))(rcx_3, &var_98)
    int16_t* rdx_4
    
    if (rax_4[1].d == 0)
        rdx_4 = &data_142d40450
    else
        rdx_4 = *rax_4
    
    sub_140b58260(&arg_8, rdx_4, 1)
    int16_t* rcx_5 = var_98
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    rbx_1 = arg_8
    arg_10 = rbx_1
    break

uint64_t r12
r12.b = 0
*(arg1 + 0x3c)
uint32_t result
int64_t* rdx_10

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_1405bac8a:
    rdx_10 = nullptr
else
    arg_8 = rbx_1
    int32_t rax_7 = sub_140b5ead0(rbx_1.d) + arg_8:4.d
    void* r8 = arg1 + 0x40
    void* rcx_7 = *(r8 + 8)
    
    if (rcx_7 != 0)
        r8 = rcx_7
    
    result = *(r8 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_7)) << 2))
    
    if (result == 0xffffffff)
    label_1405bac8a_1:
        rdx_10 = nullptr
    else
        while (true)
            rdx_10 = (sx.q(result) << 5) + *(arg1 + 8)
            
            if (*rdx_10 == rbx_1)
                break
            
            result = rdx_10[3].d
            
            if (result == 0xffffffff)
                goto label_1405bac8a_2
        
        if (result == 0xffffffff)
        label_1405bac8a_2:
            rdx_10 = nullptr

void* rcx_8 = &rdx_10[1]

if (rdx_10 == 0)
    rcx_8 = nullptr

if (rcx_8 == 0)
    if (rsi.b == 0)
        if (arg3 != 0)
            sub_140b63b70(&arg_10, &var_98)
            int32_t var_b8 = 0
            int32_t r11_1 = *(arg1 + 0x80)
            int32_t var_b4_1 = 1
            int32_t rcx_11 = 0
            void* var_b0_1 = arg1 + 0x68
            int32_t r8_2 = 0
            int32_t var_a8_1 = 0xffffffff
            int64_t var_a4_1 = 0
            
            if (r11_1 != 0)
                void* rax_9 = *(arg1 + 0x78)
                void* r9 = arg1 + 0x68
                
                if (rax_9 != 0)
                    r9 = rax_9
                
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(r11_1 - 1)
                int32_t rdx_14 = *r9
                
                if (rdx_14 != 0)
                label_1405bad68:
                    int32_t rax_16 = neg.d(rdx_14) & rdx_14
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
                    int32_t var_b4_2 = rax_16
                    int32_t rax_17
                    
                    if (rax_16 == 0)
                        rax_17 = 0x20
                    else
                        rax_17 = 0x1f - temp0_2
                    
                    var_a4_1.d = r8_2 - rax_17 + 0x1f
                    
                    if (r8_2 - rax_17 + 0x1f s> r11_1)
                        var_a4_1.d = r11_1
                else
                    while (true)
                        int64_t rdx_15 = sx.q(rcx_11)
                        r8_2 += 0x20
                        rcx_11 += 1
                        var_a4_1:4.d = r8_2
                        var_b8 = rcx_11
                        
                        if (rdx_15.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_14 = *(r9 + (rdx_15 << 2) + 4)
                        var_a8_1 = 0xffffffff
                        
                        if (rdx_14 != 0)
                            goto label_1405bad68
                    
                    var_a4_1.d = r11_1
            
            int32_t rdx_16 = *(arg1 + 0x80)
            double zmm2_1[0x2] = var_a8_1.o
            double var_48_1[0x2] = zmm2_1
            int32_t rsi_1 = 0xffffffff << (rdx_16.b & 0x1f)
            int128_t var_58_1 = var_b8.o
            int32_t r8_5 = rdx_16 s>> 5
            int32_t r9_2 = rdx_16 & 0xffffffe0
            int64_t var_68_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
            int32_t var_a8_2 = rsi_1
            var_a4_1.d = rdx_16
            int128_t var_88 = (arg1 + 0x58).o
            int128_t var_78_1 = var_58_1
            
            if (rdx_16 != r11_1)
                void* rax_19 = *(arg1 + 0x78)
                void* r10_1 = arg1 + 0x68
                
                if (rax_19 != 0)
                    r10_1 = rax_19
                
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(r11_1 - 1)
                int32_t rdx_20 = *(r10_1 + (sx.q(r8_5) << 2)) & rsi_1
                
                if (rdx_20 != 0)
                label_1405bae32:
                    int32_t rax_26 = neg.d(rdx_20) & rdx_20
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
                    int32_t rbx_2
                    
                    if (rax_26 == 0)
                        rbx_2 = 0x20
                    else
                        rbx_2 = 0x1f - temp0_4
                    
                    var_a4_1.d = r9_2 - rbx_2 + 0x1f
                    
                    if (r9_2 - rbx_2 + 0x1f s> r11_1)
                        var_a4_1.d = r11_1
                else
                    while (true)
                        int64_t rcx_16 = sx.q(r8_5)
                        r9_2 += 0x20
                        r8_5 += 1
                        
                        if (rcx_16.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_20 = *(r10_1 + (rcx_16 << 2) + 4)
                        var_a8_2 = 0xffffffff
                        
                        if (rdx_20 != 0)
                            goto label_1405bae32
                    
                    var_a4_1.d = r11_1
            
            while (true)
                int64_t rax_28 = sx.q(var_78_1:0xc.d)
                int64_t* rdx_21 = var_88.q
                
                if (rax_28.d == (var_a8_2.q u>> 0x20).d && var_78_1.q == arg1 + 0x68
                        && rdx_21 == arg1 + 0x58)
                    break
                
                int64_t rcx_18 = rax_28 * 3
                int64_t rax_29 = *rdx_21
                int32_t* rdx_22 = &var_b8
                int32_t* rdi_1 = rax_29 + (rcx_18 << 3)
                
                if (arg_10 == *(rax_29 + (rcx_18 << 3)))
                    int64_t* rcx_34 = data_143cd6040
                    int16_t** rax_45 = (*(*rcx_34 + 0xa0))(rcx_34, rdx_22)
                    
                    if (rax_45[1].d != 0)
                        r15_1 = *rax_45
                    
                    sub_140b58260(&arg_8, r15_1, 1)
                    int64_t rcx_36 = var_b8.q
                    
                    if (rcx_36 != 0)
                        sub_140a74f90(rcx_36)
                    
                    int64_t* rcx_37 = *(rdi_1 + 8)
                    r12 = zx.q((*(*rcx_37 + 0x10))(rcx_37, arg_8, arg4))
                    break
                
                int64_t* rax_31 = sub_140b63b70(rdi_1, rdx_22)
                bool cond:5_1 = rax_31[1].d == 0
                int64_t var_c8 = 0
                var_c8 = *rax_31
                *rax_31 = 0
                int32_t rcx_21 = rax_31[1].d
                int32_t rcx_22 = *(rax_31 + 0xc)
                rax_31[1] = 0
                int32_t rdx_24 = rcx_21
                int32_t rax_32
                rax_32.b = cond:5_1
                int32_t rcx_23 = rcx_22
                int32_t r8_7 = rdx_24 + 1 + rax_32
                
                if (r8_7 s> rcx_23)
                    sub_1405947f0(&var_c8, r8_7)
                    rcx_23 = rcx_22
                    rdx_24 = rcx_21
                
                int32_t rbx_3 = rdx_24 - 1
                
                if (rdx_24 s<= 0)
                    rbx_3 = 0
                
                int32_t rax_33
                rax_33.b = rdx_24 s<= 0
                int32_t rax_35 = rax_33 + 1 + rdx_24
                int32_t var_c0_2 = rax_35
                
                if (rax_35 s> rcx_23)
                    sub_140594770(&var_c8)
                
                int64_t rcx_26 = sx.q(rbx_3)
                *(var_c8 + (rcx_26 << 1)) = 0x2e
                *(var_c8 + (rcx_26 << 1) + 2) = 0
                int64_t rcx_27 = var_b8.q
                
                if (rcx_27 != 0)
                    sub_140a74f90(rcx_27)
                
                if (sub_140a2fba0(&var_98, &var_c8, 1) != 0)
                    int32_t var_90
                    
                    if (var_90 != 0)
                        r15_1 = var_98
                    
                    int64_t rbx_4 = **(rdi_1 + 8)
                    int64_t* rax_42 = sub_140b58260(&arg_8, r15_1, 1)
                    char rax_43 = (*(rbx_4 + 0x10))(*(rdi_1 + 8), *rax_42, arg4)
                    int64_t rcx_33 = var_c8
                    r12 = zx.q(rax_43)
                    
                    if (rcx_33 != 0)
                        sub_140a74f90(rcx_33)
                    
                    break
                
                int64_t rcx_29 = var_c8
                
                if (rcx_29 != 0)
                    sub_140a74f90(rcx_29)
                
                var_78_1:8.d &= not.d(var_88:0xc.d)
                sub_14059bdd0(&var_88:8)
            
            int16_t* rcx_38 = var_98
            
            if (rcx_38 != 0)
                sub_140a74f90(rcx_38)
        
        return zx.d(r12.b)
    
    *arg4 = 0
    result.b = 1
else
    result.b = 1
    *arg4 = *(rcx_8 + 8)

return result
