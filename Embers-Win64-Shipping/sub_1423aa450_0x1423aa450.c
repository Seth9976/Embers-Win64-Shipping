// 函数: sub_1423aa450
// 地址: 0x1423aa450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg2
void* rbx = arg1
void* r13 = *(rsi + 0x78)
int32_t var_58
int64_t* var_50
int64_t* rax
int32_t rcx
int32_t rdi
void* const r13_1

if (r13 == 0)
    rax = &var_58
    r13_1 = nullptr
    rdi = 0
    rcx = 2
else
    r13_1 = *(r13 + 0xe8)
    
    if (r13_1 != 0)
        *(r13_1 + 8) += 1
    
    rax = &var_50
    rcx = 0
    rdi = 1

void* const var_40 = r13_1
*rax = 0

if (rcx != 0)
    sub_1405d1550(&var_58)

if (rdi != 0)
    sub_1405d1550(&var_50)

if (r13_1 != 0)
    int64_t r8 = *(rbx + 0x10)
    bool arg_10
    
    if (r8 != 0)
        int64_t r14_1 = data_143f5a510
        int64_t rcx_7
        
        if (data_143de5480 == 0)
            rcx_7 = 0
        else
            uint32_t rax_7
            rax_7, arg4 = GetCurrentThreadId()
            r8 = *(rbx + 0x10)
            rcx_7.b = rax_7 != data_143de5470
        
        int64_t* rcx_8 = data_143f0f180
        arg4.b = 1
        arg_10 = *(r14_1 + (rcx_7 << 2)) s> 0
        (*(*rcx_8 + 0x4c8))(rcx_8, &data_143f02b98, r8, arg4)
        sub_1423a9960(arg3, arg2[2].d)
        int64_t rdi_2 = sx.q(*(arg2 + 0xc))
        int64_t* rcx_11 = *(rsi + 0xd0) + 0x18
        var_50 = rcx_11
        
        if (rdi_2.d s< arg2[2].d)
            int64_t r14_3 = rdi_2 * 0x28
            int64_t r12_1 = rdi_2 << 3
            
            do
                void* rbx_1 = arg3
                int32_t* rcx_12 = *(r12_1 + *rcx_11)
                void* rax_10 = *(arg3 + 0x230)
                int64_t var_60
                var_60.b = arg_10
                
                if (rax_10 != 0)
                    rbx_1 = rax_10
                
                int32_t var_68
                var_68.b = 0
                void* rbx_2 = rbx_1 + r14_3
                *(rbx_2 + 0xc) = *(r13_1 + 0x3c)
                *(rbx_2 + 0x10) = *rcx_12
                *(rbx_2 + 0x14) = rcx_12[1]
                *(rbx_2 + 8) = 0
                int64_t* rcx_13 = data_143f0f180
                int32_t var_70
                var_70.q = rbx_2 + 0x1c
                *rbx_2 = (*(*rcx_13 + 0x510))(rcx_13, &data_143f02b98, *(rbx + 0x10), 
                    zx.q(rdi_2.d - *(arg2 + 0xc)), 1, var_70, 0, var_60)
                int64_t rbx_3 = sx.q(*(rbx + 0x58))
                var_58 = rdi_2.d - *(arg2 + 0xc)
                int32_t rax_19 = (rbx_3 + 1).d
                *(rbx + 0x58) = rax_19
                
                if (rax_19 s> *(rbx + 0x5c))
                    sub_1423b4b70(rbx + 0x18, rbx_3.d)
                
                void* rax_20 = *(rbx + 0x50)
                void* rcx_15 = rbx + 0x18
                
                if (rax_20 != 0)
                    rcx_15 = rax_20
                
                rdi_2 = zx.q(rdi_2.d + 1)
                r12_1 += 8
                r14_3 += 0x28
                *(rcx_15 + (rbx_3 << 2)) = var_58
                rcx_11 = var_50
            while (rdi_2.d s< arg2[2].d)
            
            rbx = arg1
        
        *(rbx + 8) = 1
    else
        int32_t* rax_2 = *(arg4 + 8)
        int32_t* r8_1 = *(*(*(rsi + 0xd0) + 0x18) + (sx.q(*(arg2 + 0xc)) << 3))
        *rax_2 += 1
        int64_t* rcx_4 = data_143f0f180
        (*(*rcx_4 + 0x4c0))(rcx_4, &arg_10, &data_143f02b98, r13_1, *(arg2 + 0x14), *r8_1, r8_1[1], 
            *(arg4 + 8))
        sub_1405d1600(rbx + 0x10, &arg_10)
        sub_1405d1550(&arg_10)
        *(rbx + 8) = 0
    *(rbx + 0xc) = 1
    rbx.b = 1
else
    rbx.b = 0

sub_1405d1550(&var_40)
return zx.q(rbx.b)
