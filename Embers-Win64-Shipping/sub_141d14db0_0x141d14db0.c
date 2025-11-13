// 函数: sub_141d14db0
// 地址: 0x141d14db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int32_t arg_10 = rax

if (rax s<= 0)
    sub_140b56590(arg1, 0)
else
    sub_141cf68e0()
    int64_t var_38
    sub_140a2e390(&var_38, u"TSparseArray<%s>", data_143f36c78)
    void arg_18
    sub_140b56840(arg1, &arg_18, &var_38, 0)
    int64_t rcx_2 = var_38
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int32_t rbx_1 = 0
    
    if (arg_10 s> 0)
        do
            void* rax_2 = *arg2
            
            if ((rax_2.b & 1) != 0)
                rax_2 = (rax_2 s>> 1) + arg2
            
            void* rdi_3 = (sx.q(rbx_1) << 5) + rax_2
            int32_t rax_3 = sub_140b56010(&arg_18, 8)
            void* rcx_4 = arg2[2]
            
            if ((rcx_4.b & 1) != 0)
                rcx_4 = (rcx_4 s>> 1) + &arg2[2]
            
            int32_t rax_4 = rbx_1
            
            if (rbx_1 s< 0)
                rax_4 = rbx_1 + 0x1f
            
            int64_t* rcx_7 = &arg_18
            
            if (not(test_bit(*(rcx_4 + (sx.q(rax_4 s>> 5) << 2)), rbx_1 & 0x1f)))
                sub_140b518f0(rcx_7, rdi_3, 4)
                sub_140b518f0(&arg_18, rdi_3 + 4, 4)
            else
                sub_140b565a0(rcx_7, rdi_3, &data_143f36c70)
            
            sub_140b567d0(&arg_18, rax_3 + 0x20)
            rbx_1 += 1
        while (rbx_1 s< arg_10)

sub_140b518f0(arg1, &arg_10, 4)
sub_140b518f0(arg1, &arg_10, 4)
sub_141d14d30(&arg2[2], arg1)
sub_140b518f0(arg1, &arg2[4], 4)
return sub_140b518f0(arg1, arg2 + 0x24, 4)
