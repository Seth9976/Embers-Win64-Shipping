// 函数: sub_1428e8b00
// 地址: 0x1428e8b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r15 = *arg3
int64_t* rbx = nullptr
int64_t r14 = 0
int64_t rbp = 0
int64_t rax_1

if (arg1 != 0)
    rax_1 = sub_1428a6ba0(arg1)
    r14 = rax_1

if (arg1 == 0 || rax_1 != 0)
    int64_t rax_2
    
    if (arg2 != 0)
        rax_2 = sub_1428a6ba0(arg2)
        rbp = rax_2
    
    if (arg2 == 0 || rax_2 != 0)
        int64_t* rax_3 = sub_1428a6730(0x18)
        rbx = rax_3
        
        if (rax_3 != 0)
            void* rax_4
            
            if (r15 == 0)
                rax_4 = sub_142898ba0()
                *arg3 = rax_4
            
            if (r15 != 0 || rax_4 != 0)
                *rbx = 0
                rbx[1] = r14
                rbx[2] = rbp
                
                if (sub_142898d50(*arg3, rbx) != 0)
                    return 1

sub_1428a5670(0x22, 0x69, 0x41, "crypto\x509v3\v3_utl.c", 0x3b)

if (r15 == 0)
    sub_142898a10(*arg3)
    *arg3 = r15

sub_1428a6780(rbx)
sub_1428a6780(r14)
sub_1428a6780(rbp)
return 0
