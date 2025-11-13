// 函数: sub_140b81310
// 地址: 0x140b81310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t i = 0
*(*arg2 + 0x1e4) = 1
int16_t* var_78
int16_t* var_68
int16_t* const var_48

if (*(*arg2 + 0x121) != 0 && *(arg1 + 0x70) != 0)
    int64_t* rcx = *(arg1 + 0x68)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rax_6 = sub_140b1a780(&var_68, *arg2 + 0x18)
        int32_t rdx_2 = rax_6[1].d
        int32_t rdx_3 = neg.d(rdx_2)
        var_78 = *rax_6
        *rax_6 = 0
        int32_t rcx_3 = rax_6[1].d
        int32_t rcx_4 = *(rax_6 + 0xc)
        rax_6[1] = 0
        int32_t rdx_6 = sbb.d(rdx_3, rdx_3, rdx_2 != 0) + 9 + rcx_3
        
        if (rdx_6 s> rcx_4)
            sub_1405947f0(&var_78, rdx_6)
        
        sub_140a2cf70(&var_78, u"Content", 7)
        int16_t* rcx_7 = var_68
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        void* r15_1 = *arg2
        int32_t rdx_7 = 0
        var_48 = nullptr
        int32_t var_40_1 = 0
        int32_t rax_7 = *(r15_1 + 0x10)
        int32_t r14_1
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 3
        label_140b81413:
            sub_1405947f0(&var_48, rax_8)
            rdx_7 = var_40_1
            r14_1 = rdx_7 - 1
            
            if (rdx_7 s<= 0)
                r14_1 = 0
        else
            rax_8 = rax_7 + 2
            
            if (rax_8 s> 0)
                goto label_140b81413
            
            r14_1 = 0
        int32_t rax_9
        rax_9.b = rdx_7 s<= 0
        int32_t rax_11 = rax_9 + 1 + rdx_7
        
        if (rax_11 s> 0)
            sub_140594770(&var_48)
        
        int64_t rcx_10 = sx.q(r14_1)
        var_48[rcx_10] = 0x2f
        var_48[rcx_10 + 1] = 0
        int32_t rax_14 = *(r15_1 + 0x10)
        int32_t r8_1 = rax_14 - 1
        
        if (rax_14 == 0)
            r8_1 = 0
        
        sub_140a20ba0(&var_48, *(r15_1 + 8), r8_1)
        int32_t r14_2 = rax_11 - 1
        
        if (rax_11 s<= 0)
            r14_2 = 0
        
        int32_t rax_15
        rax_15.b = rax_11 s<= 0
        int32_t rax_17 = rax_15 + 1 + rax_11
        var_40_1 = rax_17
        
        if (rax_17 s> 0)
            sub_140594770(&var_48)
        
        int64_t rcx_13 = sx.q(r14_2)
        var_48[rcx_13] = 0x2f
        var_48[rcx_13 + 1] = 0
        int64_t* rcx_14
        
        if (*(arg1 + 0x70) == 0)
            rcx_14 = nullptr
        else
            rcx_14 = *(arg1 + 0x68)
        
        (*(*rcx_14 + 0x48))(rcx_14, &var_48, &var_78)
        int16_t* const rcx_15 = var_48
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        int64_t* rax_21 = sub_140aefb30(data_143ddb400, &data_143de5780, 0)
        
        if (rax_21 != 0)
            var_68 = nullptr
            int32_t var_60_1 = 0
            sub_1405947f0(&var_68, 0xc)
            int32_t rcx_18 = var_60_1 + 0xc
            var_60_1 = rcx_18
            
            if (rcx_18 s> 0)
                sub_140594770(&var_68)
            
            int16_t* r14_3 = var_68
            UnDecorator::getReferenceType(r14_3, u"Core.System", 0x18)
            sub_140a452d0(rax_21, &var_48, &var_68)
            int64_t rax_22 = sx.q(var_48.d)
            void* const rax_24
            
            if (rax_22.d == 0xffffffff)
                rax_24 = nullptr
            else
                rax_24 = rax_22 * 0xb8 + *rax_21
            
            int64_t* rdi_2 = rax_24 + 0x10
            
            if (rax_24 == 0)
                rdi_2 = nullptr
            
            if (r14_3 != 0)
                sub_140a74f90(r14_3)
            
            if (rdi_2 != 0)
                var_68 = var_78
                var_60_1 = rcx_3
                var_60_1 = rcx_4
                int32_t var_70_1
                var_70_1.q = 0
                var_78 = nullptr
                int64_t var_58_1 = 0
                int64_t var_50_1 = 0
                sub_140aef990(&var_68)
                sub_140b58170(&var_48, "Paths", 1)
                sub_140b76c60(rdi_2, &var_48, &var_68)
                
                if (var_58_1 != 0)
                    sub_140a74f90(var_58_1)
                
                int16_t* rcx_27 = var_68
                
                if (rcx_27 != 0)
                    sub_140a74f90(rcx_27)
        
        int16_t* rcx_28 = var_78
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)

uint64_t result = *arg2

if (*(result + 0x108) s> 0)
    int64_t* rax_28 = sub_140b1a780(&var_78, *arg2 + 0x18)
    int16_t* const r14_4 = &data_142d40450
    int16_t* const rcx_30
    
    if (rax_28[1].d == 0)
        rcx_30 = &data_142d40450
    else
        rcx_30 = *rax_28
    
    var_48 = rcx_30
    wchar16 const* const var_40_2 = u"Binaries"
    wchar16 const* const var_38_1 = u"Win64"
    var_68 = nullptr
    int32_t var_60_2 = 0
    sub_140b0f5f0(&var_68, &var_48, 3)
    int16_t* rcx_32 = var_78
    
    if (rcx_32 != 0)
        sub_140a74f90(rcx_32)
    
    bool rdi_3 = *(*arg2 + 0x1e0) u> 1
    
    if (var_60_2 != 0)
        r14_4 = var_68
    
    j_sub_140b3db50()
    result = sub_140b32c90(&data_143de7d78, r14_4, rdi_3)
    
    do
        if (i != 9)
            result = sub_140b8b860(*arg2, i)
        
        i += 1
    while (i s< 0xa)
    
    int16_t* rcx_34 = var_68
    
    if (rcx_34 != 0)
        result = sub_140a74f90(rcx_34)

__security_check_cookie(rax_1 ^ &var_98)
return result
