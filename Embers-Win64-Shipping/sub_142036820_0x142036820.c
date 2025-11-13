// 函数: sub_142036820
// 地址: 0x142036820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t rax_1 = (*(*arg1 + 0x150))()

if (sub_1424b2a30(arg1, arg2) == 0)
    char rax_3
    void* rdx_1
    void* r8_1
    rax_3, rdx_1, r8_1 = sub_14243ae00(rax_1)
    char rax_4
    
    if (rax_3 == 0)
        rax_4 = sub_14226f910(arg2, rdx_1, r8_1)
    
    if (rax_3 != 0 || rax_4 != 0)
        arg1[0x5a].d += 1
    else
        *(arg1 + 0x2dc) += 1
else
    *(arg1 + 0x2cc) += 1

int16_t* var_38
sub_14226e380(arg2, &var_38)
int32_t rax_5 = sub_140a23cf0(&var_38, &data_142d84ee0, 0, 0, 0xffffffff)
int64_t var_58
uint64_t var_48
uint64_t rsi_1
int64_t rdi_1
int64_t* r12
int32_t r14_1
int32_t var_30

if (rax_5 s<= 0)
    rsi_1 = 0
    int16_t* r14_2 = var_38
    var_48 = 0
    int32_t var_40_1 = var_30
    
    if (var_30 != 0)
        sub_1405a4c70(&var_48, var_30, 0)
        rsi_1 = var_48
        memcpy(rsi_1, r14_2, var_30 * 2)
    else
        int32_t var_3c_1 = 0
    
    rdi_1 = var_58
    r12 = &var_48
    r14_1 = 2
else
    int32_t rsi
    int16_t* r14
    
    if (var_30 == 0)
        r14 = &data_142d40450
        rsi = 0
    else
        r14 = var_38
        rsi = var_30 - 1
    
    var_58 = 0
    int32_t rdx_3 = 0
    rdi_1 = 0
    
    if (rax_5 s< rsi)
        rsi = rax_5
    
    int32_t var_50_1 = 0
    int32_t rax_6 = 0
    int32_t var_4c_1 = 0
    
    if (r14 != 0 && *r14 != 0 && rsi s> 0)
        if (rsi + 1 s> 0)
            sub_1405947f0(&var_58, rsi + 1)
            rax_6 = var_4c_1
            rdx_3 = var_50_1
            rdi_1 = var_58
        
        int32_t r15_2 = rdx_3 + 1 + rsi
        
        if (r15_2 s> rax_6)
            sub_140594770(&var_58)
            rdi_1 = var_58
        
        UnDecorator::getReferenceType(rdi_1, r14, rsi * 2)
        *(rdi_1 + (sx.q(r15_2) << 1) - 2) = 0
    
    rsi_1 = var_48
    r12 = &var_58
    r14_1 = 1
int64_t* r15_4 = arg2[0x45] + 0x240

if (r15_4 != r12)
    int64_t rcx_12 = *r15_4
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rax_8 = *r12
    *r12 = 0
    *r15_4 = rax_8
    r15_4[1].d = r12[1].d
    int32_t rax_10 = *(r12 + 0xc)
    r12[1] = 0
    rdi_1 = var_58
    rsi_1 = var_48
    *(r15_4 + 0xc) = rax_10

if ((r14_1.b & 2) != 0)
    r14_1 &= 0xfffffffd
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

if ((r14_1.b & 1) != 0 && rdi_1 != 0)
    sub_140a74f90(rdi_1)

(*(*arg1 + 0x8d0))(arg1, arg2)
int64_t result = sub_142036aa0(arg1, arg2)
int16_t* rcx_17 = var_38

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
