// 函数: sub_141ecef40
// 地址: 0x141ecef40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t* r15 = nullptr
uint64_t rsi
rsi.b = 0
int64_t* var_180 = arg1
uint32_t var_198 = rsi.d
int64_t* r13 = arg1
int64_t* var_190 = nullptr
int64_t* r12 = nullptr
int64_t rax_3 = (*(*arg1 + 0x150))()
int32_t var_98 = 5
char var_40 = 0
void* var_90
sub_1405ab0f0(&var_90, rax_3, arg2)
char var_40_1 = 1
sub_1406277a0(&var_98)
void** var_88
char var_74
int64_t var_60

if (var_74 == 0)
    int64_t* var_68
    int64_t* rdi_1 = var_68
    
    while (true)
        int32_t rax_4 = *(rdi_1 + 0xc)
        void* const rax_10
        
        if (rax_4 s>= data_143e1d9b4)
            rax_10 = nullptr
        else
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_4)
            uint32_t rdx_2 = zx.d(temp1_1)
            int32_t rax_6 = temp2_1 + rdx_2
            rax_10 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
        
        if (((*(rax_10 + 8) u>> 0x1d).b & 1) == 0)
            if (rsi.b != 0 || r12 == 0)
                var_190 = rdi_1
                r12 = rdi_1
                
                if (rsi.b != 0)
                    break
            
            uint32_t rsi_1 = zx.d(rsi.b)
            
            if (rdi_1 == sub_14226f6a0(*(sub_141ec4640(r13) + 0x2b8)))
                rsi_1 = 1
            
            var_198 = rsi_1
        
        int32_t var_58
        int32_t r8_2 = var_58
        int32_t var_80
        int32_t rdx_4 = var_80
        void* r13_1 = var_90
        int32_t var_78
        int32_t r14_2 = var_78 + 1
        
        if (r14_2 s>= r8_2 + rdx_4)
        label_141ecf218:
            r12 = var_190
            r13 = var_180
            int64_t var_68_1 = 0
            char var_74_1 = 1
            break
        
        int64_t r12_1 = sx.q(r14_2) << 3
        
        while (true)
            if (r14_2 s>= rdx_4)
                rdi_1 = *(var_60 + (sx.q(r14_2 - rdx_4) << 3))
            else
                rdi_1 = *(var_88 + r12_1)
            
            int32_t var_70 = var_70 + 1
            
            if (rdi_1 != 0)
                void* rax_21 = sub_141dc9840(rdi_1)
                
                if (rax_21 != 0)
                    void* const rax_28
                    
                    if ((var_98.b & 1) != 0)
                        int32_t rax_22 = *(rdi_1 + 0xc)
                        
                        if (rax_22 s>= data_143e1d9b4)
                            rax_28 = nullptr
                        else
                            int16_t temp3_1
                            int32_t temp4_1
                            temp3_1:temp4_1 = sx.q(rax_22)
                            uint32_t rdx_6 = zx.d(temp3_1)
                            int32_t rax_24 = temp4_1 + rdx_6
                            rax_28 = *(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_24.w) - rdx_6) * 0x18
                    
                    if ((var_98.b & 1) == 0 || ((*(rax_28 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_15 = var_98
                        
                        if (((rcx_15 u>> 1).b & 1) == 0)
                            goto label_141ecf13c
                        
                        uint64_t rax_32 = sub_1405949a0()
                        
                        if (rax_32.b != 0)
                            rcx_15 = var_98
                        label_141ecf13c:
                            
                            if (((rcx_15 u>> 2).b & 1) == 0)
                                goto label_141ecf1bb
                            
                            if ((*(rax_21 + 0x1f4) & 0x20) == 0 || (*(rax_21 + 0x1f6) & 8) != 0)
                                rax_32 = zx.q(*(rax_21 + 0x1f5))
                            
                            if (((*(rax_21 + 0x1f4) & 0x20) != 0 && (*(rax_21 + 0x1f6) & 8) == 0)
                                    || (rax_32.b & 0x40) != 0 || rax_32.b s< 0)
                                r15.b = 1
                            else
                                r15.b = 0
                            
                            void* rcx_17 = *(rax_21 + 0xb8)
                            char* rsi_2 = *(rax_21 + 0x248)
                            
                            if (rcx_17 != 0)
                                rax_32 = sub_1424359b0(rcx_17)
                            
                            if (rcx_17 == 0 || rax_32 == 0 || rsi_2 == rax_32)
                                rcx_17.b = 1
                            else
                                rcx_17.b = 0
                            
                            if (rsi_2 == 0 || *rsi_2 == 2)
                                rax_32.b = 1
                            else
                                rax_32.b = 0
                            
                            if (rcx_17.b != 0 || rax_32.b != 0)
                                rax_32.b = 1
                            
                            if (r15.b != 0 && rax_32.b != 0)
                                r15 = nullptr
                            label_141ecf1bb:
                                
                                if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_21) == r13_1)
                                    if (rax_21 == *(r13_1 + 0x30))
                                        break
                                    
                                    void* rax_34 = sub_1425bd0d0()
                                    void* rdx_8 = rdi_1[2]
                                    int64_t rax_35 = sx.q(*(rax_34 + 0x38))
                                    
                                    if (rax_35.d s> *(rdx_8 + 0x38))
                                        break
                                    
                                    if (*(*(rdx_8 + 0x30) + (rax_35 << 3)) != rax_34 + 0x30)
                                        break
                
                r8_2 = var_58
                r15 = nullptr
                rdx_4 = var_80
            
            r14_2 += 1
            r12_1 += 8
            
            if (r14_2 s>= r8_2 + rdx_4)
                goto label_141ecf218
        
        r12 = var_190
        r13 = var_180
        int64_t* var_68_2 = rdi_1
        var_78 = r14_2
        
        if (var_74 != 0)
            break
        
        rsi = zx.q(var_198)

if (var_40_1 != 0)
    char var_40_2 = 0
    int64_t var_48
    sub_142441560(var_90, var_48)
    
    if (var_60 != 0)
        sub_140a74f90(var_60)
    
    if (var_88 != 0)
        sub_140a74f90(var_88)

int64_t result

if (r12 == 0)
    result = (*(*r13 + 0x2e8))(r13)
else
    int64_t var_130
    void var_e0
    int64_t* rax_40 = sub_140aae2f0(&var_e0, (*(*r12 + 0x5c8))(r12, &var_130))
    void var_108
    char* var_f0
    char** rax_42 = sub_140a96390(&var_f0, _vfprintf_p_l(&var_108, Viewing from {0}", CheatManager")
        )
    int64_t rcx_27 = *rax_40
    int64_t* rcx_28 = rax_40[1]
    int32_t var_c8_1 = 4
    
    if (rcx_28 != 0)
        rcx_28[1].d += 1
    
    int32_t rcx_29 = rax_40[2].d
    char var_a0_1 = 1
    var_190 = nullptr
    int32_t var_188_1 = 1
    sub_1405a4b40(&var_190, 1, 0)
    int64_t* rcx_31 = var_190
    *rcx_31 = var_c8_1
    int64_t var_c0
    rcx_31[1] = var_c0
    rcx_31[1] = var_c0
    rcx_31[1].d = var_c0.d
    rcx_31[1] = var_c0
    rcx_31[5].b = 0
    
    if (var_a0_1 != 0)
        rcx_31[2] = rcx_27
        rcx_31[3] = rcx_28
        
        if (rcx_28 != 0)
            rcx_28[1].d += 1
        
        rcx_31[4].d = rcx_29
        rcx_31[5].b = 1
    
    char* var_140 = *rax_42
    void* rax_50 = rax_42[1]
    void* var_138_1 = rax_50
    
    if (rax_50 != 0)
        *(rax_50 + 8) += 1
    
    void var_120
    int64_t* rax_51 = sub_140aac870(&var_120, &var_140, &var_190)
    int64_t var_158 = *rax_51
    int64_t* rcx_34 = rax_51[1]
    
    if (rcx_34 != 0)
        rcx_34[1].d += 1
    
    int32_t var_148_1 = rax_51[2].d
    int64_t* var_118
    
    if (var_118 != 0)
        var_118[1].d -= 1
        
        if (var_118[1].d == 1)
            (**var_118)(var_118)
            int32_t rax_55 = *(var_118 + 0xc)
            *(var_118 + 0xc) -= 1
            
            if (rax_55 == 1)
                (*(*var_118 + 8))(var_118, 1)
    
    sub_140596f50(&var_190)
    
    if (var_a0_1 != 0)
        char var_a0_2 = 0
        
        if (rcx_28 != 0)
            rcx_28[1].d -= 1
            
            if (rcx_28[1].d == 1)
                (**rcx_28)(rcx_28)
                int32_t rax_59 = *(rcx_28 + 0xc)
                *(rcx_28 + 0xc) -= 1
                
                if (rax_59 == 1)
                    (*(*rcx_28 + 8))(rcx_28, 1)
    
    int64_t* rbx_4 = rax_42[1]
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t rax_63 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rax_63 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t* rbx_5 = rax_40[1]
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t rax_67 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (rax_67 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    int64_t* rsi_4 = nullptr
    
    if (((r13[1].d u>> 4).b & 1) == 0)
        rsi_4 = r13[4]
    
    int64_t* rax_71 = sub_140b58260(&var_180, u"Event", 1)
    sub_1425692d0(rsi_4, sub_140ac6680(&var_158), *rax_71, zx.o(0))
    
    if (rcx_34 != 0)
        rcx_34[1].d -= 1
        
        if (rcx_34[1].d == 1)
            (**rcx_34)(rcx_34)
            int32_t rax_75 = *(rcx_34 + 0xc)
            *(rcx_34 + 0xc) -= 1
            
            if (rax_75 == 1)
                (*(*rcx_34 + 8))(rcx_34, 1)
    
    int64_t* var_100
    
    if (var_100 != 0)
        var_100[1].d -= 1
        
        if (var_100[1].d == 1)
            (**var_100)(var_100)
            int32_t rdi_2 = *(var_100 + 0xc)
            *(var_100 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_100 + 8))(var_100, zx.q(rdi_2))
    
    int64_t rcx_51 = var_130
    
    if (rcx_51 != 0)
        sub_140a74f90(rcx_51)
    
    if (((r13[1].d u>> 4).b & 1) == 0)
        r15 = r13[4]
    
    int64_t rax_82 = *r15
    int32_t var_164_1 = 1.d
    int32_t var_16c
    int32_t var_15c_1 = var_16c & 0xfffffffe
    int32_t var_160_1 = 0x40000000
    int32_t var_168 = 0
    result = (*(rax_82 + 0xd10))(r15, r12, &var_168)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
