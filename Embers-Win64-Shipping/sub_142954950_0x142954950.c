// 函数: sub_142954950
// 地址: 0x142954950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t r13 = 0
int64_t* result_1 = nullptr
sub_1428a49e0()
int64_t* result_2 = arg5

if (result_2 == 0)
    int64_t* result = sub_1428d8d60()
    result_1 = result
    result_2 = result
    
    if (result == 0)
        return result

int32_t rax_1
rax_1.b = arg4 != 0
arg5.d = rax_1
sub_1428d8e50(result_2)
int64_t* rax_2 = sub_1428d8ba0(result_2)
int64_t* rax_3 = sub_1428d8ba0(result_2)
int64_t* rax_4 = sub_1428d8ba0(result_2)
int64_t* rax_5 = sub_1428d8ba0(result_2)

if (rax_5 != 0 && sub_1429084c0(rax_4, arg3, arg1[8], result_2) != 0)
    void* rax_7 = *arg1
    int64_t* result_3
    int32_t rax_10
    
    if (*(rax_7 + 0x128) != 0)
        if (sub_1429083a0(rax_3, arg3, arg1[8], result_2) != 0)
            result_3 = result_2
            rax_10 = sub_1429082e0(rax_2, rax_3, arg3, arg1[8], result_3)
        label_142954a95:
            
            if (rax_10 != 0)
                int32_t rax_14
                
                if (arg1[0xe].d == 0)
                    void* rax_15 = *arg1
                    int64_t r8_8 = arg1[0xc]
                    int64_t r10_1 = *(rax_15 + 0x128)
                    int32_t rax_17
                    
                    if (r10_1 == 0)
                        result_3 = result_2
                        rax_17 = (*(rax_15 + 0x108))(arg1, rax_3, r8_8, rax_4, result_3)
                    label_142954b36:
                        
                        if (rax_17 != 0)
                            rax_14 = sub_142908140(rax_2, rax_2, rax_3, arg1[8])
                            goto label_142954b50
                    else if (r10_1(arg1, rax_3, r8_8, result_2, result_3) != 0)
                        result_3 = result_2
                        rax_17 = sub_1429082e0(rax_3, rax_3, rax_4, arg1[8], result_3)
                        goto label_142954b36
                else if (sub_142908180(rax_3, rax_4, arg1[8]) != 0
                        && sub_142908140(rax_3, rax_3, rax_4, arg1[8]) != 0)
                    rax_14 = sub_142908460(rax_2, rax_2, rax_3, arg1[8])
                label_142954b50:
                    
                    if (rax_14 != 0)
                        int64_t* r8_11 = arg1[0xd]
                        int64_t r10_2 = *(*arg1 + 0x128)
                        
                        if (r10_2 == 0)
                            goto label_142954b8c
                        
                        if (r10_2(arg1, rax_3, r8_11, result_2, result_3) != 0)
                            r8_11 = rax_3
                        label_142954b8c:
                            
                            if (sub_142908140(rax_2, rax_2, r8_11, arg1[8]) != 0)
                                int32_t rax_24
                                int32_t r8_13
                                
                                if (sub_142974910(rax_5, rax_2, arg1[8], result_2) != 0)
                                    int32_t rsi_2 = arg5.d
                                    
                                    if (rsi_2 == sub_142890290(rax_5))
                                    label_142954c66:
                                        
                                        if (rsi_2 == sub_142890290(rax_5))
                                            int64_t* result_4 = result_2
                                            
                                            if (sub_1428bfc10(arg1, arg2, rax_4) != 0)
                                                r13 = 1
                                        else
                                            result_3.d = 0x8b
                                            sub_1428a5670(0x10, 0xa9, 0x44, "crypto\ec\ecp_oct.c", 
                                                result_3.d)
                                    else
                                        int32_t rax_26 = sub_142890300(rax_5)
                                        int64_t* rdx_14 = arg1[8]
                                        
                                        if (rax_26 == 0)
                                            if (sub_1428d9180(rax_5, rdx_14, rax_5) != 0)
                                                goto label_142954c66
                                        else
                                            int32_t rax_27 = sub_142974680(rax_4, rdx_14, result_2)
                                            
                                            if (rax_27 != 0xfffffffe)
                                                if (rax_27 != 1)
                                                    rax_24 = 0x83
                                                    r8_13 = 0x6e
                                                else
                                                    rax_24 = 0x7d
                                                    r8_13 = 0x6d
                                                
                                                result_3.d = rax_24
                                                sub_1428a5670(0x10, 0xa9, r8_13, 
                                                    "crypto\ec\ecp_oct.c", result_3.d)
                                else
                                    int32_t rax_22 = sub_1428a5510()
                                    
                                    if ((rax_22 & 0xff000000) != 0x3000000
                                            || (rax_22 & 0xfff) != 0x6f)
                                        rax_24 = 0x6f
                                        r8_13 = 3
                                    else
                                        sub_1428a49e0()
                                        rax_24 = 0x6c
                                        r8_13 = 0x6e
                                    
                                    result_3.d = rax_24
                                    sub_1428a5670(0x10, 0xa9, r8_13, "crypto\ec\ecp_oct.c", 
                                        result_3.d)
    else if ((*(rax_7 + 0x110))(arg1, rax_3, arg3, result_2) != 0)
        result_3 = result_2
        rax_10 = (*(*arg1 + 0x108))(arg1, rax_2, rax_3, arg3, result_3)
        goto label_142954a95

sub_1428d8a60(result_2)
sub_1428d8ae0(result_1)
return zx.q(r13)
