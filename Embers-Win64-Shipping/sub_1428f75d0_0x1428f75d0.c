// 函数: sub_1428f75d0
// 地址: 0x1428f75d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t rdi = sx.q(arg4[1])
char arg_18 = 0
int16_t r12 = arg3.w & 0x40f
int32_t rbx = 0

if ((arg3.b & 0x40) == 0)
    goto label_1428f766a

char* rax_1 = sub_142934820(rdi.d)
int64_t rbx_1 = -1

do
    rbx_1 += 1
while (rax_1[rbx_1] != 0)

if (arg1(arg2, rax_1, zx.q(rbx_1.d)) != 0 && arg1(arg2, &data_142d6bc34, 1) != 0)
    rbx = rbx_1.d + 1
label_1428f766a:
    
    if (arg3.b s< 0)
    label_1428f7786:
        
        if (arg1(arg2, &data_1434d3574, 1) != 0)
            int32_t rdi_2
            bool cond:0_1
            
            if (test_bit(arg3, 9))
                int32_t var_38 = arg4[1]
                int32_t* var_30_1 = arg4
                int64_t rdi_3 = sx.q(sub_1428c37d0(&var_38, nullptr))
                char* rax_13 = sub_1428a6730(rdi_3)
                
                if (rax_13 != 0)
                    char* arg_20 = rax_13
                    sub_1428c37d0(&var_38, &arg_20)
                    rdi_2 = sub_1428f7120(arg1, arg2, rax_13, rdi_3.d)
                    sub_1428a6780(rax_13)
                    cond:0_1 = rdi_2 s< 0
                    goto label_1428f7867
                
                sub_1428a5670((&rax_13[0xd]).d, (&rax_13[0x7d]).d, (&rax_13[0x41]).d, 
                    "crypto\asn1\a_strex.c", 0x11c)
            else
                int32_t rax_10 = sub_1428f7120(arg1, arg2, *(arg4 + 8), *arg4)
                rdi_2 = rax_10
                cond:0_1 = rax_10 s< 0
            label_1428f7867:
                
                if (not(cond:0_1) && rdi_2 + 1 s>= 0)
                    return zx.q(rdi_2 + 1 + rbx)
    else
        int32_t rdi_1
        
        if ((arg3.b & 0x20) != 0)
        label_1428f769b:
            rdi_1 = 1
        else
            if ((rdi - 1).d u<= 0x1d)
                rdi_1 = sx.d(*(rdi + &data_143517ca8))
            
            if ((rdi - 1).d u> 0x1d || rdi_1 == 0xffffffff)
                if (test_bit(arg3, 8))
                    goto label_1428f7786
                
                goto label_1428f769b
        
        if ((arg3.b & 0x10) != 0)
            if (rdi_1 != 0)
                rdi_1 |= 8
            else
                rdi_1 = 1
        
        int32_t var_58
        var_58.q = &arg_18
        int32_t rax_5 = sub_1428f6cb0(*(arg4 + 8), *arg4, rdi_1, r12, var_58, arg1, 0)
        
        if (rax_5 s>= 0)
            char rsi_1 = arg_18
            int32_t rbx_2 = rbx + rax_5
            
            if (rsi_1 != 0)
                rbx_2 += 2
            
            if (arg2 == 0)
                return zx.q(rbx_2)
            
            int32_t rax_6
            
            if (rsi_1 != 0)
                rax_6 = arg1(arg2, U""\tv 0", 1)
            
            if ((rsi_1 == 0 || rax_6 != 0)
                    && sub_1428f6cb0(*(arg4 + 8), *arg4, rdi_1, r12, nullptr, arg1, arg2) s>= 0)
                if (rsi_1 == 0)
                    return zx.q(rbx_2)
                
                if (arg1(arg2, U""\tv 0", 1) != 0)
                    return zx.q(rbx_2)

return 0xffffffff
