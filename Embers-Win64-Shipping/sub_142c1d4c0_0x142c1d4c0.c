// 函数: sub_142c1d4c0
// 地址: 0x142c1d4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0
uint32_t result = zx.d(arg1[1])
char* rbx = arg4
uint32_t rsi_1 = zx.d(*arg1) << 8
char rsi_2 = rsi_1.b + result.b

if (rsi_1 == neg.d(result))
    result.b = 0
    return result

int32_t r13_1 = *(arg2 + 0xb0) & 0xfffffffe
void* r14 = *(arg2 + 0x80)

if ((rsi_2 & 1) != 0)
    rdi.b = zx.w(*arg4) * 0x100 != neg.w(zx.w(arg4[1]))
    int16_t rdx_3 = zx.w(*rbx) * 0x100
    rbx = &rbx[2]
    result = sub_142c1db90(r14, rdx_3 + zx.w(arg4[1]))
    arg5[2] += result

if ((rsi_2 & 2) != 0)
    uint16_t rax_2
    rax_2.b = zx.w(*rbx) * 0x100 != neg.w(zx.w(rbx[1]))
    int16_t rdx_8 = zx.w(*rbx) * 0x100
    rdi.b |= rax_2.b
    uint16_t rax_3 = zx.w(rbx[1])
    rbx = &rbx[2]
    result = sub_142bfd700(r14, rdx_8 + rax_3)
    arg5[3] += result

if ((rsi_2 & 4) != 0)
    if (r13_1 == 4)
        uint16_t rax_4 = zx.w(rbx[1])
        int16_t rdx_11 = zx.w(*rbx) * 0x100
        int16_t temp3_1 = rdx_11
        rdx_11 += rax_4
        rax_4.b = temp3_1 != neg.w(rax_4)
        rdi.b |= rax_4.b
        result = sub_142c1db90(r14, rdx_11)
        *arg5 += result
    
    rbx = &rbx[2]

if ((rsi_2 & 8) != 0)
    if (r13_1 != 4)
        uint16_t rax_5 = zx.w(rbx[1])
        int16_t rdx_14 = zx.w(*rbx) * 0x100
        int16_t temp4_1 = rdx_14
        rdx_14 += rax_5
        rax_5.b = temp4_1 != neg.w(rax_5)
        rdi.b |= rax_5.b
        result = sub_142bfd700(r14, rdx_14)
        arg5[1] -= result
    
    rbx = &rbx[2]

if ((arg1[1] & 0xf0) != 0)
    char r12_1
    
    if (*(r14 + 0x28) != 0 || *(r14 + 0x34) != 0)
        r12_1 = 1
    else
        r12_1 = 0
    
    if (*(r14 + 0x2c) != 0 || *(r14 + 0x34) != 0)
        result.b = 1
    else
        result.b = 0
    
    char arg_8 = result.b
    
    if (r12_1 != 0 || result.b != 0)
        char* r15_1 = &data_14369a5d0
        void* rdx_17 = *(arg2 + 0xa8)
        void* var_48_1 = rdx_17
        
        if ((rsi_2 & 0x10) != 0)
            if (r12_1 != 0)
                uint16_t r8_2 = zx.w(*rbx)
                uint64_t r9_1 = zx.q(rbx[1])
                int16_t rcx_5 = r8_2 * 0x100
                rdi.b |= rcx_5 != neg.w(r9_1.w)
                char* rcx_6
                
                if (0 != rcx_5 + r9_1.w)
                    rcx_6 = (zx.q(r8_2.b) << 8) + arg3 + r9_1
                else
                    rcx_6 = &data_14369a5d0
                
                int32_t rax_7 = sub_142c1fc30(rcx_6, r14, rdx_17)
                arg5[2] += rax_7
                rdx_17 = var_48_1
            
            rbx = &rbx[2]
        
        if ((rsi_2 & 0x20) != 0)
            if (arg_8 != 0)
                uint16_t r8_4 = zx.w(*rbx)
                uint64_t r9_2 = zx.q(rbx[1])
                int16_t rcx_11 = r8_4 * 0x100
                rdi.b |= rcx_11 != neg.w(r9_2.w)
                char* rcx_12
                
                if (0 != rcx_11 + r9_2.w)
                    rcx_12 = (zx.q(r8_4.b) << 8) + arg3 + r9_2
                else
                    rcx_12 = &data_14369a5d0
                
                int32_t rax_9 = sub_142c1fd30(rcx_12, r14, rdx_17)
                arg5[3] += rax_9
            
            rbx = &rbx[2]
        
        void* r12_2
        
        if ((rsi_2 & 0x40) == 0)
            r12_2 = var_48_1
        else if (r13_1 != 4 || r12_1 == 0)
            r12_2 = var_48_1
            rbx = &rbx[2]
        else
            uint16_t rdx_20 = zx.w(*rbx)
            uint64_t r8_6 = zx.q(rbx[1])
            int16_t rcx_17 = rdx_20 * 0x100
            rdi.b |= rcx_17 != neg.w(r8_6.w)
            char* rcx_18
            
            if (0 != rcx_17 + r8_6.w)
                rcx_18 = (zx.q(rdx_20.b) << 8) + arg3 + r8_6
            else
                rcx_18 = &data_14369a5d0
            
            r12_2 = var_48_1
            int32_t rax_11 = sub_142c1fc30(rcx_18, r14, r12_2)
            *arg5 += rax_11
            rbx = &rbx[2]
        
        if (rsi_2 s< 0 && r13_1 != 4 && arg_8 != 0)
            uint16_t rdx_22 = zx.w(*rbx)
            uint64_t r8_8 = zx.q(rbx[1])
            int16_t rcx_23 = rdx_22 * 0x100
            rdi.b |= rcx_23 != neg.w(r8_8.w)
            
            if (0 != rcx_23 + r8_8.w)
                r15_1 = (zx.q(rdx_22.b) << 8) + arg3 + r8_8
            
            int32_t rax_13 = sub_142c1fd30(r15_1, r14, r12_2)
            arg5[1] -= rax_13

return zx.q(rdi.b)
