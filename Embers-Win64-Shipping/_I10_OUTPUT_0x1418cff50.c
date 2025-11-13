// 函数: $I10_OUTPUT
// 地址: 0x1418cff50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
*(arg1 + 0x360) = 0
void* r13 = arg3
*(arg1 + 0x368) = 0
*(arg1 + 0x369) = *(arg3 + 0x116)
*(arg1 + 0x36a) = 0
*(arg1 + 0x36c) = 0
*(arg1 + 0x370) = 0
*(arg1 + 0x384) = 0
__builtin_memset(arg1, 0, 0x50)
memset(arg1 + 0x50, 0, 0x310)
uint64_t rsi
rsi.b = 0
*(arg1 + 0x378) = 0
int64_t r14
r14.b = 0
int32_t i_2 = 0
*(arg1 + 0x380) = 0
int64_t var_c0
__builtin_memset(&var_c0, 0, 0x2c)
int64_t rcx_1 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x40)
void* rax_3 = r13

while (*rax_3 != 0)
    i_2 += 1
    rcx_1 += 1
    rax_3 += 0x18
    
    if (rcx_1 s>= 8)
        break

int64_t i_1 = sx.q(i_2)
int32_t r12 = 0x7fffffff
int64_t var_80

if (i_2 s> 0)
    void* rsi_1 = r13 + 0x15
    r13.b = 0
    int64_t i
    
    do
        int64_t* rcx_2 = *(rsi_1 - 0x15)
        void* rax_5 = (*(*rcx_2 + 0x48))(rcx_2)
        
        if (r13.b == 0)
            r13.b = 1
            uint32_t rax_7 = *(rax_5 + 0x28) u>> *(rsi_1 - 1)
            
            if (rax_7 u<= 1)
                rax_7 = 1
            
            *(arg1 + 0x378) = rax_7
            uint32_t rax_9 = *(rax_5 + 0x2c) u>> *(rsi_1 - 1)
            
            if (rax_9 u<= 1)
                rax_9 = 1
            
            *(arg1 + 0x37c) = rax_9
            *(arg1 + 0x380) = *(rax_5 + 0x30)
        
        uint32_t rcx_5 = zx.d(*(*(rsi_1 - 0x15) + 0x38))
        uint64_t rax_12 = zx.q(*(arg1 + 0x360))
        *(arg1 + 0x366) = rcx_5.b
        int64_t rax_14 = (rax_12 + 6) * 9
        *(arg1 + (rax_14 << 2) + 8) = rcx_5
        void* rdi_1 = arg1 + (rax_14 << 2)
        *(rdi_1 + 4) = sub_1418f0050(*(*(rsi_1 - 0x15) + 0x3c), (*(rax_5 + 0x38) u>> 4).b & 1)
        int32_t rdx_3 = 0x7fffffff
        uint32_t rcx_8 = zx.d(*rsi_1) u>> 2
        
        if (rcx_8 == 0)
            rdx_3 = 2
        else if (rcx_8 == 1)
            rdx_3 = 0
        else if (rcx_8 == 2)
            rdx_3 = 1
        
        *(rdi_1 + 0xc) = rdx_3
        
        if (r14.b != 0 || rdx_3 == 1)
            r14.b = 1
        
        int32_t rdx_4 = 0x7fffffff
        int32_t rcx_11 = zx.d(*rsi_1) & 3
        
        if (rcx_11 == 0)
            rdx_4 = 1
        else if (rcx_11 == 1)
            rdx_4 = 0
        else if (rcx_11 == 2)
            rdx_4 = 1
        
        *(rdi_1 + 0x10) = rdx_4
        *(rdi_1 + 0x14) = 2
        *(rdi_1 + 0x18) = 1
        *(rdi_1 + 0x1c) = 2
        *(rdi_1 + 0x20) = 2
        *(arg1 + (zx.q(*(arg1 + 0x361)) << 3)) = zx.d(*(arg1 + 0x360))
        *(arg1 + (zx.q(*(arg1 + 0x361)) << 3) + 4) = 2
        
        if (*(rdi_1 + 8) s> 1 && *(rsi_1 - 0xd) != 0 && data_1439c7a08 s<= 1)
            uint64_t rax_19 = zx.q(*(arg1 + 0x360))
            uint64_t rcx_14 = rax_19 * 9
            *(arg1 + ((rax_19 * 9 + 0x3f) << 2)) = *(arg1 + (rcx_14 << 2) + 0xd8)
            void* rdx_5 = arg1 + ((rax_19 * 9 + 0x3f) << 2)
            *(rdx_5 + 0x10) = *(arg1 + (rcx_14 << 2) + 0xe8)
            *(rdx_5 + 0x20) = *(arg1 + (rcx_14 << 2) + 0xf8)
            *(arg1 + zx.q(*(arg1 + 0x360)) * 0x24 + 0x104) = 1
            *(arg1 + zx.q(*(arg1 + 0x360)) * 0x24 + 0x10c) = 0
            *(arg1 + (zx.q(*(arg1 + 0x361)) << 3) + 0x50) = zx.d(*(arg1 + 0x360)) + 1
            *(arg1 + (zx.q(*(arg1 + 0x361)) << 3) + 0x54) = 2
            *(arg1 + 0x360) += 1
            *(arg1 + 0x364) = 1
        
        rsi_1 += 0x18
        uint64_t rcx_19 = zx.q(*(arg1 + 0x361))
        *(&var_c0:4 + (rcx_19 << 2)) = *(rdi_1 + 4)
        *(&var_88 + rcx_19) = *(rdi_1 + 0xc)
        int64_t var_70
        *(&var_70 + (rcx_19 << 2)) = 2
        char rax_29 = *(rdi_1 + 0x10)
        var_c0.b += 1
        *(arg1 + 0x360) += 1
        *(&var_80:3 + rcx_19) = rax_29
        rcx_19.b += 1
        *(arg1 + 0x361) = rcx_19.b
        i = i_1
        i_1 -= 1
    while (i != 1)
    rsi = zx.q(r13.b)
    r13 = arg3

int64_t var_78
int64_t var_50
void* r8_1

if (*(r13 + 0xc0) == 0)
    r8_1 = arg2
else
    void* rdi_2 = arg1 + (zx.q(*(arg1 + 0x360)) + 6) * 0x24
    __builtin_memset(rdi_2, 0, 0x24)
    int64_t* rcx_20 = *(r13 + 0xc0)
    void* rax_34 = (*(*rcx_20 + 0x48))(rcx_20)
    int32_t r8 = 0x7fffffff
    int32_t rcx_21 = *(*(r13 + 0xc0) + 0x38)
    *(rdi_2 + 8) = rcx_21
    *(arg1 + 0x366) = rcx_21.b
    *(rdi_2 + 4) = (&data_1439c85fc)[sx.q(*(*(r13 + 0xc0) + 0x3c)) * 0xa]
    uint32_t rcx_24 = zx.d(*(r13 + 0xd0)) u>> 6
    
    if (rcx_24 == 0)
        r8 = 2
    else if (rcx_24 == 1)
        r8 = 0
    else if (rcx_24 == 2)
        r8 = rcx_24 - 1
    
    *(rdi_2 + 0xc) = r8
    int32_t rdx_6 = 0x7fffffff
    int32_t rcx_28 = zx.d(*(r13 + 0xd0)) u>> 2 & 3
    
    if (rcx_28 == 0)
        rdx_6 = 2
    else if (rcx_28 == 1)
        rdx_6 = 0
    else if (rcx_28 == 2)
        rdx_6 = rcx_28 - 1
    
    *(rdi_2 + 0x14) = rdx_6
    
    if (r14.b != 0 || r8 == 1 || rdx_6 == 1)
        r14.b = 1
    
    int32_t rdx_7 = 0x7fffffff
    int32_t rcx_32 = zx.d(*(r13 + 0xd0)) u>> 4 & 3
    
    if (rcx_32 == 0)
        rdx_7 = 1
    else if (rcx_32 == 1)
        rdx_7 = 0
    else if (rcx_32 == 2)
        rdx_7 = 1
    
    *(rdi_2 + 0x10) = rdx_7
    int32_t rcx_35 = zx.d(*(r13 + 0xd0)) & 3
    
    if (rcx_35 == 0)
        r12 = 1
    else if (rcx_35 == 1)
        r12 = 0
    else if (rcx_35 == 2)
        r12 = 1
    
    r8_1 = arg2
    *(rdi_2 + 0x18) = r12
    int32_t rax_39 = *(r13 + 0xd4)
    int32_t rdx_8
    
    if (((rax_39 - 1) & 0xffffffef) == 0)
        rdx_8 = 4
    else if (rax_39 == 0x21 && (*(r8_1 + 0x1af0) & 2) != 0)
        rdx_8 = 0x3b9c9308
    else if ((rax_39.b & 0xf) != 0 || (rax_39.b & 0xf0) == 0)
        rdx_8 = 3
    else
        rdx_8 = 0x3b9c9308
    
    *(rdi_2 + 0x1c) = rdx_8
    *(rdi_2 + 0x20) = rdx_8
    uint32_t rcx_38 = zx.d(*(arg1 + 0x360))
    *(arg1 + 0x40) = rcx_38
    rcx_38.b += 1
    *(arg1 + 0x44) = rdx_8
    var_80.b = *(rdi_2 + 0xc)
    var_80:1.b = *(rdi_2 + 0x14)
    var_78:3.b = *(rdi_2 + 0x10)
    var_78:4.b = *(rdi_2 + 0x18)
    var_50.d = rdx_8
    int64_t var_a0
    var_a0:4.d = *(rdi_2 + 4)
    *(arg1 + 0x360) = rcx_38.b
    *(arg1 + 0x363) = 1
    
    if (rsi.b == 0)
        *(arg1 + 0x378) = *(rax_34 + 0x28)
        *(arg1 + 0x37c) = *(rax_34 + 0x2c)
        *(arg1 + 0x380) = *(rax_34 + 0x30)

if ((*(r8_1 + 0x1af0) & 0x400) != 0)
    int64_t* rcx_39 = *(r13 + 0x108)
    
    if (rcx_39 != 0)
        (*(*rcx_39 + 0x48))(rcx_39)
        void* rdx_9 = arg1 + (zx.q(*(arg1 + 0x360)) + 6) * 0x24
        __builtin_memset(rdx_9, 0, 0x24)
        *(rdx_9 + 4) = (&data_1439c85fc)[sx.q(*(*(r13 + 0x108) + 0x3c)) * 0xa]
        *(rdx_9 + 8) = *(*(r13 + 0x108) + 0x38)
        __builtin_memcpy(rdx_9 + 0xc, 
            "\x02\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x90\x1d\x9e\x3b\x90\x1d\x"
        "9e\x3b", 
            0x18)
        uint32_t rcx_42 = zx.d(*(arg1 + 0x360))
        *(arg1 + 0x48) = rcx_42
        rcx_42.b += 1
        *(arg1 + 0x4c) = 0x3b9e1d90
        var_80:2.b = *(rdx_9 + 0x14)
        var_78:5.b = *(rdx_9 + 0x18)
        var_50:4.d = 0x3b9e1d90
        int32_t var_98_1 = *(rdx_9 + 4)
        *(arg1 + 0x360) = rcx_42.b
        *(arg1 + 0x365) = 1

*(arg1 + 0x368) = *(r13 + 0x117)
var_c0:3.b = *(r13 + 0x117)
var_c0:2.b = *(arg1 + 0x366)
var_c0:1.b = *(arg1 + 0x369)
int32_t rax_63 = sub_140b21160(&var_c0, 0x2c, 0)
*(arg1 + 0x370) = rax_63
*(arg1 + 0x374) = sub_140b21160(&var_88, 0x40, rax_63)
uint32_t rax_64

if (r14.b == 0)
    rax_64.b = 0
else
    rax_64 = zx.d(*(arg1 + 0x360))

*(arg1 + 0x367) = rax_64.b
*(arg1 + 0x384) = 1
__security_check_cookie(rax_1 ^ &var_f8)
return arg1
