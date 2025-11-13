// 函数: sub_140ac69e0
// 地址: 0x140ac69e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t arg_10 = 0
sub_140abd990(arg2)
int64_t* rcx_1 = *arg2
int64_t* rax_1 = (*(*rcx_1 + 0x10))(rcx_1)
int32_t rbx = 0
int16_t* rdi = nullptr

while (true)
    int32_t rcx_2 = rax_1[1].d
    int32_t rdx = rcx_2 - 1
    
    if (rcx_2 == 0)
        rdx = 0
    
    if (rbx s>= rdx)
        break
    
    if (sub_140a81220(*(rdi + *rax_1)) == 0)
        break
    
    rbx += 1
    rdi = &rdi[1]

if (rbx != 0)
    int32_t rax_7 = rax_1[1].d
    int32_t rcx_4 = rax_7 - 1
    
    if (rax_7 == 0)
        rcx_4 = -1
    
    int32_t rdx_1 = rax_7 - 1
    
    if (rax_7 == 0)
        rcx_4 = 0
    
    int32_t rcx_5 = rcx_4 - rbx
    
    if (rax_7 == 0)
        rdx_1 = -1
    
    if (rax_7 == 0)
        rdx_1 = 0
    
    int16_t* const r8_1
    
    if (rax_7 == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_1
    
    int32_t rax_8
    
    if (rcx_5 s>= 0)
        rax_8 = rdx_1
        
        if (rcx_5 s< rdx_1)
            rax_8 = rcx_5
    else
        rax_8 = 0
    
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    int16_t* rbp_1 = &r8_1[sx.q(rdx_1) - sx.q(rax_8)]
    int32_t rcx_8 = 0
    int32_t var_5c_1 = 0
    
    if (rbp_1 != 0 && *rbp_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rbp_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_68, rbx_1.d + 1)
            rcx_8 = var_5c_1
            rsi = var_60_1
        
        int32_t rax_10 = rbx_1.d + 1 + rsi
        int32_t var_60_2 = rax_10
        
        if (rax_10 s> rcx_8)
            sub_140594770(&var_68)
        
        UnDecorator::getReferenceType(var_68, rbp_1, (rbx_1.d + 1) * 2)
    
    int64_t* rdx_5 = &var_68
    int64_t* rax_13
    int32_t rsi_1
    
    if (((arg2[2].d u>> 1).b & 1) == 0)
        void var_58
        rax_13 = sub_140aae2f0(&var_58, rdx_5)
        rsi_1 = 2
    else
        void var_40
        rax_13 = sub_140a9fb70(&var_40, rdx_5)
        rsi_1 = 1
    
    *arg1 = *rax_13
    void* rax_15 = rax_13[1]
    arg1[1] = rax_15
    
    if (rax_15 != 0)
        *(rax_15 + 8) += 1
    
    arg1[2].d = rax_13[2].d
    
    if ((rsi_1.b & 2) != 0)
        rsi_1 &= 0xfffffffd
        int64_t* var_50
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t rax_19 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (rax_19 == 1)
                    (*(*var_50 + 8))(var_50, 1)
    
    int64_t* var_38
    
    if ((rsi_1.b & 1) != 0 && var_38 != 0)
        var_38[1].d -= 1
        
        if (var_38[1].d == 1)
            (**var_38)(var_38)
            int32_t rdi_1 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_38 + 8))(var_38, zx.q(rdi_1))
    
    int64_t rcx_19 = var_68
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
else
    *arg1 = *arg2
    void* rax_5 = arg2[1]
    arg1[1] = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    arg1[2].d = arg2[2].d

return arg1
