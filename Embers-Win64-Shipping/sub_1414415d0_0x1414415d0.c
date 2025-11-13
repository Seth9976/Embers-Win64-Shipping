// 函数: sub_1414415d0
// 地址: 0x1414415d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419c1ef0(arg1, arg2)
*(arg1 + 0x118) = 0
*(arg1 + 0x120) = 0
*(arg1 + 0x128) = 0xffff
*(arg1 + 0x12a) = 0
*(arg1 + 0x12e) = 0xffff
sub_1419c75a0(arg1 + 0x128, arg2[3], u"Material", 0)
int32_t i = 0

if (*(arg2[0xc] + 0xc8) s> 0)
    do
        int16_t arg_8 = 0xffff
        int16_t* var_38
        sub_140a2e390(&var_38, u"MaterialCollection%u", zx.q(i))
        int16_t* const r8_2 = &data_142d40450
        int32_t var_30
        
        if (var_30 != 0)
            r8_2 = var_38
        
        sub_1419c75a0(&arg_8, arg2[3], r8_2, 0)
        int16_t* rcx_3 = var_38
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rdi_1 = sx.q(*(arg1 + 0x120))
        int32_t rax_1 = (rdi_1 + 1).d
        *(arg1 + 0x120) = rax_1
        
        if (rax_1 s> *(arg1 + 0x124))
            sub_1407c36f0(arg1 + 0x118, rdi_1.d)
        
        void* rax_3 = *(arg1 + 0x118)
        
        if ((rax_3.b & 1) != 0)
            rax_3 = (rax_3 s>> 1) + arg1 + 0x118
        
        i += 1
        *(rax_3 + (rdi_1 << 1)) = arg_8
    while (i s< *(arg2[0xc] + 0xc8))

sub_141396480(arg2, arg1 + 0x12e)
*(arg1 + 0x130) = 0
*(arg1 + 0x138) = 0xffff
*(arg1 + 0x130) = (*(arg2[0xf] + 0x30))(arg2[1].b & 0xf, arg2[3])
return arg1
