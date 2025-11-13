// 函数: sub_14090e3f0
// 地址: 0x14090e3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1d368
int64_t* rcx = arg1[0x12]

if (rcx != 0)
    if (arg1[0x15].b != 0)
        arg1[0x15].b = 0
        (*(*rcx + 0x18))(rcx)
        rcx = arg1[0x12]
    
    if (rcx != 0)
        (*(*rcx + 0x20))(rcx, 1)

if (arg1[0x11] != 0)
    void arg_8
    int64_t* rax_4 = sub_140fc6160(sub_140b58260(&arg_8, u"WINDOWS", 1))
    int64_t r8_1 = *rax_4
    (*(r8_1 + 0x38))(rax_4, arg1[0x11], r8_1)

DeleteCriticalSection(&arg1[0x19])
int64_t* rdi = arg1[0x17]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

sub_14090dae0(&arg1[8])
sub_140745b20(&arg1[3])
int64_t* rcx_9 = arg1[2]

if (rcx_9 != 0)
    int32_t temp1_1 = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_9 + 8))(rcx_9, 1)

*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
