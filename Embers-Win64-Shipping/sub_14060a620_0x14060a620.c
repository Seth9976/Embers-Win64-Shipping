// 函数: sub_14060a620
// 地址: 0x14060a620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi = &data_142d40450
int64_t* rsi = arg2
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int32_t result = sub_140a23cf0(arg1, rdx, arg5, arg6, 0xffffffff)

if (result s>= 0)
    int64_t var_40
    
    if (arg3 != 0)
        int32_t rax = arg1[1].d
        int16_t* r13_1
        
        if (rax == 0)
            r13_1 = &data_142d40450
        else
            r13_1 = *arg1
        
        int32_t result_1 = rax - 1
        int32_t rax_1 = 0
        
        if (rax == 0)
            result_1 = 0
        
        var_40 = 0
        int64_t var_38_1 = 0
        int64_t rdi_1 = 0
        int32_t rsi_1 = 0
        
        if (result s< result_1)
            result_1 = result
        
        if (r13_1 != 0 && *r13_1 != 0 && result_1 s> 0)
            if (result_1 + 1 s> 0)
                sub_1405947f0(&var_40, result_1 + 1)
                rax_1 = var_38_1:4.d
                rsi_1 = var_38_1.d
                rdi_1 = var_40
            
            rsi_1 = rsi_1 + 1 + result_1
            var_38_1.d = rsi_1
            
            if (rsi_1 s> rax_1)
                sub_140594770(&var_40)
                rsi_1 = var_38_1.d
                rdi_1 = var_40
            
            UnDecorator::getReferenceType(rdi_1, r13_1, result_1 * 2)
            *(rdi_1 + (sx.q(rsi_1) << 1) - 2) = 0
        
        if (arg3 != &var_40)
            int64_t rcx_4 = *arg3
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            *arg3 = rdi_1
            arg3[1].d = rsi_1
            *(arg3 + 0xc) = var_38_1:4.d
        else if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        rsi = arg2
        rdi = &data_142d40450
    
    if (arg4 != 0)
        int32_t rax_3 = rsi[1].d
        int32_t r9_1 = arg1[1].d
        int32_t rdx_4 = rax_3 - 1
        
        if (rax_3 == 0)
            rdx_4 = 0
        
        int32_t rbx_1 = r9_1 - 1
        
        if (r9_1 == 0)
            rbx_1 = 0
        
        int32_t rdx_5 = rdx_4 + result
        int32_t rcx_6
        
        if (rdx_4 + result s>= 0)
            rcx_6 = rbx_1
            
            if (rdx_5 s< rbx_1)
                rcx_6 = rdx_5
        else
            rcx_6 = 0
        
        int64_t r8_3 = sx.q(rcx_6)
        
        if (sx.q(rdx_5) + 0x7fffffff s< r8_3)
            rbx_1 = rcx_6
        else if (sx.q(rdx_5) + 0x7fffffff s< sx.q(rbx_1))
            rbx_1 = rdx_5 + 0x7fffffff
        
        if (r9_1 != 0)
            rdi = *arg1
        
        void* r12_1 = &rdi[r8_3]
        var_40 = 0
        int32_t rbx_2 = rbx_1 - rcx_6
        int64_t var_38_2 = 0
        int64_t rdi_2 = 0
        int32_t rsi_3 = 0
        int32_t r15_1 = 0
        
        if (r12_1 != 0 && *r12_1 != 0 && rbx_2 s> 0)
            if (rbx_2 + 1 s> 0)
                sub_1405947f0(&var_40, rbx_2 + 1)
                r15_1 = var_38_2:4.d
                rsi_3 = var_38_2.d
                rdi_2 = var_40
            
            rsi_3 = rsi_3 + 1 + rbx_2
            var_38_2.d = rsi_3
            
            if (rsi_3 s> r15_1)
                sub_140594770(&var_40)
                r15_1 = var_38_2:4.d
                rsi_3 = var_38_2.d
                rdi_2 = var_40
            
            UnDecorator::getReferenceType(rdi_2, r12_1, rbx_2 * 2)
            *(rdi_2 + (sx.q(rsi_3) << 1) - 2) = 0
        
        if (arg4 != &var_40)
            int64_t rcx_10 = *arg4
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            *arg4 = rdi_2
            arg4[1].d = rsi_3
            *(arg4 + 0xc) = r15_1
        else if (rdi_2 != 0)
            sub_140a74f90(rdi_2)
    
    result.b = 1
else
    result.b = 0

return result
