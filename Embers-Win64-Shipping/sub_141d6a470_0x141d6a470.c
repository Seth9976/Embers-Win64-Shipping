// 函数: sub_141d6a470
// 地址: 0x141d6a470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x54]

if (rcx != 0)
    sub_141bdba40(rcx)
    arg1[0x54] = 0

void* rcx_1 = arg1[0x50]

if (rcx_1 == 0 || *(rcx_1 + 0x28) == 0 || arg1[0x55].b == 0)
    return 

void* rax = sub_141d65440(rcx_1 + 0x30)
void* rdi_1 = rax

if (rax == 0)
    return 

int64_t rdx_1 = *arg1
rax = (*(rdx_1 + 0x150))(arg1, rdx_1)
void* rdi_2

if (rax == 0)
    rdi_2 = nullptr
else
    rax = sub_141ba2910(rax, rdi_1, 0)
    rdi_2 = rax
    
    if (rax == 0)
        rdi_2 = nullptr
    else
        void* rax_1 = sub_141d6ec30()
        void* rcx_5 = *(rdi_2 + 0x10)
        int64_t rdx_3 = sx.q(*(rax_1 + 0x38))
        
        if (rdx_3.d s> *(rcx_5 + 0x38) || *(*(rcx_5 + 0x30) + (rdx_3 << 3)) != rax_1 + 0x30)
            rdi_2 = nullptr

arg1[0x54] = rdi_2

if (rdi_2 == 0)
    return 

sub_141d6b680(arg1[0x50])
sub_141d70ea0(arg1[0x54], *(arg1[0x50] + 0x48))
sub_141d6daa0(arg1[0x54], arg1)
sub_141b91c20(arg1[0x54], 0)
