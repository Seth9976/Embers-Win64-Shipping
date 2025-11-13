// 函数: sub_141a96fb0
// 地址: 0x141a96fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e170b0(arg1 + 0x10)
sub_141e170b0(arg1 + 0x20, arg2)
*(arg1 + 0x48) = 0

if (*(arg1 + 0x4c) s<= 0xffffffff)
    sub_140991380(arg1 + 0x40, 0)

int128_t* rdi = *(arg1 + 0x30)
int64_t result = sx.q(*(arg1 + 0x38))
int64_t* r14_2 = *arg2 + 0x4a0
void* r15 = rdi + result * 0x24

if (rdi != r15)
    void* rbx_1 = &rdi[1]
    
    do
        sub_141ea5640(rdi, r14_2)
        sub_141ea5640(rbx_1, r14_2)
        result = sub_141ea6180(rdi, r14_2)
        
        if (result.b != 0)
            result = sub_141ea6180(rbx_1, r14_2)
            
            if (result.b != 0
                    && (*(rbx_1 + 0x10) != 0 || *(rbx_1 + 0x11) != 0 || *(rbx_1 + 0x12) != 0))
                int64_t rbp_1 = sx.q(*(arg1 + 0x48))
                int32_t rax = (rbp_1 + 1).d
                *(arg1 + 0x48) = rax
                
                if (rax s> *(arg1 + 0x4c))
                    sub_140adefe0(arg1 + 0x40)
                
                int128_t* rdx_6 = *(arg1 + 0x40) + rbp_1 * 0x24
                *rdx_6 = *rdi
                rdx_6[1] = rdi[1]
                result = zx.q(rdi[2].d)
                rdx_6[2].d = result.d
        
        rdi += 0x24
        rbx_1 += 0x24
    while (rdi != r15)

return result
