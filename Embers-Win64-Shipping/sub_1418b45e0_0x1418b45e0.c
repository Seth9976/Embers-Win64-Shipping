// 函数: sub_1418b45e0
// 地址: 0x1418b45e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x30))

if (rcx.d s< 0)
    return 

int32_t r9_1 = *(arg1 + 0x28)

if (rcx.d s>= r9_1)
    return 

int64_t* r8_1 = *(*(arg1 + 0x20) + rcx * 0x10)

if (r8_1 == 0)
    return 

if (rcx.d s< 0 || rcx.d s>= r9_1)
    r8_1 = nullptr

if ((*(*r8_1 + 0x50))(r8_1).b != 2)
    return 

int64_t rax = sx.q(*(arg1 + 0x30))
int64_t* rsi_1

if (rax.d s>= 0 && rax.d s< *(arg1 + 0x28))
    rsi_1 = *(*(arg1 + 0x20) + rax * 0x10)

if (rax.d s< 0 || rax.d s>= *(arg1 + 0x28) || rsi_1 == 0)
    rsi_1 = nullptr

if (rsi_1 != 0)
    int64_t* rcx_4 = *(arg1 + 0x58)
    int64_t rdx_3 = 0
    int64_t* rbx_1 = rcx_4
    
    if (rcx_4 != 0)
        int32_t rax_2 = rcx_4[1].d
        
        if (rax_2 != 0)
            rcx_4[1].d = rax_2 + 1
            rax_2 = 1
        
        if (rax_2.b == 0)
            rcx_4 = nullptr
            rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rdx_3 = *(arg1 + 0x50)
    
    int64_t var_58 = rdx_3
    int64_t* var_50_1 = rcx_4
    
    if (rcx_4 != 0)
        *(rcx_4 + 0xc) += 1
    
    (*(*rsi_1 + 0x30))(rsi_1, &var_58)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    void var_38
    int64_t r14
    
    if (*(*(*rsi_1 + 0x68))(rsi_1, &var_38) == 0 || *(arg1 + 0x60) == 0)
        r14.b = 0
    else
        r14 = 1
    
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp4_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    if (r14.b != 0)
        void var_28
        int64_t* rax_11 = (*(*rsi_1 + 0x68))(rsi_1, &var_28)
        int64_t var_48 = *rax_11
        int64_t var_40_1 = rax_11[1]
        rax_11[1] = 0
        *rax_11 = 0
        sub_140e23de0(*(arg1 + 0x60), &var_48)
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp6_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)

if (*(arg1 + 0x40) == 0)
    return 

EnterCriticalSection(arg1 + 0x80)

if (*(arg1 + 0x78) == 0)
    char* rax_14 = j_sub_140a82f30(0x30)
    char* rsi_2 = rax_14
    
    if (rax_14 == 0)
        rsi_2 = nullptr
    else
        int64_t* r14_1 = *(arg1 + 0x48)
        int64_t rax_15 = *(arg1 + 0x40)
        
        if (r14_1 != 0)
            r14_1[1].d += 1
        
        *rsi_2 = 0
        *(rsi_2 + 4) = 0
        *(rsi_2 + 8) = 0
        *(rsi_2 + 0x20) = rax_15
        *(rsi_2 + 0x28) = r14_1
        
        if (r14_1 != 0)
            r14_1[1].d += 1
            r14_1[1].d -= 1
            
            if (r14_1[1].d == 1)
                (**r14_1)(r14_1)
                int32_t rax_18 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (rax_18 == 1)
                    (*(*r14_1 + 8))(r14_1, 1)
    
    *(arg1 + 0x78) = rsi_2
    *(rsi_2 + 8) = 0
    *(rsi_2 + 4)
    *(rsi_2 + 4) = 1
    char rcx_20 = *rsi_2
    *rsi_2 += 1
    
    if (rcx_20 == 0)
        int16_t* var_68 = nullptr
        int32_t var_60_1 = 0
        sub_1405947f0(&var_68, 0x13)
        int32_t rax_20 = var_60_1 + 0x13
        
        if (rax_20 s> 0)
            sub_140594770(&var_68)
        
        UnDecorator::getReferenceType(var_68, u"SlateLoadingThread", 0x26)
        int32_t rbp_1 = data_143efaf30
        data_143efaf30 += 1
        sub_140a20c40(&var_68, rbp_1 + 1)
        int64_t* rax_21 = j_sub_140a82f30(0x10)
        
        if (rax_21 == 0)
            rax_21 = nullptr
        else
            rax_21[1] = rsi_2
            *rax_21 = &data_142feab10
        
        int16_t* const rdx_10 = &data_142d40450
        
        if (rax_20 != 0)
            rdx_10 = var_68
        
        *(rsi_2 + 0x18) = rax_21
        rax = sub_140a6e140(rax_21, rdx_10, 0, 0, -1, 0)
        int16_t* rcx_26 = var_68
        *(rsi_2 + 0x10) = rax
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)

if (arg1 != -0x80)
    LeaveCriticalSection(arg1 + 0x80)
