// 函数: sub_140a1fd80
// 地址: 0x140a1fd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
int64_t* rax = sub_140a22cb0(&var_28, nullptr, 0xff)
*(*rax + 0x10) = 0xff
void* rcx_1 = *rax
int32_t r8_1 = rax[2].d
int64_t* rdx = rax[1]
int64_t* rdi = *(rcx_1 + 0x18)
int64_t* rbx = rdi
int64_t* arg_8 = rbx

if (rdi != 0)
    rdi[9].d += 1
    rbx = arg_8

sub_1408c3b70(rcx_1, rdx, r8_1, 1)
void* rcx_2 = *arg1
void* rax_1 = *(rcx_2 + 0x20)

if (rax_1 != 0)
    rcx_2 = rax_1

void** rdx_1 = rcx_2 + (sx.q(arg2) << 3)

if (rdx_1 != &arg_8)
    int64_t* rcx_3 = *rdx_1
    *rdx_1 = rdi
    
    if (rcx_3 != 0)
        return sub_140a2f7d0(rcx_3)
else if (rdi != 0)
    return sub_140a2f7d0(rbx)

return &arg_8
