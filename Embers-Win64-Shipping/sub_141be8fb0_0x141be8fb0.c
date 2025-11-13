// 函数: sub_141be8fb0
// 地址: 0x141be8fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1b4) |= 0x40
char rcx = *(arg1 + 0x1b4)
int64_t rbx = 0
int64_t* rdi = arg1[0x2f]
uint64_t r15_1 = sx.q(arg1[0x30].d) << 3 u>> 3

if (rdi u> &rdi[arg1[0x30]])
    r15_1 = 0

if (r15_1 != 0)
    do
        void* rsi_1 = *rdi
        
        if ((*(*(rsi_1 + 0x28) + 0x38))(rsi_1 + 0x28) == 1)
            sub_141be8cc0(rsi_1)
        
        rdi = &rdi[1]
        rbx += 1
    while (rbx != r15_1)
    
    rcx = *(arg1 + 0x1b4)

*(arg1 + 0x1b4) = rcx & 0xbf
sub_141bf4410(arg1)
void* result = (*(*arg1 + 0x150))(arg1)

if (result == 0)
    return result

int64_t arg_8
sub_140d3a3a0(&arg_8, arg1)
void* rcx_6 = *(result + 0x188)
void* rcx_7

if (rcx_6 == 0)
    rcx_7 = result + 0x308
else
    rcx_7 = *(rcx_6 + 0xc8)

sub_1420eb770(rcx_7, arg_8)
void* rcx_8 = *(result + 0x188)
void* rcx_9

if (rcx_8 == 0)
    rcx_9 = *(result + 0x300)
else
    rcx_9 = *(rcx_8 + 0xc0)

sub_1423e5e50(rcx_9, arg1)
return sub_141bf4410(arg1) __tailcall
