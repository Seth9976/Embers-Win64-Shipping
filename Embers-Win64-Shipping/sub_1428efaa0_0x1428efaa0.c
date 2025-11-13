// 函数: sub_1428efaa0
// 地址: 0x1428efaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = 0
int64_t* r14 = nullptr
void* r13 = nullptr
void* r15 = nullptr

if (arg1 == 0 || arg2 == 0 || *arg2 == 0 || arg2[1] == 0)
    return 0

int64_t* rax = sub_142890500()
int64_t* rax_1

if (rax != 0)
    rax_1 = sub_142890500()
    r14 = rax_1

if (rax == 0 || rax_1 == 0)
    sub_1428a5670(0x10, 0x99, 0x41, "crypto\ec\ec_asn1.c", 0x179)
else if (sub_1428bef30(arg1, 0, rax, rax_1, 0) != 0)
    uint64_t rsi_3 = (sx.q(sub_1428bef80(arg1)) + 7) u>> 3
    void* rax_4 = sub_1428a6730(rsi_3)
    r13 = rax_4
    void* rax_5
    
    if (rax_4 != 0)
        rax_5 = sub_1428a6730(rsi_3)
        r15 = rax_5
    
    if (rax_4 == 0 || rax_5 == 0)
        sub_1428a5670(0x10, 0x99, 0x41, "crypto\ec\ec_asn1.c", 0x18b)
    else
        int32_t rax_6 = sub_14288fbc0(rax, r13, rsi_3.d)
        int32_t rax_7
        
        if (rax_6 s>= 0)
            rax_7 = sub_14288fbc0(r14, r15, rsi_3.d)
        
        if (rax_6 s< 0 || rax_7 s< 0)
            sub_1428a5670(0x10, 0x99, 3, "crypto\ec\ec_asn1.c", 0x190)
        else
            int32_t rax_8 = sub_1428e61a0(*arg2, r13, rsi_3.d)
            int32_t rax_9
            
            if (rax_8 != 0)
                rax_9 = sub_1428e61a0(arg2[1], r15, rsi_3.d)
            
            if (rax_8 == 0 || rax_9 == 0)
                sub_1428a5670(0x10, 0x99, 0xd, "crypto\ec\ec_asn1.c", 0x197)
            else if (arg1[6] == 0)
                sub_1428c3460(arg2[2])
                arg2[2] = 0
                rdi = 1
            else
                void* rax_10 = arg2[2]
                
                if (rax_10 != 0)
                label_1428efc17:
                    *(rax_10 + 0x10) &= 0xfffffff0
                    void* rax_11 = arg2[2]
                    *(rax_11 + 0x10) |= 8
                    int32_t rax_12 = sub_1428e61a0(arg2[2], arg1[6], arg1[7].d)
                    
                    if (rax_12 != 0)
                        rdi = 1
                    else
                        sub_1428a5670(0x10, 0x99, rax_12 + 0xd, "crypto\ec\ec_asn1.c", 0x1a6)
                else
                    rax_10 = sub_1428c3490()
                    arg2[2] = rax_10
                    
                    if (rax_10 != 0)
                        goto label_1428efc17
                    
                    sub_1428a5670(0x10, 0x99, 0x41, "crypto\ec\ec_asn1.c", 0x19f)
else
    sub_1428a5670(0x10, 0x99, 0x10, "crypto\ec\ec_asn1.c", 0x17f)

sub_1428a6780(r13)
sub_1428a6780(r15)
sub_1428901a0(rax)
sub_1428901a0(r14)
return zx.q(rdi)
