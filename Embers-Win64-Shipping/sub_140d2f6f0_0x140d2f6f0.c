// 函数: sub_140d2f6f0
// 地址: 0x140d2f6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int32_t rsi = 0
int32_t var_208 = 0
int64_t var_230 = arg8
char var_2a8
char* var_1f8 = &var_2a8
void* var_258 = arg1
uint64_t var_260 = arg2
void*** (* var_200)() = sub_140884c50
var_2a8 = 0

if (*(sub_140a756e0(&var_200, &data_14397f5f0) + 0x20) != 0)
    data_14399ea98()

void* r13_1 = var_258
void* result
int32_t r9_1
result, r9_1 = sub_140d2ff60(r13_1, arg2, arg3, arg4, arg5, arg6, arg7, var_230)

if (result == 0)
    int32_t rdx_1 = 0
    int64_t var_2a0 = 0
    int32_t rcx_2 = 0
    int64_t var_298_1 = 0
    uint64_t rbx
    
    if (arg3 != 0 && *arg3 != 0)
        void* rbx_1 = result - 1
        
        do
            rbx_1 += 1
        while (arg3[rbx_1] != 0)
        
        rbx = zx.q(rbx_1.d + 1)
        
        if (rbx.d s> 0)
            sub_1405947f0(&var_2a0, rbx.d)
            rcx_2 = var_298_1:4.d
            rdx_1 = var_298_1.d
        
        int32_t rax_5 = rbx.d + rdx_1
        var_298_1.d = rax_5
        
        if (rax_5 s> rcx_2)
            sub_140594770(&var_2a0)
        
        UnDecorator::getReferenceType(var_2a0, arg3, rbx.d * 2)
    
    r9_1.b = 1
    int64_t var_2c0_1 = 0
    sub_140d2b810(&var_260, &var_2a0, 1, r9_1, arg5 & 4)
    uint64_t rcx_7 = var_260
    int16_t* const r14_1 = &data_142d40450
    int16_t* var_250
    char rax_7
    
    if (rcx_7 != 0)
        var_250 = nullptr
        int32_t var_248_1 = 0
        sub_140d21e40(rcx_7, 0, &var_250)
        int16_t* const rdx_5 = &data_142d40450
        
        if (var_248_1 != 0)
            rdx_5 = var_250
        
        rsi = 1
        *sub_140b58260(&var_230, rdx_5, 1)
        rax_7 = sub_140cc1810()
    
    if (rcx_7 == 0 || rax_7 == 0)
        rbx.b = 1
    else
        rbx.b = 0
    
    if ((rsi.b & 1) != 0)
        int16_t* rcx_10 = var_250
        rsi &= 0xfffffffe
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
    
    if (rbx.b != 0)
        var_258 = *(r13_1 + 0x18)
        int64_t var_138
        __builtin_memset(&var_138, 0, 0x2c)
        int32_t var_10c_1 = 0x80
        int32_t var_108_1 = (result - 1).d
        int32_t var_104_1 = 0
        int64_t var_f8_1 = 0
        int32_t var_f0_1 = 0
        int64_t var_1f0
        sub_140b63b70(&var_258, &var_1f0)
        void var_1e0
        int64_t* rax_9 = sub_140aae2f0(&var_1e0, &var_1f0)
        int32_t var_e8 = 4
        int64_t var_d8_1 = *rax_9
        int64_t* rcx_14 = rax_9[1]
        
        if (rcx_14 != 0)
            rcx_14[1].d += 1
        
        int32_t var_c8_1 = rax_9[2].d
        char var_c0_1 = 1
        int64_t var_290 = 0
        int32_t var_288_1 = 0
        sub_1405947f0(&var_290, 0xa)
        int32_t rax_11 = var_288_1 + 0xa
        var_288_1 = rax_11
        
        if (rax_11 s> 0)
            sub_140594770(&var_290)
        
        UnDecorator::getReferenceType(var_290, u"ClassName", 0x14)
        sub_140acb5e0(&var_138, &var_290, &var_e8)
        int64_t rcx_19 = var_290
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        if (var_c0_1 != 0 && rcx_14 != 0)
            rcx_14[1].d += (result - 1).d
            
            if (rcx_14[1].d == 1)
                (**rcx_14)(rcx_14)
                int32_t rax_16 = *(rcx_14 + 0xc)
                *(rcx_14 + 0xc) += (result - 1).d
                
                if (rax_16 == 1)
                    (*(*rcx_14 + 8))(rcx_14, 1)
        
        int64_t* var_1d8
        
        if (var_1d8 != 0)
            var_1d8[1].d += (result - 1).d
            
            if (var_1d8[1].d == 1)
                (**var_1d8)(var_1d8)
                int32_t rax_22 = *(var_1d8 + 0xc)
                *(var_1d8 + 0xc) += (result - 1).d
                
                if (rax_22 == 1)
                    (*(*var_1d8 + 8))(var_1d8, 1)
        
        int64_t rcx_25 = var_1f0
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        uint64_t rcx_26 = var_260
        int64_t var_228
        int64_t* rax_24
        int32_t rsi_1
        
        if (rcx_26 == 0)
            rsi_1 = rsi | 8
            void var_1c8
            rax_24 = _vfprintf_p_l(&var_1c8, u"None", u"Core")
        else
            var_228 = 0
            int64_t var_220_1 = 0
            rsi_1 = rsi | 6
            sub_140d21e40(rcx_26, 0, &var_228)
            void var_1b0
            rax_24 = sub_140aae2f0(&var_1b0, &var_228)
        
        int32_t var_b8 = 4
        int64_t var_a8_1 = *rax_24
        int64_t* rax_26 = rax_24[1]
        
        if (rax_26 != 0)
            rax_26[1].d += 1
        
        int32_t var_98_1 = rax_24[2].d
        char var_90_1 = 1
        int64_t var_280 = 0
        int32_t var_278_1 = 0
        sub_1405947f0(&var_280, 0xa)
        int32_t rax_28 = var_278_1 + 0xa
        var_278_1 = rax_28
        
        if (rax_28 s> 0)
            sub_140594770(&var_280)
        
        UnDecorator::getReferenceType(var_280, u"OuterName", 0x14)
        sub_140acb5e0(&var_138, &var_280, &var_b8)
        int64_t rcx_34 = var_280
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        if (var_90_1 != 0 && rax_26 != 0)
            rax_26[1].d += (result - 1).d
            
            if (rax_26[1].d == 1)
                (**rax_26)(rax_26)
                int32_t rax_33 = *(rax_26 + 0xc)
                *(rax_26 + 0xc) += (result - 1).d
                
                if (rax_33 == 1)
                    (*(*rax_26 + 8))(rax_26, 1)
        
        if ((rsi_1.b & 8) != 0)
            rsi_1 &= 0xfffffff7
            int64_t* var_1c0
            
            if (var_1c0 != 0)
                var_1c0[1].d += (result - 1).d
                
                if (var_1c0[1].d == 1)
                    (**var_1c0)(var_1c0)
                    int32_t rax_39 = *(var_1c0 + 0xc)
                    *(var_1c0 + 0xc) += (result - 1).d
                    
                    if (rax_39 == 1)
                        (*(*var_1c0 + 8))(var_1c0, 1)
        
        if ((rsi_1.b & 4) != 0)
            rsi_1 &= 0xfffffffb
            int64_t* var_1a8
            
            if (var_1a8 != 0)
                var_1a8[1].d += (result - 1).d
                
                if (var_1a8[1].d == 1)
                    (**var_1a8)(var_1a8)
                    int32_t rax_45 = *(var_1a8 + 0xc)
                    *(var_1a8 + 0xc) += (result - 1).d
                    
                    if (rax_45 == 1)
                        (*(*var_1a8 + 8))(var_1a8, 1)
        
        if ((rsi_1.b & 2) != 0)
            int64_t rcx_42 = var_228
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
        
        void var_198
        int64_t* rax_47 = sub_140aae420(&var_198, &var_2a0)
        int32_t var_88 = 4
        int64_t var_78_1 = *rax_47
        int64_t* rcx_45 = rax_47[1]
        
        if (rcx_45 != 0)
            rcx_45[1].d += 1
        
        int32_t var_68_1 = rax_47[2].d
        char var_60_1 = 1
        int64_t var_270 = 0
        int32_t var_268_1 = 0
        sub_1405947f0(&var_270, 0xb)
        int32_t rax_49 = var_268_1 + 0xb
        var_268_1 = rax_49
        
        if (rax_49 s> 0)
            sub_140594770(&var_270)
        
        UnDecorator::getReferenceType(var_270, u"ObjectName", 0x16)
        sub_140acb5e0(&var_138, &var_270, &var_88)
        int64_t rcx_50 = var_270
        
        if (rcx_50 != 0)
            sub_140a74f90(rcx_50)
        
        if (var_60_1 != 0 && rcx_45 != 0)
            rcx_45[1].d += (result - 1).d
            
            if (rcx_45[1].d == 1)
                (**rcx_45)(rcx_45)
                int32_t rax_54 = *(rcx_45 + 0xc)
                *(rcx_45 + 0xc) += (result - 1).d
                
                if (rax_54 == 1)
                    (*(*rcx_45 + 8))(rcx_45, 1)
        
        int64_t* var_190
        
        if (var_190 != 0)
            var_190[1].d += (result - 1).d
            
            if (var_190[1].d == 1)
                (**var_190)(var_190)
                int32_t rax_60 = *(var_190 + 0xc)
                *(var_190 + 0xc) += (result - 1).d
                
                if (rax_60 == 1)
                    (*(*var_190 + 8))(var_190, 1)
        
        void var_180
        void var_168
        char* var_150
        int64_t* rax_65 = sub_140ac6680(sub_140aaca20(&var_180, 
            sub_140a96390(&var_150, 
                _vfprintf_p_l(&var_168, 
                    Failed to find object '{ClassName} {OuterName}.{ObjectName}'", 
                Core")), &var_138))
        uint64_t var_218 = 0
        int32_t rbx_9 = rax_65[1].d
        int64_t rsi_2 = *rax_65
        int32_t var_210_1 = rbx_9
        
        if (rbx_9 != 0)
            sub_1405a4c70(&var_218, rbx_9, 0)
            memcpy(var_218, rsi_2, rbx_9 * 2)
        
        int64_t* var_178
        
        if (var_178 != 0)
            var_178[1].d += (result - 1).d
            
            if (var_178[1].d == 1)
                (**var_178)(var_178)
                int32_t rax_70 = *(var_178 + 0xc)
                *(var_178 + 0xc) += (result - 1).d
                
                if (rax_70 == 1)
                    (*(*var_178 + 8))(var_178, 1)
        
        int64_t* var_160
        
        if (var_160 != 0)
            var_160[1].d += (result - 1).d
            
            if (var_160[1].d == 1)
                (**var_160)(var_160)
                int32_t rdi_2 = *(var_160 + 0xc)
                *(var_160 + 0xc) += (result - 1).d
                
                if (rdi_2 == 1)
                    (*(*var_160 + 8))(var_160, zx.q(rdi_2))
        
        sub_140af2b60()
        sub_140b21a10(&data_143dbb3f0, u"TREATLOADWARNINGSASERRORS")
        uint64_t rcx_66 = var_260
        
        if (rcx_66 != 0)
            int16_t* var_240 = nullptr
            int32_t var_238_1 = 0
            sub_140d21e40(rcx_66, 0, &var_240)
            
            if (var_238_1 != 0)
                r14_1 = var_240
            
            *sub_140b58260(&var_208, r14_1, 1)
            sub_140cb00c0()
            int16_t* rcx_69 = var_240
            
            if (rcx_69 != 0)
                sub_140a74f90(rcx_69)
        
        uint64_t rcx_70 = var_218
        
        if (rcx_70 != 0)
            sub_140a74f90(rcx_70)
        
        int32_t var_f0_2 = 0
        
        if (var_f8_1 != 0)
            sub_140a74f90(var_f8_1)
        
        sub_140acd610(&var_138)
    
    int64_t rcx_73 = var_2a0
    
    if (rcx_73 != 0)
        sub_140a74f90(rcx_73)

__security_check_cookie(rax_1 ^ &var_2e8)
return result
