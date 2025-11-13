// 函数: sub_140f8bcc0
// 地址: 0x140f8bcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14065da90(&arg1[0xb0], arg2)
arg1[0xb3].b = arg2[3].b
sub_140692f90(&arg1[0xb4], &arg2[4])
void var_2d8
int64_t* var_2d0

if (arg1[0xb5].d == 0)
label_140f8bd1e:
    int64_t* rax_3 = sub_1405d9400()
    
    if (arg1[0xb3].b != 0)
        rax_3 = sub_140d44910(&arg1[0xb0])
    
    if (sub_140ab3dc0(rax_3) == 0)
        goto label_140f8bda2
    
    void* rdi = arg1[0xb]
    
    if (rdi != 0)
        arg1[0xb] = 0
        sub_140f67a30(rdi)
        j_sub_140a74f90(rdi)
else
    int64_t* rcx_2 = arg1[0xb4]
    
    if (rcx_2 == 0)
        goto label_140f8bd1e
    
    if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
        goto label_140f8bd1e
    
label_140f8bda2:
    sub_140de1940(&arg1[0x59], &arg1[0xc])
    void* rax_5 = arg1[9]
    int64_t* rcx_8 = *arg1
    char r15_1 = *(rax_5 + 0x8a)
    char r12_1 = *(rax_5 + 0x89)
    int64_t* rax_7 = (*(*rcx_8 + 0x88))(rcx_8, &var_2d8)
    int64_t* rdi_1 = arg1[6]
    int64_t rbx_1 = arg1[5]
    int64_t r13_1 = *rax_7
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t* rax_8 = j_sub_140a82f30(0x70)
    char arg_8
    void** rbx_3
    
    if (rax_8 == 0)
        rbx_3 = nullptr
    else
        int64_t var_2c8 = rbx_1
        int64_t* var_2c0_1 = rdi_1
        int128_t var_2b8 = zx.o(0)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        arg_8 = r15_1
        char arg_9 = 1
        char arg_10 = r12_1
        char arg_11 = 1
        void** var_2a8
        rbx_3 = sub_140f66170(rax_8, r13_1, sub_140ddd070(&var_2a8, &arg1[0x59]), &arg_10, &arg_8, 
            &arg1[7], &var_2c8, &var_2b8)
    
    if (&arg1[0xb] != &arg_8)
        void** rbp_2 = arg1[0xb]
        arg1[0xb] = rbx_3
        
        if (rbp_2 != 0)
            sub_140f67a30(rbp_2)
            j_sub_140a74f90(rbp_2)
    else if (rbx_3 != 0)
        sub_140f67a30(rbx_3)
        j_sub_140a74f90(rbx_3)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (var_2d0 != 0)
        var_2d0[1].d -= 1
        
        if (var_2d0[1].d == 1)
            (**var_2d0)(var_2d0)
            int32_t temp5_1 = *(var_2d0 + 0xc)
            *(var_2d0 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_2d0 + 8))(var_2d0, 1)
    
    sub_140f15630(*arg1[0xb], &arg1[0xd7])

int64_t* rcx_20 = *arg1
int64_t result = sub_140e19ef0(*(*(*rcx_20 + 0x80))(rcx_20, &var_2d8), 5)

if (var_2d0 != 0)
    var_2d0[1].d -= 1
    
    if (var_2d0[1].d == 1)
        result = (**var_2d0)(var_2d0)
        int32_t temp1_1 = *(var_2d0 + 0xc)
        *(var_2d0 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_2d0 + 8))(var_2d0, 1)

return result
