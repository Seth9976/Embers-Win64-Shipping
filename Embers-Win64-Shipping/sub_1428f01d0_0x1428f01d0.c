// 函数: sub_1428f01d0
// 地址: 0x1428f01d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rsi = 0
int64_t arg_8 = 0
char* arg_18 = nullptr
int32_t r14 = 0
int32_t r12 = 0
int64_t rbp = 0
int32_t* rdi = nullptr

if (arg1 == 0 || *(arg1 + 0x18) == 0 || ((*(arg1 + 0x30) & 2) == 0 && *(arg1 + 0x20) == 0))
    sub_1428a5670(0x10, 0xc0, 0x43, "crypto\ec\ec_asn1.c", 0x3d5)
else
    int32_t* rax_1 = sub_1428db530(&data_1435157d0)
    rdi = rax_1
    
    if (rax_1 != 0)
        *rdi = *(arg1 + 0x10)
        int64_t rax_3 = sub_1428c0eb0(arg1, &arg_8)
        rbp = rax_3
        
        if (rax_3 != 0)
            sub_1428f2e40(*(rdi + 8), arg_8, rax_3.d)
            bool cond:0_1 = (*(arg1 + 0x30) & 1) != 0
            arg_8 = 0
            int32_t* rax_4
            
            if (not(cond:0_1))
                rax_4 = sub_1428eede0(*(arg1 + 0x18), *(rdi + 0x10))
                *(rdi + 0x10) = rax_4
            
            if (cond:0_1 || rax_4 != 0)
                if ((*(arg1 + 0x30) & 2) != 0)
                    goto label_1428f034e
                
                int64_t rax_5 = sub_1428c3490()
                *(rdi + 0x18) = rax_5
                
                if (rax_5 != 0)
                    uint64_t rax_6 = sub_1428c0cd0(arg1, *(arg1 + 0x34), &arg_18, nullptr)
                    
                    if (rax_6 != 0)
                        void* rax_7 = *(rdi + 0x18)
                        *(rax_7 + 0x10) &= 0xfffffff0
                        void* rax_8 = *(rdi + 0x18)
                        *(rax_8 + 0x10) |= 8
                        sub_1428f2e40(*(rdi + 0x18), arg_18, rax_6.d)
                        arg_18 = nullptr
                    label_1428f034e:
                        int32_t rax_9 = sub_1428c65a0(rdi, arg2, &data_1435157d0)
                        r14 = rax_9
                        
                        if (rax_9 != 0)
                            r12 = 1
                        else
                            sub_1428a5670(0x10, 0xc0, 0x10, "crypto\ec\ec_asn1.c", 0x408)
                    else
                        sub_1428a5670(0x10, 0xc0, 0x10, "crypto\ec\ec_asn1.c", 0x3fd)
                else
                    sub_1428a5670(0x10, 0xc0, (rax_5 + 0x41).d, "crypto\ec\ec_asn1.c", 0x3f6)
            else
                sub_1428a5670(0x10, 0xc0, 0x10, "crypto\ec\ec_asn1.c", 0x3ee)
        else
            sub_1428a5670(0x10, 0xc0, 0x10, "crypto\ec\ec_asn1.c", 0x3e3)
    else
        sub_1428a5670(0x10, 0xc0, (rax_1 + 0x41).d, "crypto\ec\ec_asn1.c", 0x3da)

sub_1428a6890(arg_8, rbp, "crypto\ec\ec_asn1.c", 0x40d)
sub_1428a6780(arg_18)
sub_1428c3d60(rdi, &data_1435157d0)

if (r12 != 0)
    rsi = r14

return zx.q(rsi)
