// 函数: sub_140aa2570
// 地址: 0x140aa2570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint64_t rax_2 = zx.q(arg1[2].d)
int32_t i = 0
int32_t var_108 = 0
uint64_t result

if (rax_2.d s> 0)
    int32_t rdx_2 = ((rax_2 << 2) + 4).d
    uint64_t var_100 = 0
    int32_t var_f8_1 = 0
    
    if (rdx_2 s> 0)
        sub_1405947f0(&var_100, rdx_2)
        rax_2 = zx.q(arg1[2].d)
    
    if (rax_2.d s> 0)
        do
            sub_140a20ba0(&var_100, u"    ", 4)
            i += 1
        while (i s< arg1[2].d)
    
    sub_140a20ba0(&var_100, &data_142e64658, 3)
    int64_t* rsi_1 = arg2[1]
    int64_t r13_1 = *arg2
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    int32_t rax_6 = arg2[2].d
    int64_t* var_c0
    int64_t* rax_8
    int64_t rdx_3
    int32_t r15_1
    
    if (var_f8_1 s> 1)
        void var_a0
        rax_8 = sub_140a95a30(&var_a0, &var_100)
        r15_1 = 2
        rdx_3 = *rax_8
    else
        sub_1405d9400()
        int64_t* rcx_4 = data_143cd6fe0
        rdx_3 = data_143cd6fd8
        int64_t var_c8 = rdx_3
        var_c0 = rcx_4
        
        if (rcx_4 != 0)
            rcx_4[1].d += 1
        
        r15_1 = 1
        int32_t var_b8_1 = data_143cd6fe8
        rax_8 = &var_c8
    
    int64_t* rcx_6 = rax_8[1]
    int64_t var_e0 = rdx_3
    
    if (rcx_6 != 0)
        rcx_6[1].d += 1
    
    int32_t rax_9 = rax_8[2].d
    
    if ((r15_1.b & 2) != 0)
        r15_1 &= 0xfffffffd
        int64_t* var_98
        
        if (var_98 != 0)
            var_98[1].d -= 1
            
            if (var_98[1].d == 1)
                (**var_98)(var_98)
                int32_t rax_12 = *(var_98 + 0xc)
                *(var_98 + 0xc) -= 1
                
                if (rax_12 == 1)
                    (*(*var_98 + 8))(var_98, 1)
    
    if ((r15_1.b & 1) != 0 && var_c0 != 0)
        var_c0[1].d -= 1
        
        if (var_c0[1].d == 1)
            (**var_c0)(var_c0)
            int32_t rax_16 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (rax_16 == 1)
                (*(*var_c0 + 8))(var_c0, 1)
    
    int32_t var_d0_2 = rax_9 | 2
    char* var_70
    char** rax_18 = sub_140a96390(&var_70, &var_e0)
    int32_t var_60_1 = 4
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    char var_38_1 = 1
    int32_t* var_f0 = nullptr
    int32_t var_e8_1 = 1
    sub_1405a4b40(&var_f0, 1, 0)
    int32_t* rcx_14 = var_f0
    *rcx_14 = var_60_1
    int64_t var_58
    *(rcx_14 + 8) = var_58
    *(rcx_14 + 8) = var_58
    rcx_14[2] = var_58.d
    *(rcx_14 + 8) = var_58
    rcx_14[0xa].b = 0
    
    if (var_38_1 != 0)
        *(rcx_14 + 0x10) = r13_1
        *(rcx_14 + 0x18) = rsi_1
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        rcx_14[8] = rax_6
        rcx_14[0xa].b = 1
    
    char* var_b0 = *rax_18
    void* rax_27 = rax_18[1]
    void* var_a8_1 = rax_27
    
    if (rax_27 != 0)
        *(rax_27 + 8) += 1
    
    void var_88
    int64_t* rax_28 = sub_140aac870(&var_88, &var_b0, &var_f0)
    int64_t* rbx_3 = rax_28[1]
    int32_t var_108_1
    var_108_1.q = *rax_28
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    int32_t r13_2 = rax_28[2].d
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t rax_31 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (rax_31 == 1)
                (*(*var_80 + 8))(var_80, 1)
    
    sub_140596f50(&var_f0)
    
    if (var_38_1 != 0)
        char var_38_2 = 0
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t rax_35 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (rax_35 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
    
    int64_t* r15_4 = rax_18[1]
    
    if (r15_4 != 0)
        r15_4[1].d -= 1
        
        if (r15_4[1].d == 1)
            (**r15_4)(r15_4)
            int32_t rax_39 = *(r15_4 + 0xc)
            *(r15_4 + 0xc) -= 1
            
            if (rax_39 == 1)
                (*(*r15_4 + 8))(r15_4, 1)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t rax_43 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rax_43 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    int64_t rsi_2 = sx.q(arg1[1].d)
    int32_t rax_45 = (rsi_2 + 1).d
    arg1[1].d = rax_45
    
    if (rax_45 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    result = *arg1
    int64_t rdx_8 = rsi_2 * 3
    *(result + (rdx_8 << 3)) = var_108_1.q
    *(result + (rdx_8 << 3) + 8) = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    *(result + (rdx_8 << 3) + 0x10) = r13_2
    
    if (rbx_3 != 0)
        result = zx.q(rbx_3[1].d)
        rbx_3[1].d -= 1
        
        if (result.d == 1)
            (**rbx_3)(rbx_3)
            result = zx.q(*(rbx_3 + 0xc))
            *(rbx_3 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rbx_3 + 8))(rbx_3, 1)
    
    if (rcx_6 != 0)
        result = zx.q(rcx_6[1].d)
        rcx_6[1].d -= 1
        
        if (result.d == 1)
            result = (**rcx_6)(rcx_6)
            int32_t rdi_1 = *(rcx_6 + 0xc)
            *(rcx_6 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*rcx_6 + 8))(rcx_6, zx.q(rdi_1))
    
    uint64_t rcx_33 = var_100
    
    if (rcx_33 != 0)
        result = sub_140a74f90(rcx_33)
else
    int64_t rbx = sx.q(arg1[1].d)
    int32_t rax_3 = (rbx + 1).d
    arg1[1].d = rax_3
    
    if (rax_3 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    int64_t rcx = rbx * 3
    int64_t rdx_1 = *arg1
    *(rdx_1 + (rcx << 3)) = *arg2
    void* rax_5 = arg2[1]
    *(rdx_1 + (rcx << 3) + 8) = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    result = zx.q(arg2[2].d)
    *(rdx_1 + (rcx << 3) + 0x10) = result.d

__security_check_cookie(rax_1 ^ &var_128)
return result
