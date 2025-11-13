// 函数: sub_1419c1ef0
// 地址: 0x1419c1ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x94)
*(arg1 + 0x94) = 0xffff
__builtin_memset(arg1 + 0x98, 0, 0x60)
*(arg1 + 0xf8) = *arg2
*(arg1 + 0x100) = arg2[9]
*(arg1 + 0x108) = arg2[1].d
*(arg1 + 0x10c) = 0xffffffff
sub_1419c7dd0(arg1, arg2[3])

for (void** i = data_143f1d998; i != 0; i = *i)
    if (sub_1419cae50(arg2[3], *(i[2] + 0x10)) != 0)
        int64_t rbp_1 = sx.q(*(arg1 + 0xe0))
        void* r14_1 = i[2]
        int32_t rax_5 = (rbp_1 + 1).d
        *(arg1 + 0xe0) = rax_5
        
        if (rax_5 s> *(arg1 + 0xe4))
            sub_1407c3d10(arg1 + 0xd8, rbp_1.d)
        
        void* rdx_4 = *(arg1 + 0xd8)
        
        if ((rdx_4.b & 1) != 0)
            rdx_4 = (rdx_4 s>> 1) + arg1 + 0xd8
        
        *(rdx_4 + (rbp_1 << 3)) = *(r14_1 + 0x20)
        int64_t rbp_2 = sx.q(*(arg1 + 0xf0))
        int32_t rax_7 = (rbp_2 + 1).d
        *(arg1 + 0xf0) = rax_7
        
        if (rax_7 s> *(arg1 + 0xf4))
            sub_1407c36f0(arg1 + 0xe8, rbp_2.d)
        
        void* rcx_4 = *(arg1 + 0xe8)
        
        if ((rcx_4.b & 1) != 0)
            rcx_4 = (rcx_4 s>> 1) + arg1 + 0xe8
        
        void* r14_2 = rcx_4 + (rbp_2 << 1)
        *r14_2 = 0xffff
        int16_t* rbp_3 = *(i[2] + 0x10)
        void var_48
        void var_44
        
        if (sub_1419cded0(arg2[3], rbp_3, r14_2, &var_44, &var_48) == 0)
            *r14_2 = 0xffff
            sub_140af98a0("Unknown", 0x60, 
                Failure to bind non-optional shader resource parameter %s!  The parameter is either not "
            "present in the shader, or the shader compiler o", rbp_3)
            sub_140afbb40()

return arg1
