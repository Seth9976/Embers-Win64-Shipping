// 函数: sub_142860360
// 地址: 0x142860360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* rdi = *(arg1 + 0xa8)

if (*(rdi + 0x230) == 0x101)
    *arg2 = zx.q(arg1[0x26])
    return 1

int64_t rdi_1 = *(rdi + 0x228)
int64_t rbp = *(arg1 + 0x90)
int64_t rcx = *(arg1 + 0x98)
int64_t rdi_2 = rdi_1 - rcx
int64_t var_38
int32_t var_30
int64_t* var_28

if (rdi_1 != rcx)
    int64_t rax_5
    int64_t temp1_1
    
    do
        int64_t arg_8
        var_28 = &arg_8
        var_30 = 0
        var_38 = rdi_2
        
        if ((*(*(arg1 + 8) + 0x68))(arg1, 0x16, 0, rcx + rbp, var_38, 0, var_28) s<= 0)
            arg1[0xa] = 3
            goto label_142860447
        
        rax_5 = arg_8
        *(arg1 + 0x98) += rax_5
        rcx = *(arg1 + 0x98)
        temp1_1 = rdi_2
        rdi_2 -= rax_5
    while (temp1_1 != rax_5)

if (**(*(arg1 + 0x88) + 8) == 0x14)
    void* r10_1 = *(*(arg1 + 8) + 0xc0)
    int64_t rdx
    int64_t r8_1
    
    if (arg1[0xe] != 0)
        rdx = *(r10_1 + 0x30)
        r8_1 = *(r10_1 + 0x38)
    else
        rdx = *(r10_1 + 0x40)
        r8_1 = *(r10_1 + 0x48)
    
    *(*(arg1 + 0xa8) + 0x220) =
        (*(r10_1 + 0x28))(arg1, rdx, r8_1, *(arg1 + 0xa8) + 0x1a0, var_38, var_30, var_28)

if (**(*(arg1 + 0x88) + 8) != 0x14 || *(*(arg1 + 0xa8) + 0x220) != 0)
    int64_t var_38_1
    int64_t var_28_1
    uint64_t rdx_3
    int64_t r8_3
    int64_t r10_2
    
    if (sub_14285b7a0(&arg1[0x200]) == 0)
        int32_t* rcx_7 = *(arg1 + 8)
        
        if ((*(*(rcx_7 + 0xc0) + 0x60) & 8) == 0)
            int32_t rax_16 = *rcx_7
            
            if (rax_16 s< 0x304 || rax_16 == 0x10000)
                goto label_142860543
            
            int32_t rcx_8 = *(*(arg1 + 0xa8) + 0x230)
            
            if (rcx_8 != 4 && rcx_8 != 0x18)
                goto label_142860543
            
        label_142860590:
            r10_2 = *(arg1 + 0xb8)
            
            if (r10_2 == 0)
                *arg2 = *(arg1 + 0x98)
                return 1
            
            r8_3 = 0x16
            rdx_3 = zx.q(*arg1)
            var_28_1 = *(arg1 + 0xc0)
            var_30.q = arg1
            var_38_1 = *(arg1 + 0x98) + 4
            goto label_1428605d2
        
    label_142860543:
        int32_t rax_20
        
        if (*(*(arg1 + 0xa8) + 0x230) == 2 && *(arg1 + 0x98) u>= 0x26)
            rax_20 = memcmp(&data_1434dbe90, *(*(arg1 + 0x88) + 8) + 6, 0x20)
        
        if (*(*(arg1 + 0xa8) + 0x230) == 2 && *(arg1 + 0x98) u>= 0x26 && rax_20 == 0)
            goto label_142860590
        
        if (sub_142882640(arg1, *(*(arg1 + 0x88) + 8), *(arg1 + 0x98) + 4) != 0)
            goto label_142860590
    else if (sub_142882640(arg1, *(*(arg1 + 0x88) + 8), *(arg1 + 0x98)) != 0)
        r10_2 = *(arg1 + 0xb8)
        
        if (r10_2 == 0)
            *arg2 = *(arg1 + 0x98)
            return 1
        
        r8_3 = 0
        var_28_1 = *(arg1 + 0xc0)
        var_30.q = arg1
        var_38_1 = *(arg1 + 0x98)
        rdx_3 = 2
    label_1428605d2:
        r10_2(0, rdx_3, r8_3, *(*(arg1 + 0x88) + 8), var_38_1, var_30, var_28_1)
        *arg2 = *(arg1 + 0x98)
        return 1

label_142860447:
*arg2 = 0
return 0
