// 函数: sub_14089c790
// 地址: 0x14089c790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142dfb808
arg1[5] = &data_142dfbb50
arg1[7] = &data_142dfbd20

if (arg1[0xc2].b != 0)
    uint32_t rax_1
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_1.b == 0))
        void var_38
        void** rax_2 = sub_14089d3b0(&var_38, nullptr, 0xff)
        *(*rax_2 + 0x10) = arg1
        void* rcx_3 = *rax_2
        int64_t* rbx_1 = *(rcx_3 + 0x20)
        
        if (rbx_1 != 0)
            rbx_1[9].d += 1
        
        sub_14089f070(rcx_3, rax_2[1], rax_2[2].d, 1)
        
        if (rbx_1 != 0)
            rbx_1[9].d -= 1
            
            if (rbx_1[9].d == 1)
                sub_140a2f6e0(rbx_1)
    else
        void*** arg_8 = arg1
        sub_14089dc50(&arg_8)
    
    sub_1419a21e0(0)

int64_t* i_1 = arg1[0xc1]
arg1[0xc1] = 0

if (i_1 != 0)
    int64_t* i
    
    do
        i = *i_1
        int64_t* rcx_5 = i_1[1]
        
        if (rcx_5 != 0)
            i_1[1] = 0
            (*(*rcx_5 + 0x10))(rcx_5)
        
        j_sub_140a74f90(i_1)
        i_1 = i
    while (i != 0)

sub_1408a05f0(&arg1[0xbc])
int64_t rcx_8 = arg1[0xbc]
arg1[0xbc] = 0
j_sub_140a74f90(rcx_8)
int64_t* rdx_5 = arg1[0xa6]
std::wios::rdbuf(sx.q(*(*rdx_5 + 4)) + rdx_5, arg1[0xbb])
sub_14089c500(&arg1[0xa7])
int64_t* rdx_7 = arg1[0x90]
std::wios::rdbuf(sx.q(*(*rdx_7 + 4)) + rdx_7, arg1[0xa5])
sub_14089c500(&arg1[0x91])
sub_1405916e0(&arg1[0x66])
return sub_14201a8c0(arg1) __tailcall
