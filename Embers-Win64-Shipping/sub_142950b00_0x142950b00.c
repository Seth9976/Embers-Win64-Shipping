// 函数: sub_142950b00
// 地址: 0x142950b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0x20
__chkstk(0x20)
*arg1 += arg3
int64_t rsi = arg1[1]
int64_t r15 = arg3
int64_t rdi = arg1[2]
void* r13 = arg2
int64_t rbp = arg1[3]
int64_t rbx = arg1[4]
int32_t rcx = arg1[5].d

if (rcx == 0)
label_142950c22:
    uint64_t r12_3 = zx.q(r15.d) & 7
    void* rdx_2 = r13 - r12_3 + r15
    
    if (r13 != rdx_2)
        uint64_t i_3 = zx.q(arg1[6].d)
        char* r8_1 = r13 + 6
        
        do
            uint64_t rcx_32 = ((((((zx.q(r8_1[1]) << 8 | zx.q(*r8_1)) << 8 | zx.q(r8_1[-1])) << 8
                | zx.q(r8_1[-2])) << 8 | zx.q(r8_1[-3])) << 8 | zx.q(r8_1[-4])) << 8 | zx.q(r8_1[-5]))
                << 8 | zx.q(r8_1[-6])
            rbx ^= rcx_32
            
            if (i_3.d s> 0)
                uint64_t i_2 = i_3
                uint64_t i
                
                do
                    int64_t rsi_3 = rsi + rdi
                    int64_t rbp_3 = rbp + rbx
                    int64_t rdi_5 = rol.q(rdi, 0xd) ^ rsi_3
                    int64_t rbx_5 = rol.q(rbx, 0x10) ^ rbp_3
                    int64_t rbp_4 = rbp_3 + rdi_5
                    rsi = rol.q(rsi_3, 0x20) + rbx_5
                    rdi = rol.q(rdi_5, 0x11) ^ rbp_4
                    rbx = rol.q(rbx_5, 0x15) ^ rsi
                    rbp = rol.q(rbp_4, 0x20)
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            r8_1 = &r8_1[8]
            rsi ^= rcx_32
            result = &r8_1[-6]
        while (result != rdx_2)
    
    if (r12_3.d != 0)
        result = memcpy(&arg1[7], rdx_2, r12_3.d)
    
    arg1[5].d = r12_3.d
    arg1[1] = rsi
    arg1[2] = rdi
    arg1[3] = rbp
    arg1[4] = rbx
else
    uint64_t r12_1 = zx.q(8 - rcx)
    void* rcx_2 = &arg1[7] + zx.q(rcx)
    
    if (arg3 u>= r12_1)
        memcpy(rcx_2, arg2, r12_1.d)
        r15 -= r12_1
        r13 += r12_1
        uint64_t rcx_17 = ((((
            ((zx.q(*(arg1 + 0x3f)) << 8 | zx.q(*(arg1 + 0x3e))) << 8 | zx.q(*(arg1 + 0x3d))) << 8
            | zx.q(*(arg1 + 0x3c))) << 8 | zx.q(*(arg1 + 0x3b))) << 8 | zx.q(*(arg1 + 0x3a))) << 8
            | zx.q(*(arg1 + 0x39))) << 8 | zx.q(arg1[7].b)
        result = zx.q(arg1[6].d)
        rbx ^= rcx_17
        
        if (result.d s> 0)
            uint64_t i_1
            
            do
                int64_t rsi_1 = rsi + rdi
                int64_t rbp_1 = rbp + rbx
                int64_t rdi_2 = rol.q(rdi, 0xd) ^ rsi_1
                int64_t rbx_2 = rol.q(rbx, 0x10) ^ rbp_1
                int64_t rbp_2 = rbp_1 + rdi_2
                rsi = rol.q(rsi_1, 0x20) + rbx_2
                rdi = rol.q(rdi_2, 0x11) ^ rbp_2
                rbx = rol.q(rbx_2, 0x15) ^ rsi
                rbp = rol.q(rbp_2, 0x20)
                i_1 = result
                result -= 1
            while (i_1 != 1)
        
        rsi ^= rcx_17
        goto label_142950c22
    
    result = memcpy(rcx_2, arg2, arg3.d)
    arg1[5].d += r15.d

return result
