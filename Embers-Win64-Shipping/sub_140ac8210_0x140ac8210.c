// 函数: sub_140ac8210
// 地址: 0x140ac8210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2
void* r14 = arg1
int64_t r12
r12.b = 1
int64_t* rax = sub_140a7d4b0(*rsi, zx.q(*(arg1 + 8)))
char* rcx_1 = nullptr
char* var_58 = nullptr
uint32_t count = rax[1].d
int64_t rdi = *rax

if (count != 0)
    sub_1405da9e0(&var_58, count, 0)
    memcpy(var_58, rdi, count)
    rcx_1 = var_58

if (count != 1)
    void* rdx_5 = arg1
    wchar16 const* const r8_3 = u"Ordinal"
    int32_t i = 0
    void* r14_2 = &rcx_1[sx.q(count)]
    void* r15_1 = rdx_5 + 0x18
    
    do
        char* rax_12 = rcx_1
        
        if (rcx_1 == r14_2)
        label_140ac83fd:
            rdi.b = 0
        else
            while (*rax_12 != i.b)
                rax_12 = &rax_12[1]
                
                if (rax_12 == r14_2)
                    goto label_140ac83fd
            
            rdi.b = 1
        
        char* rax_13 = *r15_1
        void* rax_15
        
        if (*rax_13 != 0)
            rax_15 = &rax_13[0x58]
        else
            sub_140abd990(&rax_13[0x18])
            int64_t* rcx_19 = *(rax_13 + 0x18)
            rax_15 = (*(*rcx_19 + 0x10))(rcx_19)
            rdx_5 = arg1
            r8_3 = u"Ordinal"
        
        int64_t rcx_29
        
        if (*(rax_15 + 8) s> 1)
            if (rdi.b == 0)
                r12.b = 0
                
                if (*(rdx_5 + 8) == 0)
                    r8_3 = u"Cardinal"
                
                int64_t var_68
                sub_140a2e390(&var_68, 
                    %s plural form argument modifier has an unused plural form for '%s'", r8_3)
                int64_t rbx_5 = sx.q(arg3[1].d)
                int32_t rax_20 = (rbx_5 + 1).d
                arg3[1].d = rax_20
                
                if (rax_20 s> *(arg3 + 0xc))
                    sub_1405a4f90(arg3)
                
                int64_t* rcx_38 = (rbx_5 << 4) + *arg3
                *rcx_38 = 0
                *rcx_38 = var_68
                var_68 = 0
                int32_t var_60
                rcx_38[1].d = var_60
                int32_t var_5c
                *(rcx_38 + 0xc) = var_5c
                rcx_29 = var_68
                var_60.q = 0
            label_140ac85c8:
                
                if (rcx_29 != 0)
                    sub_140a74f90(rcx_29)
        else if (rdi.b != 0)
            r12.b = 0
            
            if (*(rdx_5 + 8) == 0)
                r8_3 = u"Cardinal"
            
            int64_t var_78
            sub_140a2e390(&var_78, 
                %s plural form argument modifier is missing a required plural form for ", r8_3)
            int64_t rbx_4 = sx.q(arg3[1].d)
            int32_t rax_16 = (rbx_4 + 1).d
            arg3[1].d = rax_16
            
            if (rax_16 s> *(arg3 + 0xc))
                sub_1405a4f90(arg3)
            
            int64_t* rcx_28 = (rbx_4 << 4) + *arg3
            *rcx_28 = 0
            *rcx_28 = var_78
            var_78 = 0
            int32_t var_70
            rcx_28[1].d = var_70
            int32_t var_6c
            *(rcx_28 + 0xc) = var_6c
            rcx_29 = var_78
            var_70.q = 0
            goto label_140ac85c8
        rcx_1 = var_58
        r8_3 = u"Ordinal"
        rdx_5 = arg1
        i += 1
        r15_1 += 0x10
    while (i s< 6)
    
    rsi = arg2
    r14 = rdx_5
else
    r12.b = 0
    wchar16 const* const rdi_1 = u"Ordinal"
    wchar16 const* const r8_1 = u"Ordinal"
    
    if (*(r14 + 8) == 0)
        r8_1 = u"Cardinal"
    
    int64_t var_98
    sub_140a2e390(&var_98, 
        %s plural form argument modifier is redundant as this culture only has a single plural form", 
        r8_1)
    int64_t rbx = sx.q(arg3[1].d)
    int32_t rax_1 = (rbx + 1).d
    arg3[1].d = rax_1
    
    if (rax_1 s> *(arg3 + 0xc))
        sub_1405a4f90(arg3)
    
    int64_t* rcx_8 = (rbx << 4) + *arg3
    *rcx_8 = 0
    *rcx_8 = var_98
    var_98 = 0
    int32_t var_90
    rcx_8[1].d = var_90
    int32_t var_8c
    *(rcx_8 + 0xc) = var_8c
    int64_t rcx_9 = var_98
    var_90.q = 0
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    char* rax_5 = *(r14 + 0x68)
    void* rax_7
    
    if (*rax_5 != 0)
        rax_7 = &rax_5[0x58]
    else
        sub_140abd990(&rax_5[0x18])
        int64_t* rcx_11 = *(rax_5 + 0x18)
        rax_7 = (*(*rcx_11 + 0x10))(rcx_11)
    
    if (*(rax_7 + 8) s<= 1)
        if (*(r14 + 8) == 0)
            rdi_1 = u"Cardinal"
        
        int64_t var_88
        sub_140a2e390(&var_88, 
            %s plural form argument modifier is missing a required plural form for ", rdi_1)
        int64_t rbx_2 = sx.q(arg3[1].d)
        int32_t rax_8 = (rbx_2 + 1).d
        arg3[1].d = rax_8
        
        if (rax_8 s> *(arg3 + 0xc))
            sub_1405a4f90(arg3)
        
        int64_t* rcx_16 = (rbx_2 << 4) + *arg3
        *rcx_16 = 0
        *rcx_16 = var_88
        var_88 = 0
        int32_t var_80
        rcx_16[1].d = var_80
        int32_t var_7c
        *(rcx_16 + 0xc) = var_7c
        int64_t rcx_17 = var_88
        var_80.q = 0
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)

for (char** i_1 = r14 + 0x18; i_1 != &i_1[0xc]; i_1 = &i_1[2])
    int64_t* rdi_2 = rsi[1]
    int64_t var_48 = *rsi
    int64_t* var_40_1 = rdi_2
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    char* rsi_1 = *i_1
    EnterCriticalSection(&rsi_1[0x30])
    char rax_25 = sub_140ac86e0(rsi_1, &var_48, arg3)
    
    if (rsi_1 != -0x30)
        LeaveCriticalSection(&rsi_1[0x30])
    
    r12.b &= rax_25
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rax_29 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rax_29 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    rsi = arg2

char* rcx_44 = var_58

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

return zx.q(r12.b)
