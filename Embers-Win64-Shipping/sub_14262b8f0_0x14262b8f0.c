// 函数: sub_14262b8f0
// 地址: 0x14262b8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int32_t rcx = arg2 - 1
int64_t r14
r14.b = 0xf
int16_t rbx = -1
int32_t arg_8 = rcx
uint64_t rdi
rdi.b = 1
int64_t i_1 = 2
uint64_t r15 = zx.q(*(rax + 0x30))
uint32_t r12 = zx.d(*(rax + 0x32))
int32_t rbp = 0
int16_t rsi = 0
int32_t r9 = arg4 - 1
int64_t r11 = sx.q(r9 * r15.d - 1 + arg2)
int64_t i

do
    if (rcx s>= 0 && r9 s>= 0 && rcx s< r15.d && r9 s< r12)
        uint32_t rcx_1 = zx.d(*(arg1[2] + (r11 << 1)))
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_1 - arg3)
        
        if ((temp3_1 ^ temp2_1) - temp2_1 s<= arg5 && *(r11 + arg1[3]) != 0)
            if (rsi u> rcx_1.w)
                rcx_1.w = rsi
            
            rsi = rcx_1.w
            r14.b &= *(r11 + arg1[4]) u>> 4
            
            if (rbx != 0xffff)
                rdi = zx.q(rdi.b)
                
                if (rbx != *(arg1[5] + (r11 << 1)))
                    rdi = 0
            
            rbp += 1
            rbx = *(arg1[5] + (r11 << 1))
    
    if (rcx + 1 s>= 0 && r9 s>= 0 && rcx + 1 s< r15.d && r9 s< r12)
        uint32_t rcx_3 = zx.d(*(arg1[2] + (r11 << 1) + 2))
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rcx_3 - arg3)
        
        if ((temp5_1 ^ temp4_1) - temp4_1 s<= arg5 && *(r11 + arg1[3] + 1) != 0)
            if (rsi u> rcx_3.w)
                rcx_3.w = rsi
            
            rsi = rcx_3.w
            r14.b &= *(r11 + arg1[4] + 1) u>> 4
            
            if (rbx != 0xffff)
                rdi = zx.q(rdi.b)
                
                if (rbx != *(arg1[5] + (r11 << 1) + 2))
                    rdi = 0
            
            rbp += 1
            rbx = *(arg1[5] + (r11 << 1) + 2)
    
    rcx = arg_8
    r11 += r15
    r9 += 1
    i = i_1
    i_1 -= 1
while (i != 1)
uint32_t rdx_2 = zx.d(r14.b)
int32_t rax_26 = rdx_2 & 1
int32_t rcx_5 = rax_26 + 1

if ((rdx_2.b & 2) == 0)
    rcx_5 = rax_26

int32_t rax_27 = rcx_5 + 1

if ((rdx_2.b & 4) == 0)
    rax_27 = rcx_5

int32_t rcx_6 = rax_27 + 1

if ((rdx_2.b & 8) == 0)
    rcx_6 = rax_27

*arg6 = 0

if (rbp s> 1 && rcx_6 == 1)
    char rcx_7 = *arg6
    
    if (rdi.b != 0)
        rcx_7 = 1
    
    *arg6 = rcx_7

return zx.q(rsi)
