// 函数: sub_141c81f60
// 地址: 0x141c81f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[4]
*arg1 = &data_14320f650
arg1[1] = &data_14320f680
arg1[2] = 0
arg1[3] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xc] = 0
arg1[0xd] = 0
void* rcx = &arg1[0xe]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
int64_t* rcx_1 = &arg1[0x18]
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
arg1[0x16] = 0
arg1[0x17] = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax_2 = rcx_1[2]

if (rax_2 != 0)
    rcx_1 = rax_2

*rcx_1 = 0
rcx_1[1] = 0
arg1[0x1c].d = 0xffffffff
*(arg1 + 0xe4) = 0
arg1[0x1e] = 0
arg1[0x1f].d = 0
arg1[0x20] = 0
arg1[0x21] = 0
int64_t rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = 0
else
    __builtin_memset(rax_3, 0, 0x14)

arg1[0x23] = rax_3
arg1[0x22] = rax_3
__builtin_memset(&arg1[0x25], 0, 0x19)
void*** rax_4 = j_sub_140a82f30(0x240)
void*** rdi = rax_4

if (rax_4 == 0)
    rdi = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rdi = &data_14320fbf0
    sub_141c821f0(&rdi[2])

arg1[0x29] = &rdi[2]
arg1[0x2a] = rdi
arg1[0x2c].b = 0
int32_t arg_14 = 0
void arg_8
int32_t rcx_5 = *sub_140b5e500(&arg_8, 0xe6)
int32_t arg_10 = rcx_5
int64_t r10 = sx.q(sub_140b5ead0(rcx_5))

if (arg1[0x17].d == *(arg1 + 0xe4))
label_141c8218f:
    sub_141c80900(&arg1[0x16], r10.d, &arg_10)
else
    void* rdx_2 = arg1[0x1e]
    void* r9_1 = &arg1[0x1d]
    
    if (rdx_2 != 0)
        r9_1 = rdx_2
    
    int32_t rax_7 = *(r9_1 + (((sx.q(arg1[0x1f].d) - 1) & r10) << 2))
    
    if (rax_7 == 0xffffffff)
    label_141c8218f_1:
        sub_141c80900(&arg1[0x16], r10.d, &arg_10)
    else
        int64_t* r8_6
        
        while (true)
            r8_6 = &arg1[0x16][sx.q(rax_7) * 4]
            
            if (*r8_6 == arg_10.q)
                break
            
            rax_7 = r8_6[3].d
            
            if (rax_7 == 0xffffffff)
                goto label_141c8218f_2
        
        if (rax_7 == 0xffffffff || r8_6 == 0)
        label_141c8218f_2:
            sub_141c80900(&arg1[0x16], r10.d, &arg_10)

arg1[0x2b] = sub_140a491d0(0)
sub_140af2fd0(data_143ddb400, u"Messaging", u"bAllowDelayedMessaging", &arg1[0x2c], &data_143de5780)
return arg1
