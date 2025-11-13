// 函数: sub_141daa4f0
// 地址: 0x141daa4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_248 = *arg2
void* rax_1 = arg2[1]
void* var_240 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141daee30(arg1, 2, 0xb, &var_248)
void* result

if (*(arg1 + 0x25c) == 0)
    int32_t rax_7
    
    if (arg4 != 0)
        int64_t* rcx_4 = *arg3
        rax_7 = (*(*rcx_4 + 0x40))(rcx_4)
    
    void** r14_4
    
    if (arg4 == 0 || rax_7 != 0xc8)
        int64_t var_260_1 = 6
        r14_4 = &arg1[0x56]
        int32_t var_250_1 = 0xfffffffe
        void** const var_268 = &data_142fc8f88
        int64_t var_258_1 = -1
        int32_t var_24c_1 = 0xfffffffe
        
        if (r14_4[1].d != 0)
            void* rcx_64 = *r14_4
            
            if (rcx_64 != 0 && (*(*rcx_64 + 0x28))(rcx_64) != 0)
                void* rcx_65
                
                if (r14_4[1].d == 0)
                    rcx_65 = nullptr
                else
                    rcx_65 = *r14_4
                
                (*(*rcx_65 + 0x50))(rcx_65, &var_268)
    else
        int64_t* rcx_5 = *arg3
        
        if (*((*(*rcx_5 + 0x30))(rcx_5) + 8) == 0)
            int64_t var_2a0_1 = 6
            int32_t var_290_1 = 0xfffffffe
            void** const var_2a8 = &data_142fc8f88
            int64_t var_298_1 = -1
            int32_t var_28c_1 = 0xfffffffe
            
            if (arg1[0x57].d != 0)
                int64_t* rcx_6 = arg1[0x56]
                
                if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
                    int64_t* rcx_7
                    
                    if (arg1[0x57].d == 0)
                        rcx_7 = nullptr
                    else
                        rcx_7 = arg1[0x56]
                    
                    (*(*rcx_7 + 0x50))(rcx_7, &var_2a8)
            
            void var_58
            
            if (&var_58 != &arg1[0x56] && arg1[0x57].d != 0)
                int64_t* rcx_8 = arg1[0x56]
                
                if (rcx_8 != 0)
                    (*(*rcx_8 + 0x38))(rcx_8, 0)
                    int64_t rcx_9 = arg1[0x56]
                    
                    if (rcx_9 != 0)
                        arg1[0x56] = sub_140a84c80(rcx_9, 0, 0)
                    
                    arg1[0x57].d = 0
            
            arg1[0x58] = -1
            arg1[0x59] = -1
            sub_140669d70(arg2)
            return sub_140669db0(arg3)
        
        int64_t var_238 = *arg3
        void* rax_16 = arg3[1]
        void* var_230_1 = rax_16
        
        if (rax_16 != 0)
            *(rax_16 + 8) += 1
        
        int64_t var_228 = *arg2
        void* rax_18 = arg2[1]
        void* var_220_1 = rax_18
        
        if (rax_18 != 0)
            *(rax_18 + 8) += 1
        
        int512_t zmm1_1 = sub_141da68b0(arg1, &var_228, &var_238)
        
        if (*(arg1 + 0x2c4) == 0)
            arg1[0x3e].d = 0
            
            if (*(arg1 + 0x1f4) != 0)
                sub_1405c5510(&arg1[0x3d], 0)
        
        int64_t* rcx_14 = *arg3
        int32_t arg_8 = 0
        int64_t rax_20 = (*(*rcx_14 + 0x30))(rcx_14)
        void** const var_118
        memset(&var_118, 0, 0x90)
        sub_140b4c2a0(&var_118)
        int64_t var_88_1 = 0
        int64_t var_80_1 = rax_20
        int64_t var_78_1 = 0x7fffffffffffffff
        var_118 = &data_142d6b230
        sub_140b55290(&var_118, 1)
        var_118[0x1b](&var_118, 1)
        int64_t* var_110
        int32_t* rdx_4 = *var_110
        
        if (&rdx_4[1] u> var_110[1])
            int32_t* rdx_5 = &arg_8
            void** const* rcx_20 = &var_118
            char var_ef
            
            if ((var_ef & 0x20) != 0)
                sub_140b54070(rcx_20, rdx_5, zmm1_1)
            else
                var_118[0x2a](rcx_20, rdx_5, 4)
        else
            arg_8 = *rdx_4
            *var_110 += 4
        
        int64_t arg_10 = 0
        void** const var_1c8
        memset(&var_1c8, 0, 0x90)
        sub_140b4c2a0(&var_1c8)
        int64_t var_138_1 = 0
        var_1c8 = &data_142d6ad48
        int64_t var_128_1 = 0
        sub_140b552b0(&var_1c8, 1)
        int64_t rdx_7
        rdx_7.b = 1
        var_1c8[0x1b](&var_1c8, rdx_7)
        int64_t var_138_2 = sx.q(arg1[0x3e].d)
        int64_t* var_1c0
        int32_t* rdx_8 = *var_1c0
        
        if (&rdx_8[1] u> var_1c0[1])
            int32_t* rdx_9 = &arg_8
            void** const* rcx_27 = &var_1c8
            char var_19f
            
            if ((var_19f & 0x20) != 0)
                sub_140b54070(rcx_27, rdx_9, zmm1_1)
            else
                var_1c8[0x2a](rcx_27, rdx_9, 4)
        else
            arg_8 = *rdx_8
            *var_1c0 += 4
        
        int64_t var_218 = *arg3
        void* rax_31 = arg3[1]
        void* var_210_1 = rax_31
        
        if (rax_31 != 0)
            *(rax_31 + 8) += 1
        
        if ((*(*arg1 + 0x1c8))(arg1, &var_218, &arg1[0x3d]) == 0)
            int64_t var_280_1 = 6
            void** const var_288 = &data_142fc8f88
            int64_t var_278_1 = -1
            int32_t var_270_1 = 0xfffffffe
            int32_t var_26c_1 = 0xfffffffe
            
            if (arg1[0x57].d != 0)
                int64_t* rcx_29 = arg1[0x56]
                
                if (rcx_29 != 0 && (*(*rcx_29 + 0x28))(rcx_29) != 0)
                    int64_t* rcx_30
                    
                    if (arg1[0x57].d == 0)
                        rcx_30 = nullptr
                    else
                        rcx_30 = arg1[0x56]
                    
                    (*(*rcx_30 + 0x50))(rcx_30, &var_288)
            
            void var_48
            
            if (&var_48 != &arg1[0x56] && arg1[0x57].d != 0)
                int64_t* rcx_31 = arg1[0x56]
                
                if (rcx_31 != 0)
                    (*(*rcx_31 + 0x38))(rcx_31, 0)
                    int64_t rcx_32 = arg1[0x56]
                    
                    if (rcx_32 != 0)
                        arg1[0x56] = sub_140a84c80(rcx_32, 0, 0)
                    
                    arg1[0x57].d = 0
            
            arg1[0x58] = -1
            arg1[0x59] = -1
            goto label_141daa9e1
        
        int32_t rax_39 = *(arg1 + 0x2c4)
        
        if (rax_39 s< arg1[0x58].d)
            *(arg1 + 0x2c4) = rax_39 + 1
            int64_t* rax_41 = sub_141802500()
            int64_t r8_2 = *rax_41
            int64_t* var_2d8
            (*(r8_2 + 0x40))(rax_41, &var_2d8, r8_2)
            int16_t* const rcx_36 = &data_142d40450
            int64_t r9_1 = arg1[0x5b]
            int64_t* rbx_3 = var_2d8
            int64_t rax_43 = sx.q(*(arg1 + 0x2c4)) << 6
            
            if (*(rax_43 + r9_1 + 0x10) != 0)
                *(rax_43 + r9_1 + 8)
            
            if (arg1[0x46].d != 0)
                rcx_36 = arg1[0x45]
            
            int64_t var_208
            sub_140a2e390(&var_208, u"%sevent/%s", rcx_36)
            (*(*rbx_3 + 0x50))(rbx_3, &var_208)
            int64_t rcx_39 = var_208
            
            if (rcx_39 != 0)
                sub_140a74f90(rcx_39)
            
            int64_t var_2e8 = 0
            int32_t var_2e0_1 = 0
            sub_1405947f0(&var_2e8, 4)
            int32_t rax_45 = var_2e0_1 + 4
            var_2e0_1 = rax_45
            
            if (rax_45 s> 0)
                sub_140594770(&var_2e8)
            
            UnDecorator::getReferenceType(var_2e8, &data_142d85f90, 8)
            int64_t* rcx_43 = var_2d8
            (*(*rcx_43 + 0x48))(rcx_43, &var_2e8)
            int64_t rcx_44 = var_2e8
            
            if (rcx_44 != 0)
                sub_140a74f90(rcx_44)
            
            int64_t* rcx_45 = var_2d8
            sub_141da4560((*(*rcx_45 + 0x90))(rcx_45), arg1, sub_141daa4f0)
            uint128_t zmm0_1 = var_2d8.o
            uint128_t var_1d8 = zmm0_1
            void* rax_49 = _mm_bsrli_si128(zmm0_1, 8).q
            
            if (rax_49 != 0)
                *(rax_49 + 8) += 1
            
            sub_141da6730(arg1, 0xb, &var_1d8, 0, 0)
            int64_t* var_2d0
            
            if (var_2d0 != 0)
                var_2d0[1].d -= 1
                
                if (var_2d0[1].d == 1)
                    (**var_2d0)(var_2d0)
                    int32_t temp4_1 = *(var_2d0 + 0xc)
                    *(var_2d0 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*var_2d0 + 8))(var_2d0, 1)
            
        label_141daa9e1:
            sub_140b4cb40(&var_1c8)
            sub_140b4cb40(&var_118)
            sub_140669d70(arg2)
            return sub_140669db0(arg3)
        
        arg1[0x3f].d = 0
        arg1[0x29].d = 0
        
        if (*(arg1 + 0x14c) != 0)
            sub_1405c5510(&arg1[0x28], 0)
        
        int64_t rax_52 = arg1[0x5b]
        int64_t rcx_52 = sx.q(arg1[0x58].d) << 6
        arg1[0x2a].d = 0
        *(arg1 + 0x154) = 0
        arg1[0x53].d = 0
        *(arg1 + 0x27c) = 0
        wchar16* _String
        
        if (*(rcx_52 + rax_52 + 0x30) == 0)
            _String = &data_142d40450
        else
            _String = *(rcx_52 + rax_52 + 0x28)
        
        int32_t rax_53 = _wtoi(_String)
        int64_t rdx_17 = arg1[0x59]
        arg1[0x47].d = rax_53
        arg1[0x48] = 0
        
        if (rdx_17 s>= 0)
            if (rax_53 s>= arg1[0x4e].d)
                int64_t rcx_53 = arg1[0x5b]
                int64_t rdx_19 = sx.q(arg1[0x58].d) << 6
                *(arg1 + 0x27c) = *(rdx_19 + rcx_53 + 0x38)
                rdx_17 = -1
                arg1[0x50].d = *(rdx_19 + rcx_53 + 0x38)
                arg1[0x59] = -1
            
            if (rdx_17 s>= 0)
                int64_t r9_4 = *arg1
                (*(r9_4 + 0x70))(arg1, zx.q(*((sx.q(arg1[0x58].d) << 6) + arg1[0x5b] + 0x38)), 
                    zx.q(rdx_17.d), r9_4)
                arg1[0x59] -= zx.q(*((sx.q(arg1[0x58].d) << 6) + arg1[0x5b] + 0x38))
                rdx_17 = arg1[0x59]
        
        r14_4 = &arg1[0x56]
        int32_t var_1e0_1 = 0xfffffffe
        int32_t var_1dc_1 = 0xfffffffe
        void** const var_1f8 = &data_142fc8f88
        int32_t var_1f0_1 = 0
        int64_t var_1e8_1 = rdx_17
        
        if (r14_4[1].d != 0)
            void* rcx_60 = *r14_4
            
            if (rcx_60 != 0 && (*(*rcx_60 + 0x28))(rcx_60) != 0)
                void* rcx_61
                
                if (r14_4[1].d == 0)
                    rcx_61 = nullptr
                else
                    rcx_61 = *r14_4
                
                (*(*rcx_61 + 0x50))(rcx_61, &var_1f8)
        
        sub_140b4cb40(&var_1c8)
        sub_140b4cb40(&var_118)
    
    void var_38
    result = &var_38
    
    if (&var_38 != r14_4 && r14_4[1].d != 0)
        void* rcx_66 = *r14_4
        
        if (rcx_66 != 0)
            result = (*(*rcx_66 + 0x38))(rcx_66, 0)
            void* rcx_67 = *r14_4
            
            if (rcx_67 != 0)
                result = sub_140a84c80(rcx_67, 0, 0)
                *r14_4 = result
            
            r14_4[1].d = 0
    
    arg1[0x58] = -1
else
    int64_t var_2c0_1 = 6
    int32_t var_2b0_1 = 0xfffffffe
    void** const var_2c8 = &data_142fc8f88
    int64_t var_2b8_1 = -1
    int32_t var_2ac_1 = 0xfffffffe
    
    if (arg1[0x57].d != 0)
        int64_t* rcx = arg1[0x56]
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (arg1[0x57].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x56]
            
            (*(*rcx_1 + 0x50))(rcx_1, &var_2c8)
    
    void var_68
    result = &var_68
    
    if (&var_68 != &arg1[0x56] && arg1[0x57].d != 0)
        int64_t* rcx_2 = arg1[0x56]
        
        if (rcx_2 != 0)
            result = (*(*rcx_2 + 0x38))(rcx_2, 0)
            int64_t rcx_3 = arg1[0x56]
            
            if (rcx_3 != 0)
                result = sub_140a84c80(rcx_3, 0, 0)
                arg1[0x56] = result
            
            arg1[0x57].d = 0
    
    arg1[0x58] = -1

arg1[0x59] = -1
int64_t* rdi_1 = arg2[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        result = (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg3[1]

if (rdi_2 != 0)
    result = zx.q(rdi_2[1].d)
    rdi_2[1].d -= 1
    
    if (result.d == 1)
        result = (**rdi_2)(rdi_2)
        int32_t rbx_5 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rbx_5 == 1)
            return (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_5))

return result
