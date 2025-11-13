// 函数: sub_141c589d0
// 地址: 0x141c589d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = data_143f34a18
sub_140b34200("SourceManagerUpdate", r13)
int32_t i = 0

if (sub_140a54810() != 0)
    sub_141c698b0(arg1)
else
    bool z_1
    
    if (0 == arg1->__offset(0x1c8).d)
        arg1->__offset(0x1c8).d = 0
        z_1 = true
    else
        arg1->__offset(0x1c8).d
        z_1 = false
    
    if (not(z_1))
        arg1->__offset(0x1c8).d
        arg1->__offset(0x1c8).d = 0
        sub_141c698b0(arg1)

int32_t rbp = arg1->__offset(0x150).d
int32_t rbp_1 = rbp - 1

if (rbp - 1 s>= 0)
    int64_t r15_2 = sx.q(rbp_1) << 4
    int32_t temp2_1
    
    do
        void* rdi_1 = *(r15_2 + arg1->__offset(0x148).q)
        EnterCriticalSection(rdi_1 + 0xb8)
        int64_t* rcx_2 = *(rdi_1 + 0x60)
        
        if (rcx_2 == 0)
            if (rdi_1 != -0xb8)
                LeaveCriticalSection(rdi_1 + 0xb8)
            
            sub_140dbb060(arg1 + 0x148, rbp_1, 1, 0)
        else
            char rax_5 = (*(*rcx_2 + 8))(rcx_2)
            
            if (rdi_1 != -0xb8)
                LeaveCriticalSection(rdi_1 + 0xb8)
            
            if (rax_5 != 0)
                sub_140dbb060(arg1 + 0x148, rbp_1, 1, 0)
        
        r15_2 -= 0x10
        temp2_1 = rbp_1
        rbp_1 -= 1
    while (temp2_1 - 1 s>= 0)

sub_141c5c8d0(arg1, 0)
sub_141c57ff0(arg1)
sub_141c5c8d0(arg1, 1)
sub_141c73a30(arg1)

if ((arg1->__offset(0x1c0).b & 2) != 0)
    int64_t* rcx_10 = arg1->__offset(0x30).q
    (*(*rcx_10 + 0x58))(rcx_10)

if (arg1->__offset(0x1ac).d s> 0)
    void* rbx_2 = nullptr
    
    do
        void* rcx_11 = rbx_2 + arg1->__offset(0xc8).q
        char rax_8 = *(rcx_11 + 0x3d1)
        
        if ((rax_8 & 0x20) != 0 && (rax_8 & 0x10) == 0)
            *(rcx_11 + 0x3d1) = rax_8 | 0x10
            int64_t* rcx_12 = *(rcx_11 + 0x10)
            (*(*rcx_12 + 0x10))(rcx_12)
        
        i += 1
        rbx_2 += 0x3f0
    while (i s< arg1->__offset(0x1ac).d)

return sub_140b38680("SourceManagerUpdate", r13) __tailcall
