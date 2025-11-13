// 函数: sub_142909d60
// 地址: 0x142909d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rbx = 0
int64_t* r14 = nullptr
int64_t rsi = 0
int64_t r12 = 0
int64_t* arg_18
char* arg_20

if (sub_14293c3e0(arg2, &arg_18, &arg_20) != 0)
    if (sub_1428a96d0(*arg_18) == 0xf5)
        if (sub_1428bcb30(arg1, 0x398, 0x400, 0x1006, 2, 0) s> 0
                && sub_1428bcb30(arg1, 0x398, 0x400, 0x1007, 0, &data_1434e9110) s> 0)
            int64_t* rdx_1 = arg_18
            int32_t* rax_4 = rdx_1[1]
            
            if (*rax_4 == 0x10)
                int64_t var_38 = *(*(rax_4 + 8) + 8)
                int64_t* rax_7 = sub_1428db100(nullptr, &var_38, **(rdx_1[1] + 8))
                r14 = rax_7
                
                if (rax_7 != 0)
                    int64_t* rax_8 = sub_14293c450(arg2)
                    
                    if (rax_8 != 0)
                        int32_t* rax_11 = sub_14289b930(sub_1428a9620(sub_1428a96d0(*r14)))
                        
                        if (rax_11 != 0 && (sub_142890eb0(rax_11) & 0xf0007) == 0x10002
                                && sub_142892d80(rax_8, rax_11, nullptr, 0, nullptr) != 0
                                && sub_142890f40(rax_8, r14[1]) s> 0 &&
                                sub_1428bcb30(arg1, 0x398, 0x400, 0x1009, sub_142890ee0(rax_8), 0)
                                s> 0 && sub_1428bcb30(arg1, 0x398, 0x400, 0x100d, 0, 
                                sub_1428a9570(sub_1428912b0(rax_11))) s> 0)
                            char* rcx_19 = arg_20
                            int64_t rax_23
                            
                            if (rcx_19 != 0)
                                r12 = sx.q(sub_1406938b0(rcx_19))
                                rax_23 = sub_1428a6af0(sub_14060aa50(arg_20), r12, 
                                    "crypto\dh\dh_ameth.c", 0x2da)
                                rsi = rax_23
                            
                            if ((rcx_19 == 0 || rax_23 != 0)
                                    && sub_1428bcb30(arg1, 0x398, 0x400, 0x100b, r12.d, rsi) s> 0)
                                rsi = 0
                                rbx = 1
    else
        sub_1428a5670(5, 0x74, 0x70, "crypto\dh\dh_ameth.c", 0x2b2)

sub_1428daf30(r14)
sub_1428a6780(rsi)
return zx.q(rbx)
