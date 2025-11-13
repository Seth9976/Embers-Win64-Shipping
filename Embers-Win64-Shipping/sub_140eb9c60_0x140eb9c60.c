// 函数: sub_140eb9c60
// 地址: 0x140eb9c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
char var_1c8 = 1
int32_t var_1b0 = 0
int32_t r10 = *(arg1 + 0x430)
void* r9 = arg1 + 0x418
int32_t var_1ac = 1
void* var_1a8 = r9
int32_t rcx = 0
int32_t var_1a0 = 0xffffffff
int32_t r8 = 0
int32_t var_19c = 0
int32_t var_198 = 0

if (r10 != 0)
    void* rax_2 = *(r9 + 0x10)
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    int32_t var_19c_2
    
    if (rdx_3 != 0)
    label_140eb9d1b:
        int32_t rax_9 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_1ac_1 = rax_9
        int32_t var_158_1 = temp0_1
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_1
        
        int32_t var_19c_1 = rcx - rax_10 + 0x1f
        
        if (rcx - rax_10 + 0x1f s> r10)
            var_19c_2 = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_198_1 = rcx
            var_1b0 = r8
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_1a0_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140eb9d1b
        
        var_19c_2 = r10

void* var_b0 = arg1 + 0x408
int128_t var_98 = 0xffffffff
double var_a8[0x2] = var_1b0.o
double var_180[0x2] = var_b0.o
double result = 0.0
int64_t var_160 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
uint64_t r15_1

if (0 s< r10)
    int32_t i = var_a8[1]:4.d
    
    do
        double rsi_1 = var_180[0]
        int64_t rdi_2 = sx.q(i) * 0x30
        int64_t* rcx_6
        
        if (sub_140ab3dc0(*rsi_1 + 0x10 + rdi_2) == 0)
            void* rbx_1 = *rsi_1
            uint64_t rax_18 = sub_140ac6680(arg1 + 0x478)
            int64_t* rax_19 = sub_140ac6680(rbx_1 + 0x10 + rdi_2)
            int16_t* rdx_7
            
            if (*(rax_18 + 8) == 0)
                rdx_7 = &data_142d40450
            else
                rdx_7 = *rax_18
            
            int16_t var_1d8
            var_1d8.d = 0xffffffff
            bool cond:2_1 = sub_140a23cf0(rax_19, rdx_7, 1, 0, var_1d8) == 0xffffffff
            rcx_6 = *(rdi_2 + *rsi_1)
            
            if (cond:2_1)
                char var_108 = data_1439ae51d
                int64_t var_100_1 = 0
                int32_t var_f8_1 = 0
                char var_107_1 = 1
                (*(*rcx_6 + 0x1d8))(rcx_6, &var_108)
                r15_1 = zx.q(var_1c8)
            else
                char var_120 = data_1439ae51c
                int64_t var_118_1 = 0
                int32_t var_110_1 = 0
                char var_11f_1 = 1
                (*(*rcx_6 + 0x1d8))(rcx_6, &var_120)
                r15_1.b = 0
                var_1c8 = 0
        else
            bool cond:1_1 = sub_140ab3dc0(arg1 + 0x478) == 0
            rcx_6 = *(rdi_2 + *rsi_1)
            char* rdx_6
            
            if (cond:1_1)
                char var_138
                rdx_6 = &var_138
                var_138 = data_1439ae51d
                int64_t var_130_1 = 0
                int32_t var_128_1 = 0
                char var_137_1 = 1
            else
                char var_150
                rdx_6 = &var_150
                var_150 = data_1439ae51c
                int64_t var_148_1 = 0
                int32_t var_140_1 = 0
                char var_14f_1 = 1
            
            (*(*rcx_6 + 0x1d8))(rcx_6, rdx_6)
            r15_1 = zx.q(var_1c8)
        var_a8[1].d &= not.d(var_180[1]:4.d)
        sub_14059bdd0(&var_180[1])
        result = var_a8[0]
        i = var_a8[1]:4.d
    while (i s< *(result i+ 0x18))

if ((0 s>= r10 || r15_1.b != 0) && *(arg1 + 0x458) != 0 && *(arg1 + 0x468) != 0)
    int64_t var_1c0 = 0
    int32_t var_1b8_1 = 0
    sub_1405947f0(&var_1c0, 0x10)
    int32_t rax_28 = var_1b8_1 + 0x10
    var_1b8_1 = rax_28
    
    if (rax_28 s> 0)
        sub_140594770(&var_1c0)
    
    sub_1405a7220(var_1c0, 0x10, "No Results: {0}", 0x10, 0x3f)
    int64_t* rbx_2 = *(arg1 + 0x480)
    int64_t rdi_3 = *(arg1 + 0x478)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int32_t r15_2 = *(arg1 + 0x488)
    char* var_70
    char** rax_30 = sub_140a96390(&var_70, sub_140aae2f0(&var_b0, &var_1c0))
    int32_t var_60_1 = 4
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    char var_38_1 = 1
    int32_t* var_190 = nullptr
    int32_t var_188_1 = 1
    sub_1405a4b40(&var_190, 1, 0)
    int32_t* rcx_17 = var_190
    *rcx_17 = var_60_1
    int64_t var_58
    *(rcx_17 + 8) = var_58
    *(rcx_17 + 8) = var_58
    rcx_17[2] = var_58.d
    *(rcx_17 + 8) = var_58
    rcx_17[0xa].b = 0
    
    if (var_38_1 != 0)
        *(rcx_17 + 0x10) = rdi_3
        *(rcx_17 + 0x18) = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        rcx_17[8] = r15_2
        rcx_17[0xa].b = 1
    
    char* var_c0 = *rax_30
    void* rax_38 = rax_30[1]
    void* var_b8_1 = rax_38
    
    if (rax_38 != 0)
        *(rax_38 + 8) += 1
    
    void var_88
    int64_t* rax_39 = sub_140aac870(&var_88, &var_c0, &var_190)
    int64_t var_f0 = *rax_39
    int64_t* rcx_20 = rax_39[1]
    
    if (rcx_20 != 0)
        rcx_20[1].d += 1
    
    int32_t var_e0_1 = rax_39[2].d
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t rax_43 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (rax_43 == 1)
                (*(*var_80 + 8))(var_80, 1)
    
    sub_140596f50(&var_190)
    
    if (var_38_1 != 0)
        char var_38_2 = 0
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_47 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_47 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* rdi_6 = rax_30[1]
    
    if (rdi_6 != 0)
        rdi_6[1].d -= 1
        
        if (rdi_6[1].d == 1)
            (**rdi_6)(rdi_6)
            int32_t rax_51 = *(rdi_6 + 0xc)
            *(rdi_6 + 0xc) -= 1
            
            if (rax_51 == 1)
                (*(*rdi_6 + 8))(rdi_6, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rax_55 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_55 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    sub_140f8d4f0(*(arg1 + 0x458), &var_f0)
    
    if (rcx_20 != 0)
        rcx_20[1].d -= 1
        
        if (rcx_20[1].d == 1)
            (**rcx_20)(rcx_20)
            int32_t rax_59 = *(rcx_20 + 0xc)
            *(rcx_20 + 0xc) -= 1
            
            if (rax_59 == 1)
                (*(*rcx_20 + 8))(rcx_20, 1)
    
    double rbx_4 = var_a8[0]
    
    if (rbx_4 != 0)
        int32_t rax_61 = *(rbx_4 i+ 8)
        *(rbx_4 i+ 8) -= 1
        
        if (rax_61 == 1)
            (**rbx_4)(rbx_4)
            int32_t r14_1 = *(rbx_4 i+ 0xc)
            *(rbx_4 i+ 0xc) -= 1
            
            if (r14_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, zx.q(r14_1))
    
    int64_t rcx_35 = var_1c0
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    int64_t* rcx_36 = *(arg1 + 0x468)
    char var_d8 = data_1439ae51c
    char var_d7_1 = 1
    int64_t var_d0_1 = 0
    int32_t var_c8_1 = 0
    result = (*(*rcx_36 + 0x1d8))(rcx_36, &var_d8)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
