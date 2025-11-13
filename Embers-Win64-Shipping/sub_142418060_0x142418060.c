// 函数: sub_142418060
// 地址: 0x142418060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t rbx = arg2[1].d
void* r12 = arg1
int64_t r14 = *arg2
int16_t* var_58 = nullptr
int16_t* rsi = nullptr
int32_t var_50 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_58, rbx, 0)
    result = memcpy(var_58, r14, rbx * 2)
    rbx = arg2[1].d
    rsi = var_58
else
    int32_t var_4c_1 = 0

int32_t i = rbx - 1

if (rbx == 0)
    i = 0

int32_t i_1 = i

if (i s> 0)
    int64_t* r15_1 = r12 + 0x50
    
    do
        int32_t i_3 = sub_140a23cf0(&var_58, &data_142d576a0, 0, 0, 0xffffffff)
        int32_t i_2 = i_3
        
        if (i_3 == 0xffffffff)
            i_2 = i
        
        int32_t rax
        int32_t i_4
        int16_t* r14_1
        
        if (var_50 == 0)
            rax = 0
            r14_1 = &data_142d40450
            i_4 = 0
        else
            r14_1 = var_58
            i_4 = var_50 - 1
            rax = 0
        
        if (i_2 s< 0)
            i_4 = 0
        else if (i_2 s< i_4)
            i_4 = i_2
        
        int64_t var_48 = 0
        int64_t rsi_1 = 0
        int64_t var_40_1 = 0
        int32_t rdi_1 = 0
        int32_t r14_2
        
        if (r14_1 == 0 || *r14_1 == 0 || i_4 s<= 0)
            r14_2 = 0
        else
            if (i_4 + 1 s> 0)
                sub_1405947f0(&var_48, i_4 + 1)
                rax = var_40_1:4.d
                rdi_1 = var_40_1.d
                rsi_1 = var_48
            
            rdi_1 = rdi_1 + 1 + i_4
            var_40_1.d = rdi_1
            
            if (rdi_1 s> rax)
                sub_140594770(&var_48)
                rdi_1 = var_40_1.d
                rsi_1 = var_48
            
            UnDecorator::getReferenceType(rsi_1, r14_1, i_4 * 2)
            r14_2 = 0
            *(rsi_1 + (sx.q(rdi_1) << 1) - 2) = 0
        
        if (*(r12 + 0x58) s<= *(*(r12 + 0x118) + 0x28))
            *(r12 + 0x60) += 1
        else
            int64_t* rcx_7 = *r15_1
            int64_t rax_3 = *rcx_7
            
            if (rax_3 != 0)
                sub_140a74f90(rax_3)
                rcx_7 = *r15_1
            
            int32_t rax_4 = r15_1[1].d
            
            if (rax_4 != 1)
                memmove(rcx_7, &rcx_7[2], (rax_4 - 1) << 4)
                rax_4 = r15_1[1].d
            
            r15_1[1].d = rax_4 - 1
            sub_140638bc0(r15_1)
            *(r12 + 0x60) = *(*(r12 + 0x118) + 0x28) - 1
        
        int64_t rbx_2 = sx.q(r15_1[1].d)
        int32_t rax_7 = (rbx_2 + 1).d
        r15_1[1].d = rax_7
        
        if (rax_7 s> *(r15_1 + 0xc))
            sub_1405a4f90(r15_1)
        
        int64_t* rbx_4 = (rbx_2 << 4) + *r15_1
        *rbx_4 = 0
        rbx_4[1].d = rdi_1
        
        if (rdi_1 != 0)
            sub_1405a4c70(rbx_4, rdi_1, 0)
            memcpy(*rbx_4, rsi_1, rdi_1 * 2)
        else
            *(rbx_4 + 0xc) = 0
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        int32_t rbx_5 = var_50 - 1
        
        if (var_50 == 0)
            rbx_5 = 0
        
        int32_t rcx_16
        
        if (i_2 + 1 s>= 0)
            rcx_16 = rbx_5
            
            if (i_2 + 1 s< rbx_5)
                rcx_16 = i_2 + 1
        else
            rcx_16 = 0
        
        int64_t r9_1 = sx.q(rcx_16)
        
        if (sx.q(i_2 + 1) + 0x7fffffff s< r9_1)
            rbx_5 = rcx_16
        else if (sx.q(i_2 + 1) + 0x7fffffff s< sx.q(rbx_5))
            rbx_5 = i_2 - -0x80000000
        
        int16_t* rdx_12 = var_58
        int16_t* rax_10 = &data_142d40450
        int16_t* var_68 = nullptr
        rsi = nullptr
        int32_t var_60_1 = 0
        
        if (var_50 != 0)
            rax_10 = rdx_12
        
        int32_t rdi_3 = 0
        int32_t rbx_6 = rbx_5 - rcx_16
        void* r12_1 = &rax_10[r9_1]
        
        if (r12_1 != 0 && *r12_1 != 0 && rbx_6 s> 0)
            int32_t var_5c
            
            if (rbx_6 + 1 s> 0)
                sub_1405947f0(&var_68, rbx_6 + 1)
                r14_2 = var_5c
                rdi_3 = var_60_1
                rsi = var_68
            
            rdi_3 = rdi_3 + 1 + rbx_6
            
            if (rdi_3 s> r14_2)
                sub_140594770(&var_68)
                r14_2 = var_5c
                rsi = var_68
            
            UnDecorator::getReferenceType(rsi, r12_1, rbx_6 * 2)
            rsi[sx.q(rdi_3) - 1] = 0
            rdx_12 = var_58
        
        var_68 = nullptr
        int64_t var_60_2 = 0
        
        if (rdx_12 != 0)
            sub_140a74f90(rdx_12)
        
        r12 = arg1
        var_50 = rdi_3
        result = 0xffffffff - i_2
        i = i_1 + result
        var_58 = rsi
        int32_t var_4c_2 = r14_2
        i_1 = i
    while (i s> 0)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
