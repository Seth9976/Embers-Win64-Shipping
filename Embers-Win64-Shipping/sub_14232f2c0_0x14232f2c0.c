// 函数: sub_14232f2c0
// 地址: 0x14232f2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0
*(arg1 + 0x285) = 0
char var_e8 = 1
int64_t var_e0 = 0
int64_t var_d8 = 0
char var_c8 = 0
int32_t var_34
int32_t var_34_1 = (var_34 & 0xffffff40) | 0x40
int64_t var_c0
__builtin_memset(&var_c0, 0, 0x88)
int32_t var_38 = 0x20702
sub_140596b00(arg2, &var_e8)
sub_140597700(&var_e8)
int64_t* rdi = *(arg1 + 0x258)

if (rdi != 0)
    int32_t rax_3 = rdi[1].d
    
    if (rax_3 != 0)
        rdi[1].d = rax_3 + 1
        rax_3.b = 1
    
    if (rax_3.b == 0)
        rdi = nullptr
    
    if (rdi != 0)
        r14 = *(arg1 + 0x250)

int64_t var_f8 = r14
int64_t* var_f0 = rdi

if (rdi != 0)
    rdi[1].d += 1

sub_140dbdce0(arg2, &var_f8, arg4, 1)
int64_t* rcx_3 = *(arg1 + 0x38)
void* rax_5 = (*(*rcx_3 + 0x30))(rcx_3)

if (rax_5 == 0)
label_14232f512:
    int64_t* var_f0_2 = rdi
    var_f8 = r14
    
    if (rdi != 0)
        rdi[1].d += 1
    
    sub_140f63c00(arg2, &var_f8)
else
    if (sub_14243ade0(rax_5) == 0)
        goto label_14232f512
    
    void* rcx_5 = *(rax_5 + 0x188)
    
    if (rcx_5 == 0)
        goto label_14232f512
    
    int64_t* rax_7 = sub_142029890(rcx_5, 0)
    char rax_8
    
    if (rax_7 == 0)
        rax_8 = sub_14243ae30(rax_5)
    
    if (rax_7 == 0 && rax_8 == 0)
        goto label_14232f512
    
    if (rdi != 0)
        rdi[1].d += 1
    
    *(arg2 + 0x38) = r14
    int64_t* rcx_7 = *(arg2 + 0x40)
    
    if (rdi != rcx_7)
        if (rdi != 0)
            *(rdi + 0xc) += 1
            rcx_7 = *(arg2 + 0x40)
        
        if (rcx_7 != 0)
            int32_t temp4_1 = *(rcx_7 + 0xc)
            *(rcx_7 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rcx_7 + 8))(rcx_7, 1)
        
        *(arg2 + 0x40) = rdi
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp3_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi + 8))(rdi, 1)
    
    int64_t* rcx_10 = *(arg1 + 0x38)
    
    if ((*(*rcx_10 + 0x190))(rcx_10) != 0)
        var_f8 = r14
        int64_t* var_f0_1 = rdi
        
        if (rdi != 0)
            rdi[1].d += 1
        
        sub_142272180(arg2, &var_f8)
    
    int64_t* rax_14 = sub_142029890(*(rax_5 + 0x188), 0)
    char rax_15
    
    if (rax_14 != 0)
        int64_t rdx_3 = *rax_14
        rax_15 = (*(rdx_3 + 0xd20))(rax_14, rdx_3)
    
    char r12
    
    if (rax_14 == 0 || rax_15 == 0)
        r12 = 0
    else
        r12 = 1
    
    int64_t* rcx_14 = *(arg1 + 0x38)
    
    if ((*(*rcx_14 + 0x1a0))(rcx_14) != 0 && r12 != 0)
        *(arg1 + 0x2a1) = 1
        *(arg1 + 0x2a4) = arg3.d
        *(arg1 + 0x2a8) = arg3:4.d
    
    if (*(arg1 + 0x2a1) != 0 || r12 == 0)
        goto label_14232f512

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
