// 函数: sub_140ac6c30
// 地址: 0x140ac6c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
sub_140abd990(arg2)
int64_t* rcx_1 = *arg2
int64_t* rax_1 = (*(*rcx_1 + 0x10))(rcx_1)
int32_t rsi = 0
int64_t rbx_1 = 0
int32_t rdx

while (true)
    rdx = rax_1[1].d
    int32_t rcx_2 = rdx - 1
    
    if (rdx == 0)
        rcx_2 = 0
    
    if (rsi s>= rcx_2)
        break
    
    if (sub_140a81220(*(*rax_1 + (rbx_1 << 1))) == 0)
        rdx = rax_1[1].d
        break
    
    rsi += 1
    rbx_1 += 1

int32_t i_1 = rdx - 2

if (rdx == 0)
    i_1 = -1

for (int64_t i = sx.q(i_1); i s> rbx_1; i -= 1)
    if (sub_140a81220(*(*rax_1 + (i << 1))) == 0)
        break
    
    i_1 -= 1

int32_t rcx_5

if (rsi == 0)
    int32_t rax_6 = rax_1[1].d
    rcx_5 = rax_6 - 2
    
    if (rax_6 == 0)
        rcx_5 = -1

if (rsi != 0 || i_1 != rcx_5)
    int32_t r14 = i_1 - rsi
    int64_t var_78 = 0
    int64_t var_70_1 = 0
    
    if (r14 + 1 s>= 0)
        int32_t r8_1 = rax_1[1].d
        int32_t rbx_2 = r8_1 - 1
        
        if (r8_1 == 0)
            rbx_2 = 0
        
        int32_t rcx_7
        
        if (rsi s>= 0)
            rcx_7 = rbx_2
            
            if (rsi s< rbx_2)
                rcx_7 = rsi
        else
            rcx_7 = 0
        
        int64_t rdx_2 = sx.q(r14 + 1) + sx.q(rsi)
        int64_t r9_1 = sx.q(rcx_7)
        
        if (rdx_2 s< r9_1)
            rbx_2 = rcx_7
        else if (rdx_2 s< sx.q(rbx_2))
            rbx_2 = rdx_2.d
        
        int16_t* const rax_12
        
        if (r8_1 == 0)
            rax_12 = &data_142d40450
        else
            rax_12 = *rax_1
        
        int16_t* r15_1 = &rax_12[r9_1]
        int64_t var_88 = 0
        int32_t rbx_3 = rbx_2 - rcx_7
        int64_t var_80_1 = 0
        int64_t rsi_1 = 0
        int32_t rdi = 0
        int32_t r14_2 = 0
        
        if (r15_1 != 0 && *r15_1 != 0 && rbx_3 s> 0)
            if (rbx_3 + 1 s> 0)
                sub_1405947f0(&var_88, rbx_3 + 1)
                r14_2 = var_80_1:4.d
                rdi = var_80_1.d
                rsi_1 = var_88
            
            rdi = rdi + 1 + rbx_3
            var_80_1.d = rdi
            
            if (rdi s> r14_2)
                sub_140594770(&var_88)
                r14_2 = var_80_1:4.d
                rdi = var_80_1.d
                rsi_1 = var_88
            
            UnDecorator::getReferenceType(rsi_1, r15_1, rbx_3 * 2)
            *(rsi_1 + (sx.q(rdi) << 1) - 2) = 0
        
        var_78 = rsi_1
        var_70_1.d = rdi
        var_70_1:4.d = r14_2
    
    int64_t* rdx_6 = &var_78
    int64_t* rax_16
    int32_t rdi_2
    
    if (((arg2[2].d u>> 1).b & 1) == 0)
        void var_68
        rax_16 = sub_140aae2f0(&var_68, rdx_6)
        rdi_2 = 2
    else
        void var_50
        rax_16 = sub_140a9fb70(&var_50, rdx_6)
        rdi_2 = 1
    
    *arg1 = *rax_16
    void* rax_18 = rax_16[1]
    arg1[1] = rax_18
    
    if (rax_18 != 0)
        *(rax_18 + 8) += 1
    
    arg1[2].d = rax_16[2].d
    
    if ((rdi_2.b & 2) != 0)
        rdi_2 &= 0xfffffffd
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t rax_22 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rax_22 == 1)
                    (*(*var_60 + 8))(var_60, 1)
    
    int64_t* var_48
    
    if ((rdi_2.b & 1) != 0 && var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t r12_1 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (r12_1 == 1)
                (*(*var_48 + 8))(var_48, zx.q(r12_1))
    
    int64_t rcx_19 = var_78
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
else
    *arg1 = *arg2
    void* rax_8 = arg2[1]
    arg1[1] = rax_8
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    arg1[2].d = arg2[2].d

return arg1
