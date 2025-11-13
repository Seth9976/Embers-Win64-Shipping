// 函数: sub_1419137e0
// 地址: 0x1419137e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg4.d

if (data_143eff5d8 != 0)
    return 

if (data_1439c74e8 != 0)
    void* rbp = *(arg1 + 0x560)
    void* const rdi
    
    if (rbp == 0)
        rdi = nullptr
    else
        if (data_143f01c92 != 0)
            sub_140a80f40()
        
        rdi = *(rbp + 0x40)
    
    bool cond:1 = *(rdi + 0xe8) != 0
    void* const var_28 = rdi
    
    if (not(cond:1))
        *(rdi + 0xe8) = sub_14193c660(arg1 - 0x18, rbp)
    
    void* rbp_1
    
    if (*(arg1 + 0x15b38) != 1)
        rbp_1 = arg1 + 0x152a0
        
        if (sub_141957ff0(*(arg1 + 0x15ba0)) != 1)
            rbp_1 = arg1 + 0x14a08
    else
        rbp_1 = arg1 + 0x152a0
    
    if (*(arg1 + 0x15be8) != 0)
        void* rax_3 = *(arg1 + 0x15c00)
        
        if (rax_3 != 0)
            *(rax_3 + 0x1c) += 1
            void* rax_4 = *(arg1 + 0x15c00)
            *(rax_4 + 0x20) = arg2
            *(rax_4 + 0x24) = arg3
            *(rax_4 + 0x28) = r14
    
    sub_141931150(arg1 - 0x18, rbp_1, rdi)
    sub_14190ae60(arg1 - 0x18, rdi)
    sub_141905400(arg1 - 0x18, rbp_1, &var_28, data_1439c74d8)
    var_28.d = 0
    sub_141916c10(arg1 - 0x18, rbp_1, sub_14193de40(rdi, &var_28), var_28.d, data_1439c74e0)
    sub_14190b110(arg1 - 0x18, rdi)
    data_143f00298(0xffffffff)
    data_143f00280(zx.q(arg2), zx.q(arg3), zx.q(r14))
    jump(data_143f00298)

sub_140af98a0("Unknown", 0xc65, 
    Platform doesn't support SM5 for OpenGL but set feature level to SM5", arg4)
sub_140afbb40()
