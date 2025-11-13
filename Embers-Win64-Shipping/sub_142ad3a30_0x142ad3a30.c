// 函数: sub_142ad3a30
// 地址: 0x142ad3a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg1)
sub_142aa75d0(9, sub_142ad3c60)
int32_t rax = sub_142b54660(&data_1440166f8, rdi.d, arg2)

if (rax != 0)
    return rax

int32_t rcx_2 = (rdi.d * 0xeb - 0xea) s/ 0x13
int32_t rbx_2 = rcx_2 * 0x1d + ((sx.q(rcx_2) * 0x35b9 + 0x2f34) s/ 0x6540).d
int64_t r8_3 = (sx.q(rcx_2) * 0x35b9 + 0x2f34) s% 0x6540
int32_t rdx_12 = rbx_2 s% 7

if (((rdx_12 - 2) & 0xfffffff9) == 0 && rdx_12 != 8)
    rbx_2 += 1
    rdx_12 = rbx_2 s% 7

if (rdx_12 != 1)
    if (rdx_12 == 0 && r8_3 s> 0x5ae5)
        int32_t r8_5 = ((zx.q((rdi * 3).d) << 2) + 5).d s% 0x13
        
        if (r8_5 s>= (r8_5 s>> 0x1f & 0xffffffed) + 0xc)
            rbx_2 += 1
else if (r8_3 s> 0x4014)
    int32_t rcx_10 = ((zx.q((rdi * 3).d) << 2) + 0x11).d s% 0x13
    
    if (rcx_10 s< (rcx_10 s>> 0x1f & 0xffffffed) + 0xc)
        rbx_2 += 2

sub_142b54bd0(&data_1440166f8, rdi.d, rbx_2, arg2)
return rbx_2
