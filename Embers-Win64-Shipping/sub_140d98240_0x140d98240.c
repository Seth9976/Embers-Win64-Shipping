// 函数: sub_140d98240
// 地址: 0x140d98240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140da0450(arg1, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    int64_t rcx_1 = rax << 4
    
    if (rcx_1 != neg.q(*arg1))
        void* rcx_3 = *(rcx_1 + *arg1)
        *(rcx_3 + 0x10) = *arg3
        int32_t* rax_1 = arg1[0xb]
        
        if (rcx_3 == rax_1)
            rax_1 = *(rax_1 + 0x20)
            
            if (rax_1 != 0)
                arg1[0xb] = rax_1
        
        if (rcx_3 == arg1[0xa])
            return rax_1
        
        void* rdx_1 = *(rcx_3 + 0x20)
        
        if (rdx_1 != 0)
            *(rdx_1 + 0x18) = *(rcx_3 + 0x18)
        
        void* rdx_2 = *(rcx_3 + 0x18)
        
        if (rdx_2 != 0)
            *(rdx_2 + 0x20) = *(rcx_3 + 0x20)
        
        *(rcx_3 + 0x18) = 0
        *(rcx_3 + 0x20) = 0
        void* rax_4 = arg1[0xa]
        *(rcx_3 + 0x18) = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 0x20) = rcx_3
        
        arg1[0xa] = rcx_3
        return rax_4

if (arg1[1].d - *(arg1 + 0x34) == arg1[0xc].d)
    int64_t* rdi_1 = arg1[0xb]
    sub_140dba750(arg1, rdi_1)
    arg1[0xb] = *(arg1[0xb] + 0x20)
    void* rcx_6 = rdi_1[4]
    
    if (rcx_6 != 0)
        *(rcx_6 + 0x18) = rdi_1[3]
    
    void* rcx_7 = rdi_1[3]
    
    if (rcx_7 != 0)
        *(rcx_7 + 0x20) = rdi_1[4]
    
    rdi_1[4] = 0
    rdi_1[3] = 0
    int64_t rcx_8 = *rdi_1
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    j_sub_140a74f90(rdi_1)

int64_t* rax_10 = j_sub_140a82f30(0x28)
int64_t* rdi_2 = rax_10

if (rax_10 == 0)
    rdi_2 = nullptr
else
    sub_140596d10(rax_10, arg2)
    rdi_2[2] = *arg3
    rdi_2[3] = 0
    rdi_2[4] = 0

void* rax_11 = arg1[0xa]
int64_t* arg_20 = rdi_2
rdi_2[3] = rax_11

if (rax_11 != 0)
    *(rax_11 + 0x20) = rdi_2

arg1[0xa] = rdi_2

if (arg1[0xb] == 0)
    arg1[0xb] = rdi_2

return sub_140d8b9c0(arg1, &arg_8, &arg_20, nullptr)
