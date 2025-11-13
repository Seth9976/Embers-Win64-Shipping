// 函数: sub_14292cbc0
// 地址: 0x14292cbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rsi = nullptr
int32_t* rbx = nullptr
int32_t rax_10
int32_t r8_1

if (arg1 == 0)
    rax_10 = 0x14d
    r8_1 = 0x7d
else
    if (*arg1 == 1)
        return 1
    
    void* rax_1 = *(arg1 + 0x10)
    int64_t* rax_2
    
    if (rax_1 != 0)
        rax_2 = sub_1428a3930(rax_1)
    label_14292cc31:
        int32_t rax_3 = sub_1428e73d0(rax_2, 0x30, 0xffffffff)
        int32_t rdi_1 = rax_3
        
        if (rax_3 s< 0)
            return 1
        
        while (true)
            void* rax_4 = sub_1428e7380(rax_2, rdi_1)
            rsi = sub_1428f2b10(sub_1428e7030(rax_4))
            
            if (arg3 != 0)
                sub_1428e7270(rax_2, rdi_1)
                sub_1428abed0(rax_4)
                rdi_1 -= 1
            
            rbx = nullptr
            
            if (rsi != 0)
                int32_t* rax_7 = sub_1428e7b90()
                rbx = rax_7
                
                if (rax_7 != 0)
                    *(rax_7 + 8) = rsi
                    *rax_7 = 1
                    rsi = nullptr
                    
                    if (sub_142898d50(arg2, rax_7) == 0)
                        rax_10 = 0x168
                        r8_1 = 0x41
                        break
                    
                    int32_t rax_9 = sub_1428e73d0(rax_2, 0x30, rdi_1)
                    rdi_1 = rax_9
                    
                    if (rax_9 s< 0)
                        return 1
                    
                    continue
            
            rax_10 = 0x161
            r8_1 = 0x41
            break
    else
        void* rcx = *(arg1 + 0x18)
        
        if (rcx != 0)
            rax_2 = sub_142891590(rcx)
            goto label_14292cc31
        
        rax_10 = 0x14d
        r8_1 = 0x7d

sub_1428a5670(0x22, 0x7a, r8_1, "crypto\x509v3\v3_alt.c", rax_10)
sub_1428e7b70(rbx)
sub_1428c3460(rsi)
return 0
