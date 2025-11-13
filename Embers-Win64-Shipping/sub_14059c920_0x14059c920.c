// 函数: sub_14059c920
// 地址: 0x14059c920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
uint64_t result = sub_140b1d450()

if (result.b != 0)
    int16_t* _Source_1
    int64_t var_120
    sub_140b18700(&_Source_1, sub_140b1aa20(&var_120), 1)
    int64_t rcx_3 = var_120
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int16_t* const _Source = &data_142d40450
    int16_t* result_1 = _Source_1
    result = &data_142d40450
    int32_t var_170
    
    if (var_170 != 0)
        result = result_1
    
    void* r9_1 = u"Embers" - result
    uint32_t i
    uint32_t rdx_2
    
    do
        rdx_2 = zx.d(*result)
        i = zx.d(*(result + r9_1))
        
        if (rdx_2 != i)
            break
        
        result += 2
    while (i != 0)
    
    if (rdx_2 - i != 0 && ((*u"Embers")[0] == 0 || data_143cefff1 != 0))
        int16_t* const result_2 = &data_142d40450
        
        if (var_170 != 0)
            result_2 = result_1
        
        int32_t rax_3 = sub_140a54510(result_2, u"Embers")
        
        if (rax_3 != 0)
            int32_t rcx_4 = 0
            int32_t rdx_5 = 0
            int64_t var_188 = 0
            int32_t var_180_1 = 0
            int32_t var_17c_1 = 0
            
            if ((*u"Embers")[0] != 0)
                int64_t rbx_1 = -1
                
                do
                    rbx_1 += 1
                while ((*u"Embers")[rbx_1] != 0)
                
                if (rbx_1.d + 1 s> 0)
                    sub_1405947f0(&var_188, rbx_1.d + 1)
                    rcx_4 = var_17c_1
                    rdx_5 = var_180_1
                
                int32_t rax_4 = rdx_5 + rbx_1.d + 1
                int32_t var_180_2 = rax_4
                
                if (rax_4 s> rcx_4)
                    sub_140594770(&var_188)
                
                UnDecorator::getReferenceType(var_188, u"Embers", (rbx_1.d + 1) * 2)
            
            int16_t* _Source_2 = &data_142d40450
            int32_t rdx_7 = 0
            int64_t var_198 = 0
            
            if (var_170 != 0)
                _Source_2 = _Source_1
            
            int32_t rcx_8 = 0
            int32_t var_190_1 = 0
            int32_t var_18c_1 = 0
            
            if (_Source_2 != 0 && *_Source_2 != 0)
                int64_t rbx_3 = -1
                
                do
                    rbx_3 += 1
                while (_Source_2[rbx_3] != 0)
                
                if (rbx_3.d + 1 s> 0)
                    sub_1405947f0(&var_198, rbx_3.d + 1)
                    rcx_8 = var_18c_1
                    rdx_7 = var_190_1
                
                int32_t rax_5 = rdx_7 + rbx_3.d + 1
                int32_t var_190_2 = rax_5
                
                if (rax_5 s> rcx_8)
                    sub_140594770(&var_198)
                
                UnDecorator::getReferenceType(var_198, _Source_2, (rbx_3.d + 1) * 2)
            
            void var_d0
            int64_t* rax_6 = sub_140aae2f0(&var_d0, &var_188)
            void var_b8
            int64_t* rax_7 = sub_140aae2f0(&var_b8, &var_198)
            void var_f8
            char* var_e0
            char** rax_9 = sub_140a96390(&var_e0, 
                _vfprintf_p_l(&var_f8, 
                    The name of the .uproject file ('{0}') must match the name of the project passed in the "
            "command line ('{1}').", 
                Core"))
            int64_t var_88_1 = *rax_7
            void* rcx_17 = rax_7[1]
            int32_t var_98_1 = 4
            void* var_80_1 = rcx_17
            
            if (rcx_17 != 0)
                *(rcx_17 + 8) += 1
            
            int32_t var_78_1 = rax_7[2].d
            int64_t var_58_1 = *rax_6
            void* rax_12 = rax_6[1]
            char var_70_1 = 1
            int32_t var_68_1 = 4
            void* var_50_1 = rax_12
            
            if (rax_12 != 0)
                *(rax_12 + 8) += 1
            
            int64_t i_2 = 2
            int32_t var_48_1 = rax_6[2].d
            char var_40_1 = 1
            void* var_168 = nullptr
            int32_t var_160_1 = 2
            sub_1405a4b40(&var_168, 2, 0)
            void var_90
            void* rdx_13 = &var_90
            int64_t* rcx_20 = var_168 + 8
            int32_t i_3 = 2
            int32_t i_1
            
            do
                rcx_20[-1].d = *(rdx_13 - 8)
                *rcx_20 = *rdx_13
                *rcx_20 = *rdx_13
                *rcx_20 = *rdx_13
                *rcx_20 = *rdx_13
                rcx_20[4].b = 0
                
                if (*(rdx_13 + 0x20) != 0)
                    rcx_20[1] = *(rdx_13 + 8)
                    void* rax_20 = *(rdx_13 + 0x10)
                    rcx_20[2] = rax_20
                    
                    if (rax_20 != 0)
                        *(rax_20 + 8) += 1
                    
                    rcx_20[3].d = *(rdx_13 + 0x18)
                    rcx_20[4].b = 1
                
                rcx_20 = &rcx_20[6]
                rdx_13 += 0x30
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            char* var_130 = *rax_9
            void* rax_23 = rax_9[1]
            void* var_128_1 = rax_23
            
            if (rax_23 != 0)
                *(rax_23 + 8) += 1
            
            void var_110
            int64_t* rax_24 = sub_140aac870(&var_110, &var_130, &var_168)
            int64_t var_148 = *rax_24
            int64_t* rcx_23 = rax_24[1]
            
            if (rcx_23 != 0)
                rcx_23[1].d += 1
            
            int32_t var_138_1 = rax_24[2].d
            int64_t* var_108
            
            if (var_108 != 0)
                var_108[1].d -= 1
                
                if (var_108[1].d == 1)
                    (**var_108)(var_108)
                    int32_t rax_28 = *(var_108 + 0xc)
                    *(var_108 + 0xc) -= 1
                    
                    if (rax_28 == 1)
                        (*(*var_108 + 8))(var_108, 1)
            
            sub_140596f50(&var_168)
            int64_t __saved_r12
            int64_t* rdi_2 = &__saved_r12
            
            do
                i_2 -= 1
                rdi_2 = &rdi_2[-6]
                
                if (*rdi_2 != 0)
                    *rdi_2 = 0
                    int64_t* rbx_7 = rdi_2[-2]
                    
                    if (rbx_7 != 0)
                        rbx_7[1].d -= 1
                        
                        if (rbx_7[1].d == 1)
                            (**rbx_7)(rbx_7)
                            int32_t rax_32 = *(rbx_7 + 0xc)
                            *(rbx_7 + 0xc) -= 1
                            
                            if (rax_32 == 1)
                                (*(*rbx_7 + 8))(rbx_7, 1)
            while (i_2 != 0)
            
            int64_t* rbx_9 = rax_9[1]
            
            if (rbx_9 != 0)
                rbx_9[1].d -= 1
                
                if (rbx_9[1].d == 1)
                    (**rbx_9)(rbx_9)
                    int32_t rax_36 = *(rbx_9 + 0xc)
                    *(rbx_9 + 0xc) -= 1
                    
                    if (rax_36 == 1)
                        (*(*rbx_9 + 8))(rbx_9, 1)
            
            int64_t* rbx_11 = rax_7[1]
            
            if (rbx_11 != 0)
                rbx_11[1].d -= 1
                
                if (rbx_11[1].d == 1)
                    (**rbx_11)(rbx_11)
                    int32_t rax_40 = *(rbx_11 + 0xc)
                    *(rbx_11 + 0xc) -= 1
                    
                    if (rax_40 == 1)
                        (*(*rbx_11 + 8))(rbx_11, 1)
            
            int64_t* rbx_12 = rax_6[1]
            
            if (rbx_12 != 0)
                rbx_12[1].d -= 1
                
                if (rbx_12[1].d == 1)
                    (**rbx_12)(rbx_12)
                    int32_t rax_44 = *(rbx_12 + 0xc)
                    *(rbx_12 + 0xc) -= 1
                    
                    if (rax_44 == 1)
                        (*(*rbx_12 + 8))(rbx_12, 1)
            
            int64_t* var_f0
            
            if (var_f0 != 0)
                var_f0[1].d -= 1
                
                if (var_f0[1].d == 1)
                    (**var_f0)(var_f0)
                    int32_t rax_48 = *(var_f0 + 0xc)
                    *(var_f0 + 0xc) -= 1
                    
                    if (rax_48 == 1)
                        (*(*var_f0 + 8))(var_f0, 1)
            
            int64_t rcx_37 = var_198
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
            
            int64_t rcx_38 = var_188
            
            if (rcx_38 != 0)
                sub_140a74f90(rcx_38)
            
            if (data_143de542e == 0)
                sub_140b21610(0, &var_148, nullptr)
            
            wcsncpy(u"Embers", &data_142d40450, 0x3f)
            bool cond:5_1 = data_143de542e != 0
            data_14399e17e = 0
            
            if (not(cond:5_1))
                exit(1)
                noreturn
            
            int16_t** rax_50 = sub_140ac6680(&var_148)
            
            if (rax_50[1].d != 0)
                _Source = *rax_50
            
            sub_140af98a0("Unknown", 0x2d2, u"%s", _Source)
            result = sub_140afbb40()
            
            if (rcx_23 != 0)
                result = zx.q(rcx_23[1].d)
                rcx_23[1].d -= 1
                
                if (result.d == 1)
                    result = (**rcx_23)(rcx_23)
                    int32_t rsi_1 = *(rcx_23 + 0xc)
                    *(rcx_23 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        result = (*(*rcx_23 + 8))(rcx_23, zx.q(rsi_1))
        else
            if (var_170 != rax_3)
                _Source = _Source_1
            
            result = wcsncpy(u"Embers", _Source, zx.q(rax_3 + 0x3f))
            data_14399e17e = 0
        
        result_1 = _Source_1
    
    if (result_1 != 0)
        result = sub_140a74f90(result_1)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
