// 函数: sub_140cdc810
// 地址: 0x140cdc810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t arg_10 = 0

if (arg3 != 0)
    int16_t* r15
    int16_t* var_28_1 = r15
    int64_t var_38 = 0
    int32_t rdi_1 = arg5[1].d
    int64_t rsi_1 = *arg5
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_38, rdi_1, 0)
        memcpy(var_38, rsi_1, rdi_1 * 2)
    else
        int32_t var_2c_1 = 0
    
    uint64_t rdi_2 = -1
    int16_t* var_48
    int32_t var_40
    int32_t var_3c
    int16_t* rsi_2
    
    if (rdi_1 == 0 || rdi_1 == 1)
        rsi_2 = var_48
        r15.b = 0
    else
        var_48 = nullptr
        int32_t rax_3 = rdi_1 - 1
        int32_t rdx_2 = 0
        
        if (rdi_1 - 1 s> 1)
            rax_3 = 1
        
        rsi_2 = nullptr
        var_40 = 0
        r15 = var_38 + ((sx.q(rdi_1 - 1) - sx.q(rax_3)) << 1)
        int32_t rax_6 = 0
        var_3c = 0
        int16_t* const rcx_8
        int32_t r12_1
        
        if (r15 != 0 && *r15 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (r15[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_48, rbx_1.d + 1)
                rax_6 = var_3c
                rdx_2 = var_40
                rsi_2 = var_48
            
            r12_1 = rbx_1.d + 1 + rdx_2
            var_40 = r12_1
            
            if (r12_1 s> rax_6)
                sub_140594770(&var_48)
                r12_1 = var_40
                rsi_2 = var_48
            
            UnDecorator::getReferenceType(rsi_2, r15, (rbx_1.d + 1) * 2)
            rcx_8 = rsi_2
        
        if (r15 == 0 || *r15 == 0 || r12_1 == 0)
            rcx_8 = &data_142d40450
        
        rbx = 1
        
        if (sub_140a54510(rcx_8, &data_142e5cee4) != 0)
            r15.b = 0
        else
            r15 = 1
    
    if ((rbx.b & 1) != 0)
        rbx &= 0xfffffffe
        
        if (rsi_2 != 0)
            sub_140a74f90(rsi_2)
    
    int16_t* const r15_2
    
    if (r15.b != 0)
        r15_2 = &data_142d40450
        sub_140a20ba0(&var_38, &data_142d404d4, 1)
    else
        int32_t rax_9
        int32_t rcx_10
        int32_t rdx_5
        
        if (rdi_1 == 0 || rdi_1 == 1)
            rcx_10 = arg4[1].d
            rax_9 = rcx_10 - 1
            
            if (rcx_10 == 0)
                rax_9 = -1
            
            rdx_5 = rcx_10 - 1
            
            if (rcx_10 == 0)
                rax_9 = 0
            
            if (rcx_10 == 0)
                rdx_5 = -1
        
        int16_t* rsi_3
        
        if ((rdi_1 != 0 && rdi_1 != 1) || rax_9 == 0)
            rsi_3 = var_48
            r15_2 = &data_142d40450
            rdi_2.b = 0
        else
            rbx |= 2
            
            if (rcx_10 == 0)
                rdx_5 = 0
            
            int16_t* const r8_5
            
            if (rcx_10 == 0)
                r8_5 = &data_142d40450
            else
                r8_5 = *arg4
            
            int32_t rax_10 = rdx_5
            var_48 = nullptr
            
            if (rdx_5 s> 1)
                rax_10 = 1
            
            int32_t rdx_6 = 0
            rsi_3 = nullptr
            var_40 = 0
            int32_t rax_12 = 0
            var_3c = 0
            int16_t* r15_1 = &r8_5[sx.q(rdx_5) - sx.q(rax_10)]
            int32_t r12_2
            
            if (r15_1 != 0 && *r15_1 != 0)
                do
                    rdi_2 += 1
                while (r15_1[rdi_2] != 0)
                
                rdi_2 = zx.q(rdi_2.d + 1)
                
                if (rdi_2.d s> 0)
                    sub_1405947f0(&var_48, rdi_2.d)
                    rax_12 = var_3c
                    rdx_6 = var_40
                    rsi_3 = var_48
                
                r12_2 = rdi_2.d + rdx_6
                var_40 = r12_2
                
                if (r12_2 s> rax_12)
                    sub_140594770(&var_48)
                    r12_2 = var_40
                    rsi_3 = var_48
                
                UnDecorator::getReferenceType(rsi_3, r15_1, rdi_2.d * 2)
            
            int16_t* rcx_16
            
            if (r15_1 == 0 || *r15_1 == 0 || r12_2 == 0)
                r15_2 = &data_142d40450
                rcx_16 = &data_142d40450
            else
                rcx_16 = rsi_3
                r15_2 = &data_142d40450
            
            if (sub_140a54510(rcx_16, &data_142e5cee4) != 0)
                rdi_2.b = 0
            else
                rdi_2.b = 1
        
        if ((rbx.b & 2) != 0 && rsi_3 != 0)
            sub_140a74f90(rsi_3)
        
        if (rdi_2.b != 0)
            sub_140a20ba0(&var_38, &data_142d404d4, 1)
    
    if (arg4[1].d != 0)
        r15_2 = *arg4
    
    sub_140a2e390(&var_48, u"<%s%s>", r15_2)
    
    if (arg3 == &var_48)
        int16_t* rcx_21 = var_48
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
    else
        int16_t* rcx_20 = *arg3
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        *arg3 = var_48
        arg3[1].d = var_40
        *(arg3 + 0xc) = var_3c
    
    int64_t rcx_22 = var_38
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 7)
int32_t rax_18 = arg2[1].d + 7
arg2[1].d = rax_18

if (rax_18 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"TArray", 0xe)
return arg2
