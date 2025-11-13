// 函数: sub_1420f02b0
// 地址: 0x1420f02b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
int64_t* rbp = arg6
int16_t* const rsi = &data_142d40450
int64_t r12 = arg2

if (*rbp != &data_142d40450)
    int32_t rdx = 0
    rbp[1].d = 0
    
    if (*(rbp + 0xc) != 0)
        sub_1405947f0(rbp, 0)
        rdx = rbp[1].d
    
    rbp[1].d = rdx
    
    if (rdx s> *(rbp + 0xc))
        sub_140594770(rbp)

int32_t rdx_1 = 0
int32_t rcx_2 = 0
int64_t var_58 = 0
int32_t r14 = 0
int64_t var_50 = 0

if (*(arg4 + 0x50) s> 0)
    int64_t r12_1 = 0
    
    while (true)
        int32_t rdi_1 = rdx_1 - 1
        
        if (rdx_1 s<= 0)
            rdi_1 = 0
        
        int32_t rax_1
        rax_1.b = rdx_1 s<= 0
        int32_t rax_3 = rax_1 + 1 + rdx_1
        var_50.d = rax_3
        
        if (rax_3 s> rcx_2)
            sub_140594770(&var_58)
        
        int64_t rcx_4 = sx.q(rdi_1)
        *(var_58 + (rcx_4 << 1)) = 0x3f
        *(var_58 + (rcx_4 << 1) + 2) = 0
        int64_t* rdx_2 = *(arg4 + 0x48)
        int32_t rax_6 = *(rdx_2 + r12_1 + 8)
        int32_t r8 = rax_6 - 1
        
        if (rax_6 == 0)
            r8 = 0
        
        sub_140a20ba0(&var_58, *(rdx_2 + r12_1), r8)
        r14 += 1
        r12_1 += 0x10
        
        if (r14 s>= *(arg4 + 0x50))
            break
        
        rcx_2 = var_50:4.d
        rdx_1 = var_50.d
    
    rbp = arg6
    r12 = arg2

int64_t* r14_2 = *(arg1 + 0x128)

if (r14_2 != 0)
    if (*(arg4 + 0x60) != 0)
        rsi = *(arg4 + 0x58)
    
    int64_t var_48 = 0
    int32_t rdx_4 = 0
    int64_t var_40_1 = 0
    int32_t rcx_6 = 0
    
    if (rsi != 0 && *rsi != 0)
        int64_t rdi_2 = -1
        
        do
            rdi_2 += 1
        while (rsi[rdi_2] != 0)
        
        if (rdi_2.d + 1 s> 0)
            sub_1405947f0(&var_48, rdi_2.d + 1)
            rcx_6 = var_40_1:4.d
            rdx_4 = var_40_1.d
        
        int32_t rax_7 = rdi_2.d + 1 + rdx_4
        var_40_1.d = rax_7
        
        if (rax_7 s> rcx_6)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, rsi, (rdi_2.d + 1) * 2)
    
    uint64_t result_1 = (*(*r14_2 + 0x740))(r14_2, r12, zx.q(arg3), &var_48, &var_58, arg5, rbp)
    int64_t rcx_11 = var_48
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    if (result_1 != 0)
        *(result_1 + 0x3d4) = arg7
        sub_141dd9000(result_1, 3)
        sub_141dd8f90(result_1, arg3 != 0)
        
        if (arg3 == 2)
            sub_141dd7750(result_1, 1, 1)
        
        (*(*result_1 + 0xc10))(result_1, r12)
        (*(*r14_2 + 0x748))(r14_2, result_1)
        result = result_1

int64_t rcx_17 = var_58

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return result
