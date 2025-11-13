// 函数: sub_14290a990
// 地址: 0x14290a990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* rax = *(arg2 + 0x28)
int32_t* rdi = nullptr
int64_t arg_10 = 0

if (rax == 0 || *(rax + 0x28) == 0)
    sub_1428a5670(0xa, 0x74, 0x65, "crypto\dsa\dsa_ameth.c", 0xd3)
else
    int32_t* rax_1 = sub_1428f2cf0()
    rdi = rax_1
    
    if (rax_1 != 0)
        int32_t rax_2 = sub_1428f09b0(*(arg2 + 0x28), &rax_1[2])
        *rdi = rax_2
        
        if (rax_2 s> 0)
            rdi[1] = 0x10
            int32_t* rax_3 = sub_1428e49c0(*(*(arg2 + 0x28) + 0x28), nullptr)
            
            if (rax_3 != 0)
                int32_t rax_4 = sub_1428c3750(rax_3, &arg_10)
                sub_1428f2970(rax_3)
                int32_t var_28
                var_28.q = rdi
                
                if (sub_1428f10c0(arg1, sub_1428a9570(0x74), 0, 0x10, var_28, arg_10, rax_4) != 0)
                    return 1
            else
                sub_1428a5670(0xa, 0x74, (rax_3 + 0x6d).d, "crypto\dsa\dsa_ameth.c", 0xe9)
        else
            sub_1428a5670(0xa, 0x74, 0x41, "crypto\dsa\dsa_ameth.c", 0xe0)
    else
        sub_1428a5670(0xa, 0x74, (rax_1 + 0x41).d, "crypto\dsa\dsa_ameth.c", 0xda)

sub_1428a6780(arg_10)
sub_1428f2c80(rdi)
sub_1428f2970(nullptr)
return 0
