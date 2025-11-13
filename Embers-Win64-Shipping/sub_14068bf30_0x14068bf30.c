// 函数: sub_14068bf30
// 地址: 0x14068bf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = arg2[1]
void* i_1 = *arg2
*(arg1 + 0x2c) = 0x80
__builtin_memset(arg1, 0, 0x2c)
void* r14 = &arg1[2]
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
int32_t rsi_2 = ((r12 - i_1) s>> 4).d
arg1[8] = 0
arg1[9].d = 0

if (rsi_2 s> arg1[1].d)
    sub_1406a4c70(arg1, rsi_2)
    int32_t i_3
    
    if (rsi_2 u< 4)
        i_3 = 1
    else
        uint32_t rsi_3 = rsi_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rsi_3 + 8)
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rsi_3 + 7)
        i_3 = 1 << ((0x20 - (0x1f - temp0_2)) & (not.d((0x1f - temp0_1) << 0x1a s>> 0x1f)).b)
    
    int32_t rax_4 = arg1[9].d
    
    if (rax_4 == 0 || rax_4 s< i_3)
        arg1[9].d = i_3
        int64_t rcx_4 = arg1[8]
        
        if (rcx_4 != 0)
            arg1[8] = sub_140a84c80(rcx_4, 0, 0)
            i_3 = arg1[9].d
        
        if (i_3 != 0)
            int64_t rcx_5 = arg1[8]
            
            if (i_3 u> 1)
                arg1[8] = sub_140a84c80(rcx_5, sx.q(i_3) << 2, 0)
            else if (rcx_5 != 0)
                arg1[8] = sub_140a84c80(rcx_5, 0, 0)
            
            if (i_3 s> 0)
                int64_t r8_1 = 0
                uint64_t i_2 = zx.q(i_3)
                uint64_t i
                
                do
                    void* rcx_6 = arg1[8]
                    void* rax_7 = &arg1[7]
                    int64_t rdx_9 = (sx.q(arg1[9].d) - 1) & r8_1
                    
                    if (rcx_6 != 0)
                        rax_7 = rcx_6
                    
                    r8_1 += 1
                    *(rax_7 + (rdx_9 << 2)) = 0xffffffff
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            int32_t r9_1 = *(r14 + 0x18)
            int32_t rcx_7 = 0
            int32_t var_78_1 = 0
            int32_t r8_2 = 0
            int32_t var_74_1 = 1
            void* var_70_1 = r14
            int32_t var_68_1 = 0xffffffff
            int64_t var_64_1 = 0
            
            if (r9_1 != 0)
                void* rax_8 = *(r14 + 0x10)
                
                if (rax_8 != 0)
                    r14 = rax_8
                
                int32_t temp0_3
                int32_t temp1_1
                temp0_3:temp1_1 = sx.q(r9_1 - 1)
                int32_t rdx_12 = *r14
                
                if (rdx_12 != 0)
                label_14068c0f8:
                    int32_t rax_14 = neg.d(rdx_12) & rdx_12
                    uint64_t rflags_3
                    int32_t temp0_4
                    temp0_4, rflags_3 = _bit_scan_reverse(rax_14)
                    int32_t var_74_2 = rax_14
                    int32_t r15_1
                    
                    if (rax_14 == 0)
                        r15_1 = 0x20
                    else
                        r15_1 = 0x1f - temp0_4
                    
                    var_64_1.d = r8_2 - r15_1 + 0x1f
                    
                    if (r8_2 - r15_1 + 0x1f s> r9_1)
                        var_64_1.d = r9_1
                else
                    while (true)
                        rcx_7 += 1
                        r8_2 += 0x20
                        var_78_1 = rcx_7
                        var_64_1:4.d = r8_2
                        
                        if (rcx_7 s> ((temp0_3 & 0x1f) + temp1_1) s>> 5)
                            break
                        
                        int32_t var_68_2 = 0xffffffff
                        rdx_12 = *(r14 + (sx.q(rcx_7) << 2))
                        
                        if (rdx_12 != 0)
                            goto label_14068c0f8
                    
                    var_64_1.d = r9_1
            
            int64_t* rdx_13 = arg1
            int128_t var_50 = var_78_1.o
            int64_t var_40_1 = 0xffffffff
            
            if (0 s< r9_1)
                int32_t r14_1 = 0
                
                while (true)
                    int64_t rcx_9 = sx.q(r14_1) * 5
                    int64_t rax_17 = *rdx_13
                    int64_t* rsi_4 = rax_17 + (rcx_9 << 3)
                    int32_t rax_18 = *(rax_17 + (rcx_9 << 3) + 8)
                    int32_t rcx_10
                    int16_t* rdx_14
                    
                    if (rax_18 == 0)
                        rdx_14 = &data_142d40450
                        rcx_10 = 0
                    else
                        rdx_14 = *rsi_4
                        rcx_10 = rax_18 - 1
                    
                    int32_t rax_20 = sub_1405969c0(rcx_10, rdx_14) & (arg1[9].d - 1)
                    *(rsi_4 + 0x24) = rax_20
                    void* rdx_15 = arg1[8]
                    int64_t r8_4 = sx.q(rax_20)
                    void* rax_21 = &arg1[7]
                    
                    if (rdx_15 != 0)
                        rax_21 = rdx_15
                    
                    rsi_4[4].d = *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
                    void* rax_23 = &arg1[7]
                    void* rcx_16 = arg1[8]
                    
                    if (rcx_16 != 0)
                        rax_23 = rcx_16
                    
                    *(rax_23 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = r14_1
                    var_40_1.d &= not.d(var_50:4.d)
                    sub_14059bdd0(&var_50)
                    r14_1 = var_40_1:4.d
                    
                    if (r14_1 s>= *(var_50:8.q + 0x18))
                        break
                    
                    rdx_13 = arg1

for (; i_1 != r12; i_1 += 0x10)
    sub_1406253f0(arg1, *i_1, *(i_1 + 8))

return arg1
