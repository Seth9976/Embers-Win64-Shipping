// 函数: sub_1428555d0
// 地址: 0x1428555d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = -1
int64_t* rdi = nullptr
int64_t* rsi = nullptr

if (sub_1428b90c0(*(arg1 + 0x7c8), *(arg1 + 0x7a8)) != 0)
    int64_t* rax_1 = sub_1428b8e90(*(arg1 + 0x7c8), *(arg1 + 0x7c0), *(arg1 + 0x7a8))
    rsi = rax_1
    
    if (rax_1 != 0)
        int64_t* rax_3 =
            sub_1428b8d70(*(arg1 + 0x7c8), *(arg1 + 0x7e0), rsi, *(arg1 + 0x7d8), *(arg1 + 0x7a8))
        rdi = rax_3
        
        if (rax_3 != 0)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(sub_142890560(rax_3) + 7)
            uint64_t r15_1 = sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
            void* rax_9 = sub_1428a6730(r15_1)
            
            if (rax_9 != 0)
                sub_14288fba0(rdi, rax_9)
                rbp = sub_142872ab0(arg1, rax_9, r15_1, 1)
            else
                sub_142856580(arg1, 0x50, 0x24d, 0x41, "ssl\tls_srp.c", 0x10a)

sub_14288fbf0(rdi)
sub_14288fbf0(rsi)
return zx.q(rbp)
