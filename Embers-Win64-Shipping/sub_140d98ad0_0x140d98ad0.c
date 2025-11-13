// 函数: sub_140d98ad0
// 地址: 0x140d98ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = data_143de5458 - *(arg1 + 0x140)
int64_t* rcx = *(arg1 + 0x120)
int32_t arg_8
(**rcx)(rcx, &arg_8, zx.q(arg2[3].b))
int32_t r8_1 = sx.d(arg2[2].w)
void* var_88

if (r8_1 s> arg_8 || sx.d(*(arg2 + 0x12)) s> arg5)
    int64_t* rcx_28 = *(arg1 + 0x120)
    (*(*rcx_28 + 0x10))(rcx_28, &var_88, r8_1, zx.q(sx.d(*(arg2 + 0x12))), arg2[3].b, arg2)
    void* r12_2 = var_88
    uint64_t result
    int64_t* var_80
    
    if (r12_2 == 0)
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t temp1_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_80 + 8))(var_80, 1)
        
        int64_t rcx_43 = *arg2
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)
        
        result.b = 0
    else
        if (var_80 != 0)
            var_80[1].d += 1
        
        int64_t r15_3 = sx.q(*(arg1 + 0x118))
        int32_t rax_40 = (r15_3 + 1).d
        *(arg1 + 0x118) = rax_40
        
        if (rax_40 s> *(arg1 + 0x11c))
            sub_1405a4f90(arg1 + 0x110)
        
        void** rax_43 = (r15_3 << 4) + *(arg1 + 0x110)
        *rax_43 = r12_2
        rax_43[1] = var_80
        
        if (var_80 != 0)
            var_80[1].d += 1
        
        *arg3 = r15_3.b
        
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t temp3_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_80 + 8))(var_80, 1)
        
        int64_t rbp_5 = sx.q(*(arg1 + 0x108))
        uint32_t r14_3 = zx.d(*arg3)
        int32_t rax_46 = (rbp_5 + 1).d
        *(arg1 + 0x108) = rax_46
        
        if (rax_46 s> *(arg1 + 0x10c))
            sub_1405a4cf0(arg1 + 0x100)
        
        *(*(arg1 + 0x100) + (rbp_5 << 2)) = r14_3
        *arg4 = 0
        *arg6 = 0
        *arg7 = arg2[2].w
        *arg8 = *(arg2 + 0x12)
        
        if (*(arg1 + 0x108) s> *(arg1 + 0x13c) && *(arg1 + 0x130) == 0)
            uint64_t r8_7 = zx.q(*(arg1 + 0x108))
            result = zx.q(data_1439ae50c)
            
            if (r8_7.d s<= result.d)
                *(arg1 + 0x13c) = result.d
            else if (rax_1 u> sx.q(data_1439ae514))
                *(arg1 + 0x13c)
                char var_98_1
                var_98_1.q = rax_1
                int64_t var_58
                sub_140a2e390(&var_58, 
                    Large glyph font atlases out of space; %d/%d Textures; frames since last flush:", 
                    r8_7)
                
                if (*(arg1 + 0x130) == 0)
                    *(arg1 + 0x130) = 1
                    *(arg1 + 0x134) = data_1439ae508
                    *(arg1 + 0x138) = data_1439ae508
                    *(arg1 + 0x13c) = data_1439ae50c
                    *(arg1 + 0x140) = data_143de5458
                
                int64_t rcx_37 = var_58
                
                if (rcx_37 != 0)
                    sub_140a74f90(rcx_37)
            else
                *(arg1 + 0x13c) = r8_7.d
        
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t temp6_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_80 + 8))(var_80, 1)
        
    label_140d990a3:
        int64_t rcx_40 = *arg2
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
        
        result.b = 1
    return result

char r8_2 = arg2[3].b
void* const r14_1 = 0xe0
void* const r12 = 0x134

if (r8_2 == 0)
    r14_1 = 0xf0

void* r14_2 = r14_1 + arg1

if (r8_2 == 0)
    r12 = 0x138

int32_t* rdi_1 = *r14_2
void* r12_1 = r12 + arg1
void* rbp_1 = &rdi_1[sx.q(*(r14_2 + 8))]

if (rdi_1 != rbp_1)
    do
        int64_t r15_1 = sx.q(*rdi_1)
        int64_t* rax_6 = sub_140de76e0(*(*(arg1 + 0x110) + r15_1 * 0x10) + 8, sx.d(arg2[2].w), 
            sx.d(*(arg2 + 0x12)), arg2)
        
        if (rax_6 != 0)
            *arg3 = r15_1.b
            *arg4 = rax_6[2].w + zx.w(rax_6[4].b)
            *arg6 = *(rax_6 + 0x14) + zx.w(rax_6[4].b)
            *arg7 = rax_6[3].w - zx.w(rax_6[4].b) * 2
            *arg8 = *(rax_6 + 0x1c) - zx.w(rax_6[4].b) * 2
            goto label_140d990a3
        
        rdi_1 = &rdi_1[1]
    while (rdi_1 != rbp_1)
    
    r8_2 = arg2[3].b

int64_t* rcx_5 = *(arg1 + 0x120)
void* var_78
(*(*rcx_5 + 8))(rcx_5, &var_78, r8_2)
var_88 = var_78
int64_t* var_70

if (var_70 != 0)
    var_70[1].d += 1

int64_t r13_1 = sx.q(*(arg1 + 0x118))
int32_t rax_9 = (r13_1 + 1).d
*(arg1 + 0x118) = rax_9

if (rax_9 s> *(arg1 + 0x11c))
    sub_1405a4f90(arg1 + 0x110)

int64_t* rax_12 = (r13_1 << 4) + *(arg1 + 0x110)
*rax_12 = var_88
rax_12[1] = var_70

if (var_70 != 0)
    var_70[1].d += 1

*arg3 = r13_1.b

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t temp7_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*var_70 + 8))(var_70, 1)

int64_t rdi_3 = sx.q(*(r14_2 + 8))
uint32_t rbp_3 = zx.d(*arg3)
int32_t rax_15 = (rdi_3 + 1).d
*(r14_2 + 8) = rax_15

if (rax_15 s> *(r14_2 + 0xc))
    sub_1405a4cf0(r14_2)

*(*r14_2 + (rdi_3 << 2)) = rbp_3
int64_t* rax_17 = sub_140de76e0(var_78 + 8, sx.d(arg2[2].w), sx.d(*(arg2 + 0x12)), arg2)

if (rax_17 != 0)
    *arg4 = rax_17[2].w + zx.w(rax_17[4].b)
    *arg6 = *(rax_17 + 0x14) + zx.w(rax_17[4].b)
    *arg7 = rax_17[3].w - zx.w(rax_17[4].b) * 2
    *arg8 = *(rax_17 + 0x1c) - zx.w(rax_17[4].b) * 2

if (*(r14_2 + 8) s> *r12_1 && *(arg1 + 0x130) == 0)
    uint64_t r8_5 = zx.q(*(r14_2 + 8))
    int32_t rax_24 = data_1439ae508
    
    if (r8_5.d s<= rax_24)
        *r12_1 = rax_24
    else if (rax_1 u> sx.q(data_1439ae510))
        *r12_1
        char var_98
        var_98.q = rax_1
        int64_t var_68
        sub_140a2e390(&var_68, Font Atlases Full; %d/%d Pages; frames since last flush: %llu", r8_5)
        
        if (*(arg1 + 0x130) == 0)
            *(arg1 + 0x130) = 1
            *(arg1 + 0x134) = data_1439ae508
            *(arg1 + 0x138) = data_1439ae508
            *(arg1 + 0x13c) = data_1439ae50c
            *(arg1 + 0x140) = data_143de5458
        
        int64_t rcx_24 = var_68
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
    else
        *r12_1 = r8_5.d

int64_t* rdi_4
rdi_4.b = rax_17 != 0

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t temp9_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp9_1 == 1)
            int64_t r8_6 = *var_70
            (*(r8_6 + 8))(var_70, 1, r8_6)

int64_t rcx_27 = *arg2

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

return zx.q(rdi_4.b)
