// 函数: sub_142978b80
// 地址: 0x142978b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x60)
int32_t rdi = arg2

if (arg2 s>= rax)
    int32_t rax_1 = *(arg1 + 0x64)
    
    if (arg2 s> rax_1)
        rdi = rax_1 - 1
else
    rdi = rax

sub_142988dd0(*(arg1 + 0x50), rdi)
int32_t r9 = 0

if (*(arg1 + 0x58) == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x68) s> 0)
        int64_t rcx_1 = 0x68
        
        do
            rcx_1 += 8
            i += 1
            *(rcx_1 + *(arg1 + 0x190) - 8) = 0
            *(rcx_1 + *(arg1 + 0x190) - 4) = 0
        while (i s< *(arg1 + 0x68))

if ((rdi.b & 1) != 0)
    return memcpy(arg3, *(arg1 + 0x190) + 0x68, *(arg1 + 0x68) << 3) __tailcall

for (int16_t* i_1 = nullptr; i_1 s< 0x68; )
    void* rcx_4 = *(arg1 + 0x190)
    *(i_1 + rcx_4) = *(rcx_4 + 0x68)
    *(i_1 + rcx_4 + 2) = *(rcx_4 + 0x6a)
    *(i_1 + rcx_4 + 4) = *(rcx_4 + 0x6c)
    *(i_1 + rcx_4 + 6) = *(rcx_4 + 0x6e)
    i_1 = &i_1[4]
    int64_t r8_3 = *(arg1 + 0x190)
    int64_t rax_9 = sx.q(*(arg1 + 0x68))
    int64_t rcx_5 = sx.q(rax_9.d + r9)
    r9 += 1
    *(r8_3 + (rcx_5 << 3) + 0x68) = *(r8_3 + (rax_9 << 3) + 0x58)
    *(r8_3 + (rcx_5 << 3) + 0x6a) = *(r8_3 + (rax_9 << 3) + 0x5a)
    *(r8_3 + (rcx_5 << 3) + 0x6c) = *(r8_3 + (rax_9 << 3) + 0x5c)
    *(r8_3 + (rcx_5 << 3) + 0x6e) = *(r8_3 + (rax_9 << 3) + 0x5e)

return sub_14298a150(*(arg1 + 0x68), *(arg1 + 0x190), arg3) __tailcall
