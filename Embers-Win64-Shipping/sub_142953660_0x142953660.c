// 函数: sub_142953660
// 地址: 0x142953660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rsi = 0
int32_t rdi = -1
int64_t* r12 = nullptr
int64_t* rbp = arg4
int32_t rax = sub_1428bf8a0(arg1, arg2)
int32_t rax_1 = sub_1428bf8a0(arg1, arg3)

if (rax != 0)
    rsi.b = rax_1 == 0
    return zx.q(rsi)

if (rax_1 != 0)
    return 1

if (arg2[5].d != 0 && arg3[5].d != 0)
    int32_t rax_3 = sub_14288fc80(arg2[2], arg3[2])
    int32_t rax_4
    
    if (rax_3 == 0)
        rax_4 = sub_14288fc80(arg2[3], arg3[3])
    
    if (rax_3 != 0 || rax_4 != 0)
        rsi = 1
    
    return zx.q(rsi)

if (rbp != 0)
label_142953725:
    sub_1428d8e50(rbp)
    int64_t* rax_6 = sub_1428d8ba0(rbp)
    int64_t* rax_7 = sub_1428d8ba0(rbp)
    int64_t* rax_8 = sub_1428d8ba0(rbp)
    int64_t* rax_9 = sub_1428d8ba0(rbp)
    
    if (rax_9 != 0 && sub_1428bf6e0(arg1, arg2, rax_6, rax_7, rbp) != 0
            && sub_1428bf6e0(arg1, arg3, rax_8, rax_9, rbp) != 0)
        int32_t rax_12 = sub_14288fc80(rax_6, rax_8)
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = sub_14288fc80(rax_7, rax_9)
            rdi = 0
        
        if (rax_12 != 0 || rax_13 != 0)
            rdi = 1
    
    sub_1428d8a60(rbp)
    sub_1428d8ae0(r12)
else
    int64_t* rax_5 = sub_1428d8d60()
    r12 = rax_5
    rbp = rax_5
    
    if (rax_5 != 0)
        goto label_142953725

return zx.q(rdi)
