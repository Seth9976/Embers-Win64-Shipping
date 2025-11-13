// 函数: sub_142970e00
// 地址: 0x142970e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
int32_t r15 = 0
int32_t rdi = -1
int64_t* var_38 = nullptr
int64_t* r14 = arg4
int32_t rax = sub_1428bf8a0(arg1, arg2)
int32_t rax_1 = sub_1428bf8a0(arg1, arg3)

if (rax != 0)
    r15.b = rax_1 == 0
    return zx.q(r15)

if (rax_1 != 0)
    return 1

if (arg2[5].d != 0 && arg3[5].d != 0)
    int32_t rax_3 = sub_14288fc80(arg2[2], arg3[2])
    int32_t rax_4
    
    if (rax_3 == 0)
        rax_4 = sub_14288fc80(arg2[3], arg3[3])
    
    if (rax_3 != 0 || rax_4 != 0)
        r15 = 1
    
    return zx.q(r15)

void* rax_5 = *arg1
int64_t rbx_1 = *(rax_5 + 0x108)
int64_t rax_6 = *(rax_5 + 0x110)

if (r14 != 0)
label_142970ee6:
    sub_1428d8e50(r14)
    int64_t* rax_8 = sub_1428d8ba0(r14)
    int64_t* rax_9 = sub_1428d8ba0(r14)
    int64_t* rax_10 = sub_1428d8ba0(r14)
    int64_t* rax_11 = sub_1428d8ba0(r14)
    
    if (rax_11 != 0)
        int64_t* var_78
        int64_t* r13_2
        
        if (arg3[5].d != 0)
            r13_2 = arg2[2]
        label_142970f71:
            int64_t* rbx_2
            
            if (arg2[5].d != 0)
                rbx_2 = arg3[2]
            label_142970fc3:
                
                if (sub_14288fc80(r13_2, rbx_2) != 0)
                    rdi = 1
                else if (arg3[5].d != 0)
                    r13_2 = arg2[3]
                label_14297101c:
                    
                    if (arg2[5].d != 0)
                        rdi.b = sub_14288fc80(r13_2, arg3[3]) != 0
                    else if (rbx_1(arg1, rax_10, rax_10, arg2[4], r14) != 0
                            && rbx_1(arg1, rax_9, arg3[3], rax_10, r14) != 0)
                        rdi.b = sub_14288fc80(r13_2, rbx_2) != 0
                else if (rbx_1(arg1, rax_11, rax_11, arg3[4], r14) != 0
                        && rbx_1(arg1, rax_8, arg2[3], rax_11, r14) != 0)
                    goto label_14297101c
            else if (rax_6(arg1, rax_10, arg2[4], r14, var_78) != 0
                    && rbx_1(arg1, rax_9, arg3[2], rax_10, r14) != 0)
                rbx_2 = rax_9
                goto label_142970fc3
        else if (rax_6(arg1, rax_11, arg3[4], r14) != 0)
            r13_2 = rax_8
            var_78 = r14
            
            if (rbx_1(arg1, r13_2, arg2[2], rax_11, var_78) != 0)
                goto label_142970f71
    
    sub_1428d8a60(r14)
    sub_1428d8ae0(var_38)
else
    int64_t* rax_7 = sub_1428d8d60()
    var_38 = rax_7
    r14 = rax_7
    
    if (rax_7 != 0)
        goto label_142970ee6

return zx.q(rdi)
