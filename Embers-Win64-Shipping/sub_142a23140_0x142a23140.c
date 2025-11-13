// 函数: sub_142a23140
// 地址: 0x142a23140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = arg1[3]
int32_t rbp = *(arg1 + 0xc)
void* rax_1 = arg1[2] - r10
int64_t r11 = arg1[4]
int32_t rbx = 0x30 - rbp
int64_t rsi = *arg1
int64_t r15 = rax_1 << 3

if (r11 != 0)
    if (rax_1 u> 9)
        rax_1 = 9
    
    r11(arg1[5], r10, &arg1[6], zx.q(rax_1.d))
    r10 = &arg1[6]

void* r8_2 = r10
uint64_t result

if (r15 u<= 0x40)
    int32_t rdx_5 = 0
    int32_t rax_4 = rbx - r15.d
    result = zx.q(rax_4 + 8)
    
    if (rax_4 + 8 s>= 0)
        rbp += 0x40000000
        rdx_5 = result.d
    
    if ((rax_4 + 8 s< 0 || r15 != 0) && rbx s>= rdx_5)
        rbp = rbp + ((rbx - rdx_5) u>> 3 << 3) + 8
        
        do
            result = zx.q(*r10) << rbx.b
            r10 += 1
            rsi |= result
            rbx -= 8
        while (rbx s>= rdx_5)
else
    rbp += (rbx & 0xfffffff8) + 8
    result = sx.q((rbx & 0xfffffff8) + 8) s>> 3
    uint64_t rsi_4 = _bswap(*r10) u>> (0x40 - ((rbx & 0xfffffff8) + 8).b) << (rbx.b & 7)
    r10 += result
    rsi = rsi_4 | *arg1

arg1[3] += r10 - r8_2
*(arg1 + 0xc) = rbp
*arg1 = rsi
return result
