// 函数: sub_142bd2390
// 地址: 0x142bd2390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t r11 = 0
int32_t var_90 = *arg2
void var_88
void* r8 = &var_88
char r12 = *(arg8 + 9)
int32_t var_8c = *arg3
int32_t r9 = 0
char* i = nullptr
int64_t rbp
rbp.b = r12 != 0

do
    int32_t rdi_1 = *(r8 - 8)
    *r8 = rdi_1
    
    if (*(i + arg8) != 0)
        int64_t rcx = *(arg1 + 0x10)
        int32_t rax_8
        
        if (r9 u< ((*(arg1 + 0x18) - rcx) s>> 3).d)
            uint64_t rax_9 = zx.q(r9)
            int32_t rdx = *(rcx + (rax_9 << 3) + 4)
            int32_t* rcx_1 = rcx + (rax_9 << 3)
            
            if (rdx == 1)
                int32_t rdx_2 = *rcx_1
                
                if (rdx_2 s>= 0)
                    rax_8 = (rdx_2 + 0x2000) s>> 0xe
                else
                    rax_8 = neg.d((0x2000 - rdx_2) s>> 0xe)
            else
                rax_8 = *rcx_1
                
                if (rdx == 2)
                    rax_8 <<= 0x10
        else
            int32_t* rax_7 = *(arg1 + 8)
            
            if (rax_7 != 0 && *rax_7 == 0)
                *rax_7 = 0x82
            
            rax_8 = 0
        
        *r8 = rax_8 + rdi_1
        r9 += 1
    
    i = &i[1]
    r8 += 4
while (i s< rbp + 9)

int32_t rdi_2
int32_t var_64

if (r12 != 0)
    rdi_2 = var_64
else
    rdi_2 = *arg3
    int32_t var_64_1 = rdi_2
int32_t rbp_2
int32_t rdi_3
int32_t var_68

if (arg9 == 0)
    if (*(arg8 + 0xa) == 0)
        rbp_2 = *arg2
    else
        int64_t rcx_7 = *(arg1 + 0x10)
        
        if (r9 u< ((*(arg1 + 0x18) - rcx_7) s>> 3).d)
            uint64_t rax_31 = zx.q(r9)
            int32_t rdx_6 = *(rcx_7 + (rax_31 << 3) + 4)
            int32_t* rcx_8 = rcx_7 + (rax_31 << 3)
            
            if (rdx_6 == 1)
                int32_t rax_32 = *rcx_8
                
                if (rax_32 s>= 0)
                    rbp_2 = var_68 + ((rax_32 + 0x2000) s>> 0xe)
                    r9 += 1
                else
                    rbp_2 = var_68 + neg.d((0x2000 - rax_32) s>> 0xe)
                    r9 += 1
            else
                int32_t rcx_9 = *rcx_8
                
                if (rdx_6 != 2)
                    rbp_2 = var_68 + rcx_9
                    r9 += 1
                else
                    rbp_2 = var_68 + (rcx_9 << 0x10)
                    r9 += 1
        else
            int32_t* rax_30 = *(arg1 + 8)
            
            if (rax_30 != 0 && *rax_30 == 0)
                *rax_30 = 0x82
            
            rbp_2 = var_68
            r9 += 1
    
    int32_t var_60_2 = rbp_2
    
    if (*(arg8 + 0xb) == 0)
        rdi_3 = *arg3
    else
        int64_t rcx_15 = *(arg1 + 0x10)
        
        if (r9 u< ((*(arg1 + 0x18) - rcx_15) s>> 3).d)
            uint64_t rax_37 = zx.q(r9)
            int32_t rdx_8 = *(rcx_15 + (rax_37 << 3) + 4)
            int32_t* rcx_16 = rcx_15 + (rax_37 << 3)
            
            if (rdx_8 == 1)
                int32_t rax_38 = *rcx_16
                
                if (rax_38 s>= 0)
                    rdi_3 = rdi_2 + ((rax_38 + 0x2000) s>> 0xe)
                else
                    rdi_3 = rdi_2 + neg.d((0x2000 - rax_38) s>> 0xe)
            else
                r11 = *rcx_16
                
                if (rdx_8 != 2)
                    rdi_3 = rdi_2 + r11
                else
                    rdi_3 = rdi_2 + (r11 << 0x10)
        else
            int32_t* rax_36 = *(arg1 + 8)
            
            if (rax_36 == 0 || *rax_36 != 0)
                rdi_3 = rdi_2 + r11
            else
                *rax_36 = 0x82
                rdi_3 = rdi_2
else
    int32_t r8_1 = *arg2
    int32_t r8_2
    
    if (var_68 - r8_1 s>= 0)
        r8_2 = var_68 - r8_1
    else
        r8_2 = r8_1 - var_68
    
    int32_t r10 = *arg3
    int32_t r10_1
    
    if (rdi_2 - r10 s>= 0)
        r10_1 = rdi_2 - r10
    else
        r10_1 = r10 - rdi_2
    
    int64_t rcx_2 = *(arg1 + 0x10)
    
    if (r9 u< ((*(arg1 + 0x18) - rcx_2) s>> 3).d)
        uint64_t rax_22 = zx.q(r9)
        int32_t rdx_3 = *(rcx_2 + (rax_22 << 3) + 4)
        int32_t* rcx_3 = rcx_2 + (rax_22 << 3)
        
        if (rdx_3 == 1)
            int32_t rax_23 = *rcx_3
            
            if (rax_23 s>= 0)
                r11 = (rax_23 + 0x2000) s>> 0xe
            else
                r11 = neg.d((0x2000 - rax_23) s>> 0xe)
        else
            r11 = *rcx_3
            
            if (rdx_3 == 2)
                r11 <<= 0x10
    else
        int32_t* rax_21 = *(arg1 + 8)
        
        if (rax_21 != 0 && *rax_21 == 0)
            *rax_21 = 0x82
    
    if (r8_2 s<= r10_1)
        rbp_2 = *arg2
        rdi_3 = rdi_2 + r11
        int32_t var_60_1 = rbp_2
    else
        rbp_2 = var_68 + r11
        int32_t var_60 = rbp_2
        rdi_3 = *arg3
void var_78
void* rbx_4 = &var_78
int32_t var_5c = rdi_3
int64_t i_2 = 2
int64_t i_1

do
    arg5, arg6 = sub_142bd3350(arg4, *(rbx_4 - 0x10), *(rbx_4 - 0xc), *(rbx_4 - 8), arg5, arg6, 
        arg7, *(rbx_4 - 4), *rbx_4, *(rbx_4 + 4))
    rbx_4 += 0x18
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
int64_t result = *(arg1 + 0x10)
*(arg1 + 0x18) = result
*arg2 = rbp_2
*arg3 = rdi_3
__security_check_cookie(rax_1 ^ &var_d8)
return result
