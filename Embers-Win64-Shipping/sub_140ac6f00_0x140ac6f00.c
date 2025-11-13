// 函数: sub_140ac6f00
// 地址: 0x140ac6f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
sub_140abd990(arg2)
int64_t* rcx_1 = *arg2
int64_t* rax_1 = (*(*rcx_1 + 0x10))(rcx_1)
int32_t r8 = rax_1[1].d
int32_t rdi = r8 - 2

if (r8 == 0)
    rdi = -1

int64_t rbx = sx.q(rdi)

if (rdi s>= 0)
    int64_t temp2_1
    
    do
        if (sub_140a81220(*(*rax_1 + (rbx << 1))) == 0)
            break
        
        rdi -= 1
        temp2_1 = rbx
        rbx -= 1
    while (temp2_1 - 1 s>= 0)

int32_t rcx_3 = rax_1[1].d
int32_t rax_4 = rcx_3 - 2
int32_t rbx_1 = rcx_3 - 1

if (rcx_3 == 0)
    rax_4 = -1

if (rcx_3 == 0)
    rbx_1 = -1

if (rdi != rax_4)
    int16_t* r14_1
    
    if (rcx_3 == 0)
        r14_1 = &data_142d40450
    else
        r14_1 = *rax_1
    
    if (rcx_3 == 0)
        rbx_1 = 0
    
    if (rdi + 1 s< 0)
        rbx_1 = 0
    else if (rdi + 1 s< rbx_1)
        rbx_1 = rdi + 1
    
    int64_t var_68 = 0
    int32_t rdx = 0
    int32_t var_60_1 = 0
    int32_t rax_8 = 0
    int32_t var_5c_1 = 0
    int64_t rdi_2 = 0
    
    if (r14_1 != 0 && *r14_1 != 0 && rbx_1 s> 0)
        if (rbx_1 + 1 s> 0)
            sub_1405947f0(&var_68, rbx_1 + 1)
            rax_8 = var_5c_1
            rdx = var_60_1
            rdi_2 = var_68
        
        int32_t r12_2 = rdx + 1 + rbx_1
        
        if (r12_2 s> rax_8)
            sub_140594770(&var_68)
            rdi_2 = var_68
        
        UnDecorator::getReferenceType(rdi_2, r14_1, rbx_1 * 2)
        *(rdi_2 + (sx.q(r12_2) << 1) - 2) = 0
    
    int64_t* rdx_3 = &var_68
    int64_t* rax_12
    int32_t rdi_3
    
    if (((arg2[2].d u>> 1).b & 1) == 0)
        void var_58
        rax_12 = sub_140aae2f0(&var_58, rdx_3)
        rdi_3 = 2
    else
        void var_40
        rax_12 = sub_140a9fb70(&var_40, rdx_3)
        rdi_3 = 1
    
    *arg1 = *rax_12
    void* rax_14 = rax_12[1]
    arg1[1] = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    arg1[2].d = rax_12[2].d
    
    if ((rdi_3.b & 2) != 0)
        rdi_3 &= 0xfffffffd
        int64_t* var_50
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t rax_18 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (rax_18 == 1)
                    (*(*var_50 + 8))(var_50, 1)
    
    int64_t* var_38
    
    if ((rdi_3.b & 1) != 0 && var_38 != 0)
        var_38[1].d -= 1
        
        if (var_38[1].d == 1)
            (**var_38)(var_38)
            int32_t rbp_1 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*var_38 + 8))(var_38, zx.q(rbp_1))
    
    int64_t rcx_15 = var_68
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
else
    *arg1 = *arg2
    void* rax_6 = arg2[1]
    arg1[1] = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    arg1[2].d = arg2[2].d

return arg1
