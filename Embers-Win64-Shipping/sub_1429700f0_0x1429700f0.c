// 函数: sub_1429700f0
// 地址: 0x1429700f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
int32_t r12 = 0
uint64_t result_1 = 0
int64_t* r14 = arg2

if (arg3 == arg4)
    return sub_1428bf600(arg1, arg2, arg3, arg5) __tailcall

int64_t* rdx_2 = arg4

if (sub_1428bf8a0(arg1, arg3) == 0)
    if (sub_1428bf8a0(arg1, rdx_2) == 0)
        void* rax_4 = *arg1
        uint64_t result_2 = arg5
        int64_t r13 = *(rax_4 + 0x108)
        int64_t rax_5 = *(rax_4 + 0x110)
        int64_t* rax_6 = arg1[8]
        
        if (result_2 == 0)
            uint64_t result = sub_1428d8d60()
            result_1 = result
            result_2 = result
            
            if (result == 0)
                return result
        
        sub_1428d8e50(result_2)
        int64_t* rax_7 = sub_1428d8ba0(result_2)
        int64_t* rax_8 = sub_1428d8ba0(result_2)
        int64_t* rax_9 = sub_1428d8ba0(result_2)
        int64_t* rax_10 = sub_1428d8ba0(result_2)
        int64_t* rax_11 = sub_1428d8ba0(result_2)
        int64_t* rax_12 = sub_1428d8ba0(result_2)
        int64_t* rax_13 = sub_1428d8ba0(result_2)
        
        if (rax_13 == 0)
            goto label_142970653
        
        uint64_t result_3
        bool cond:0_1
        
        if (arg4[5].d == 0)
            if (rax_5(arg1, rax_7, arg4[4], result_2) == 0)
                goto label_142970653
            
            if (r13(arg1, rax_8, arg3[2], rax_7, result_2) == 0)
                goto label_142970653
            
            if (r13(arg1, rax_7, rax_7, arg4[4], result_2) == 0)
                goto label_142970653
            
            result_3 = result_2
            cond:0_1 = r13(arg1, rax_9, arg3[3], rax_7, result_3) == 0
            goto label_1429702d2
        
        if (sub_142890040(rax_8, arg3[2]) == 0)
            goto label_142970653
        
        cond:0_1 = sub_142890040(rax_9, arg3[3]) == 0
    label_1429702d2:
        
        if (cond:0_1)
            goto label_142970653
        
        bool cond:1_1
        
        if (arg3[5].d == 0)
            if (rax_5(arg1, rax_7, arg3[4], result_2, result_3) == 0)
                goto label_142970653
            
            if (r13(arg1, rax_10, arg4[2], rax_7, result_2) == 0)
                goto label_142970653
            
            if (r13(arg1, rax_7, rax_7, arg3[4], result_2) == 0)
                goto label_142970653
            
            result_3 = result_2
            cond:1_1 = r13(arg1, rax_11, arg4[3], rax_7, result_3) == 0
            goto label_142970382
        
        if (sub_142890040(rax_10, arg4[2]) == 0)
            goto label_142970653
        
        cond:1_1 = sub_142890040(rax_11, arg4[3]) == 0
    label_142970382:
        
        if (cond:1_1)
            goto label_142970653
        
        if (sub_142908460(rax_12, rax_8, rax_10, rax_6) == 0)
            goto label_142970653
        
        if (sub_142908460(rax_13, rax_9, rax_11, rax_6) == 0)
            goto label_142970653
        
        if (sub_142890300(rax_12) != 0)
            if (sub_142890300(rax_13) == 0)
                sub_142890900(r14[4], 0)
                r14[5].d = 0
                r12 = 1
            label_142970653:
                
                if (result_2 != 0)
                    sub_1428d8a60(result_2)
            else
                sub_1428d8a60(result_2)
                r12 = sub_1428bf600(arg1, r14, arg3, result_2, result_3)
            
            sub_1428d8ae0(result_1)
            return zx.q(r12)
        
        if (sub_142908140(rax_8, rax_8, rax_10, rax_6) != 0
                && sub_142908140(rax_9, rax_9, rax_11, rax_6) != 0)
            int32_t rax_33 = arg4[5].d
            bool cond:2_1
            
            if (arg3[5].d == 0)
                if (rax_33 == 0)
                    cond:2_1 = r13(arg1, rax_7, arg3[4], arg4[4], result_2) == 0
                else
                    cond:2_1 = sub_142890040(rax_7, arg3[4]) == 0
                
                goto label_1429704cd
            
            int64_t* r15_1
            bool cond:3_1
            
            if (rax_33 == 0)
                cond:2_1 = sub_142890040(rax_7, arg4[4]) == 0
            label_1429704cd:
                
                if (not(cond:2_1))
                    r15_1 = rax_12
                    result_3 = result_2
                    cond:3_1 = r13(arg1, r14[4], rax_7, r15_1, result_3) == 0
                    goto label_1429704ef
            else
                r15_1 = rax_12
                cond:3_1 = sub_142890040(r14[4], r15_1) == 0
            label_1429704ef:
                
                if (not(cond:3_1))
                    r14[5].d = 0
                    
                    if (rax_5(arg1, rax_7, rax_13, result_2, result_3) != 0
                            && rax_5(arg1, rax_11, r15_1, result_2) != 0
                            && r13(arg1, rax_10, rax_8, rax_11, result_2) != 0
                            && sub_142908460(r14[2], rax_7, rax_10, rax_6) != 0
                            && sub_142908180(rax_7, r14[2], rax_6) != 0
                            && sub_142908460(rax_7, rax_10, rax_7, rax_6) != 0
                            && r13(arg1, rax_7, rax_7, rax_13, result_2) != 0
                            && r13(arg1, r15_1, rax_11, r15_1, result_2) != 0
                            && r13(arg1, rax_8, rax_9, r15_1, result_2) != 0
                            && sub_142908460(rax_7, rax_7, rax_8, rax_6) != 0)
                        int32_t rax_49 = sub_142890290(rax_7)
                        int32_t rax_50
                        
                        if (rax_49 != 0)
                            rax_50 = sub_1428d8f70(rax_7, rax_7, rax_6)
                        
                        if ((rax_49 == 0 || rax_50 != 0) && sub_1428f5900(r14[3], rax_7) != 0)
                            r12 = 1
        
        goto label_142970653
    
    rdx_2 = arg3

return sub_1428bf580(r14, rdx_2) __tailcall
