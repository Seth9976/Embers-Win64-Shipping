// 函数: sub_142908e50
// 地址: 0x142908e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rdi = *(arg2 + 0x28)
int64_t arg_10 = 0
int32_t* rax = sub_1428f2cf0()

if (rax != 0)
    int32_t rax_2
    
    if (*(arg2 + 0x10) != &data_14351c7e0)
        rax_2 = sub_14291c600(rdi, &rax[2])
    else
        rax_2 = sub_14291c620(rdi, &rax[2])
    
    *rax = rax_2
    
    if (rax_2 s> 0)
        int64_t rax_3 = sub_1428e49c0(*(rdi + 0x20), nullptr)
        
        if (rax_3 != 0)
            int32_t rax_4 = sub_1428c3750(rax_3, &arg_10)
            sub_1428c3460(rax_3)
            
            if (rax_4 s> 0)
                void* rax_6 = sub_1428a9570(**(arg2 + 0x10))
                int32_t var_28
                var_28.q = arg_10
                
                if (sub_1428a2850(arg1, rax_6, 0x10, rax, var_28, rax_4) != 0)
                    return 1
            else
                sub_1428a5670(5, 0x6d, 0x41, "crypto\dh\dh_ameth.c", 0x81)
    else
        sub_1428a5670(5, 0x6d, 0x41, "crypto\dh\dh_ameth.c", 0x73)
else
    sub_1428a5670(5, 0x6d, 0x41, "crypto\dh\dh_ameth.c", 0x6e)

sub_1428a6780(arg_10)
sub_1428f2c80(rax)
return 0
