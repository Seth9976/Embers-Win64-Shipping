// 函数: sub_14286bbb0
// 地址: 0x14286bbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rdi = nullptr
int64_t rcx = arg2[1]
int32_t r15 = 0
uint64_t rbp_2
char* r8_1
uint64_t r8_2

if (rcx u>= 2)
    r8_1 = *arg2
    rbp_2 = zx.q(r8_1[1]) | zx.q(zx.d(*r8_1) << 8)
    *arg2 = &r8_1[2]
    r8_2 = zx.q(rbp_2.d)
    arg2[1] = rcx - 2

if (rcx u< 2 || rcx - 2 != r8_2)
    sub_142856580(arg1, 0x32, 0x19b, 0x94, "ssl\statem\statem_srvr.c", 0xc45)
else
    int32_t* r14_1 = *(*(arg1 + 0xa8) + 0x240)
    
    if (r14_1 == 0)
        sub_142856580(arg1, 0x50, 0x19b, 0xab, "ssl\statem\statem_srvr.c", 0xc4b)
    else if (rcx == 2)
        sub_142856580(arg1, 0x32, 0x19b, 0xab, "ssl\statem\statem_srvr.c", 0xc51)
    else if (rcx - 2 u< r8_2)
        sub_142856580(arg1, 0x50, 0x19b, 0x44, "ssl\statem\statem_srvr.c", 0xc57)
    else
        *arg2 = &r8_1[2 + rbp_2]
        arg2[1] = rcx - 2 - r8_2
        int32_t* rax_5 = sub_1428968f0()
        rdi = rax_5
        int32_t rax_6
        
        if (rax_5 != 0)
            rax_6 = sub_142896470(rax_5, r14_1)
        
        if (rax_5 == 0 || rax_6 == 0)
            sub_142856580(arg1, 0x50, 0x19b, 0x82, "ssl\statem\statem_srvr.c", 0xc5d)
        else
            void* rax_7 = sub_142896670(rdi)
            int64_t* rax_8 = sub_14288fa60(&r8_1[2], rbp_2.d, nullptr)
            
            if (rax_8 == 0 || rax_7 == 0)
                sub_142856580(arg1, 0x50, 0x19b, 0x44, "ssl\statem\statem_srvr.c", 0xc65)
                sub_1428901a0(rax_8)
            else
                sub_1428c1a10(rax_7, rax_8, 0)
                
                if (sub_142872740(arg1, r14_1, rdi, 1) != 0)
                    r15 = 1
                    sub_1428965a0(*(*(arg1 + 0xa8) + 0x240))
                    *(*(arg1 + 0xa8) + 0x240) = 0

sub_1428965a0(rdi)
return zx.q(r15)
