// 函数: sub_140fc71b0
// 地址: 0x140fc71b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int64_t var_58 = 0
int32_t rdx = 0
int32_t var_50 = 0
int64_t rbp = 0
int32_t var_4c = 0
int32_t r8 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rdi_1.d + 1)
        r8 = var_4c
        rdx = var_50
        rbp = var_58
    
    int32_t rax_1 = rdi_1.d + 1 + rdx
    var_50 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_58)
        rbp = var_58
    
    sub_1405a7220(rbp, rdi_1.d + 1, arg2, rdi_1.d + 1, 0x3f)

int32_t var_48
sub_140926e00(arg1 + 0x30, &var_48, &var_58)
int64_t rax_2 = sx.q(var_48)
void* const rcx_5

if (rax_2.d == 0xffffffff)
    rcx_5 = nullptr
else
    rcx_5 = *(arg1 + 0x30) + rax_2 * 0x28

int64_t* rsi_1 = rcx_5 + 0x10

if (rcx_5 == 0)
    rsi_1 = nullptr

if (rbp != 0)
    sub_140a74f90(rbp)

bool cond:1 = rsi_1 != 0
void* rdi_3

if (rsi_1 != 0)
    rdi_3 = rsi_1[1]
    var_58 = *rsi_1
    var_50.q = rdi_3
    
    if (rdi_3 != 0)
        *(rdi_3 + 8) += 1
    
    if (&var_58 != arg3)
        var_58.o = *arg3
        rdi_3 = var_50.q
        *arg3 = var_58.o
    
    if (rdi_3 != 0)
        int32_t temp1_1 = *(rdi_3 + 8)
        *(rdi_3 + 8) -= 1
        
        if (temp1_1 == 1)
            (**rdi_3)(rdi_3)
            int32_t temp2_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    cond:1 = rsi_1 != 0

rdi_3.b = cond:1

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return zx.q(rdi_3.b)
