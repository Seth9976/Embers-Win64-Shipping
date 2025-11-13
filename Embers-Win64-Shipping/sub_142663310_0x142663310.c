// 函数: sub_142663310
// 地址: 0x142663310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg5
int64_t rdi

if (rcx != 0)
label_142663335:
    int32_t zmm0 = data_143dbb1f8
    
    if (not(zmm0 f!= *arg4))
        zmm0 = data_143dbb1fc
        
        if (not(zmm0 f!= arg4[1]))
            zmm0 = data_143dbb200
            arg4[2]
    
    int64_t var_18 = *arg6
    void* rax_2 = arg6[1]
    void* var_10_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    int64_t var_20_1 = 0
    int64_t* var_28_1 = &var_18
    
    if ((*(*(rcx + 0x220) + 0x10))(zmm0) == 0)
        rdi.b = 0
    else
        rdi.b = 1
else
    rcx = *(arg1 + 0x28)
    
    if (rcx != 0)
        goto label_142663335
    
    rdi.b = 0

int64_t* rbx_1 = arg6[1]

if (rbx_1 == 0)
    return zx.q(rdi.b)

rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    int64_t rdx = *rbx_1
    (*rdx)(rbx_1, rdx)
    int32_t rsi_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (rsi_1 == 1)
        int64_t r8 = *rbx_1
        (*(r8 + 8))(rbx_1, zx.q(rsi_1), r8)

return zx.q(rdi.b)
