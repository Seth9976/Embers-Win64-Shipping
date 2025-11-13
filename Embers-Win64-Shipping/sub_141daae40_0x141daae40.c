// 函数: sub_141daae40
// 地址: 0x141daae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = *arg2
void* rax_1 = arg2[1]
void* var_b0 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141daee30(arg1, 2, 0xb, &var_b8)
void* result
void* r14_1
bool cond:0_1

if (*(arg1 + 0x25c) == 0)
    int32_t rax_6
    
    if (arg4 != 0)
        int64_t* rcx_2 = *arg3
        rax_6 = (*(*rcx_2 + 0x40))(rcx_2)
    
    int64_t* rcx_21
    
    if (arg4 == 0 || rax_6 != 0xc8)
        int64_t var_d0_1 = 6
        r14_1 = &arg1[0x56]
        int32_t var_c0_1 = 0xfffffffe
        void** var_d8 = &data_142fc8f88
        int64_t var_c8_1 = -1
        int32_t var_bc_1 = 0xfffffffe
        
        if (*(r14_1 + 8) != 0)
            int64_t* rcx_22 = *r14_1
            
            if (rcx_22 != 0 && (*(*rcx_22 + 0x28))(rcx_22) != 0)
                if (*(r14_1 + 8) == 0)
                    rcx_21 = nullptr
                else
                    rcx_21 = *r14_1
                
                (*(*rcx_21 + 0x50))(rcx_21, &var_d8)
    else
        int64_t* rcx_3 = *arg3
        
        if (*((*(*rcx_3 + 0x30))(rcx_3) + 8) == 0)
            int64_t var_110_1 = 6
            int32_t var_100_1 = 0xfffffffe
            int32_t var_fc_1 = 0xfffffffe
            void** const var_118 = &data_142fc8f88
            int64_t var_108_1 = -1
            
            if (arg1[0x57].d != 0)
                int64_t* rcx_4 = arg1[0x56]
                
                if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
                    int64_t* rcx_5
                    
                    if (arg1[0x57].d == 0)
                        rcx_5 = nullptr
                    else
                        rcx_5 = arg1[0x56]
                    
                    (*(*rcx_5 + 0x50))(rcx_5, &var_118)
            
            void var_48
            
            if (&var_48 != &arg1[0x56] && arg1[0x57].d != 0)
                int64_t* rcx_6 = arg1[0x56]
                
                if (rcx_6 != 0)
                    (*(*rcx_6 + 0x38))(rcx_6, 0)
                    int64_t rcx_7 = arg1[0x56]
                    
                    if (rcx_7 != 0)
                        arg1[0x56] = sub_140a84c80(rcx_7, 0, 0)
                    
                    arg1[0x57].d = 0
            
            sub_140669d70(arg2)
            return sub_140669db0(arg3)
        
        int64_t var_a8 = *arg3
        void* rax_15 = arg3[1]
        void* var_a0_1 = rax_15
        
        if (rax_15 != 0)
            *(rax_15 + 8) += 1
        
        int64_t var_98 = *arg2
        void* rax_17 = arg2[1]
        void* var_90_1 = rax_17
        
        if (rax_17 != 0)
            *(rax_17 + 8) += 1
        
        sub_141da68b0(arg1, &var_98, &var_a8)
        arg1[0x3e].d = 0
        
        if (*(arg1 + 0x1f4) != 0)
            sub_1405c5510(&arg1[0x3d], 0)
        
        int64_t var_88 = *arg3
        void* rax_19 = arg3[1]
        void* var_80_1 = rax_19
        
        if (rax_19 != 0)
            *(rax_19 + 8) += 1
        
        if ((*(*arg1 + 0x1c8))(arg1, &var_88, &arg1[0x3d]) == 0)
            int64_t var_f0_1 = 6
            void** const var_f8 = &data_142fc8f88
            int64_t var_e8_1 = -1
            int32_t var_e0_1 = 0xfffffffe
            int32_t var_dc_1 = 0xfffffffe
            
            if (arg1[0x57].d != 0)
                int64_t* rcx_13 = arg1[0x56]
                
                if (rcx_13 != 0 && (*(*rcx_13 + 0x28))(rcx_13) != 0)
                    int64_t* rcx_14
                    
                    if (arg1[0x57].d == 0)
                        rcx_14 = nullptr
                    else
                        rcx_14 = arg1[0x56]
                    
                    (*(*rcx_14 + 0x50))(rcx_14, &var_f8)
            
            void var_38
            
            if (&var_38 != &arg1[0x56] && arg1[0x57].d != 0)
                int64_t* rcx_15 = arg1[0x56]
                
                if (rcx_15 != 0)
                    (*(*rcx_15 + 0x38))(rcx_15, 0)
                    int64_t rcx_16 = arg1[0x56]
                    
                    if (rcx_16 != 0)
                        arg1[0x56] = sub_140a84c80(rcx_16, 0, 0)
                    
                    arg1[0x57].d = 0
            
            arg1[0x58].d = 0xffffffff
            arg1[0x59] = -1
            sub_140669d70(arg2)
            return sub_140669db0(arg3)
        
        arg1[0x3f].d = 0
        arg1[0x29].d = 0
        
        if (*(arg1 + 0x14c) != 0)
            sub_1405c5510(&arg1[0x28], 0)
        
        void* r14_5 = (sx.q(arg1[0x58].d) << 6) + arg1[0x5b]
        arg1[0x2a].d = 0
        *(arg1 + 0x154) = 0
        arg1[0x53].d = 0
        *(arg1 + 0x27c) = 0
        wchar16* _String
        
        if (*(r14_5 + 0x30) == 0)
            _String = &data_142d40450
        else
            _String = *(r14_5 + 0x28)
        
        int32_t rax_27 = _wtoi(_String)
        int64_t rcx_18 = arg1[0x59]
        arg1[0x47].d = rax_27
        arg1[0x48] = 0
        
        if (rcx_18 s>= 0)
            if (rax_27 s>= arg1[0x4e].d)
                rcx_18 = -1
                *(arg1 + 0x27c) = *(r14_5 + 0x38)
                arg1[0x50].d = *(r14_5 + 0x38)
                arg1[0x59] = -1
            
            if (rcx_18 s>= 0)
                (*(*arg1 + 0x70))(arg1, zx.q(*(r14_5 + 0x38)), zx.q(rcx_18.d))
                arg1[0x59] -= zx.q(*(r14_5 + 0x38))
                rcx_18 = arg1[0x59]
        
        int32_t var_70_1 = 0
        void** const var_78 = &data_142fc8f88
        int32_t var_5c_1 = arg1[0x58].d
        int64_t var_68_1 = rcx_18
        r14_1 = &arg1[0x56]
        int32_t var_60_1 = *(r14_5 + 0x38)
        
        if (*(r14_1 + 8) != 0)
            int64_t* rcx_20 = *r14_1
            
            if (rcx_20 != 0 && (*(*rcx_20 + 0x28))(rcx_20) != 0)
                void** const* rdx_6
                
                if (*(r14_1 + 8) == 0)
                    rcx_21 = nullptr
                    rdx_6 = &var_78
                else
                    rcx_21 = *r14_1
                    rdx_6 = &var_78
                
                (*(*rcx_21 + 0x50))(rcx_21, rdx_6)
    void var_28
    result = &var_28
    
    if (&var_28 != r14_1)
        cond:0_1 = *(r14_1 + 8) == 0
        goto label_141dab2fe
else
    int64_t var_130_1 = 6
    r14_1 = &arg1[0x56]
    int32_t var_120_1 = 0xfffffffe
    void** const var_138 = &data_142fc8f88
    int64_t var_128_1 = -1
    int32_t var_11c_1 = 0xfffffffe
    
    if (*(r14_1 + 8) != 0)
        int64_t* rcx = *r14_1
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(r14_1 + 8) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *r14_1
            
            (*(*rcx_1 + 0x50))(rcx_1, &var_138)
    
    void var_58
    result = &var_58
    
    if (&var_58 != r14_1)
        cond:0_1 = *(r14_1 + 8) == 0
    label_141dab2fe:
        
        if (not(cond:0_1))
            int64_t* rcx_23 = *r14_1
            
            if (rcx_23 != 0)
                result = (*(*rcx_23 + 0x38))(rcx_23, 0)
                int64_t rcx_24 = *r14_1
                
                if (rcx_24 != 0)
                    result = sub_140a84c80(rcx_24, 0, 0)
                    *r14_1 = result
                
                *(r14_1 + 8) = 0
arg1[0x58].d = 0xffffffff
arg1[0x59] = -1
int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    result = zx.q(rbx_3[1].d)
    rbx_3[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rdi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_1))

return result
