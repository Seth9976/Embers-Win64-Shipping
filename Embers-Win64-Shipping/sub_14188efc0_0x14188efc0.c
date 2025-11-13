// 函数: sub_14188efc0
// 地址: 0x14188efc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x2c)
int32_t var_94 = 0
int64_t var_88 = 0
int32_t var_80 = 0
int32_t var_9c = 0x80
int32_t var_98 = 0xffffffff
EnterCriticalSection(arg1 + 0xd0)

if (&var_c8 != arg1 + 0xf8)
    sub_140a3cab0(&var_c8, arg1 + 0xf8)
    int64_t rsi_1 = *(arg1 + 0x138)
    void var_90
    
    if (rsi_1 == 0)
        memmove(&var_90, arg1 + 0x130, 4)
    
    if (var_88 != 0)
        sub_140a74f90(var_88)
        rsi_1 = *(arg1 + 0x138)
    
    *(arg1 + 0x138) = 0
    int32_t var_80_1 = *(arg1 + 0x140)
    *(arg1 + 0x140) = 0
    var_88 = rsi_1

LeaveCriticalSection(arg1 + 0xd0)
int64_t var_b8
int64_t* var_270 = &var_b8
int32_t rcx_5 = 0
int32_t var_278 = 0
int32_t var_268 = 0xffffffff
int32_t r8 = 0
int32_t var_274 = 1
int64_t var_264 = 0
int32_t var_a0

if (var_a0 != 0)
    int64_t* r9_1 = &var_b8
    int64_t* var_a8
    
    if (var_a8 != 0)
        r9_1 = var_a8
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(var_a0 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_14188f166:
        int32_t rax_10 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_274_1 = rax_10
        int32_t var_1e8_1 = temp0_1
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_1
        
        int32_t rax_12 = r8 - rax_11 + 0x1f
        
        if (rax_12 s> var_a0)
            rax_12 = var_a0
        
        var_264.d = rax_12
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_5)
            r8 += 0x20
            rcx_5 += 1
            var_264:4.d = r8
            var_278 = rcx_5
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_264.d = var_a0
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_268_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_14188f166

char rcx_8 = var_a0.b & 0x1f
double var_208[0x2] = var_278.o
int64_t* var_210
var_210.d = var_a0 s>> 5
var_210:4.d = 1 << rcx_8
var_208[0] = &var_b8
int128_t var_1f8 = 0xffffffff
int64_t* var_248 = &var_c8
var_208[1]:4.d = var_a0
double var_1d8[0x2] = (&var_c8).o
var_208[1].d = 0xffffffff << rcx_8
var_1f8.d = var_a0 & 0xffffffe0
double temp0_2[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
double var_240[0x2] = var_210.o
int64_t var_1b8 = temp0_2.q
double zmm2[0x2] = var_208
double var_178[0x2] = var_248.o
double var_230[0x2] = zmm2
double zmm1[0x2] = var_240
uint64_t rax_17 = zmm2[0] u>> 0x20
int64_t var_158 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
double var_168[0x2] = zmm1
uint64_t var_1e0 = rax_17

while (true)
    int64_t rdx_7 = sx.q(var_208[1]:4.d)
    double rcx_9 = var_1d8[0]
    
    if (rdx_7.d == rax_17.d && var_208[0] == var_208[0] && rcx_9 == &var_c8)
        int32_t var_80_2 = 0
        
        if (var_88 != 0)
            sub_140a74f90(var_88)
        
        void* result = sub_140597460(&var_c8)
        __security_check_cookie(rax_1 ^ &var_2e8)
        return result
    
    int32_t* r12_3 = (rdx_7 << 5) + *rcx_9
    void* r14_1
    
    if (sub_140a32ae0(&r12_3[2], u"http", 1) == 0)
        int64_t* rax_52 = j_sub_140a82f30(0x18)
        int64_t* rsi_4 = rax_52
        
        if (rax_52 == 0)
            rsi_4 = nullptr
        else
            __builtin_memset(rax_52, 0, 0x14)
        
        int64_t rbx_7 = *(arg1 + 0x40)
        int64_t var_148[0x2]
        var_148[0] = 0
        int64_t var_138_1 = 0
        int64_t* r15_2 = *(arg1 + 0x48)
        
        if (r15_2 != 0)
            *(r15_2 + 0xc) += 1
        
        var_240[0].d = *r12_3
        sub_140596d10(&var_240[1], &r12_3[2])
        var_230[1] = rsi_4
        
        if (r15_2 != 0)
            *(r15_2 + 0xc) += 1
        
        int64_t var_68_1 = 0
        int64_t* rax_54 = sub_140a82f30(0x40, 8)
        *rax_54 = &data_142fe84a8
        rax_54[1] = arg1
        rax_54[2].d = var_240[0].d
        sub_140596d10(&rax_54[3], &var_240[1])
        rax_54[5] = var_230[1]
        rax_54[6] = rbx_7
        rax_54[7] = r15_2
        int64_t var_218_2 = 0
        int64_t var_220_2 = 0
        *rax_54 = &data_142fe84c8
        int64_t (* var_78)(int64_t* arg1)
        int64_t (* rax_57)(int64_t* arg1) = var_78
        
        if (rax_54 != -8)
            rax_57 = j_sub_1418696c0
        
        double rcx_47 = var_240[1]
        var_78 = rax_57
        
        if (rcx_47 != 0)
            sub_140a74f90(rcx_47)
        
        if (r15_2 != 0)
            int32_t rax_58 = *(r15_2 + 0xc)
            *(r15_2 + 0xc) -= 1
            
            if (rax_58 == 1)
                (*(*r15_2 + 8))(r15_2, 1)
        
        void* var_188
        void** rax_60
        int128_t entry_zmm3
        rax_60, zmm2, entry_zmm3 = sub_141858e10(&var_188, 3, &var_78, &var_148, zmm2, entry_zmm3)
        
        if (rsi_4 != rax_60)
            *rsi_4 = *rax_60
            *rax_60 = nullptr
            sub_1405aeff0(&rsi_4[1], &rax_60[1])
        
        int64_t* var_180
        
        if (var_180 != 0)
            var_180[1].d -= 1
            
            if (var_180[1].d == 1)
                (**var_180)(var_180)
                int32_t rax_63 = *(var_180 + 0xc)
                *(var_180 + 0xc) -= 1
                
                if (rax_63 == 1)
                    (*(*var_180 + 8))(var_180, 1)
        
        if (var_78 != 0)
            void var_58
            int64_t* rcx_54 = &var_58
            
            if (rax_54 != 0)
                rcx_54 = rax_54
            
            (*(*rcx_54 + 0x10))(rcx_54)
        
        int32_t rax_67 = *r12_3
        int64_t* var_2a0 = rsi_4
        int32_t var_2a8 = rax_67
        EnterCriticalSection(arg1 + 0x180)
        sub_141859a90(arg1 + 0x1f8, &var_2a8, &var_2a0)
        
        if (arg1 != -0x180)
            LeaveCriticalSection(arg1 + 0x180)
        
        sub_14186ad20(&var_2a0, var_2a0)
        r14_1 = &r12_3[2]
    else
        int64_t* rcx_11 = *(arg1 + 0x20)
        int64_t* var_288
        (*(*rcx_11 + 8))(rcx_11, &var_288)
        int32_t rax_21 = *r12_3
        int64_t* rcx_12 = var_288
        int64_t* rax_23 = (*(*rcx_12 + 0x98))(rcx_12)
        int64_t* rbx_1 = *(arg1 + 0x10)
        int64_t r15_1 = *(arg1 + 8)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
            rbx_1[1].d += 1
        
        void*** rax_24 = sub_140a84c80(0, 0x30, 0)
        void*** var_298 = rax_24
        void*** rdi_1 = rax_24
        int32_t var_290_1 = 3
        
        if (rax_24 != 0)
            *rdi_1 = &data_142fe8348
            rdi_1[1] = r15_1
            rdi_1[2] = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rdi_1 = var_298
            
            rdi_1[3] = sub_141889790
            rdi_1[4].d = rax_21
            rdi_1[5] = sub_140a387b0()
            *rdi_1 = &data_142fe83a0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_29 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_29 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_1 = var_298
        
        if (&var_298 == rax_23)
            goto label_14188f3ad
        
        if (rdi_1 != 0)
            (*rdi_1)[8](rdi_1, rax_23)
        label_14188f3ad:
            
            if (rdi_1 != 0)
                (*rdi_1)[7](rdi_1, 0)
                void*** rax_33 = sub_140a84c80(rdi_1, 0, 0)
                var_298 = rax_33
                int32_t var_290_2 = 0
                
                if (rax_33 != 0)
                    sub_140a74f90(rax_33)
        else if (rax_23[1].d != 0)
            int64_t* rcx_19 = *rax_23
            
            if (rcx_19 != 0)
                (*(*rcx_19 + 0x38))(rcx_19, 0)
                int64_t rcx_20 = *rax_23
                
                if (rcx_20 != 0)
                    *rax_23 = sub_140a84c80(rcx_20, 0, 0)
                
                rax_23[1].d = 0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_38 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_38 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int32_t rbx_2 = r12_3[4]
        r14_1 = &r12_3[2]
        int64_t* rsi_3 = var_288
        int64_t rdi_2 = *r14_1
        int64_t var_258 = 0
        int32_t var_250_1 = rbx_2
        
        if (rbx_2 != 0)
            sub_1405a4c70(&var_258, rbx_2, 0)
            memcpy(var_258, rdi_2, rbx_2 * 2)
        else
            int32_t var_24c_1 = 0
        
        void var_108
        int32_t* rax_40 = sub_14188c290(arg1, &var_108, *r12_3, &var_258)
        int64_t rdx_13 = *rsi_3
        sub_1418593c0((*(rdx_13 + 0x90))(rsi_3, rdx_13), arg1 + 8, sub_141889590, rax_40)
        int64_t* rcx_28 = var_288
        (*(*rcx_28 + 0x50))(rcx_28, r14_1)
        int64_t var_2c8 = 0
        int32_t var_2c0_1 = 0
        sub_1405947f0(&var_2c8, 4)
        int32_t rax_43 = var_2c0_1 + 4
        var_2c0_1 = rax_43
        
        if (rax_43 s> 0)
            sub_140594770(&var_2c8)
        
        UnDecorator::getReferenceType(var_2c8, &data_142d85f90, 8)
        int64_t* rcx_32 = var_288
        (*(*rcx_32 + 0x48))(rcx_32, &var_2c8)
        int64_t rcx_33 = var_2c8
        
        if (rcx_33 != 0)
            sub_140a74f90(rcx_33)
        
        int64_t* rcx_34 = var_288
        (*(*rcx_34 + 0x88))(rcx_34)
        uint128_t zmm0_1 = var_288.o
        uint128_t var_198 = zmm0_1
        void* rax_46 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_46 != 0)
            *(rax_46 + 8) += 1
        
        int32_t var_2b0 = *r12_3
        EnterCriticalSection(arg1 + 0x180)
        int32_t* var_1b0 = &var_2b0
        uint128_t* var_1a8_1 = &var_198
        void var_1e4
        sub_14185a2f0(arg1 + 0x1a8, &var_1e4, &var_1b0, nullptr)
        
        if (arg1 != -0x180)
            LeaveCriticalSection(arg1 + 0x180)
        
        int64_t* rbx_5 = var_198:8.q
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp5_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        int64_t* var_280
        
        if (var_280 != 0)
            var_280[1].d -= 1
            
            if (var_280[1].d == 1)
                (**var_280)(var_280)
                int32_t temp6_1 = *(var_280 + 0xc)
                *(var_280 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_280 + 8))(var_280, 1)
    
    int64_t* rcx_59 = *(arg1 + 0x30)
    (*(*rcx_59 + 8))(rcx_59, zx.q(*r12_3), r14_1)
    var_208[1].d &= not.d(var_1d8[1]:4.d)
    sub_14059bdd0(&var_1d8[1])
    rax_17 = var_1e0
