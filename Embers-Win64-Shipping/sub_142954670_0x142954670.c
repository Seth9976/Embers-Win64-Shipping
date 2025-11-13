// 函数: sub_142954670
// 地址: 0x142954670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* r15 = nullptr
int32_t var_48_1
int32_t r8

if (((arg3 - 2) & 0xfffffff9) != 0 || arg3 == 8)
    var_48_1 = 0xa7
    r8 = 0x68
label_142954921:
    sub_1428a5670(0x10, 0x68, r8, "crypto\ec\ecp_oct.c", var_48_1)
    sub_1428d8ae0(r15)
    return 0

if (sub_1428bf8a0(arg1, arg2) != 0)
    if (arg4 == 0)
        return 1
    
    if (arg5 u>= 1)
        *arg4 = 0
        return 1
    
    sub_1428a5670(0x10, 0x68, 0x64, "crypto\ec\ecp_oct.c", 0xaf)
    return 0

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(sub_142890560(arg1[8]) + 7)
int64_t rcx_1 = sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
int64_t var_30_1 = rcx_1

if (arg3 != 2)
    rcx_1 *= 2

if (arg4 == 0)
    sub_1428d8ae0(r15)
    return rcx_1 + 1

if (arg5 u< rcx_1 + 1)
    var_48_1 = 0xc0
    r8 = 0x64
    goto label_142954921

int64_t* rsi_1 = arg6

if (rsi_1 == 0)
    int64_t* rax_9 = sub_1428d8d60()
    r15 = rax_9
    rsi_1 = rax_9
    
    if (rax_9 == 0)
        return 0

sub_1428d8e50(rsi_1)
int64_t* rax_10 = sub_1428d8ba0(rsi_1)
int64_t* rax_11 = sub_1428d8ba0(rsi_1)

if (rax_11 != 0)
    int32_t var_48
    var_48.q = rsi_1
    
    if (sub_1428bf6e0(arg1, arg2, rax_10, rax_11, var_48) != 0)
        int32_t rax_13
        
        if (((arg3 - 2) & 0xfffffffb) == 0)
            rax_13 = sub_142890290(rax_11)
        
        char rax_14
        
        if (((arg3 - 2) & 0xfffffffb) != 0 || rax_13 == 0)
            rax_14 = arg3.b
        else
            rax_14 = arg3.b + 1
        
        void* rbx_1 = 1
        *arg4 = rax_14
        int64_t rdi_1 = var_30_1
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(sub_142890560(rax_10) + 7)
        int64_t count = rdi_1 - sx.q((temp3_1 + (temp2_1 & 7)) s>> 3)
        int32_t var_48_2
        
        if (count u<= rdi_1)
            if (count != 0)
                rbx_1 = count + 1
                __builtin_memset(&arg4[1], 0, count)
                rdi_1 = var_30_1
            
            void* rbx_2 = rbx_1 + sx.q(sub_14288fba0(rax_10, rbx_1 + arg4))
            
            if (rbx_2 != rdi_1 + 1)
                var_48_2 = 0xe8
            else if (((arg3 - 4) & 0xfffffffd) != 0)
            label_1429548de:
                
                if (rbx_2 == rcx_1 + 1)
                    sub_1428d8a60(rsi_1)
                    sub_1428d8ae0(r15)
                    return rcx_1 + 1
                
                var_48_2 = 0xfc
            else
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(sub_142890560(rax_11) + 7)
                int64_t count_1 = rdi_1 - sx.q((temp5_1 + (temp4_1 & 7)) s>> 3)
                
                if (count_1 u<= rdi_1)
                    if (count_1 != 0)
                        void* rdi_3 = rbx_2 + arg4
                        rbx_2 += count_1
                        __builtin_memset(rdi_3, 0, count_1)
                    
                    rbx_2 += sx.q(sub_14288fba0(rax_11, rbx_2 + arg4))
                    goto label_1429548de
                
                var_48_2 = 0xf0
        else
            var_48_2 = 0xde
        
        sub_1428a5670(0x10, 0x68, 0x44, "crypto\ec\ecp_oct.c", var_48_2)

sub_1428d8a60(rsi_1)
sub_1428d8ae0(r15)
return 0
