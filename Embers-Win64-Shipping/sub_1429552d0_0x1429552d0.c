// 函数: sub_1429552d0
// 地址: 0x1429552d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t rsi = 0
int64_t* result_2 = nullptr
sub_1428a49e0()
int64_t* result_1 = arg5

if (result_1 == 0)
    int64_t* result = sub_1428d8d60()
    result_2 = result
    result_1 = result
    
    if (result == 0)
        return result

int32_t rax_1
rax_1.b = arg4 != 0
arg5.d = rax_1
sub_1428d8e50(result_1)
int64_t* rax_2 = sub_1428d8ba0(result_1)
int64_t* rax_3 = sub_1428d8ba0(result_1)
int64_t* rax_4 = sub_1428d8ba0(result_1)
int64_t* rax_5 = sub_1428d8ba0(result_1)

if (rax_5 != 0 && sub_142972740(rax_3, arg3, &arg1[9]) != 0)
    int32_t rax_8
    
    if (sub_142890300(rax_3) == 0)
        if ((*(*arg1 + 0x110))(arg1, rax_2, rax_3, result_1) != 0
                && (*(*arg1 + 0x118))(arg1, rax_2, arg1[0xd], rax_2, result_1) != 0
                && sub_142972660(rax_2, arg1[0xc], rax_2) != 0
                && sub_142972660(rax_2, rax_3, rax_2) != 0)
            if (sub_1429735b0(rax_5, rax_2, &arg1[9], result_1) != 0)
                int32_t rbp_2
                rbp_2.b = sub_142890290(rax_5) != 0
                
                if ((*(*arg1 + 0x108))(arg1, rax_4, rax_3, rax_5, result_1) != 0)
                    if (rbp_2 == arg5.d)
                        goto label_1429554f3
                    
                    rax_8 = sub_142972660(rax_4, rax_4, rax_3)
                    goto label_1429554e1
            else
                int32_t rax_16 = sub_1428a5510()
                int32_t rax_18
                int32_t r8_7
                
                if ((rax_16 & 0xff000000) != 0x3000000 || (rax_16 & 0xfff) != 0x74)
                    rax_18 = 0x55
                    r8_7 = 3
                else
                    sub_1428a49e0()
                    rax_18 = 0x52
                    r8_7 = 0x6e
                
                int64_t* var_58_1
                var_58_1.d = rax_18
                sub_1428a5670(0x10, 0xa4, r8_7, "crypto\ec\ec2_oct.c", var_58_1.d)
    else
        rax_8 = sub_142973fd0(rax_4, arg1[0xd], &arg1[9], result_1)
    label_1429554e1:
        
        if (rax_8 != 0)
        label_1429554f3:
            int64_t* result_3 = result_1
            
            if (sub_1428bfc10(arg1, arg2, rax_3) != 0)
                rsi = 1

sub_1428d8a60(result_1)
sub_1428d8ae0(result_2)
return zx.q(rsi)
