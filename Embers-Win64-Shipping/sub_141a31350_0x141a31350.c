// 函数: sub_141a31350
// 地址: 0x141a31350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
void* rdx = &arg1[2]
arg1[1] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
sub_140596d10(&arg1[0xa], arg3)
int64_t* arg_28
int64_t* rax_1 = arg_28
arg1[0xc] = 0
arg_28 = nullptr
arg1[0xd] = *rax_1
arg1[0xe] = arg2
int64_t rax_2 = *arg4

if (rax_2 == 0)
    TEB* gsbase
    
    if (data_143f2a980
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f2a980)
        
        if (data_143f2a980 == 0xffffffff)
            sub_1405947f0(&data_143f2a970, 4)
            int32_t rax_10 = data_143f2a978 + 4
            bool cond:0_1 = rax_10 s<= data_143f2a97c
            data_143f2a978 = rax_10
            
            if (not(cond:0_1))
                sub_140594770(&data_143f2a970)
            
            UnDecorator::getReferenceType(data_143f2a970, &data_14302f0f0, 8)
            atexit(sub_142cf4dc0)
            _Init_thread_footer(&data_143f2a980)
    
    int64_t var_28
    int64_t* rax_5 = sub_140b63b70(&arg1[0xe], &var_28)
    int32_t rdi_1 = data_143f2a978
    int32_t rbp_1
    int16_t* rdi_2
    
    if (rdi_1 s> 1)
        int32_t rax_6 = rax_5[1].d
        int32_t rbp_2 = rax_6 - 1
        
        if (rax_6 == 0)
            rbp_2 = 0
        
        int32_t rax_7
        
        if (rdi_1 == 0)
            rax_7 = rdi_1 + 1
        
        if (rdi_1 != 0 || rbp_2 == 0)
            rax_7 = 0
        
        int64_t r14_1 = data_143f2a970
        int32_t rcx_5 = rax_7 + rbp_2
        int16_t* var_38 = nullptr
        
        if (rdi_1 != 0 || rcx_5 != 0)
            sub_1405a4c70(&var_38, rcx_5 + rdi_1, 0)
            memcpy(var_38, r14_1, rdi_1 * 2)
        else
            int32_t var_2c_1 = 0
        
        sub_140a20ba0(&var_38, *rax_5, rbp_2)
        rdi_2 = var_38
        rbp_1 = rdi_1
    else
        rdi_2 = *rax_5
        *rax_5 = 0
        rbp_1 = rax_5[1].d
        rax_5[1] = 0
    
    int64_t rcx_9 = var_28
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int16_t* rdx_6 = &data_142d40450
    
    if (rbp_1 != 0)
        rdx_6 = rdi_2
    
    arg1[0xc] = *sub_140b58260(&arg_28, rdx_6, 1)
    
    if (rdi_2 != 0)
        sub_140a74f90(rdi_2)
else
    arg1[0xc] = rax_2

return arg1
