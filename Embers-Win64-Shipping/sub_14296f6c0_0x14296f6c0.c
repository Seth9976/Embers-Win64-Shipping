// 函数: sub_14296f6c0
// 地址: 0x14296f6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r15 = 0
int64_t* r14 = nullptr
int64_t* rax_1

if (arg2 != 0)
    rax_1 = sub_142890040(arg2, arg1[8])

if (arg2 == 0 || rax_1 != 0)
    if (arg3 == 0 && arg4 == 0)
    label_14296f7ab:
        sub_1428d8ae0(r14)
        return 1
    
    bool cond:0_1
    
    if (*(*arg1 + 0x128) == 0)
        int64_t* rax_8
        
        if (arg3 != 0)
            rax_8 = sub_142890040(arg3, arg1[0xc])
        
        if (arg3 != 0 && rax_8 == 0)
            sub_1428d8ae0(r14)
            return zx.q(r15)
        
        if (arg4 == 0)
            goto label_14296f7ab
        
        cond:0_1 = sub_142890040(arg4, arg1[0xd]) == 0
    label_14296f7a9:
        
        if (not(cond:0_1))
            goto label_14296f7ab
        
        sub_1428d8ae0(r14)
        return zx.q(r15)
    
    int64_t* rbp_1 = arg5
    
    if (rbp_1 != 0)
    label_14296f744:
        int32_t rax_5
        
        if (arg3 != 0)
            rax_5 = (*(*arg1 + 0x128))(arg1, arg3, arg1[0xc], rbp_1)
        
        if (arg3 != 0 && rax_5 == 0)
            sub_1428d8ae0(r14)
            return zx.q(r15)
        
        if (arg4 == 0)
            goto label_14296f7ab
        
        cond:0_1 = (*(*arg1 + 0x128))(arg1, arg4, arg1[0xd], rbp_1) == 0
        goto label_14296f7a9
    
    int64_t* rax_3 = sub_1428d8d60()
    r14 = rax_3
    rbp_1 = rax_3
    
    if (rax_3 != 0)
        goto label_14296f744

return 0
