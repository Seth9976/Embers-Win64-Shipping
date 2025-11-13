// 函数: sub_1419d74c0
// 地址: 0x1419d74c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419c47f0(arg2, arg1, arg3)
sub_1419c47f0(arg2, &arg1[2], arg3)
sub_14090dce0(arg2, &arg1[4], arg3)
sub_1419c4460(arg2, &arg1[6], arg3)
sub_1419c42b0(arg2, &arg1[8], arg3)
int64_t* result = sub_140fdadf0(arg2, &arg1[0xa], arg3)
char temp0 = arg2[5].b & 1

if (temp0 != 0)
    int32_t r8_1 = arg1[1].d
    uint64_t rflags_1
    char temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(r8_1)
    int32_t rcx_6
    
    if (temp0 == 0)
        rcx_6 = 0x20
    else
        rcx_6 = 0x1f - temp0_1
    
    int32_t rcx_8 = rcx_6 << 0x1a s>> 0x1f
    uint64_t rflags_2
    char temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(r8_1 - 1)
    char rdx_6
    
    if (rcx_8 == 0)
        rdx_6 = 0x20
    else
        rdx_6 = 0x1f - temp0_2
    
    arg1[0xd].d = r8_1
    int32_t rdx_7 = 1 << ((not.d(rcx_8)).b & (0x20 - rdx_6))
    
    if (rdx_7 u>= 0x10000)
        rdx_7 = 0x10000
    
    arg1[0xc].d = rdx_7
    
    if (r8_1 != 0)
        uint64_t rcx_11 = zx.q(rdx_7)
        *(arg1 + 0x64) = rdx_7.w - 1
        int64_t rax_4 = 4 * rcx_11
        
        if (mulu.dp.q(4, rcx_11) u>> 0x40 != zx.o(0))
            rax_4 = -1
        
        int64_t rax_5 = j_sub_140a82f30(rax_4)
        uint64_t rcx_13 = zx.q(arg1[0xd].d)
        arg1[0xe] = rax_5
        int64_t rax_6 = 4 * rcx_13
        
        if (mulu.dp.q(4, rcx_13) u>> 0x40 != zx.o(0))
            rax_6 = -1
        
        int64_t rax_7 = j_sub_140a82f30(rax_6)
        int64_t rcx_15 = arg1[0xe]
        uint64_t count = zx.q(arg1[0xc].d << 2)
        arg1[0xf] = rax_7
        memset(rcx_15, 0xff, count)
    
    int32_t i = 0
    int32_t rdi_1 = 0
    int32_t temp1_1 = arg1[1].d
    bool cond:2_1 = temp1_1 == 0
    
    if (temp1_1 s> 0)
        int16_t* r15_1 = nullptr
        int32_t temp5_1
        
        do
            int16_t rbp_1 = *(r15_1 + *arg1)
            int32_t temp4_1 = arg1[0xd].d
            
            if (rdi_1 u>= temp4_1)
                uint64_t rflags_3
                char temp0_3
                temp0_3, rflags_3 = _bit_scan_reverse(rdi_1 + 1)
                int32_t rcx_16
                
                if (rdi_1 == temp4_1)
                    rcx_16 = 0x20
                else
                    rcx_16 = 0x1f - temp0_3
                
                int32_t rcx_18 = rcx_16 << 0x1a s>> 0x1f
                uint64_t rflags_4
                char temp0_4
                temp0_4, rflags_4 = _bit_scan_reverse(rdi_1)
                char rdx_9
                
                if (rcx_18 == 0)
                    rdx_9 = 0x20
                else
                    rdx_9 = 0x1f - temp0_4
                
                int32_t rdx_10 = 1 << ((not.d(rcx_18)).b & (0x20 - rdx_9))
                
                if (rdx_10 u<= 0x20)
                    rdx_10 = 0x20
                
                sub_140a30d10(&arg1[0xc], rdx_10)
            
            r15_1 = &r15_1[0xa]
            uint64_t r8_4 = zx.q(*(arg1 + 0x64)) & zx.q(rbp_1)
            *(arg1[0xf] + (zx.q(rdi_1) << 2)) = *(arg1[0xe] + (r8_4 << 2))
            *(arg1[0xe] + (r8_4 << 2)) = rdi_1
            rdi_1 += 1
            temp5_1 = arg1[1].d
            cond:2_1 = rdi_1 == temp5_1
        while (rdi_1 s< temp5_1)
    
    int32_t r8_5 = arg1[3].d
    uint64_t rflags_5
    char temp0_5
    temp0_5, rflags_5 = _bit_scan_reverse(r8_5)
    int32_t rcx_23
    
    rcx_23 = cond:2_1 ? 0x20 : 0x1f - temp0_5
    
    int32_t rcx_25 = rcx_23 << 0x1a s>> 0x1f
    uint64_t rflags_6
    char temp0_6
    temp0_6, rflags_6 = _bit_scan_reverse(r8_5 - 1)
    int32_t rdx_12
    
    if (rcx_25 == 0)
        rdx_12 = 0x20
    else
        rdx_12 = 0x1f - temp0_6
    
    result = zx.q(0x20 - rdx_12)
    arg1[0x11].d = r8_5
    int32_t rdx_13 = 1 << ((not.d(rcx_25)).b & result.b)
    
    if (rdx_13 u>= 0x10000)
        rdx_13 = 0x10000
    
    arg1[0x10].d = rdx_13
    
    if (r8_5 != 0)
        *(arg1 + 0x84) = rdx_13.w - 1
        uint64_t rcx_29 = zx.q(rdx_13)
        int64_t rax_18 = 4 * rcx_29
        
        if (mulu.dp.q(4, rcx_29) u>> 0x40 != zx.o(0))
            rax_18 = -1
        
        int64_t rax_19 = j_sub_140a82f30(rax_18)
        uint64_t rcx_31 = zx.q(arg1[0x11].d)
        arg1[0x12] = rax_19
        int64_t rax_20 = 4 * rcx_31
        
        if (mulu.dp.q(4, rcx_31) u>> 0x40 != zx.o(0))
            rax_20 = -1
        
        int64_t rax_21 = j_sub_140a82f30(rax_20)
        int64_t rcx_33 = arg1[0x12]
        uint64_t count_1 = zx.q(arg1[0x10].d << 2)
        arg1[0x13] = rax_21
        result = memset(rcx_33, 0xff, count_1)
    
    if (arg1[3].d s> 0)
        int16_t* rsi_1 = nullptr
        
        do
            int16_t rbp_2 = *(rsi_1 + arg1[2])
            int32_t temp8_1 = arg1[0x11].d
            
            if (i u>= temp8_1)
                uint64_t rflags_7
                char temp0_7
                temp0_7, rflags_7 = _bit_scan_reverse(i + 1)
                int32_t rax_24
                
                if (i == temp8_1)
                    rax_24 = 0x20
                else
                    rax_24 = 0x1f - temp0_7
                
                int32_t rax_26 = rax_24 << 0x1a s>> 0x1f
                uint64_t rflags_8
                char temp0_8
                temp0_8, rflags_8 = _bit_scan_reverse(i)
                char rdx_14
                
                if (rax_26 == 0)
                    rdx_14 = 0x20
                else
                    rdx_14 = 0x1f - temp0_8
                
                int32_t rdx_15 = 1 << ((0x20 - rdx_14) & (not.d(rax_26)).b)
                
                if (rdx_15 u<= 0x20)
                    rdx_15 = 0x20
                
                sub_140a30d10(&arg1[0x10], rdx_15)
            
            rsi_1 = &rsi_1[0xa]
            uint64_t r8_8 = zx.q(*(arg1 + 0x84)) & zx.q(rbp_2)
            *(arg1[0x13] + (zx.q(i) << 2)) = *(arg1[0x12] + (r8_8 << 2))
            result = arg1[0x12]
            *(result + (r8_8 << 2)) = i
            i += 1
        while (i s< arg1[3].d)

return result
