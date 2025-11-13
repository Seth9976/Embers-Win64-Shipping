// 函数: sub_1418d0cd0
// 地址: 0x1418d0cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
*(arg1 + 0x360) = 0
*(arg1 + 0x368) = 0
*(arg1 + 0x36c) = 0
*(arg1 + 0x370) = 0
*(arg1 + 0x384) = 0
__builtin_memset(arg1, 0, 0x50)
memset(arg1 + 0x50, 0, 0x310)
int64_t r15
r15.b = 0
*(arg1 + 0x378) = 0
int32_t i = 0
*(arg1 + 0x380) = 0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int64_t var_78
__builtin_memset(&var_78, 0, 0x40)
*(arg1 + 0x369) = *(arg2 + 0x9d)
*(arg1 + 0x366) = *(arg2 + 0x98)
int64_t var_70

if (*(arg2 + 0x5c) u> 0)
    do
        uint64_t i_1 = zx.q(i)
        uint32_t rcx_1 = zx.d(*(arg2 + i_1 + 0x60))
        
        if (rcx_1 != 0)
            void* rsi_1 = arg1 + (zx.q(*(arg1 + 0x360)) + 6) * 0x24
            *(rsi_1 + 8) = zx.d(*(arg1 + 0x366))
            *(rsi_1 + 4) = sub_1418f0050(rcx_1, (*(arg2 + (i_1 << 2) + 0x68) u>> 4).b & 1)
            __builtin_memcpy(rsi_1 + 0xc, 
                "\x02\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x02\x"
            "00\x00\x00", 
                0x18)
            *(arg1 + (zx.q(*(arg1 + 0x361)) << 3)) = zx.d(*(arg1 + 0x360))
            *(arg1 + (zx.q(*(arg1 + 0x361)) << 3) + 4) = 2
            
            if (*(rsi_1 + 8) s> 1 && data_1439c7a08 s<= 1)
                uint64_t rax_11 = zx.q(*(arg1 + 0x360))
                uint64_t rcx_3 = rax_11 * 9
                *(arg1 + ((rax_11 * 9 + 0x3f) << 2)) = *(arg1 + (rcx_3 << 2) + 0xd8)
                void* rdx_2 = arg1 + ((rax_11 * 9 + 0x3f) << 2)
                *(rdx_2 + 0x10) = *(arg1 + (rcx_3 << 2) + 0xe8)
                *(rdx_2 + 0x20) = *(arg1 + (rcx_3 << 2) + 0xf8)
                *(arg1 + zx.q(*(arg1 + 0x360)) * 0x24 + 0x104) = 1
                *(arg1 + zx.q(*(arg1 + 0x360)) * 0x24 + 0x10c) = 0
                *(arg1 + (zx.q(*(arg1 + 0x361)) << 3) + 0x50) = zx.d(*(arg1 + 0x360)) + 1
                *(arg1 + (zx.q(*(arg1 + 0x361)) << 3) + 0x54) = 2
                *(arg1 + 0x360) += 1
                *(arg1 + 0x364) = 1
            
            uint64_t rcx_8 = zx.q(*(arg1 + 0x361))
            *(&var_a8:4 + (rcx_8 << 2)) = *(rsi_1 + 4)
            *(&var_78 + rcx_8) = *(rsi_1 + 0xc)
            char rax_21 = *(rsi_1 + 0x10)
            var_a8.b += 1
            *(arg1 + 0x360) += 1
            *(&var_70:3 + rcx_8) = rax_21
            int64_t var_60
            *(&var_60 + (rcx_8 << 2)) = 2
            rcx_8.b += 1
            *(arg1 + 0x361) = rcx_8.b
        
        i += 1
    while (i u< *(arg2 + 0x5c))

int64_t var_68
int64_t var_40

if (*(arg2 + 0x88) != 0)
    int32_t r10_1 = 0x7fffffff
    int32_t r9_1 = 0x7fffffff
    void* rdx_3 = arg1 + (zx.q(*(arg1 + 0x360)) + 6) * 0x24
    __builtin_memset(rdx_3, 0, 0x24)
    uint32_t r11_1 = zx.d(*(arg1 + 0x366))
    *(rdx_3 + 8) = r11_1
    *(rdx_3 + 4) = (&data_1439c85fc)[sx.q(*(arg2 + 0x88)) * 0xa]
    uint32_t rcx_10 = zx.d(*(arg2 + 0x90))
    
    if (rcx_10 == 0)
        r9_1 = 2
    else if (rcx_10 == 1)
        r9_1 = 0
    else if (rcx_10 == 2)
        r9_1 = rcx_10 - 1
    
    *(rdx_3 + 0xc) = r9_1
    int32_t r8_1 = 0x7fffffff
    uint32_t rcx_12 = zx.d(*(arg2 + 0x92))
    
    if (rcx_12 == 0)
        r8_1 = 2
    else if (rcx_12 == 1)
        r8_1 = 0
    else if (rcx_12 == 2)
        r8_1 = rcx_12 - 1
    
    *(rdx_3 + 0x14) = r8_1
    
    if (r9_1 == 1 || r8_1 == 1)
        r15.b = 1
    
    if (r11_1 != 1)
        *(rdx_3 + 0x10) = 1
        r10_1 = 1
    else
        uint32_t rcx_14 = zx.d(*(arg2 + 0x93))
        int32_t r8_2 = 0x7fffffff
        
        if (rcx_14 == 0)
            r8_2 = 1
        else if (rcx_14 == r11_1)
            r8_2 = 0
        else if (rcx_14 - r11_1 == r11_1)
            r8_2 = 1
        
        *(rdx_3 + 0x10) = r8_2
        uint32_t rcx_16 = zx.d(*(arg2 + 0x93))
        
        if (rcx_16 == 0)
            r10_1 = 1
        else if (rcx_16 == 1)
            r10_1 = 0
        else if (rcx_16 == 2)
            r10_1 = 1
    
    *(rdx_3 + 0x18) = r10_1
    *(rdx_3 + 0x1c) = 3
    *(rdx_3 + 0x20) = 3
    uint32_t rcx_18 = zx.d(*(arg1 + 0x360))
    *(arg1 + 0x40) = rcx_18
    rcx_18.b += 1
    *(arg1 + 0x44) = 3
    var_70.b = *(rdx_3 + 0xc)
    var_70:1.b = *(rdx_3 + 0x14)
    var_68:3.b = *(rdx_3 + 0x10)
    var_68:4.b = *(rdx_3 + 0x18)
    var_40.d = 3
    int64_t var_88
    var_88:4.d = *(rdx_3 + 4)
    *(arg1 + 0x360) = rcx_18.b
    *(arg1 + 0x363) = 1

if (*(arg2 + 0x9e) != 0)
    void* rdx_4 = arg1 + (zx.q(*(arg1 + 0x360)) + 6) * 0x24
    __builtin_memcpy(rdx_4 + 4, 
        "\x10\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x"
    "00\x90\x1d\x9e\x3b\x90\x1d\x9e\x3b", 
        0x20)
    *rdx_4 = 0
    uint32_t rcx_19 = zx.d(*(arg1 + 0x360))
    *(arg1 + 0x48) = rcx_19
    rcx_19.b += 1
    *(arg1 + 0x4c) = 0x3b9e1d90
    var_70:2.b = *(rdx_4 + 0x14)
    var_68:5.b = *(rdx_4 + 0x18)
    var_40:4.d = 0x3b9e1d90
    int32_t var_80_1 = *(rdx_4 + 4)
    *(arg1 + 0x360) = rcx_19.b
    *(arg1 + 0x365) = 1

*(arg1 + 0x368) = *(arg2 + 0x9a)
var_a8:3.b = *(arg2 + 0x9a)
var_a8:2.b = *(arg1 + 0x366)
var_a8:1.b = *(arg1 + 0x369)
int32_t rax_42 = sub_140b21160(&var_a8, 0x2c, 0)
*(arg1 + 0x370) = rax_42
*(arg1 + 0x374) = sub_140b21160(&var_78, 0x40, rax_42)
uint32_t rax_43

if (r15.b == 0)
    rax_43.b = 0
else
    rax_43 = zx.d(*(arg1 + 0x360))

*(arg1 + 0x367) = rax_43.b
*(arg1 + 0x384) = 1
__security_check_cookie(rax_1 ^ &var_c8)
return arg1
