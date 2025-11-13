// 函数: sub_140feeda0
// 地址: 0x140feeda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x150)
int32_t rsi = 0
int32_t rbx = 8
int64_t var_68
__builtin_memset(&var_68, 0, 0x48)
int64_t* var_28
(*(*rcx + 0x2c8))(rcx, 8, &var_68, &var_28)
int32_t var_20 = 8
void var_70

while (*(&var_70 + (sx.q(rbx) << 3)) == 0)
    rbx -= 1
    var_20 = rbx
    
    if (rbx s<= 0)
        break

int64_t* r15 = var_28

if (arg2 != 0 && rbx s> 0)
    int32_t rdi_1 = 0
    int64_t* r14_1 = &var_68
    
    do
        int64_t rdx = *r14_1
        
        if (rdx != 0)
            int64_t* rcx_1 = *(arg1 + 0x150)
            (*(*rcx_1 + 0x190))(rcx_1, rdx, (sx.q(rdi_1) << 4) + arg4)
            rbx = var_20
        
        rdi_1 += 1
        r14_1 = &r14_1[1]
    while (rdi_1 s< rbx)

uint64_t result = zx.q(arg5)

if ((result.b != 0 || arg7 != 0) && r15 != 0)
    int64_t* rcx_2 = *(arg1 + 0x150)
    int512_t zmm3
    zmm3.o = arg6
    uint32_t rax_3 = zx.d(result.b)
    int64_t r9_1 = *rcx_2
    uint64_t r8_5 = zx.q(rax_3) | 2
    
    if (arg7 == 0)
        r8_5 = zx.q(rax_3)
    
    char var_78_1 = arg8
    result = (*(r9_1 + 0x1a8))(rcx_2, r15, r8_5, r9_1, zmm3)
    rbx = var_20

if (*(arg1 + 0x17d18) != 0)
    result = *(arg1 + 0x17d30)
    
    if (result != 0)
        *(result + 0x10) += 1
        rbx = var_20

if (rbx s> 0)
    int64_t* rdi_2 = &var_68
    
    do
        int64_t* rcx_3 = *rdi_2
        
        if (rcx_3 != 0)
            result = (*(*rcx_3 + 0x10))(rcx_3)
            rbx = var_20
        
        rsi += 1
        rdi_2 = &rdi_2[1]
    while (rsi s< rbx)

int64_t* rcx_4 = var_28

if (rcx_4 == 0)
    return result

return (*(*rcx_4 + 0x10))(rcx_4)
