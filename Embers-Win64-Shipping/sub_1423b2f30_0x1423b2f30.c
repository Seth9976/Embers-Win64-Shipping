// 函数: sub_1423b2f30
// 地址: 0x1423b2f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int64_t rbx = arg1

if (arg2 == 0)
    sub_1423a8e80(&arg_8)
    return 

if (arg2 != 1)
    return 

void* rdx_4
int64_t r8

if (data_143a2ffb8 == data_143a2ffe4)
    rdx_4 = nullptr
else
    int32_t rax_2
    rax_2, r8 = sub_140b5ead0(arg1.d)
    void* rcx = data_143a2fff0
    void* rax_5 = &data_143a2ffe8
    
    if (rcx != 0)
        rax_5 = rcx
    
    int32_t rax_6 = *(rax_5 + (((sx.q(data_143a2fff8) - 1) & sx.q(rax_2 + arg1:4.d)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_1423b2fcd:
        rbx = arg_8
        rdx_4 = nullptr
    else
        r8 = data_143a2ffb0
        int64_t rcx_2
        
        while (true)
            rcx_2 = sx.q(rax_6) << 5
            
            if (*(rcx_2 + r8) == rbx)
                break
            
            rax_6 = *(rcx_2 + r8 + 0x18)
            
            if (rax_6 == 0xffffffff)
                goto label_1423b2fcd
        
        if (rax_6 == 0xffffffff)
            goto label_1423b2fcd
        
        rbx = arg_8
        rdx_4 = rcx_2 + r8

int64_t* rax = rdx_4 + 8

if (rdx_4 == 0)
    rax = nullptr

if (rax == 0)
    return 

int64_t* rdi_1 = *rax
void* rsi_1 = &rdi_1[sx.q(rax[1].d)]

if (rdi_1 != rsi_1)
    do
        int64_t r10_1
        
        if (*rdi_1 == 0)
            r10_1 = 0
        else
            void* rax_8
            rax_8, r8 = sub_1425b3980()
            
            if (rax_8 == 0)
                r10_1 = 0
            else
                r10_1 = *rdi_1
                int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_9.d s> *(r10_1 + 0x38) || *(*(r10_1 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                    r10_1 = 0
        
        char arg_10 = 0
        char* var_20_1 = &arg_10
        r8.b = 1
        void (* var_28)(int64_t arg1, int64_t* arg2) = sub_1423ab590
        sub_140d3ba80(r10_1, &var_28, r8.b, 0x10, 0)
        rdi_1 = &rdi_1[1]
    while (rdi_1 != rsi_1)
    
    rbx = arg_8

sub_1408d83c0(&data_143a2ffb0, rbx)
