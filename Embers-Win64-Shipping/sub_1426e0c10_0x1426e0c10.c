// 函数: sub_1426e0c10
// 地址: 0x1426e0c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1426b0ab0(arg1)
int32_t* rsi

if (rax == 0)
    rsi = nullptr
else
    rsi = sub_1426b21a0(rax, *(arg1 + 0x88))

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 8)
int32_t rax_2 = arg2[1].d + 8
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_140594770(arg2)

sub_1405a7220(*arg2, 8, "invalid", 8, 0x3f)

if (rsi != 0)
    int64_t r14_1 = *(*(rsi + 8) + 0x10)
    void* const rdx_2
    
    if (*(arg1 + 0x80) == 0)
        rdx_2 = nullptr
    else
        void* rax_4 = sub_14272ef20()
        
        if (rax_4 == 0)
            rdx_2 = nullptr
        else
            rdx_2 = *(arg1 + 0x80)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rdx_2 = nullptr
    
    if (r14_1 == rdx_2)
        int16_t* var_28
        sub_140b63b70(rsi, &var_28)
        int64_t var_48
        
        if (*(arg1 + 0x90) == 0)
        label_1426e0d5d:
            var_48 = 0
            int32_t var_40 = 0
            sub_1405947f0(&var_48, 5)
            int32_t rax_11 = var_40 + 5
            var_40 = rax_11
            
            if (rax_11 s> 0)
                sub_140594770(&var_48)
            
            UnDecorator::getReferenceType(var_48, u"None", 0xa)
        else
            void* rax_7 = sub_140d41340()
            
            if (rax_7 == 0)
                goto label_1426e0d5d
            
            void* rdx_4 = *(arg1 + 0x90)
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30
                    || rdx_4 == 0)
                goto label_1426e0d5d
            
            int64_t arg_10 = *(rdx_4 + 0x18)
            sub_140b63b70(&arg_10, &var_48)
        
        int16_t* const r8_3 = &data_142d40450
        int32_t var_20
        
        if (var_20 != 0)
            r8_3 = var_28
        
        int64_t var_38
        sub_140a2e390(&var_38, u"Check if %s is of class %s", r8_3)
        
        if (arg2 == &var_38)
            int64_t rcx_13 = var_38
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
        else
            int64_t rcx_12 = *arg2
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            *arg2 = var_38
            int32_t var_30
            arg2[1].d = var_30
            int32_t var_2c
            *(arg2 + 0xc) = var_2c
            var_30.q = 0
            var_38 = 0
        
        int64_t rcx_14 = var_48
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int16_t* rcx_15 = var_28
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)

return arg2
