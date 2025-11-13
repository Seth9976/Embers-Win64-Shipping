// 函数: sub_14106c520
// 地址: 0x14106c520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == *(arg1 + 0x98))
    *(arg1 + 0x98) = 0
    z = true
else
    *(arg1 + 0x98)
    z = false

if (z)
    if (arg4 != 0)
        while (true)
            int32_t rax_3 = 0
            
            if (0 == *(arg1 + 8))
                *(arg1 + 8) = 0
            else
                rax_3 = *(arg1 + 8)
            
            int32_t rax_4 = 0
            
            if (0 == *(arg1 + 0xc))
                *(arg1 + 0xc) = 0
            else
                rax_4 = *(arg1 + 0xc)
            
            if (rax_3 s< rax_4)
                break
            
            int64_t* rcx_1 = *(arg1 + 0x10)
            (*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0)
        
        goto label_14106c5ba
    
    int32_t rax_6 = 0
    
    if (0 == *(arg1 + 8))
        *(arg1 + 8) = 0
    else
        rax_6 = *(arg1 + 8)
    
    int32_t rax_7 = 0
    
    if (0 == *(arg1 + 0xc))
        *(arg1 + 0xc) = 0
    else
        rax_7 = *(arg1 + 0xc)
    
    if (rax_6 s< rax_7)
    label_14106c5ba:
        void*** rax_8
        int512_t zmm1
        rax_8, zmm1 = sub_14106a580()
        void*** var_50 = rax_8
        
        if (rax_8 != 0)
            rax_8[1].d += 1
            
            if (rax_8 != 0)
                rax_8[1].d -= 1
                
                if (rax_8[1].d == 1)
                    (**rax_8)(rax_8)
                    int32_t rax_12 = *(rax_8 + 0xc)
                    *(rax_8 + 0xc) -= 1
                    
                    if (rax_12 == 1)
                        (*rax_8)[1](rax_8, 1)
        
        char var_48 = 1
        
        if (rax_8 != 0)
            rax_8[1].d += 1
        
        EnterCriticalSection(arg1 + 0x50)
        *(arg1 + 0x8c) += 1
        int32_t r13 = *(arg1 + 0x88)
        
        if (arg1 != -0x50)
            LeaveCriticalSection(arg1 + 0x50)
        
        int64_t* rax_15 = j_sub_140a82f30(0x38)
        int64_t* r15 = rax_15
        int64_t var_68
        
        if (rax_15 == 0)
            r15 = nullptr
        else
            *r15 = &data_142f04560
            r15[1].d = r13
            r15[2] = arg1
            r15[3] = *arg3
            *arg3 = 0
            __builtin_memset(&var_68, 0, 0x20)
            r15[4] = &rax_8[2]
            r15[5] = rax_8
            int64_t* var_60
            sub_1405aeff0(&var_50, &var_60)
            int64_t* rcx_9 = var_60
            
            if (rcx_9 != 0)
                rcx_9[1].d -= 1
                
                if (rcx_9[1].d == 1)
                    int64_t* rbx_3 = var_60
                    (**rbx_3)(rbx_3)
                    int32_t rax_20 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_20 == 1)
                        int64_t* rcx_11 = var_60
                        (*(*rcx_11 + 8))(rcx_11, 1)
            
            r15[6].b = var_48
        
        if (*(arg1 + 0x48) != 0)
            EnterCriticalSection(arg1 + 0x18)
            int64_t* rcx_14 = *(arg1 + 0x48)
            (*(*rcx_14 + 0x10))(rcx_14, r15)
            
            if (arg1 != -0x18)
                LeaveCriticalSection(arg1 + 0x18)
        else
            sub_14106c4c0(r15, zmm1, arg5, arg6, &rax_8[2], rax_8, var_68)
        
        *(arg1 + 8) += 1
        void*** rcx_16 = var_50
        *arg2 = &rax_8[2]
        arg2[1] = rax_8
        
        if (rcx_16 != 0)
            rcx_16[1].d -= 1
            
            if (rcx_16[1].d == 1)
                void*** rbx_5 = var_50
                (**rbx_5)(rbx_5)
                int32_t r14_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (r14_1 == 1)
                    void*** rcx_18 = var_50
                    (*rcx_18)[1](rcx_18, zx.q(r14_1))
        
        return arg2

*arg2 = 0
arg2[1] = 0
return arg2
