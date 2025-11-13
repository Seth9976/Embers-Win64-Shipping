// 函数: sub_140822520
// 地址: 0x140822520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (data_14396f02c != 0)
    int32_t rax_1 = arg2[1].d
    int32_t rcx = arg1[1].d
    
    if (rax_1 s> rcx)
        rbx[1].d = rax_1
        
        if (rax_1 s> *(rbx + 0xc))
            sub_1405c4e40(rbx)
    else if (rax_1 s< rcx && rax_1 != rcx)
        rbx[1].d = rax_1
        sub_1405dad20(rbx)
    
    return memcpy(*rbx, *arg2, rbx[1].d << 5) __tailcall

if (rbx == arg2)
    return 

void* rsi_1 = *arg2
int32_t r8_4 = *(arg1 + 0xc)
int32_t i_1 = arg2[1].d
arg1[1].d = i_1

if (i_1 == 0 && r8_4 == 0)
    *(arg1 + 0xc) = i_1
    return 

sub_14083a1f0(arg1, i_1, r8_4)
int64_t* r8_5 = *rbx

if (i_1 == 0)
    return 

int64_t* rdx_4 = rsi_1 + 8
void* rcx_5 = r8_5 + 0x12
int32_t i

do
    rcx_5 += 0x20
    *r8_5 = rdx_4[-1]
    r8_5 = &r8_5[4]
    int64_t rax_4 = *rdx_4
    rdx_4 = &rdx_4[4]
    *(rcx_5 - 0x2a) = rax_4
    *(rcx_5 - 0x22) = rdx_4[-3].w
    *(rcx_5 - 0x20) = 0xffffffff
    *(rcx_5 - 0x1a) = rdx_4[-2].d
    i = i_1
    i_1 -= 1
while (i != 1)
