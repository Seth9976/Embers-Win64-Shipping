// 函数: sub_141c575d0
// 地址: 0x141c575d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x370)
void* i = *(arg1 + 0x78)
int64_t rax = sx.q(*(arg1 + 0x80))
int32_t r8 = 0
int64_t var_88 = 0
int32_t var_7c = 0

for (void* r14 = i + rax * 0x18; i != r14; i += 0x18)
    int64_t rcx_2 = *(i + 8)
    
    if (rcx_2 != 0)
        int64_t rsi_1 = sx.q(r8)
        r8 = (rsi_1 + 1).d
        int32_t var_80 = r8
        
        if (r8 s> var_7c)
            sub_1405a4f90(&var_88)
            rcx_2 = *(i + 8)
            r8 = var_80
        
        int64_t* rax_3 = (rsi_1 << 4) + var_88
        *rax_3 = rcx_2
        void* rcx_3 = *(i + 0x10)
        rax_3[1] = rcx_3
        
        if (rcx_3 != 0)
            *(rcx_3 + 8) += 1
            r8 = var_80

int64_t var_40 = var_88
void** const var_48 = &data_14320b100
int32_t var_34 = var_7c
void (* var_68)(int64_t* arg1) = j_sub_141c53d30
__builtin_memset(&var_88, 0, 0x20)
int64_t var_58 = 0
int32_t var_38 = r8
sub_140a20e40(1, &var_68)
int64_t var_78
sub_140596e10(&var_78)
*(arg1 + 0x328) = 0
int32_t rax_5 = *(arg1 + 0x84)
void* r14_1 = *(arg1 + 0x78)
int32_t i_3 = *(arg1 + 0x80)

if (rax_5 s< 0)
    if (i_3 != 0)
        void* r14_3 = r14_1 + 0x10
        int32_t i_1
        
        do
            int64_t* rdi_1 = *r14_3
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t rax_12 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (rax_12 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            r14_3 += 0x18
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rax_5 = *(arg1 + 0x84)
    
    *(arg1 + 0x80) = 0
    
    if (rax_5 != 0)
        sub_1405a5130(arg1 + 0x78, 0)
else
    if (i_3 != 0)
        int64_t* r14_2 = r14_1 + 0x10
        int32_t i_2
        
        do
            int64_t* rdi = *r14_2
            
            if (rdi != 0)
                rdi[1].d -= 1
                
                if (rdi[1].d == 1)
                    (**rdi)(rdi)
                    int32_t rax_8 = *(rdi + 0xc)
                    *(rdi + 0xc) -= 1
                    
                    if (rax_8 == 1)
                        (*(*rdi + 8))(rdi, 1)
            
            r14_2 = &r14_2[3]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    *(arg1 + 0x80) = 0

int64_t result = sub_140596e10(&var_88)

if (arg1 == -0x370)
    return result

return LeaveCriticalSection(arg1 + 0x370)
