// 函数: sub_140ace810
// 地址: 0x140ace810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rax_2 = *(arg1 + 0x10)
void* rcx = arg1 + 0x20
int64_t var_98 = arg4

if (rax_2 != 0)
    rcx = rax_2

void var_90
int64_t* rax_5 = (*arg1)(&var_90, (*(*rcx + 8))(rcx), arg3, &var_98)
arg2[3].b = 0

if (rax_5[3].b != 0)
    *arg2 = *rax_5
    void* rcx_2 = rax_5[1]
    arg2[1] = rcx_2
    
    if (rcx_2 != 0)
        *(rcx_2 + 8) += 1
    
    arg2[2].d = rax_5[2].d
    arg2[3].b = 1

arg2[0xc].b = 0

if (rax_5[0xc].b != 0)
    sub_140b0a670(&arg2[4], &rax_5[4])
    arg2[0xc].b = 1

char var_30

if (var_30 != 0)
    char var_30_1 = 0
    void var_70
    sub_140b0bbf0(&var_70)

char var_78

if (var_78 != 0)
    char var_78_1 = 0
    int64_t* var_88
    
    if (var_88 != 0)
        var_88[1].d -= 1
        
        if (var_88[1].d == 1)
            int64_t rdx_3 = *var_88
            (*rdx_3)(var_88, rdx_3)
            int32_t rdi_1 = *(var_88 + 0xc)
            *(var_88 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_1 = *var_88
                (*(r8_1 + 8))(var_88, zx.q(rdi_1), r8_1)

__security_check_cookie(rax_1 ^ &var_b8)
return arg2
