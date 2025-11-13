// 函数: sub_142970690
// 地址: 0x142970690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t r12 = 0
uint64_t result_1 = 0
uint64_t result_2 = arg4

if (sub_1428bf8a0(arg1, arg3) != 0)
    sub_142890900(*(arg2 + 0x20), 0)
    *(arg2 + 0x28) = 0
    return 1

void* rax_2 = *arg1
int64_t* r14 = arg1[8]
int64_t rcx_1 = *(rax_2 + 0x108)
int64_t rax_3 = *(rax_2 + 0x110)

if (result_2 == 0)
    uint64_t result = sub_1428d8d60()
    result_1 = result
    result_2 = result
    
    if (result == 0)
        return result

sub_1428d8e50(result_2)
int64_t* rax_4 = sub_1428d8ba0(result_2)
int64_t* rax_5 = sub_1428d8ba0(result_2)
int64_t* rax_6 = sub_1428d8ba0(result_2)
int64_t* rax_7 = sub_1428d8ba0(result_2)

if (rax_7 != 0)
    uint64_t result_3
    int64_t* rdx_4
    void** r8_3
    
    if (arg3[5].d != 0)
        if (rax_3(arg1, rax_4, arg3[2], result_2) != 0 && sub_142908180(rax_5, rax_4, r14) != 0
                && sub_142908140(rax_4, rax_4, rax_5, r14) != 0)
            r8_3 = arg1[0xc]
            rdx_4 = rax_4
        label_142970904:
            
            if (sub_142908140(rax_5, rdx_4, r8_3, r14) != 0)
                bool cond:0_1
                
                if (arg3[5].d == 0)
                    result_3 = result_2
                    cond:0_1 = rcx_1(arg1, rax_4, arg3[3], arg3[4], result_3) == 0
                else
                    cond:0_1 = sub_142890040(rax_4, arg3[3]) == 0
                
                if (not(cond:0_1) && sub_142908180(*(arg2 + 0x20), rax_4, r14) != 0)
                    *(arg2 + 0x28) = 0
                    
                    if (rax_3(arg1, rax_7, arg3[3], result_2, result_3) != 0
                            && rcx_1(arg1, rax_6, arg3[2], rax_7, result_2) != 0
                            && sub_1429081f0(rax_6, rax_6, 2, r14) != 0
                            && sub_142908180(rax_4, rax_6, r14) != 0
                            && rax_3(arg1, *(arg2 + 0x10), rax_5, result_2) != 0)
                        int64_t* rcx_28 = *(arg2 + 0x10)
                        
                        if (sub_142908460(rcx_28, rcx_28, rax_4, r14) != 0
                                && rax_3(arg1, rax_4, rax_7, result_2) != 0
                                && sub_1429081f0(rax_7, rax_4, 3, r14) != 0
                                && sub_142908460(rax_4, rax_6, *(arg2 + 0x10), r14) != 0
                                && rcx_1(arg1, rax_4, rax_5, rax_4, result_2) != 0
                                && sub_142908460(*(arg2 + 0x18), rax_4, rax_7, r14) != 0)
                            r12 = 1
    else if (arg1[0xe].d == 0)
        if (rax_3(arg1, rax_4, arg3[2], result_2) != 0 && sub_142908180(rax_5, rax_4, r14) != 0
                && sub_142908140(rax_4, rax_4, rax_5, r14) != 0
                && rax_3(arg1, rax_5, arg3[4], result_2) != 0
                && rax_3(arg1, rax_5, rax_5, result_2) != 0)
            result_3 = result_2
            
            if (rcx_1(arg1, rax_5, rax_5, arg1[0xc], result_3) != 0)
                r8_3 = rax_4
                rdx_4 = rax_5
                goto label_142970904
    else if (rax_3(arg1, rax_5, arg3[4], result_2) != 0
            && sub_142908140(rax_4, arg3[2], rax_5, r14) != 0
            && sub_142908460(rax_6, arg3[2], rax_5, r14) != 0)
        result_3 = result_2
        
        if (rcx_1(arg1, rax_5, rax_4, rax_6, result_3) != 0
                && sub_142908180(rax_4, rax_5, r14) != 0)
            r8_3 = rax_5
            rdx_4 = rax_4
            goto label_142970904

sub_1428d8a60(result_2)
sub_1428d8ae0(result_1)
return zx.q(r12)
