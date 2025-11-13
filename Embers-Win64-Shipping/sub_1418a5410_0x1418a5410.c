// 函数: sub_1418a5410
// 地址: 0x1418a5410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t var_30 = arg1
void** const var_38 = &data_142da2668
int64_t* (* var_58)(int64_t* arg1, int64_t* arg2) = sub_1418a0590
void*** var_48 = nullptr
void* var_70
void* rbx = *sub_14189c060(&var_70, &var_58)

while (true)
    bool z_1
    
    if (0 == *(rbx + 0x78))
        *(rbx + 0x78) = 0
        z_1 = true
    else
        int64_t rax_3
        rax_3.b = *(rbx + 0x78)
        z_1 = false
    
    if (not(z_1))
        break
    
    int64_t* rcx_1 = *(rbx + 0x70)
    (*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0)

*arg2 = 0
void* rcx_2 = &arg2[2]
arg2[1] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_5 = *(rcx_2 + 0x10)

if (rax_5 != 0)
    rcx_2 = rax_5

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
arg2[8] = 0
arg2[9].d = 0
sub_1418235f0(arg2, rbx + 0x80)
int64_t* var_68

if (var_68 != 0)
    var_68[1].d -= 1
    
    if (var_68[1].d == 1)
        (**var_68)(var_68)
        int32_t rdi_1 = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_68 + 8))(var_68, zx.q(rdi_1))

if (var_58 != 0)
    void** const* rcx_6 = &var_38
    
    if (var_48 != 0)
        rcx_6 = var_48
    
    void** const rdx_4 = *rcx_6
    rdx_4[2](rcx_6, rdx_4)

__security_check_cookie(rax_1 ^ &var_98)
return arg2
