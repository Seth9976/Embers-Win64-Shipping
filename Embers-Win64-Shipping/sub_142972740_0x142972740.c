// 函数: sub_142972740
// 地址: 0x142972740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax = *arg3

if (rax == 0)
    sub_142890900(arg1, 0)
    return 1

if (arg2 != arg1)
    int64_t* result = sub_142890e60(arg1, arg2[1].d)
    
    if (result == 0)
        return result
    
    int32_t rax_2 = arg2[1].d
    int32_t r8 = 0
    
    if (rax_2 s> 0)
        int64_t rdx_1 = 0
        
        do
            rdx_1 += 8
            r8 += 1
            *(rdx_1 + *arg1 - 8) = *(rdx_1 + *arg2 - 8)
            rax_2 = arg2[1].d
        while (r8 s< rax_2)
    
    arg1[1].d = rax_2
    rax = *arg3

int64_t* r9 = *arg1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax)
int32_t rsi_1 = arg1[1].d - 1
int64_t rbp = sx.q((temp1 + (temp0 & 0x3f)) s>> 6)
int64_t rdi_1 = sx.q(rsi_1)

while (rdi_1 s> rbp)
    int64_t r10_1 = r9[rdi_1]
    
    if (r10_1 != 0)
        r9[rdi_1] = 0
        int64_t r8_1 = 1
        int32_t i = arg3[1]
        
        while (i != 0)
            int32_t rax_9 = *arg3 - i
            int32_t rcx_2 = rax_9 & 0x8000003f
            
            if (rcx_2 s< 0)
                rcx_2 = ((rcx_2 - 1) | 0xffffffc0) + 1
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_9)
            int64_t r11_1 = sx.q(rsi_1 - ((temp3_1 + (temp2_1 & 0x3f)) s>> 6))
            r9[r11_1] ^= r10_1 u>> rcx_2.b
            
            if (rcx_2 != 0)
                r9[r11_1 - 1] ^= r10_1 << (0x40 - rcx_2.b)
            
            i = arg3[r8_1 + 1]
            r8_1 += 1
        
        int32_t rcx_7 = *arg3 & 0x8000003f
        
        if (rcx_7 s< 0)
            rcx_7 = ((rcx_7 - 1) | 0xffffffc0) + 1
        
        void* rdx_8 = &r9[rdi_1 - rbp]
        *rdx_8 ^= r10_1 u>> rcx_7.b
        
        if (rcx_7 != 0)
            *(rdx_8 - 8) ^= r10_1 << (0x40 - rcx_7.b)
    else
        rsi_1 -= 1
        rdi_1 -= 1

if (sx.q(rsi_1) == rbp)
    while (true)
        int32_t rcx_12 = *arg3 & 0x8000003f
        
        if (rcx_12 s< 0)
            rcx_12 = ((rcx_12 - 1) | 0xffffffc0) + 1
        
        int64_t rax_24 = r9[rbp]
        uint64_t r10_4 = rax_24 u>> rcx_12.b
        
        if (r10_4 == 0)
            break
        
        uint64_t rax_26
        
        if (rcx_12 == 0)
            rax_26 = 0
        else
            rax_26 = rax_24 << (0x40 - rcx_12.b) u>> (0x40 - rcx_12.b)
        
        r9[rbp] = rax_26
        int64_t r8_2 = 1
        *r9 ^= r10_4
        int32_t i_1 = arg3[1]
        
        if (i_1 != 0)
            do
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(i_1)
                int32_t rdx_11 = temp4_1 & 0x3f
                int32_t rax_28 = temp5_1 + rdx_11
                int32_t rax_30 = (rax_28 & 0x3f) - rdx_11
                int64_t r11_2 = sx.q(rax_28 s>> 6)
                r9[r11_2] ^= r10_4 << rax_30.b
                
                if (rax_30 != 0)
                    uint64_t rax_32 = r10_4 u>> (0x40 - rax_30.b)
                    
                    if (rax_32 != 0)
                        r9[r11_2 + 1] ^= rax_32
                
                i_1 = arg3[r8_2 + 1]
                r8_2 += 1
            while (i_1 != 0)

sub_142890ce0(arg1)
return 1
