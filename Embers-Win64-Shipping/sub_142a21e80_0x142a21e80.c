// 函数: sub_142a21e80
// 地址: 0x142a21e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(arg4)
int64_t i = i_1
char* rsi_1 = (i_1 * 3 + sx.q(arg3)) * 0xb + arg2
int32_t result = sub_142a20ce0(arg1, zx.d(*rsi_1))

if (result == 0)
    return result

do
    i += 1
    int32_t rbp_1 = 0
    int32_t rdi_4 = ((zx.d(rsi_1[1]) * (*(arg1 + 0x1c) - 1)) u>> 8) + 1
    
    if (arg1[3].d s< 0)
        sub_142a2e350(arg1)
    
    int64_t r8 = arg1[2]
    uint64_t rcx_5 = zx.q(rdi_4) << 0x38
    
    if (r8 u>= rcx_5)
        rbp_1 = 1
        rdi_4 = *(arg1 + 0x1c) - rdi_4
        r8 -= rcx_5
    
    uint32_t rdx_1 = zx.d(*(zx.q(rdi_4) + &data_143609200))
    arg1[3].d -= rdx_1
    arg1[2] = r8 << rdx_1.b
    *(arg1 + 0x1c) = rdi_4 << rdx_1.b
    
    if (rbp_1 != 0)
        int32_t rax_7 = sub_142a20ce0(arg1, zx.d(rsi_1[2]))
        void* rsi_3
        int32_t rdi_6
        
        if (rax_7 != 0)
            if (sub_142a20ce0(arg1, zx.d(rsi_1[3])) != 0)
                if (sub_142a20ce0(arg1, zx.d(rsi_1[6])) != 0)
                    int32_t rax_16 = sub_142a20ce0(arg1, zx.d(rsi_1[8]))
                    uint64_t rsi_4 = 0
                    int32_t rbp_2 =
                        sub_142a20ce0(arg1, zx.d(rsi_1[sx.q(rax_16 + 9)])) + (rax_16 << 1)
                    char* rdi_9 = (&data_1436014a8)[sx.q(rbp_2)]
                    
                    for (char j = *rdi_9; j != 0; j = *rdi_9)
                        rdi_9 = &rdi_9[1]
                        rsi_4 = zx.q(sub_142a20ce0(arg1, zx.d(j)) + (rsi_4 << 1).d)
                    
                    rdi_6 = (8 << rbp_2.b) + 3 + rsi_4.d
                else if (sub_142a20ce0(arg1, zx.d(rsi_1[7])) != 0)
                    rdi_6 = ((sub_142a20ce0(arg1, 0xa5) << 1) + 7).d + sub_142a20ce0(arg1, 0x91)
                else
                    rdi_6 = sub_142a20ce0(arg1, 0x9f) + 5
            else
                int32_t rax_9 = sub_142a20ce0(arg1, zx.d(rsi_1[4]))
                
                if (rax_9 != 0)
                    rdi_6 = sub_142a20ce0(arg1, zx.d(rsi_1[5])) + 3
                else
                    rdi_6 = rax_9 + 2
            
            rsi_3 = arg2 + 0x16
        else
            rsi_3 = arg2 + 0xb
            rdi_6 = rax_7 + 1
        
        char r12_1 = *(i + &data_1436014c0:7)
        rsi_1 = rsi_3 + zx.q(*(i + 0x143601490)) * 0x21
        uint32_t rax_23 = (*(arg1 + 0x1c) + 1) u>> 1
        uint64_t rbp_4 = zx.q(rax_23) << 0x38
        
        if (arg1[3].d s< 0)
            sub_142a2e350(arg1)
        
        int64_t rax_24 = arg1[2]
        
        if (rax_24 u>= rbp_4)
            *(arg1 + 0x1c) -= rax_23
            arg1[2] = rax_24 - rbp_4
            rdi_6 = neg.d(rdi_6)
        else
            *(arg1 + 0x1c) = rax_23
        
        arg1[3].d -= 1
        *(arg1 + 0x1c) *= 2
        arg1[2] *= 2
        *(arg5 + (zx.q(r12_1) << 1)) = rdi_6.w
        int32_t rax_31
        
        if (i != 0x10)
            rax_31 = sub_142a20ce0(arg1, zx.d(*rsi_1))
        
        if (i == 0x10 || rax_31 == 0)
            return zx.q(i_1.d + 1)
    else
        rsi_1 = zx.q(*(i + 0x143601490)) * 0x21 + arg2
    
    i_1 = zx.q(i_1.d + 1)
while (i != 0x10)

return 0x10
