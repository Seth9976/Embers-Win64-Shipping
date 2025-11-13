// 函数: sub_140d195d0
// 地址: 0x140d195d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
uint64_t i_1
uint64_t i_2 = i_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
void var_2f8
void* rsp_1 = &var_2f8
uint64_t var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int64_t* var_1e0 = arg3
int64_t* rsi = arg1
int64_t* var_248 = arg1
void* r15 = nullptr
int16_t* var_260 = arg2
arg3.b = 1
uint64_t var_1f8 = 0
int32_t var_1f0 = 0

if (sub_140b295a0(&var_260, &var_1f8, arg3.b) == 0)
    i_1.b = 0
else
    int16_t* const rdx_1 = &data_142d40450
    
    if (var_1f0 != 0)
        rdx_1 = var_1f8
    
    int32_t var_258
    sub_140b58260(&var_258, rdx_1, 0)
    int32_t var_254
    int32_t rcx_2
    rcx_2.b = var_254 == 0
    
    if ((rcx_2.b & sub_140b5b8a0(var_258, 0)) != 0)
        i_1.b = 0
    else
        void* rax_4 = sub_140bdc2b0(rsi[2], var_258.q, 1)
        
        if (rax_4 == 0 || ((*(rax_4 + 0xb0) & 0x200) == 0 && arg5 == 0))
            i_1.b = 0
        else
            void* rax_5 = *(rax_4 + 0x50)
            void* r14 = nullptr
            char var_22a_1 = 0
            void* var_250 = nullptr
            void* var_240 = rax_4
            int32_t var_230_1 = 0xffffffff
            int16_t var_22c_1 = 0x101
            sub_1406328d0(&var_240)
            void* rcx_5 = rax_5
            
            if (rcx_5 != 0)
                while ((zx.q(*(rcx_5 + 0x40)) & 0x480) == 0x80)
                    void* rax_8 = *(rcx_5 + 0x20)
                    r14 = rcx_5
                    sub_1406328d0(&var_240)
                    rcx_5 = rax_8
                    
                    if (rcx_5 == 0)
                        break
                
                var_250 = r14
            
            int16_t rdx_3 = *(rax_4 + 0xb6)
            
            if (rdx_3 != 0)
                int64_t rcx_7 = zx.q(rdx_3) + 0x1e
                
                if (rcx_7 u<= zx.q(rdx_3) + 0xf)
                    rcx_7 = 0xffffffffffffff0
                
                int64_t rcx_8 = rcx_7 & 0xfffffffffffffff0
                __chkstk(rcx_8)
                rsp_1 = &var_2f8 - rcx_8
                r15 = (rsp_1 + 0x3f) & 0xfffffffffffffff0
            
            memset(r15, 0, zx.q(rdx_3))
            int64_t* i_3 = *(rax_4 + 0x50)
            void* var_228 = rax_4
            int32_t var_218_1 = 0xffffffff
            int16_t var_214_1 = 0x101
            char var_212_1 = 0
            sub_1406328d0(&var_228)
            int64_t* i_4
            
            for (int64_t* i = i_3; i != 0; i = i_4)
                int64_t rax_12 = i[8]
                
                if (rax_12.b s>= 0)
                    break
                
                if (not(test_bit(rax_12, 9)))
                    (*(*i + 0xf0))(i, sx.q(*(i + 0x4c)) + r15)
                
                i_4 = i[4]
                sub_1406328d0(&var_228)
            
            int64_t* var_270_1 = *(rax_4 + 0x50)
            int32_t r12 = 0
            char var_262_1 = 0
            void* var_278 = rax_4
            int32_t var_268_1 = 0xffffffff
            int16_t var_264_1 = 0x101
            sub_1406328d0(&var_278)
            int64_t* rdi_1 = var_270_1
            void* rdi_2
            
            if (rdi_1 == 0)
            label_140d19a96:
                rdi_2 = rax_4
                (*(*rsi + 0x210))(rsi, rdi_2, r15)
            else
                while (true)
                    if ((zx.q(rdi_1[8].d) & 0x480) == 0x80)
                        int64_t rax_18
                        void* rdx_6
                        void* r8_1
                        
                        if (r12 == 0 && arg4 != 0 && ((*(rdi_1[1] + 0x10) u>> 0x1a).b & 1) != 0)
                            rdx_6 = *(arg4 + 0x10)
                            r8_1 = rdi_1[0xf] + 0x30
                            rax_18 = sx.q(*(r8_1 + 8))
                        
                        if (r12 != 0 || arg4 == 0 || ((*(rdi_1[1] + 0x10) u>> 0x1a).b & 1) == 0
                                || rax_18.d s> *(rdx_6 + 0x38)
                                || *(*(rdx_6 + 0x30) + (rax_18 << 3)) != r8_1)
                            int16_t* rsi_1 = var_260
                            r8_1.b = 1
                            var_2c8 = 0
                            int32_t var_2c0_1 = 0
                            sub_140b295a0(&var_260, &var_2c8, r8_1.b)
                            
                            if (rdi_1 == r14 && ((zx.q(*(rdi_1[1] + 0x10)) u>> 0xe).b & 1) != 0
                                    && *var_260 != 0)
                                int64_t var_2b8 = 0
                                int32_t rdx_10 = 0
                                int64_t var_2b0_1 = 0
                                int32_t rcx_22 = 0
                                
                                if (rsi_1 != 0 && *rsi_1 != 0)
                                    int64_t rbx = -1
                                    
                                    do
                                        rbx += 1
                                    while (rsi_1[rbx] != 0)
                                    
                                    if (rbx.d + 1 s> 0)
                                        sub_1405947f0(&var_2b8, rbx.d + 1)
                                        rcx_22 = var_2b0_1:4.d
                                        rdx_10 = var_2b0_1.d
                                    
                                    int32_t rax_23 = rbx.d + 1 + rdx_10
                                    var_2b0_1.d = rax_23
                                    
                                    if (rax_23 s> rcx_22)
                                        sub_140594770(&var_2b8)
                                    
                                    UnDecorator::getReferenceType(var_2b8, rsi_1, (rbx.d + 1) * 2)
                                
                                int64_t var_1d8
                                int64_t* rax_24 = sub_140a35fd0(&var_2b8, &var_1d8)
                                
                                if (&var_2c8 != rax_24)
                                    uint64_t rcx_27 = var_2c8
                                    
                                    if (rcx_27 != 0)
                                        sub_140a74f90(rcx_27)
                                    
                                    var_2c8 = *rax_24
                                    *rax_24 = 0
                                    var_2c0_1 = rax_24[1].d
                                    var_2c0_1 = *(rax_24 + 0xc)
                                    rax_24[1] = 0
                                
                                int64_t rcx_29 = var_1d8
                                
                                if (rcx_29 != 0)
                                    sub_140a74f90(rcx_29)
                                
                                int64_t rcx_30 = var_2b8
                                
                                if (rcx_30 != 0)
                                    sub_140a74f90(rcx_30)
                            
                            int16_t* const rbx_3 = &data_142d40450
                            int64_t* r14_1 = data_143ddb418
                            *(rdi_1 + 0x4c)
                            
                            if (var_2c0_1 != 0)
                                rbx_3 = var_2c8
                            
                            char rax_27
                            int512_t zmm0_1
                            int512_t zmm1_1
                            int512_t zmm2_1
                            rax_27, zmm0_1, zmm1_1, zmm2_1 = sub_140cec0e0(rdi_1, 0, r14_1)
                            int64_t rax_29
                            
                            if (rax_27 == 0 || rbx_3 == 0)
                                rax_29 = 0
                            else
                                int64_t rax_28 = *rdi_1
                                *(rsp_1 + 0x28) = r14_1
                                *(rsp_1 + 0x20) = 0
                                rax_29 = (*(rax_28 + 0xa8))(nop)
                            
                            if (rax_29 == 0)
                                int64_t var_138
                                __builtin_memset(&var_138, 0, 0x2c)
                                int32_t var_10c_1 = 0x80
                                int32_t var_108_1 = 0xffffffff
                                int32_t var_104_1 = 0
                                int64_t var_f8_1 = 0
                                int32_t var_f0_1 = 0
                                void var_1c8
                                int64_t* rax_35 = sub_140aae2b0(&var_1c8, &var_258)
                                int32_t var_e8 = 4
                                int64_t var_d8_1 = *rax_35
                                int64_t* rcx_41 = rax_35[1]
                                
                                if (rcx_41 != 0)
                                    rcx_41[1].d += 1
                                    rdi_1 = var_270_1
                                
                                int32_t var_c8_1 = rax_35[2].d
                                char var_c0_1 = 1
                                int64_t var_2a8 = 0
                                int32_t var_2a0_1 = 0
                                sub_1405947f0(&var_2a8, 8)
                                int32_t rax_37 = var_2a0_1 + 8
                                var_2a0_1 = rax_37
                                
                                if (rax_37 s> 0)
                                    sub_140594770(&var_2a8)
                                
                                UnDecorator::getReferenceType(var_2a8, u"Message", 0x10)
                                sub_140acb5e0(&var_138, &var_2a8, &var_e8)
                                int64_t rcx_46 = var_2a8
                                
                                if (rcx_46 != 0)
                                    sub_140a74f90(rcx_46)
                                
                                if (var_c0_1 != 0 && rcx_41 != 0)
                                    rcx_41[1].d -= 1
                                    
                                    if (rcx_41[1].d == 1)
                                        (**rcx_41)(rcx_41)
                                        int32_t rax_40 = *(rcx_41 + 0xc)
                                        *(rcx_41 + 0xc) -= 1
                                        
                                        if (rax_40 == 1)
                                            (*(*rcx_41 + 8))(rcx_41, 1)
                                    
                                    rdi_1 = var_270_1
                                
                                int64_t* var_1c0
                                
                                if (var_1c0 != 0)
                                    var_1c0[1].d -= 1
                                    
                                    if (var_1c0[1].d == 1)
                                        (**var_1c0)(var_1c0)
                                        int32_t rax_44 = *(var_1c0 + 0xc)
                                        *(var_1c0 + 0xc) -= 1
                                        
                                        if (rax_44 == 1)
                                            (*(*var_1c0 + 8))(var_1c0, 1)
                                    
                                    rdi_1 = var_270_1
                                
                                var_248 = rdi_1[5]
                                void var_1b0
                                int64_t* rax_47 = sub_140aae2b0(&var_1b0, &var_248)
                                int32_t var_b8 = 4
                                int64_t var_a8_1 = *rax_47
                                int64_t* rcx_54 = rax_47[1]
                                
                                if (rcx_54 != 0)
                                    rcx_54[1].d += 1
                                
                                int32_t var_98_1 = rax_47[2].d
                                char var_90_1 = 1
                                int64_t var_298 = 0
                                int32_t var_290_1 = 0
                                sub_1405947f0(&var_298, 0xd)
                                int32_t rax_49 = var_290_1 + 0xd
                                var_290_1 = rax_49
                                
                                if (rax_49 s> 0)
                                    sub_140594770(&var_298)
                                
                                UnDecorator::getReferenceType(var_298, u"PropertyName", 0x1a)
                                sub_140acb5e0(&var_138, &var_298, &var_b8)
                                int64_t rcx_59 = var_298
                                
                                if (rcx_59 != 0)
                                    sub_140a74f90(rcx_59)
                                
                                if (var_90_1 != 0 && rcx_54 != 0)
                                    rcx_54[1].d -= 1
                                    
                                    if (rcx_54[1].d == 1)
                                        (**rcx_54)(rcx_54)
                                        int32_t rax_52 = *(rcx_54 + 0xc)
                                        *(rcx_54 + 0xc) -= 1
                                        
                                        if (rax_52 == 1)
                                            (*(*rcx_54 + 8))(rcx_54, 1)
                                
                                int64_t* var_1a8
                                
                                if (var_1a8 != 0)
                                    var_1a8[1].d -= 1
                                    
                                    if (var_1a8[1].d == 1)
                                        (**var_1a8)(var_1a8)
                                        int32_t rax_56 = *(var_1a8 + 0xc)
                                        *(var_1a8 + 0xc) -= 1
                                        
                                        if (rax_56 == 1)
                                            (*(*var_1a8 + 8))(var_1a8, 1)
                                
                                rdi_2 = rax_4
                                var_250 = *(rdi_2 + 0x18)
                                void var_198
                                int64_t* rax_59 = sub_140aae2b0(&var_198, &var_250)
                                int32_t var_88 = 4
                                int64_t var_78_1 = *rax_59
                                int64_t* rcx_67 = rax_59[1]
                                
                                if (rcx_67 != 0)
                                    rcx_67[1].d += 1
                                
                                int32_t var_68_1 = rax_59[2].d
                                char var_60_1 = 1
                                int64_t var_288 = 0
                                int32_t var_280_1 = 0
                                sub_1405947f0(&var_288, 0xd)
                                int32_t rax_61 = var_280_1 + 0xd
                                var_280_1 = rax_61
                                
                                if (rax_61 s> 0)
                                    sub_140594770(&var_288)
                                
                                UnDecorator::getReferenceType(var_288, u"FunctionName", 0x1a)
                                sub_140acb5e0(&var_138, &var_288, &var_88)
                                int64_t rcx_72 = var_288
                                
                                if (rcx_72 != 0)
                                    sub_140a74f90(rcx_72)
                                
                                if (var_60_1 != 0 && rcx_67 != 0)
                                    rcx_67[1].d -= 1
                                    
                                    if (rcx_67[1].d == 1)
                                        (**rcx_67)(rcx_67)
                                        int32_t rax_64 = *(rcx_67 + 0xc)
                                        *(rcx_67 + 0xc) -= 1
                                        
                                        if (rax_64 == 1)
                                            (*(*rcx_67 + 8))(rcx_67, 1)
                                
                                int64_t* var_190
                                
                                if (var_190 != 0)
                                    var_190[1].d -= 1
                                    
                                    if (var_190[1].d == 1)
                                        (**var_190)(var_190)
                                        int32_t rax_68 = *(var_190 + 0xc)
                                        *(var_190 + 0xc) -= 1
                                        
                                        if (rax_68 == 1)
                                            (*(*var_190 + 8))(var_190, 1)
                                
                                void var_180
                                void var_168
                                char* var_150
                                int64_t* rax_73 = sub_140ac6680(sub_140aaca20(&var_180, 
                                    sub_140a96390(&var_150, 
                                        _vfprintf_p_l(&var_168, 
                                            '{Message}': Bad or missing property '{PropertyName}' when trying to "
                                "call {FunctionName}", 
                                        Core")), &var_138))
                                int16_t* const rax_74
                                
                                if (rax_73[1].d == 0)
                                    rax_74 = &data_142d40450
                                else
                                    rax_74 = *rax_73
                                
                                sub_140b1f700(var_1e0, u"%s", rax_74)
                                int64_t* var_178
                                
                                if (var_178 != 0)
                                    var_178[1].d -= 1
                                    
                                    if (var_178[1].d == 1)
                                        (**var_178)(var_178)
                                        int32_t rax_77 = *(var_178 + 0xc)
                                        *(var_178 + 0xc) -= 1
                                        
                                        if (rax_77 == 1)
                                            (*(*var_178 + 8))(var_178, 1)
                                
                                int64_t* var_160
                                
                                if (var_160 != 0)
                                    var_160[1].d -= 1
                                    
                                    if (var_160[1].d == 1)
                                        (**var_160)(var_160)
                                        int32_t rax_81 = *(var_160 + 0xc)
                                        *(var_160 + 0xc) -= 1
                                        
                                        if (rax_81 == 1)
                                            (*(*var_160 + 8))(var_160, 1)
                                
                                int32_t var_f0_2 = 0
                                
                                if (var_f8_1 != 0)
                                    sub_140a74f90(var_f8_1)
                                
                                sub_140acd610(&var_138)
                                uint64_t rcx_89 = var_2c8
                                
                                if (rcx_89 != 0)
                                    sub_140a74f90(rcx_89)
                                
                                break
                            
                            uint64_t rcx_33 = var_2c8
                            
                            if (rcx_33 != 0)
                                sub_140a74f90(rcx_33)
                        else
                            (*(*rdi_1 + 0x148))(rdi_1, sx.q(*(rdi_1 + 0x4c)) + r15, arg4)
                        
                        var_270_1 = rdi_1[4]
                        sub_1406328d0(&var_278)
                        rdi_1 = var_270_1
                        r12 += 1
                        r14 = var_250
                        
                        if (rdi_1 != 0)
                            continue
                    
                    rsi = var_248
                    goto label_140d19a96
            
            uint64_t i_5 = *(rdi_2 + 0x50)
            void* var_210 = rdi_2
            int32_t var_200_1 = 0xffffffff
            int16_t var_1fc_1 = 0x101
            char var_1fa_1 = 0
            sub_1406328d0(&var_210)
            uint64_t i_6
            
            for (i_1 = i_5; i_1 != 0; i_1 = i_6)
                int64_t rax_32 = *(i_1 + 0x40)
                
                if (rax_32.b s>= 0)
                    break
                
                if ((not.b((rax_32 u>> 0x24).b) & 1) != 0)
                    (*(*i_1 + 0xe8))(i_1, sx.q(*(i_1 + 0x4c)) + r15)
                
                i_6 = *(i_1 + 0x20)
                sub_1406328d0(&var_210)
            
            i_1.b = 1

uint64_t rcx_90 = var_1f8

if (rcx_90 != 0)
    sub_140a74f90(rcx_90)

__security_check_cookie(rax_1 ^ &var_2c8)
return zx.q(i_1.b)
