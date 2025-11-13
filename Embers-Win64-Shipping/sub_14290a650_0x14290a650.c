// 函数: sub_14290a650
// 地址: 0x14290a650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rdi = *(arg2 + 0x28)
int32_t* rbx = nullptr
int64_t arg_10 = 0
int32_t rsi_1

if (*(arg2 + 0x30) == 0 || *(rdi + 8) == 0 || *(rdi + 0x10) == 0 || *(rdi + 0x18) == 0)
    rsi_1 = -1
label_14290a72f:
    int64_t rax_4 = sub_1428e49c0(*(rdi + 0x20), nullptr)
    
    if (rax_4 != 0)
        int32_t rax_5 = sub_1428c3750(rax_4, &arg_10)
        sub_1428c3460(rax_4)
        
        if (rax_5 s> 0)
            void* rax_6 = sub_1428a9570(0x74)
            
            if (rax_6 != 0)
                int32_t var_28
                var_28.q = arg_10
                
                if (sub_1428a2850(arg1, rax_6, rsi_1, rbx, var_28, rax_5) != 0)
                    return 1
        else
            sub_1428a5670(0xa, 0x76, 0x41, "crypto\dsa\dsa_ameth.c", 0x72)
    else
        sub_1428a5670(0xa, 0x76, 0x41, "crypto\dsa\dsa_ameth.c", 0x6a)
else
    int32_t* rax_1 = sub_1428f2cf0()
    rbx = rax_1
    
    if (rax_1 != 0)
        int32_t rax_3 = sub_1428f09b0(rdi, &rax_1[2])
        *rbx = rax_3
        
        if (rax_3 s> 0)
            rsi_1 = 0x10
            goto label_14290a72f
        
        sub_1428a5670(0xa, 0x76, 0x41, "crypto\dsa\dsa_ameth.c", 0x60)
    else
        sub_1428a5670(0xa, 0x76, 0x41, "crypto\dsa\dsa_ameth.c", 0x5b)
sub_1428a6780(arg_10)
sub_1428f2c80(rbx)
return 0
