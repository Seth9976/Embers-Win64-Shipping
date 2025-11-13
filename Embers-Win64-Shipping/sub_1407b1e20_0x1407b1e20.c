// 函数: sub_1407b1e20
// 地址: 0x1407b1e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = arg3
arg2[1] = 0
int64_t* rdi = *(arg3 + 0xa0)
void* r12_2 = &rdi[sx.q(*(arg3 + 0xa8)) * 2]
int32_t rax_1

if (rdi != r12_2)
    int64_t rbp
    int64_t arg_8 = rbp
    
    do
        int64_t* rbx_1 = rdi[1]
        void* r14_1 = *rdi
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t var_68
        int64_t* rax = sub_140800130(*(r14_1 + 0x788), &var_68)
        int16_t* rdx_1
        
        if (rax[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *rax
        
        int16_t* const rcx_1
        
        if (*(arg1 + 0x38) == 0)
            rcx_1 = &data_142d40450
        else
            rcx_1 = *(arg1 + 0x30)
        
        rax_1 = sub_140a54510(rcx_1, rdx_1)
        int64_t rcx_2 = var_68
        rbp.b = rax_1 == 0
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        if (rbp.b != 0)
            arg2[1] = r14_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_8 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_8 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            break
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_4 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_4 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi = &rdi[2]
    while (rdi != r12_2)

if (arg2[1] == 0)
    rax_1.b = 0
    return rax_1

void* rax_10 = *(arg1 + 0x28)
int64_t var_80 = *(arg3 + 0xe0)

if (sub_140a80f40() != 0)
    int64_t* var_a0 = &var_80
    void arg_10
    sub_14077abf0(rax_10 + 0xc8, &arg_10, &var_a0, nullptr)
    int32_t* rax_13
    rax_13.b = 1
    return rax_13

if (data_143f138f4 == 0)
    uint32_t rax_14
    
    if (data_143de5480 != 0)
        rax_14.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_14.b != 0)
        int128_t var_78 = rax_10.o
        int64_t* rcx_10 = var_78.q + 0xc8
        void* var_98 = &var_78:8
        void arg_20
        sub_14077abf0(rcx_10, &arg_20, &var_98, nullptr)
        int32_t* rax_15
        rax_15.b = 1
        return rax_15

void var_58
int64_t* rax_16 = sub_140788d00(&var_58, nullptr, 0xff)
*(*rax_16 + 0x10) = rax_10.o
void* rcx_13 = *rax_16
int32_t r8_2 = rax_16[2].d
int64_t* rdx_4 = rax_16[1]
int64_t* rbx_2 = *(rcx_13 + 0x28)
int64_t* var_a8 = rbx_2
int32_t* rdi_1 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_1 += 1
    rbx_2 = var_a8

sub_1405e48c0(rcx_13, rdx_4, r8_2, 1)

if (rbx_2 != 0)
    int32_t rsi_1 = *rdi_1
    *rdi_1 -= 1
    
    if (rsi_1 == 1)
        sub_140a2f6e0(var_a8)

int64_t* rax_17
rax_17.b = 1
return rax_17
