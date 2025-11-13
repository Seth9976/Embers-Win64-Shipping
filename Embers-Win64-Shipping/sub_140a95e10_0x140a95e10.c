// 函数: sub_140a95e10
// 地址: 0x140a95e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
char rdi = 0
void*** rax = j_sub_140a82f30(0x28)
void*** r14 = rax
void*** var_30

if (rax == 0)
    r14 = nullptr
else
    void** const var_48_1 = &data_142e63c48
    int16_t var_40 = *(sub_140aae970() + 0x120)
    void*** rax_2 = sub_140a941e0()
    void*** var_50_1 = rax_2
    void* var_58 = &rax_2[2]
    sub_1408ff2f0(&var_58, &rax_2[2])
    var_30 = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d += 1
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t rax_5 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*rax_2)[1](rax_2, 1)
    
    sub_140ab38c0(&rax_2[2], &var_40, arg2, arg3, arg4)
    *r14 = &data_142e63e18
    r14[1] = &data_142e63698
    r14[2].w = var_40
    r14[1] = &data_142e63c48
    r14[3] = &rax_2[2]
    r14[4] = var_30
    var_30 = nullptr
    int64_t var_38_2 = 0
    void* rdi_2 = r14[3]
    
    if (rdi_2 != 0)
        EnterCriticalSection(rdi_2 + 0x48)
        *(rdi_2 + 0x10) = &r14[2]
        
        if (rdi_2 != -0x48)
            LeaveCriticalSection(rdi_2 + 0x48)
    
    int64_t* var_60 = nullptr
    int64_t var_38_3 = 0
    int64_t var_68_1 = 0
    sub_1405aeff0(&var_30, &var_60)
    int64_t* rcx_8 = var_60
    
    if (rcx_8 != 0)
        rcx_8[1].d -= 1
        
        if (rcx_8[1].d == 1)
            int64_t* rbx_2 = var_60
            (**rbx_2)(rbx_2)
            int32_t rax_12 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_12 == 1)
                int64_t* rcx_10 = var_60
                (*(*rcx_10 + 8))(rcx_10, 1)
    
    rdi = 1

*arg1 = r14
void*** rax_14 = j_sub_140a82f30(0x18)

if (rax_14 == 0)
    rax_14 = nullptr
else
    rax_14[1].d = 1
    *rax_14 = &data_142d42ea8
    *(rax_14 + 0xc) = 1
    rax_14[2] = r14

arg1[1] = rax_14

if ((rdi & 1) != 0)
    void*** rbx_3 = var_30
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t rbp_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*rbx_3)[1](rbx_3, zx.q(rbp_1))

arg1[2].d = 0
int64_t rcx_14 = *arg3

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return arg1
