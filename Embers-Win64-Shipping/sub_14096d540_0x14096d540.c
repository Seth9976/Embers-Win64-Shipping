// 函数: sub_14096d540
// 地址: 0x14096d540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140975150(arg1)
void* rdx

if (arg2 != 0)
    rdx = *(arg1 + 0x60)

char rax

if (arg2 == 0 || rdx == 0)
    rax = 0
else
    sub_14094d3d0(arg1 + 0x80, rdx + 8)
    rax = 1

*(arg1 + 0x7c) = rax

if (sub_140d3c6e0(arg1 + 0x74) != 0)
    int64_t* rax_2 = sub_140a84c80(0, 0x20, 0)
    int64_t* var_58 = rax_2
    int64_t* rdi_1 = rax_2
    
    if (rax_2 != 0)
        rdi_1[1] = arg1
        *rdi_1 = &data_142e339d8
        rdi_1[3] = sub_140a387b0()
        *rdi_1 = &data_142e33a30
    
    void var_48
    int64_t* rax_4 = sub_140958da0(&var_48, nullptr, 0xff)
    int64_t* rbx_2 = *rax_4 + 0x10
    *rbx_2 = 0
    rbx_2[1].d = 0
    
    if (&var_58 != rbx_2 && rdi_1 != 0)
        int64_t r8_1 = *rdi_1
        (*(r8_1 + 0x40))(rdi_1, rbx_2, r8_1)
    
    rbx_2[2].d = 2
    void* rcx_4 = *rax_4
    int32_t r8_2 = rax_4[2].d
    int64_t* rdx_3 = rax_4[1]
    int64_t* rbx_3 = *(rcx_4 + 0x30)
    int64_t* arg_8 = rbx_3
    int32_t* r14_2 = &rbx_3[9]
    
    if (rbx_3 != 0)
        *r14_2 += 1
        rdi_1 = var_58
        rbx_3 = arg_8
    
    sub_140978a40(rcx_4, rdx_3, r8_2, 1)
    
    if (rbx_3 != 0)
        int32_t rax_5 = *r14_2
        *r14_2 -= 1
        
        if (rax_5 == 1)
            sub_140a2f6e0(arg_8)
        
        rdi_1 = var_58
    
    if (rdi_1 != 0)
        (*(*rdi_1 + 0x38))(rdi_1, 0)
        int64_t* rax_7 = sub_140a84c80(rdi_1, 0, 0)
        var_58 = rax_7
        
        if (rax_7 != 0)
            sub_140a74f90(rax_7)

int64_t* var_60 = nullptr
int64_t var_68
int32_t result = &var_68

if (arg1 + 0x60 != &var_68)
    *(arg1 + 0x60) = 0
    var_68 = 0
    result = sub_1405aeff0(arg1 + 0x68, &var_60)
    int64_t* rcx_11 = var_60
    
    if (rcx_11 != 0)
        result = rcx_11[1].d
        rcx_11[1].d -= 1
        
        if (result == 1)
            int64_t* rbx_4 = var_60
            result = (**rbx_4)(rbx_4)
            int32_t rbp_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rbp_1 == 1)
                int64_t* rcx_13 = var_60
                return (*(*rcx_13 + 8))(rcx_13, zx.q(rbp_1))

return result
