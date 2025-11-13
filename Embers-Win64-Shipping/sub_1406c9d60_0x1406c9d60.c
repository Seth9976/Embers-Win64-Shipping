// 函数: sub_1406c9d60
// 地址: 0x1406c9d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int32_t rsi = 0
__builtin_memset(arg1, 0, 0x2c)
int32_t* r14 = &arg1[2]
r14[7] = 0x80
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
int64_t r12 = arg2[1]
void* i_1 = *arg2
int32_t r15_2 = ((r12 - i_1) s>> 4).d

if (r15_2 s> arg1[1].d)
    sub_1406d17d0(arg1, r15_2)
    int32_t i_3
    
    if (r15_2 u< 4)
        i_3 = 1
    else
        uint32_t r15_3 = r15_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(r15_3 + 8)
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(r15_3 + 7)
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
                    
                    if (rcx_6 != 0)
                        rax_7 = rcx_6
                    
                    *(rax_7 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = 0xffffffff
                    r8_1 += 1
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            int32_t var_78_1 = 0
            int32_t var_74_1 = 1
            int32_t* var_70_1 = r14
            int32_t var_68_1 = 0xffffffff
            int32_t var_64_1 = 0
            int32_t rcx_7 = 0
            int32_t var_60_1 = 0
            int32_t r8_2 = r14[6]
            
            if (r8_2 != 0)
                int32_t* rax_8 = *(r14 + 0x10)
                
                if (rax_8 != 0)
                    r14 = rax_8
                
                int32_t temp0_3
                int32_t temp1_1
                temp0_3:temp1_1 = sx.q(r8_2 - 1)
                int32_t rdx_12 = *r14
                int32_t var_64_3
                
                if (rdx_12 != 0)
                label_1406c9f2b:
                    int32_t rax_14 = ((rdx_12 - 1) & rdx_12) ^ rdx_12
                    int32_t var_74_2 = rax_14
                    uint64_t rflags_3
                    int32_t temp0_4
                    temp0_4, rflags_3 = _bit_scan_reverse(rax_14)
                    int32_t r13_1
                    
                    if (rax_14 == 0)
                        r13_1 = 0x20
                    else
                        r13_1 = 0x1f - temp0_4
                    
                    int32_t var_64_2 = rcx_7 - r13_1 + 0x1f
                    
                    if (rcx_7 - r13_1 + 0x1f s> r8_2)
                        var_64_3 = r8_2
                else
                    while (true)
                        int32_t rdx_13 = rsi + 1
                        rsi = rdx_13
                        var_78_1 = rdx_13
                        rcx_7 += 0x20
                        int32_t var_60_2 = rcx_7
                        
                        if (rdx_13 s> ((temp0_3 & 0x1f) + temp1_1) s>> 5)
                            break
                        
                        rdx_12 = r14[sx.q(rdx_13)]
                        int32_t var_68_2 = 0xffffffff
                        
                        if (rdx_12 != 0)
                            goto label_1406c9f2b
                    
                    var_64_3 = r8_2
            
            int64_t* rdx_15 = arg1
            int128_t var_50 = var_78_1.o
            int64_t var_40_1 = 0xffffffff
            
            if (0 s< r8_2)
                int32_t r10_1 = 0
                
                while (true)
                    int16_t* r9_3 = *rdx_15 + sx.q(r10_1) * 0xc
                    uint64_t r8_5 = zx.q(arg1[9].d - 1) & zx.q(*r9_3)
                    *(r9_3 + 8) = r8_5.d
                    void* rdx_16 = arg1[8]
                    void* rax_19 = &arg1[7]
                    
                    if (rdx_16 != 0)
                        rax_19 = rdx_16
                    
                    *(r9_3 + 4) = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
                    void* rcx_13 = arg1[8]
                    void* rax_21 = &arg1[7]
                    
                    if (rcx_13 != 0)
                        rax_21 = rcx_13
                    
                    *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = r10_1
                    var_40_1.d &= not.d(var_50:4.d)
                    sub_14059bdd0(&var_50)
                    r10_1 = var_40_1:4.d
                    
                    if (r10_1 s>= *(var_50:8.q + 0x18))
                        break
                    
                    rdx_15 = arg1

for (; i_1 != r12; i_1 += 0x10)
    sub_1406c9550(arg1, *i_1, *(i_1 + 8))

return arg1
