// 函数: sub_1422e42b0
// 地址: 0x1422e42b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*(arg2 + 0x14))

if (rcx == 2)
    if (*arg1 != &data_142da76c0)
        int32_t rdx_4 = 0
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != 4)
            sub_1405947f0(arg1, 4)
            rdx_4 = arg1[1].d
        
        arg1[1].d = rdx_4 + 4
        
        if (rdx_4 + 4 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        **arg1 = 0x74006e0069
else if (rcx == 3)
    if (*arg1 != u"uint")
        int32_t rdx_3 = 0
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != 5)
            sub_1405947f0(arg1, 5)
            rdx_3 = arg1[1].d
        
        arg1[1].d = rdx_3 + 5
        
        if (rdx_3 + 5 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        __builtin_wcscpy(*arg1, u"uint")
else if (rcx == 4)
    int32_t rax_1 = *(arg2 + 0x18)
    
    if (rax_1 != 0)
        if (rax_1 != 1)
            if (rax_1 == 2 && *arg1 != u"fixed")
                int32_t rdx_2 = 0
                arg1[1].d = 0
                
                if (*(arg1 + 0xc) != 6)
                    sub_1405947f0(arg1, 6)
                    rdx_2 = arg1[1].d
                
                arg1[1].d = rdx_2 + 6
                
                if (rdx_2 + 6 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                int64_t* rcx_11 = *arg1
                *rcx_11 = 0x65007800690066
                rcx_11[1].d = 0x64
        else if (*arg1 != u"half")
            int32_t rdx_1 = 0
            arg1[1].d = 0
            
            if (*(arg1 + 0xc) != 5)
                sub_1405947f0(arg1, 5)
                rdx_1 = arg1[1].d
            
            arg1[1].d = rdx_1 + 5
            
            if (rdx_1 + 5 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            __builtin_wcscpy(*arg1, u"half")
    else if (*arg1 != u"float")
        int32_t rdx = 0
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != 6)
            sub_1405947f0(arg1, 6)
            rdx = arg1[1].d
        
        arg1[1].d = rdx + 6
        
        if (rdx + 6 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        int64_t* rcx_5 = *arg1
        *rcx_5 = 0x61006f006c0066
        rcx_5[1].d = 0x74
else
    int64_t entry_r9
    sub_140af98a0("Unknown", 0xbde, Unrecognized uniform buffer struct member base type.", entry_r9)
    sub_140afbb40()

int32_t rax_11 = *(arg2 + 0x1c)
int32_t r9 = *(arg2 + 0x20)
int64_t var_18

if (rax_11 u> 1)
    int16_t* const r8_1
    
    if (arg1[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *arg1
    
    int32_t var_28_1 = r9
    sub_140a2e390(&var_18, u"%s%ux%u", r8_1)
    goto label_1422e452a

if (r9 u> 1)
    int16_t* const r8_2
    
    if (arg1[1].d == 0)
        r8_2 = &data_142d40450
    else
        r8_2 = *arg1
    
    sub_140a2e390(&var_18, u"%s%u", r8_2)
label_1422e452a:
    rax_11 = &var_18
    
    if (arg1 != &var_18)
        int64_t rcx_19 = *arg1
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        *arg1 = var_18
        int32_t var_10
        arg1[1].d = var_10
        int32_t var_c
        *(arg1 + 0xc) = var_c
        return var_c
    
    int64_t rcx_20 = var_18
    
    if (rcx_20 != 0)
        return sub_140a74f90(rcx_20)

return rax_11
