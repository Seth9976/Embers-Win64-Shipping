// 函数: sub_14290b300
// 地址: 0x14290b300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rsi = *(arg2 + 0x28)
int64_t rbx = 0
int64_t* arg_18 = nullptr
int32_t arg_10

if (sub_14290cbb0(&arg_10, &arg_18, rsi, arg3) == 0)
    sub_1428a5670(0x10, 0xd8, 0x10, "crypto\ec\ec_ameth.c", 0x43)
    return 0

int32_t rax_2 = sub_1428f0400(rsi, nullptr)

if (rax_2 s> 0)
    int64_t rax_3 = sub_1428a6730(sx.q(rax_2))
    rbx = rax_3
    
    if (rax_3 != 0)
        int64_t arg_20 = rax_3
        int32_t rax_4 = sub_1428f0400(rsi, &arg_20)
        
        if (rax_4 s> 0)
            int32_t var_28
            var_28.q = rbx
            
            if (sub_1428a2850(arg1, sub_1428a9570(0x198), arg_10, arg_18, var_28, rax_4) != 0)
                return 1

int64_t* rcx_5 = arg_18

if (arg_10 != 6)
    sub_1428f2c80(rcx_5)
else
    sub_1428cd400(rcx_5)

sub_1428a6780(rbx)
return 0
