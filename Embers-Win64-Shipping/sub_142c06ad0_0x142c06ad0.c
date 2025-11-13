// 函数: sub_142c06ad0
// 地址: 0x142c06ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 8)
arg2[1] = *(arg1 + 0x18)
arg2[2].q = arg1[0x19]
sub_142c37020(&arg1[5], arg2 + 0x28, arg3)

if ((arg1[0x18].b & 1) != 0)
    sub_142c383b0(&arg1[0x15], arg2 + 0x88)

int32_t rdx_2 = *(arg2 + 0x38)
int32_t rdi = 0
int32_t rdx_3 = rdx_2 - 1
int64_t r10 = arg2[4].q
int32_t r8 = 0
void* rax_9

if (rdx_2 - 1 s>= 0)
    uint64_t rcx_2
    
    while (true)
        uint64_t rax_2 = zx.q((rdx_3 + r8) u>> 1)
        rcx_2 = zx.q(rax_2.d)
        int32_t r9_1 = *(r10 + rax_2 * 0x24)
        bool c_1 = r9_1 u< 0x66726163
        int32_t rax_4
        
        if (r9_1 == 0x66726163 || c_1)
            rax_4.b = c_1
        
        if ((r9_1 != 0x66726163 && not(c_1)) || rax_4 s< 0)
            rdx_3 = (rcx_2 - 1).d
        else
            if (rax_4 s<= 0)
                break
            
            r8 = (rcx_2 + 1).d
        
        if (r8 s> rdx_3)
            goto label_142c06b82
    
    rax_9 = r10 + rcx_2 * 0x24

int32_t rsi

if (rdx_2 - 1 s< 0 || rax_9 == 0)
label_142c06b82:
    rsi = 0
else
    rsi = *(rax_9 + 0x1c)

arg2[0xa].d = rsi
int32_t r8_1 = 0
int32_t rdx_4 = *(arg2 + 0x38)
int32_t rdx_5 = rdx_4 - 1
int64_t r10_1 = arg2[4].q
void* rax_14

if (rdx_4 - 1 s>= 0)
    uint64_t rcx_3
    
    while (true)
        uint64_t rax_6 = zx.q((rdx_5 + r8_1) u>> 1)
        rcx_3 = zx.q(rax_6.d)
        int32_t r9_2 = *(r10_1 + rax_6 * 0x24)
        bool c_2 = r9_2 u< 0x6e756d72
        int32_t rax_8
        
        if (r9_2 == 0x6e756d72 || c_2)
            rax_8.b = c_2
        
        if ((r9_2 != 0x6e756d72 && not(c_2)) || rax_8 s< 0)
            rdx_5 = (rcx_3 - 1).d
        else
            if (rax_8 s<= 0)
                break
            
            r8_1 = (rcx_3 + 1).d
        
        if (r8_1 s> rdx_5)
            goto label_142c06be4
    
    rax_14 = r10_1 + rcx_3 * 0x24

int32_t r11

if (rdx_4 - 1 s< 0 || rax_14 == 0)
label_142c06be4:
    r11 = 0
else
    r11 = *(rax_14 + 0x1c)

*(arg2 + 0xa4) = r11
int32_t r8_2 = 0
int32_t rdx_6 = *(arg2 + 0x38)
int32_t rdx_7 = rdx_6 - 1
int64_t r10_2 = arg2[4].q
void* rax_16

if (rdx_6 - 1 s>= 0)
    uint64_t rcx_5
    
    while (true)
        uint64_t rax_11 = zx.q((rdx_7 + r8_2) u>> 1)
        rcx_5 = zx.q(rax_11.d)
        int32_t r9_3 = *(r10_2 + rax_11 * 0x24)
        bool c_3 = r9_3 u< 0x646e6f6d
        int32_t rax_13
        
        if (r9_3 == 0x646e6f6d || c_3)
            rax_13.b = c_3
        
        if ((r9_3 != 0x646e6f6d && not(c_3)) || rax_13 s< 0)
            rdx_7 = (rcx_5 - 1).d
        else
            if (rax_13 s<= 0)
                break
            
            r8_2 = (rcx_5 + 1).d
        
        if (r8_2 s> rdx_7)
            goto label_142c06c45
    
    rax_16 = r10_2 + rcx_5 * 0x24

int32_t rax_15

if (rdx_6 - 1 s< 0 || rax_16 == 0)
label_142c06c45:
    rax_15 = 0
else
    rax_15 = *(rax_16 + 0x1c)

*(arg2 + 0xa8) = rax_15

if (rsi != 0 || (r11 != 0 && rax_15 != 0))
    rax_15.b = 4
else
    rax_15 = 0

*(arg2 + 0xb8) &= 0xfb
int32_t r8_3 = 0
*(arg2 + 0xb8) |= rax_15.b
int32_t rdx_8 = *(arg2 + 0x38)
int32_t rdx_9 = rdx_8 - 1
bool rbp = *(arg2 + 0xb8)
int64_t r10_3 = arg2[4].q
void* rax_27

if (rdx_8 - 1 s>= 0)
    uint64_t rcx_8
    
    while (true)
        uint64_t rax_18 = zx.q((rdx_9 + r8_3) u>> 1)
        rcx_8 = zx.q(rax_18.d)
        int32_t r9_4 = *(r10_3 + rax_18 * 0x24)
        bool c_4 = r9_4 u< 0x72746c6d
        int32_t rax_20
        
        if (r9_4 == 0x72746c6d || c_4)
            rax_20.b = c_4
        
        if ((r9_4 != 0x72746c6d && not(c_4)) || rax_20 s< 0)
            rdx_9 = (rcx_8 - 1).d
        else
            if (rax_20 s<= 0)
                break
            
            r8_3 = (rcx_8 + 1).d
        
        if (r8_3 s> rdx_9)
            goto label_142c06cd2
    
    rax_27 = r10_3 + rcx_8 * 0x24

int32_t rcx_9

if (rdx_8 - 1 s< 0 || rax_27 == 0)
label_142c06cd2:
    rcx_9 = 0
else
    rcx_9 = *(rax_27 + 0x1c)

*(arg2 + 0xac) = rcx_9
int32_t r11_1 = 0x766b726e
int32_t rdx_10 = *(arg2 + 0x38)
int64_t r10_4 = arg2[4].q
int32_t r8_4 = 0

if ((arg1[1].d & 0xfffffffe) == 4)
    r11_1 = 0x6b65726e

int32_t rdx_11 = rdx_10 - 1
void* rax_32

if (rdx_10 - 1 s>= 0)
    uint64_t rcx_10
    
    while (true)
        uint64_t rax_24 = zx.q((rdx_11 + r8_4) u>> 1)
        rcx_10 = zx.q(rax_24.d)
        int32_t r9_5 = *(r10_4 + rax_24 * 0x24)
        int32_t rax_26
        
        if (r11_1 u>= r9_5)
            rax_26.b = r11_1 u> r9_5
        
        if (r11_1 u< r9_5 || rax_26 s< 0)
            rdx_11 = (rcx_10 - 1).d
        else
            if (rax_26 s<= 0)
                break
            
            r8_4 = (rcx_10 + 1).d
        
        if (r8_4 s> rdx_11)
            goto label_142c06d50
    
    rax_32 = r10_4 + rcx_10 * 0x24

int32_t rsi_1

if (rdx_10 - 1 s< 0 || rax_32 == 0)
label_142c06d50:
    rsi_1 = 0
else
    rsi_1 = *(rax_32 + 0x18)

arg2[0xb].d = rsi_1
int32_t r8_5 = 0
int32_t rdx_12 = *(arg2 + 0x38)
int32_t rdx_13 = rdx_12 - 1
int64_t r10_5 = arg2[4].q
void* rax_37

if (rdx_12 - 1 s>= 0)
    uint64_t rcx_12
    
    while (true)
        uint64_t rax_29 = zx.q((rdx_13 + r8_5) u>> 1)
        rcx_12 = zx.q(rax_29.d)
        int32_t r9_6 = *(r10_5 + rax_29 * 0x24)
        bool c_5 = r9_6 u< 0x7472616b
        int32_t rax_31
        
        if (r9_6 == 0x7472616b || c_5)
            rax_31.b = c_5
        
        if ((r9_6 != 0x7472616b && not(c_5)) || rax_31 s< 0)
            rdx_13 = (rcx_12 - 1).d
        else
            if (rax_31 s<= 0)
                break
            
            r8_5 = (rcx_12 + 1).d
        
        if (r8_5 s> rdx_13)
            goto label_142c06db4
    
    rax_37 = r10_5 + rcx_12 * 0x24

int32_t rax_33

if (rdx_12 - 1 s< 0 || rax_37 == 0)
label_142c06db4:
    rax_33 = 0
else
    rax_33 = *(rax_37 + 0x18)

*(arg2 + 0xb4) = rax_33
rdx_13.b = rsi_1 != 0
rdx_13.b |= rbp & 0xfe
char rax_34 = (neg.d(rax_33)).b
rdx_13.b &= 0xfd
*(arg2 + 0xb8) = (sbb.b(rax_34, rax_34, rax_33 != 0) & 2) | rdx_13.b
bool cond:14 = sub_142c070f0(arg2 + 0x28, 1, r11_1) != 0xffff
int32_t rcx_15 = *(arg2[2].q + 0x50)

if (rcx_15 == 0 || rcx_15 == *(arg2 + 0x2c))
    rsi_1.b = 0
else
    rsi_1.b = 1

if (sub_142c2aa00(*arg1) == 0)
    *(arg2 + 0xb8) |= 0x20

*(arg2 + 0xb9) ^= (arg1[0x18].b << 3 ^ *(arg2 + 0xb9)) & 8
int32_t rax_40 = data_144019be8

if (rax_40 == 0)
    sub_142bf7370()
    rax_40 = data_144019be8

int32_t rax_41
uint64_t rcx_19

if ((rax_40.b & 8) != 0)
    rax_41, rcx_19 = sub_142c36750(*arg1)

if ((rax_40.b & 8) != 0 && rax_41 != 0)
    *(arg2 + 0xb9) |= 2
else
    int32_t rax_42
    
    if ((arg1[0x18].b & 1) == 0 && rsi_1.b == 0)
        rax_42, rcx_19 = sub_142c2aa50(*arg1)
    
    if ((arg1[0x18].b & 1) != 0 || rsi_1.b != 0 || rax_42 == 0)
        int32_t rax_43
        rax_43, rcx_19 = sub_142c36750(*arg1)
        
        if (rax_43 != 0)
            *(arg2 + 0xb9) |= 2
    else
        *(arg2 + 0xb9) |= 1

if ((*(arg2 + 0xb9) & 2) == 0 && cond:14 == 0)
    int32_t rax_44
    rax_44, rcx_19 = sub_142c36750(*arg1)
    
    if (rax_44 == 0)
        char rax_45
        rax_45, rcx_19 = sub_142c200f0(*arg1)
        
        if (rax_45 != 0)
            *(arg2 + 0xb9) |= 4
    else
        *(arg2 + 0xb9) |= 2

char rax_46

if ((arg1[0x18].b & 2) == 0)
    rax_46 = 0
else
    rax_46 = *(arg2 + 0xb9)
    
    if ((rax_46 & 2) != 0)
        rax_46 = 0
    else if ((rax_46 & 4) == 0)
        rax_46 = 0x10
    else
        rax_46, rcx_19 = sub_142c20140(*arg1)
        
        rax_46 = rax_46 != 0 ? 0 : 0x10

*(arg2 + 0xb8) &= 0xef
int32_t r8_7 = 0
*(arg2 + 0xb8) |= rax_46
uint64_t rax_47 = zx.q(*(arg2 + 0x38))
int64_t r10_6 = arg2[4].q
int32_t rdx_14 = (rax_47 - 1).d

if (rdx_14 s>= 0)
    do
        uint64_t rax_49 = zx.q((rdx_14 + r8_7) u>> 1)
        rcx_19 = zx.q(rax_49.d)
        rax_47 = rax_49 * 9
        int32_t r9_7 = *(r10_6 + (rax_47 << 2))
        bool c_7 = r9_7 u< 0x6d61726b
        int32_t temp14_1
        
        if (r9_7 == 0x6d61726b || c_7)
            rax_47.b = c_7
            temp14_1 = rax_47.d
        
        if ((r9_7 != 0x6d61726b && not(c_7)) || temp14_1 s< 0)
            rdx_14 = (rcx_19 - 1).d
        else
            if (temp14_1 s<= 0)
                rax_47 = r10_6 + rcx_19 * 0x24
                
                if (rax_47 != 0)
                    rdi = *(rax_47 + 0x1c)
                
                break
            
            r8_7 = (rcx_19 + 1).d
    while (r8_7 s<= rdx_14)

rax_47.b = sbb.b(rax_47.b, rax_47.b, rdi != 0)
rax_47.b &= 8
rax_47.b |= *(arg2 + 0xb8) & 0xf7
*(arg2 + 0xb8) = rax_47.b
char rax_50 = *(arg2 + 0xb9)
char rax_51

if ((rax_50 & 3) == 0 && (rax_50 & 4) != 0)
    rax_51, rcx_19 = sub_142c20060(*arg1)

if ((rax_50 & 3) != 0 || ((rax_50 & 4) != 0 && rax_51 != 0))
    rcx_19 = 0
else
    rcx_19.b = 0x80

uint32_t result
result.b = *(arg2 + 0xb8) & 0x7f
result.b |= rcx_19.b
*(arg2 + 0xb8) = result.b

if (result.b u< 0x80 || (arg1[0x18].b & 4) == 0)
    rcx_19 = 0
else
    rcx_19.b = 0x40

result.b &= 0xbf
result.b |= rcx_19.b
*(arg2 + 0xb8) = result.b

if ((result.b & 2) == 0)
    *(arg2 + 0xb9) &= 0xef
else
    result = sub_142c36840(*arg1)
    
    if (result == 0)
        *(arg2 + 0xb9) &= 0xef
    else
        *(arg2 + 0xb9) &= 0xef
        *(arg2 + 0xb9) |= 0x10

return result
