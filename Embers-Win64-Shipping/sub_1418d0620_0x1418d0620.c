// 函数: sub_1418d0620
// 地址: 0x1418d0620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
*(arg1 + 0x360) = 0
*(arg1 + 0x368) = 0
int32_t i = 0
*(arg1 + 0x370) = 0
*(arg1 + 0x384) = 0
void* rsi = arg2
*(arg1 + 0x36c) = 0
__builtin_memset(arg1, 0, 0x50)
memset(arg1 + 0x50, 0, 0x310)
uint64_t rdi
rdi.b = 0
*(arg1 + 0x378) = 0
int64_t r12
r12.b = 0
*(arg1 + 0x380) = 0
uint32_t r13 = 0x7fffffff
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x2c)
int64_t var_88
__builtin_memset(&var_88, 0, 0x40)
char var_c8 = 0
int64_t var_80

if (*(arg3 + 0xc0) s> 0)
    void* rsi_1 = arg3 + 8
    
    do
        int64_t* rcx_1 = *(rsi_1 - 8)
        
        if (rcx_1 != 0)
            void* rax_3 = (*(*rcx_1 + 0x48))(rcx_1)
            
            if (rdi.b == 0)
                uint32_t rax_5 = *(rax_3 + 0x28) u>> (*rsi_1).b
                var_c8 = 1
                
                if (rax_5 u<= 1)
                    rax_5 = 1
                
                *(arg1 + 0x378) = rax_5
                uint32_t rax_7 = *(rax_3 + 0x2c) u>> (*rsi_1).b
                
                if (rax_7 u<= 1)
                    rax_7 = 1
                
                *(arg1 + 0x37c) = rax_7
                *(arg1 + 0x380) = *(rax_3 + 0x30)
            
            uint32_t rcx_4 = zx.d(*(rax_3 + 0x74))
            uint64_t rax_9 = zx.q(*(arg1 + 0x360))
            *(arg1 + 0x366) = rcx_4.b
            int64_t rax_11 = (rax_9 + 6) * 9
            *(arg1 + (rax_11 << 2) + 8) = rcx_4
            void* rdi_1 = arg1 + (rax_11 << 2)
            *(rdi_1 + 4) = sub_1418f0050(*(*(rsi_1 - 8) + 0x3c), (*(rax_3 + 0x38) u>> 4).b & 1)
            int32_t rcx_6 = 0x7fffffff
            uint32_t rdx_3 = zx.d(*(rsi_1 + 8))
            
            if (rdx_3 == 0)
                rcx_6 = 2
            else if (rdx_3 == 1)
                rcx_6 = 0
            else if (rdx_3 == 2)
                rcx_6 = 1
            
            *(rdi_1 + 0xc) = rcx_6
            
            if (r12.b != 0 || rcx_6 == 1)
                r12.b = 1
            
            uint32_t rcx_7 = zx.d(*(rsi_1 + 9))
            int32_t rdx_5 = 0x7fffffff
            
            if (rcx_7 == 0)
                rdx_5 = 1
            else if (rcx_7 == 1)
                rdx_5 = 0
            else if (rcx_7 == 2)
                rdx_5 = 1
            
            *(rdi_1 + 0x10) = rdx_5
            *(rdi_1 + 0x14) = 2
            *(rdi_1 + 0x18) = 1
            *(rdi_1 + 0x1c) = 2
            *(rdi_1 + 0x20) = 2
            *(arg1 + (zx.q(*(arg1 + 0x361)) << 3)) = zx.d(*(arg1 + 0x360))
            *(arg1 + (zx.q(*(arg1 + 0x361)) << 3) + 4) = 2
            uint64_t rax_15
            
            if (*(arg3 + 0x188) == 0 || *(rsi_1 + 0xc0) == 0)
                rax_15.b = 0
            else
                rax_15.b = 1
            
            if (*(rdi_1 + 8) s> 1 && rax_15.b != 0 && data_1439c7a08 s<= 1)
                uint64_t rax_16 = zx.q(*(arg1 + 0x360))
                uint64_t rcx_10 = rax_16 * 9
                *(arg1 + ((rax_16 * 9 + 0x3f) << 2)) = *(arg1 + (rcx_10 << 2) + 0xd8)
                void* rdx_6 = arg1 + ((rax_16 * 9 + 0x3f) << 2)
                *(rdx_6 + 0x10) = *(arg1 + (rcx_10 << 2) + 0xe8)
                *(rdx_6 + 0x20) = *(arg1 + (rcx_10 << 2) + 0xf8)
                *(arg1 + zx.q(*(arg1 + 0x360)) * 0x24 + 0x104) = 1
                *(arg1 + zx.q(*(arg1 + 0x360)) * 0x24 + 0x10c) = 0
                *(arg1 + (zx.q(*(arg1 + 0x361)) << 3) + 0x50) = zx.d(*(arg1 + 0x360)) + 1
                *(arg1 + (zx.q(*(arg1 + 0x361)) << 3) + 0x54) = 2
                *(arg1 + 0x360) += 1
                *(arg1 + 0x364) = 1
            
            uint64_t rcx_15 = zx.q(*(arg1 + 0x361))
            *(&var_b8:4 + (rcx_15 << 2)) = *(rdi_1 + 4)
            *(&var_88 + rcx_15) = *(rdi_1 + 0xc)
            char rax_26 = *(rdi_1 + 0x10)
            var_b8.b += 1
            *(arg1 + 0x360) += 1
            rdi = zx.q(var_c8)
            *(&var_80:3 + rcx_15) = rax_26
            int64_t var_70
            *(&var_70 + (rcx_15 << 2)) = 2
            rcx_15.b += 1
            *(arg1 + 0x361) = rcx_15.b
        
        i += 1
        rsi_1 += 0x18
    while (i s< *(arg3 + 0xc0))
    
    rsi = arg2

int64_t var_78
int64_t var_50

if (*(arg3 + 0x190) != 0)
    void* rdi_2 = arg1 + (zx.q(*(arg1 + 0x360)) + 6) * 0x24
    __builtin_memset(rdi_2, 0, 0x24)
    int64_t* rcx_16 = *(arg3 + 0x190)
    void* rax_31 = (*(*rcx_16 + 0x48))(rcx_16)
    int32_t r8 = 0x7fffffff
    uint32_t rax_32 = zx.d(*(rax_31 + 0x74))
    *(arg1 + 0x366) = rax_32.b
    *(rdi_2 + 8) = rax_32
    *(rdi_2 + 4) = (&data_1439c85fc)[sx.q(*(*(arg3 + 0x190) + 0x3c)) * 0xa]
    uint32_t rcx_18 = zx.d(*(arg3 + 0x198))
    
    if (rcx_18 == 0)
        r8 = 2
    else if (rcx_18 == 1)
        r8 = 0
    else if (rcx_18 == 2)
        r8 = 1
    
    *(rdi_2 + 0xc) = r8
    int32_t rdx_7 = 0x7fffffff
    uint32_t rcx_20 = zx.d(*(arg3 + 0x19a))
    
    if (rcx_20 == 0)
        rdx_7 = 2
    else if (rcx_20 == 1)
        rdx_7 = 0
    else if (rcx_20 == 2)
        rdx_7 = 1
    
    *(rdi_2 + 0x14) = rdx_7
    
    if (r12.b != 0 || r8 == 1 || rdx_7 == 1)
        r12.b = 1
    
    if (rax_32 != 1)
        *(rdi_2 + 0x10) = 1
        r13 = 1
    else
        uint32_t rcx_22 = zx.d(*(arg3 + 0x199))
        int32_t rdx_8 = 0x7fffffff
        uint32_t r8_1
        
        if (rcx_22 == 0)
            r8_1 = 1
            rdx_8 = 1
        else if (rcx_22 == rax_32)
            rdx_8 = 0
            r8_1 = 1
        else if (rcx_22 - rax_32 == rax_32)
            r8_1 = 1
            rdx_8 = 1
        else
            r8_1 = rax_32
        
        *(rdi_2 + 0x10) = rdx_8
        uint32_t rcx_24 = zx.d(*(arg3 + 0x19b))
        
        if (rcx_24 == 0)
            r13 = r8_1
        else if (rcx_24 == 1)
            r13 = 0
        else if (rcx_24 == 2)
            r13 = r8_1
    
    *(rdi_2 + 0x18) = r13
    int32_t rax_36 = *(arg3 + 0x19c)
    int32_t rdx_9
    
    if (((rax_36 - 1) & 0xffffffef) == 0)
        rdx_9 = 4
    else if (rax_36 == 0x21 && (*(rsi + 0x1af0) & 2) != 0)
        rdx_9 = 0x3b9c9308
    else if ((rax_36.b & 0xf) != 0 || (rax_36.b & 0xf0) == 0)
        rdx_9 = 3
    else
        rdx_9 = 0x3b9c9308
    
    *(rdi_2 + 0x1c) = rdx_9
    *(rdi_2 + 0x20) = rdx_9
    uint32_t rcx_27 = zx.d(*(arg1 + 0x360))
    *(arg1 + 0x40) = rcx_27
    rcx_27.b += 1
    *(arg1 + 0x44) = rdx_9
    var_80.b = *(rdi_2 + 0xc)
    var_80:1.b = *(rdi_2 + 0x14)
    var_78:3.b = *(rdi_2 + 0x10)
    var_78:4.b = *(rdi_2 + 0x18)
    var_50.d = rdx_9
    int64_t var_98
    var_98:4.d = *(rdi_2 + 4)
    *(arg1 + 0x360) = rcx_27.b
    *(arg1 + 0x363) = 1
    
    if (var_c8 == 0)
        *(arg1 + 0x378) = *(rax_31 + 0x28)
        *(arg1 + 0x37c) = *(rax_31 + 0x2c)
        *(arg1 + 0x380) = *(rax_31 + 0x58)

if ((*(rsi + 0x1af0) & 0x400) != 0)
    int64_t* rcx_28 = *(arg3 + 0x1a8)
    
    if (rcx_28 != 0)
        (*(*rcx_28 + 0x48))(rcx_28)
        void* rdx_10 = arg1 + (zx.q(*(arg1 + 0x360)) + 6) * 0x24
        __builtin_memset(rdx_10, 0, 0x24)
        *(rdx_10 + 4) = (&data_1439c85fc)[sx.q(*(*(arg3 + 0x1a8) + 0x3c)) * 0xa]
        int32_t rcx_30 = *(*(arg3 + 0x1a8) + 0x38)
        *(rdx_10 + 0x10) = 1
        *(rdx_10 + 0x18) = 1
        *(rdx_10 + 8) = rcx_30
        *(rdx_10 + 0x14) = 2
        *(rdx_10 + 0xc) = 2
        *(rdx_10 + 0x1c) = 0x3b9e1d90
        *(rdx_10 + 0x20) = 0x3b9e1d90
        uint32_t rcx_31 = zx.d(*(arg1 + 0x360))
        *(arg1 + 0x48) = rcx_31
        rcx_31.b += 1
        *(arg1 + 0x4c) = 0x3b9e1d90
        var_80:2.b = *(rdx_10 + 0x14)
        var_78:5.b = *(rdx_10 + 0x18)
        var_50:4.d = 0x3b9e1d90
        int32_t var_90_1 = *(rdx_10 + 4)
        *(arg1 + 0x360) = rcx_31.b
        *(arg1 + 0x365) = 1

var_b8:2.b = *(arg1 + 0x366)
char rax_57 = *(arg1 + 0x369)
*(arg1 + 0x368) = 0
var_b8:3.b = 0
var_b8:1.b = rax_57
int32_t rax_58 = sub_140b21160(&var_b8, 0x2c, 0)
*(arg1 + 0x370) = rax_58
*(arg1 + 0x374) = sub_140b21160(&var_88, 0x40, rax_58)
uint32_t rax_59

if (r12.b == 0)
    rax_59.b = 0
else
    rax_59 = zx.d(*(arg1 + 0x360))

*(arg1 + 0x367) = rax_59.b
*(arg1 + 0x384) = 1
__security_check_cookie(rax_1 ^ &var_e8)
return arg1
