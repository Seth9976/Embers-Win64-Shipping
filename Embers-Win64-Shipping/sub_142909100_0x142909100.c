// 函数: sub_142909100
// 地址: 0x142909100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t arg_18 = 0
int32_t* rax = sub_1428f2cf0()

if (rax != 0)
    void* rcx = *(arg2 + 0x28)
    int32_t rax_1
    
    if (*(arg2 + 0x10) != &data_14351c7e0)
        rax_1 = sub_14291c600(rcx, &rax[2])
    else
        rax_1 = sub_14291c620(rcx, &rax[2])
    
    *rax = rax_1
    
    if (rax_1 s> 0)
        rax[1] = 0x10
        int32_t* rax_2 = sub_1428e49c0(*(*(arg2 + 0x28) + 0x28), nullptr)
        
        if (rax_2 != 0)
            int32_t rax_3 = sub_1428c3750(rax_2, &arg_18)
            sub_1428f2970(rax_2)
            int32_t var_38
            var_38.q = rax
            
            if (sub_1428f10c0(arg1, sub_1428a9570(**(arg2 + 0x10)), 0, 0x10, var_38, arg_18, rax_3)
                    != 0)
                return 1
        else
            sub_1428a5670(5, 0x6f, (rax_2 + 0x6a).d, "crypto\dh\dh_ameth.c", 0xe3)
    else
        sub_1428a5670(5, 0x6f, 0x41, "crypto\dh\dh_ameth.c", 0xda)
else
    sub_1428a5670(5, 0x6f, 0x41, "crypto\dh\dh_ameth.c", 0xd4)

sub_1428a6780(arg_18)
sub_1428f2c80(rax)
sub_1428f2970(nullptr)
return 0
