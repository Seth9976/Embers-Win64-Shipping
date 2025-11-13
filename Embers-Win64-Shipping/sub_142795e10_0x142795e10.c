// 函数: sub_142795e10
// 地址: 0x142795e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ef3910(arg1)

if (*(arg1 + 0x3e8) == 0)
    return 

void* rax = *(arg1 + 0x708)

if ((rax == 0 || *(rax + 0xa8) == 0) && *(arg1 + 0x63c) == 0)
    return 

uint64_t* rax_1 = j_sub_140a82f30(0x28)
int64_t rbx_1 = 0
uint64_t* rdi_1 = rax_1

if (rax_1 == 0)
    rdi_1 = nullptr
else
    __builtin_memset(rax_1, 0, 0x21)

sub_142791800(arg1, rdi_1)
int64_t rcx_1 = sx.q(*(arg1 + 0x860))
uint64_t rax_2
rax_2.b = 1

if (rcx_1 s> 0)
    do
        if (rax_2.b == 0 || *(rbx_1 + *(arg1 + 0x858)) == 0)
            rax_2.b = 0
        else
            rax_2.b = 1
        
        rbx_1 += 1
    while (rbx_1 s< rcx_1)

if (rcx_1 s> 0 && rax_2.b == 0)
    void* rbx_2 = *(arg1 + 0x3e8)
    uint64_t* var_30_1 = rdi_1
    
    if (sub_140a80f40() == 0)
        uint32_t rax_4
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
            void var_28
            int64_t* rax_5 = sub_14278f050(&var_28, nullptr, 0xff)
            *(*rax_5 + 0x10) = rbx_2.o
            void* rcx_6 = *rax_5
            int32_t r8_1 = rax_5[2].d
            int64_t* rdx_4 = rax_5[1]
            int64_t* rbx_3 = *(rcx_6 + 0x28)
            int64_t* arg_10 = rbx_3
            int32_t* rdi_2 = &rbx_3[9]
            
            if (rbx_3 != 0)
                *rdi_2 += 1
                rbx_3 = arg_10
            
            sub_1405e48c0(rcx_6, rdx_4, r8_1, 1)
            
            if (rbx_3 != 0)
                int32_t rax_6 = *rdi_2
                *rdi_2 -= 1
                
                if (rax_6 == 1)
                    sub_140a2f6e0(arg_10)
        else if (rbx_2 != 0)
            sub_142796d30(rbx_2, rdi_1)
    else if (rbx_2 != 0)
        sub_142796d30(rbx_2, rdi_1)
else if (rdi_1 != 0)
    int64_t rcx_8 = rdi_1[2]
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    uint64_t rcx_9 = *rdi_1
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    j_sub_140a74f90(rdi_1)

rax = *(arg1 + 0x708)

if (rax != 0)
    *(rax + 0xa8) = 0
