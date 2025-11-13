// 函数: sub_142c83d40
// 地址: 0x142c83d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = 0
int64_t rsi = arg4
char* rdi = arg3

if (*(arg1 + 0x5f0) == 0)
    return 

if (arg2 != 0)
    char const* const r8 = "SENT"
    
    if (arg2 == 0x3c)
        r8 = "RCVD"
    
    arg3, arg5 = sub_142c64850(arg1, "%s IAC SB ", r8, arg5)
    
    if (rsi u>= 3)
        rbp = zx.q(rdi[rsi - 2])
        uint64_t r14_1 = zx.q(rdi[rsi - 1])
        
        if (rbp.d != 0xff || r14_1.d != 0xf0)
            int512_t zmm2 = sub_142c64850(arg1, "(terminated by ", arg3, arg5)
            int512_t zmm2_1
            
            if (rbp.d u<= 0x27)
                zmm2_1 = sub_142c64850(arg1, "%s ", (&data_1436b8ec0)[rbp], zmm2)
            else if (rbp.d u< 0xec)
                zmm2_1 = sub_142c64850(arg1, "%u ", zx.q(rbp.d), zmm2)
            else
                zmm2_1 = sub_142c64850(arg1, "%s ", (&data_1436b9000)[zx.q((rbp - 0xec).d)], zmm2)
            
            int64_t r8_5
            int512_t zmm2_2
            
            if (r14_1.d u<= 0x27)
                r8_5, zmm2_2 = sub_142c64850(arg1, "%s", (&data_1436b8ec0)[r14_1], zmm2_1)
            else if (r14_1.d u< 0xec)
                r8_5, zmm2_2 = sub_142c64850(arg1, "%d", zx.q(r14_1.d), zmm2_1)
            else
                r8_5, zmm2_2 =
                    sub_142c64850(arg1, "%s", (&data_1436b9000)[sx.q((r14_1 - 0xec).d)], zmm2_1)
            
            arg3, arg5 = sub_142c64850(arg1, ", not IAC SE!) ", r8_5, zmm2_2)
    
    rsi -= 2

if (rsi u< 1)
    sub_142c64850(arg1, "(Empty suboption?)", arg3, arg5)
    return 

char rcx_4 = *rdi
uint64_t rax

if (rcx_4 u> 0x27)
    rax, arg3, arg5 = sub_142c64850(arg1, "%d (unknown)", zx.q(rdi[rbp]), arg5)
else if (rcx_4 u> 0x23)
    if (rcx_4 == 0x27)
        rax, arg3, arg5 = sub_142c64850(arg1, "%s", (&data_1436b8ec0)[zx.q(rcx_4)], arg5)
    else
        rax, arg3, arg5 =
            sub_142c64850(arg1, "%s (unsupported)", (&data_1436b8ec0)[zx.q(rcx_4)], arg5)
else if (test_bit(0x881000000, zx.q(rcx_4)) || rcx_4 == 0x27)
    rax, arg3, arg5 = sub_142c64850(arg1, "%s", (&data_1436b8ec0)[zx.q(rcx_4)], arg5)
else
    rax, arg3, arg5 = sub_142c64850(arg1, "%s (unsupported)", (&data_1436b8ec0)[zx.q(rcx_4)], arg5)

if (*rdi != 0x1f)
    uint32_t rcx_8 = zx.d(rdi[1])
    
    if (rcx_8 == 0)
        arg3, arg5 = sub_142c64850(arg1, " IS", arg3, arg5)
    else if (rcx_8 == 1)
        arg3, arg5 = sub_142c64850(arg1, " SEND", arg3, arg5)
    else if (rcx_8 == 2)
        arg3, arg5 = sub_142c64850(arg1, " INFO/REPLY", arg3, arg5)
    else if (rcx_8 == 3)
        arg3, arg5 = sub_142c64850(arg1, " NAME", arg3, arg5)
    
    rax = zx.q(*rdi)
    
    if (rax.b == 0x18 || rax.b == 0x23)
        rdi[rsi] = 0
        rax, arg3, arg5 = sub_142c64850(arg1, " "%s"", &rdi[2], arg5)
    else if (rax.b != 0x27)
        int32_t rbp_1 = 2
        
        if (rsi u> 2)
            rax = 2
            
            do
                arg3, arg5 = sub_142c64850(arg1, " %.2x", zx.q(rdi[rax]), arg5)
                rbp_1 += 1
                rax = zx.q(rbp_1)
            while (rax u< rsi)
    else if (rdi[1] == 0)
        rax, arg3, arg5 = sub_142c64850(arg1, U" |", arg3, arg5)
        int32_t rbp_2 = 3
        
        if (rsi u> 3)
            rax = 3
            
            do
                uint64_t r8_15 = zx.q(rdi[rax])
                
                if (r8_15.d == 0)
                    arg3, arg5 = sub_142c64850(arg1, ", ", r8_15, arg5)
                else if (r8_15.d == 1)
                    arg3, arg5 = sub_142c64850(arg1, " = ", r8_15, arg5)
                else
                    arg3, arg5 = sub_142c64850(arg1, "%c", r8_15, arg5)
                
                rbp_2 += 1
                rax = zx.q(rbp_2)
            while (rax u< rsi)
else if (rsi u> 4)
    rdi[4]
    rdi[3]
    rax, arg3, arg5 = sub_142c64850(arg1, "Width: %hu ; Height: %hu", 
        zx.q(zx.d(rdi[1]) << 8) | zx.q(rdi[2]), arg5)

if (arg2 != 0)
    sub_142c64850(arg1, "\n", arg3, arg5)
