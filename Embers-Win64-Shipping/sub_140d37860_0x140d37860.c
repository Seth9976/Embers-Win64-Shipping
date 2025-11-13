// 函数: sub_140d37860
// 地址: 0x140d37860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t* r13
int64_t* var_28 = r13
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
uint32_t var_228
int64_t rax_1 = __security_cookie ^ &var_228
int16_t* rax_2 = *(arg2 + 0x20)
int32_t r14 = 0
int64_t r8
int64_t var_1f8 = r8
uint32_t rcx = zx.d(*rax_2)
*(arg2 + 0x20) = &rax_2[1]
uint32_t r12 = rcx
var_228 = rcx
int32_t rcx_1 = *(rax_2 + 2)
*(arg2 + 0x20) = &rax_2[3]
*(arg2 + 0x30) = 0
*(arg2 + 0x38) = 0
uint32_t rcx_2 = zx.d(rax_2[3].b)
*(arg2 + 0x20) = rax_2 + 7
(&data_143e1cd60)[zx.q(rcx_2)](*(arg2 + 0x18), arg3, 0, &data_143e1cd60, var_228)
int64_t rax_7 = *(arg2 + 0x38)
int64_t* r15 = *(arg2 + 0x30)

if (rax_7 == 0)
    int64_t var_220
    
    if (r15 == 0)
        var_220 = 0
        int32_t var_218_1 = 0
        sub_1405947f0(&var_220, 5)
        int32_t rax_8 = var_218_1 + 5
        var_218_1 = rax_8
        
        if (rax_8 s> 0)
            sub_140594770(&var_220)
        
        UnDecorator::getReferenceType(var_220, u"None", 0xa)
    else
        sub_140b63b70(&r15[5], &var_220)
    
    void var_d8
    int64_t* rax_9 = sub_140aae2f0(&var_d8, &var_220)
    void var_140
    char* var_f8
    char** rax_11 = sub_140a96390(&var_f8, 
        _vfprintf_p_l(&var_140, 
            Switch statement failed to read property for index value for index property {0}", 
        ScriptCore"))
    int64_t rcx_11 = *rax_9
    int64_t* rcx_12 = rax_9[1]
    int32_t var_a8_1 = 4
    
    if (rcx_12 != 0)
        rcx_12[1].d += 1
    
    int32_t rcx_13 = rax_9[2].d
    char var_80_1 = 1
    int32_t* var_1f0 = nullptr
    int32_t var_1e8_1 = 1
    sub_1405a4b40(&var_1f0, 1, 0)
    int32_t* rcx_15 = var_1f0
    *rcx_15 = var_a8_1
    int64_t var_a0
    *(rcx_15 + 8) = var_a0
    *(rcx_15 + 8) = var_a0
    rcx_15[2] = var_a0.d
    *(rcx_15 + 8) = var_a0
    rcx_15[0xa].b = 0
    
    if (var_80_1 != 0)
        *(rcx_15 + 0x10) = rcx_11
        *(rcx_15 + 0x18) = rcx_12
        
        if (rcx_12 != 0)
            rcx_12[1].d += 1
        
        rcx_15[8] = rcx_13
        rcx_15[0xa].b = 1
    
    char* var_1c8 = *rax_11
    void* rax_19 = rax_11[1]
    void* var_1c0_1 = rax_19
    
    if (rax_19 != 0)
        *(rax_19 + 8) += 1
    
    void var_158
    int64_t* rax_20
    int512_t zmm2
    int512_t zmm3
    rax_20, zmm2, zmm3 = sub_140aac870(&var_158, &var_1c8, &var_1f0)
    int64_t* rsi = rax_20[1]
    int64_t rcx_17 = *rax_20
    
    if (rsi != 0)
        rsi[1].d += 1
    
    int32_t rax_21 = rax_20[2].d
    int64_t* var_150
    
    if (var_150 != 0)
        var_150[1].d -= 1
        
        if (var_150[1].d == 1)
            (**var_150)(var_150)
            int32_t rax_24 = *(var_150 + 0xc)
            *(var_150 + 0xc) -= 1
            
            if (rax_24 == 1)
                (*(*var_150 + 8))(var_150, 1)
    
    sub_140596f50(&var_1f0)
    
    if (var_80_1 != 0)
        char var_80_2 = 0
        
        if (rcx_12 != 0)
            rcx_12[1].d -= 1
            
            if (rcx_12[1].d == 1)
                (**rcx_12)(rcx_12)
                int32_t rax_28 = *(rcx_12 + 0xc)
                *(rcx_12 + 0xc) -= 1
                
                if (rax_28 == 1)
                    (*(*rcx_12 + 8))(rcx_12, 1)
    
    int64_t* r14_3 = rax_11[1]
    
    if (r14_3 != 0)
        r14_3[1].d -= 1
        
        if (r14_3[1].d == 1)
            (**r14_3)(r14_3)
            int32_t rax_32 = *(r14_3 + 0xc)
            *(r14_3 + 0xc) -= 1
            
            if (rax_32 == 1)
                (*(*r14_3 + 8))(r14_3, 1)
    
    int64_t* r14_4 = rax_9[1]
    
    if (r14_4 != 0)
        r14_4[1].d -= 1
        
        if (r14_4[1].d == 1)
            (**r14_4)(r14_4)
            int32_t rax_36 = *(r14_4 + 0xc)
            *(r14_4 + 0xc) -= 1
            
            if (rax_36 == 1)
                (*(*r14_4 + 8))(r14_4, 1)
    
    int64_t var_190_1 = rcx_17
    int32_t var_198 = 5
    
    if (rsi != 0)
        rsi[1].d += 1
    
    int32_t var_180_1 = rax_21
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t rax_42 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (rax_42 == 1)
                (*(*rsi + 8))(rsi, 1)
    
    int64_t* var_138
    
    if (var_138 != 0)
        var_138[1].d -= 1
        
        if (var_138[1].d == 1)
            (**var_138)(var_138)
            int32_t rax_46 = *(var_138 + 0xc)
            *(var_138 + 0xc) -= 1
            
            if (rax_46 == 1)
                (*(*var_138 + 8))(var_138, 1)
    
    int64_t rcx_31 = var_220
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
    
    int512_t zmm0
    zmm0, arg3 = sub_140d30680(arg1, arg2, &var_198)
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t rax_50 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (rax_50 == 1)
                (*(*rsi + 8))(rsi, 1)
    
    r12 = var_228
    r14 = 0

r13.b = 0
int32_t rdx_7 = *(r15 + 0x3c) * r15[7].d
void* rsi_3

if (rdx_7 != 0)
    int64_t rcx_35 = sx.q(rdx_7 + 0xf)
    int64_t rax_53 = rcx_35 + 0xf
    
    if (rax_53 u<= rcx_35)
        rax_53 = 0xffffffffffffff0
    
    int64_t rax_54 = rax_53 & 0xfffffffffffffff0
    __chkstk(rax_54)
    void var_248
    rsi_3 = (&var_248 - rax_54 + 0x2f) & 0xfffffffffffffff0
else
    rsi_3 = nullptr

if (not(test_bit(zx.q(r15[8].d), 9)))
    (*(*r15 + 0xf0))(r15, rsi_3)
else
    memset(rsi_3, 0, sx.q(rdx_7))

if (r12 != 0)
    char* rax_57 = *(arg2 + 0x20)
    
    do
        uint32_t rcx_38 = zx.d(*rax_57)
        *(arg2 + 0x20) = &rax_57[1]
        *(arg2 + 0x18)
        (&data_143e1cd60)[zx.q(rcx_38)](nop)
        int32_t* rax_60 = *(arg2 + 0x20)
        int64_t r12_2 = sx.q(*rax_60)
        *(arg2 + 0x20) = &rax_60[1]
        
        if (rax_7 != 0 && (*(*r15 + 0x80))(nop) != 0)
            char* rax_66 = *(arg2 + 0x20)
            uint32_t rcx_42 = zx.d(*rax_66)
            *(arg2 + 0x20) = &rax_66[1]
            *(arg2 + 0x18)
            (&data_143e1cd60)[zx.q(rcx_42)](nop)
            r13.b = 1
            break
        
        r14 += 1
        rax_57 = *(*(arg2 + 0x10) + 0x60) + r12_2
        *(arg2 + 0x20) = rax_57
    while (r14 s< var_228)

if ((not.b((r15[8] u>> 0x24).b) & 1) != 0)
    (*(*r15 + 0xe8))(r15, rsi_3)

uint64_t result

if (r13.b == 0)
    int64_t var_1a8
    sub_140b63b70(&r15[5], &var_1a8)
    void var_c0
    int64_t* rax_72 = sub_140aae2f0(&var_c0, &var_1a8)
    void var_110
    char* var_e8
    char** rax_74 = sub_140a96390(&var_e8, 
        _vfprintf_p_l(&var_110, Switch statement failed to match case for index property {0}", 
        ScriptCore"))
    int64_t rcx_51 = *rax_72
    int64_t* rcx_52 = rax_72[1]
    int32_t var_78_1 = 4
    
    if (rcx_52 != 0)
        rcx_52[1].d += 1
    
    int32_t rcx_53 = rax_72[2].d
    char var_50_1 = 1
    int32_t* var_1e0 = nullptr
    int32_t var_1d8_1 = 1
    sub_1405a4b40(&var_1e0, 1, 0)
    int32_t* rcx_55 = var_1e0
    *rcx_55 = var_78_1
    int64_t var_70
    *(rcx_55 + 8) = var_70
    *(rcx_55 + 8) = var_70
    rcx_55[2] = var_70.d
    *(rcx_55 + 8) = var_70
    rcx_55[0xa].b = 0
    
    if (var_50_1 != 0)
        *(rcx_55 + 0x10) = rcx_51
        *(rcx_55 + 0x18) = rcx_52
        
        if (rcx_52 != 0)
            rcx_52[1].d += 1
        
        rcx_55[8] = rcx_53
        rcx_55[0xa].b = 1
    
    char* var_1b8 = *rax_74
    void* rax_82 = rax_74[1]
    void* var_1b0_1 = rax_82
    
    if (rax_82 != 0)
        *(rax_82 + 8) += 1
    
    void var_128
    int64_t* rax_83
    int512_t zmm2_1
    int512_t zmm3_1
    rax_83, zmm2_1, zmm3_1 = sub_140aac870(&var_128, &var_1b8, &var_1e0)
    int64_t* rsi_6 = rax_83[1]
    int64_t rcx_57 = *rax_83
    
    if (rsi_6 != 0)
        rsi_6[1].d += 1
    
    int32_t r13_1 = rax_83[2].d
    int64_t* var_120
    
    if (var_120 != 0)
        var_120[1].d -= 1
        
        if (var_120[1].d == 1)
            (**var_120)(var_120)
            int32_t rax_86 = *(var_120 + 0xc)
            *(var_120 + 0xc) -= 1
            
            if (rax_86 == 1)
                (*(*var_120 + 8))(var_120, 1)
    
    sub_140596f50(&var_1e0)
    
    if (var_50_1 != 0)
        char var_50_2 = 0
        
        if (rcx_52 != 0)
            rcx_52[1].d -= 1
            
            if (rcx_52[1].d == 1)
                (**rcx_52)(rcx_52)
                int32_t rax_90 = *(rcx_52 + 0xc)
                *(rcx_52 + 0xc) -= 1
                
                if (rax_90 == 1)
                    (*(*rcx_52 + 8))(rcx_52, 1)
    
    int64_t* r14_7 = rax_74[1]
    
    if (r14_7 != 0)
        r14_7[1].d -= 1
        
        if (r14_7[1].d == 1)
            (**r14_7)(r14_7)
            int32_t rax_94 = *(r14_7 + 0xc)
            *(r14_7 + 0xc) -= 1
            
            if (rax_94 == 1)
                (*(*r14_7 + 8))(r14_7, 1)
    
    int64_t* r14_8 = rax_72[1]
    
    if (r14_8 != 0)
        r14_8[1].d -= 1
        
        if (r14_8[1].d == 1)
            (**r14_8)(r14_8)
            int32_t rax_98 = *(r14_8 + 0xc)
            *(r14_8 + 0xc) -= 1
            
            if (rax_98 == 1)
                (*(*r14_8 + 8))(r14_8, 1)
    
    int64_t var_170_1 = rcx_57
    int32_t var_178 = 5
    
    if (rsi_6 != 0)
        rsi_6[1].d += 1
    
    int32_t var_160_1 = r13_1
    
    if (rsi_6 != 0)
        rsi_6[1].d -= 1
        
        if (rsi_6[1].d == 1)
            (**rsi_6)(rsi_6)
            int32_t rax_103 = *(rsi_6 + 0xc)
            *(rsi_6 + 0xc) -= 1
            
            if (rax_103 == 1)
                (*(*rsi_6 + 8))(rsi_6, 1)
    
    int64_t* var_108
    
    if (var_108 != 0)
        var_108[1].d -= 1
        
        if (var_108[1].d == 1)
            (**var_108)(var_108)
            int32_t rax_107 = *(var_108 + 0xc)
            *(var_108 + 0xc) -= 1
            
            if (rax_107 == 1)
                (*(*var_108 + 8))(var_108, 1)
    
    int64_t rcx_71 = var_1a8
    
    if (rcx_71 != 0)
        sub_140a74f90(rcx_71)
    
    int512_t zmm0_3
    int512_t zmm1_2
    zmm0_3, zmm1_2 = sub_140d30680(arg1, arg2, &var_178)
    char* rax_109 = *(arg2 + 0x20)
    uint32_t rcx_73 = zx.d(*rax_109)
    *(arg2 + 0x20) = &rax_109[1]
    *(arg2 + 0x18)
    result = (&data_143e1cd60)[zx.q(rcx_73)](nop)
    
    if (rsi_6 != 0)
        result = zx.q(rsi_6[1].d)
        rsi_6[1].d -= 1
        
        if (result.d == 1)
            result = (**rsi_6)(rsi_6)
            int32_t rbx = *(rsi_6 + 0xc)
            *(rsi_6 + 0xc) -= 1
            
            if (rbx == 1)
                result = (*(*rsi_6 + 8))(rsi_6, zx.q(rbx))
else
    result = *(arg2 + 0x10)
    *(arg2 + 0x20) = sx.q(rcx_1) + *(result + 0x60)

__security_check_cookie(rax_1 ^ &var_228)
return result
