// 函数: sub_141704b70
// 地址: 0x141704b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141704910(arg1, arg2)
*arg1 = &data_142fc43e8
arg1[8] = 0
int64_t rsi = sx.q(arg3[1].d)
int64_t rbx_1 = *arg3
arg1[9].d = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(&arg1[8], rsi.d, 0)
    memcpy(arg1[8], rbx_1, (rsi << 3).d)
else
    __builtin_memset(arg1 + 0x4c, 0, 0x14)

void* rcx_2 = &arg1[0xc]
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x13].d = 0
arg1[1].b = 0xf
int32_t rbx_2 = arg2[1].d

if (arg1[9].d s<= rbx_2)
    rbx_2 = arg1[9].d

if (rbx_2 s> arg1[0xb].d - *(arg1 + 0x84))
    sub_1409d93a0(&arg1[0xa], rbx_2)
    int32_t rax_5
    
    if (rbx_2 u< 4)
        rax_5 = 1
    else
        uint32_t rbx_3 = rbx_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_3 + 8)
        int32_t rcx_4
        
        if (rbx_3 == 0xfffffff8)
            rcx_4 = 0x20
        else
            rcx_4 = 0x1f - temp0_2
        
        int32_t rcx_6 = rcx_4 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_3 + 7)
        
        if (rcx_6 == 0)
            rax_5 = 1
        else
            rax_5 = 1 << ((not.d(rcx_6)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_9 = arg1[0x13].d
    
    if (rcx_9 == 0 || rcx_9 s< rax_5)
        arg1[0x13].d = rax_5
        sub_1405c0420(&arg1[0xa])

int32_t i = 0

if (arg1[9].d s> 0)
    int64_t* rsi_1 = nullptr
    
    while (i s< arg1[3].d)
        void* const rax_7 = *(rsi_1 + arg1[2])
        
        if (*(rax_7 + 8) != 4)
            rax_7 = nullptr
        
        if (rax_7 != 0)
            int64_t arg_10 = *(rax_7 + 0x10)
            int64_t* var_38 = &arg_10
            int64_t var_30_1 = &arg1[8][sx.q(i)]
            void arg_8
            sub_140bd29a0(&arg1[0xa], &arg_8, &var_38, nullptr)
        
        i += 1
        rsi_1 = &rsi_1[1]
        
        if (arg1[9].d s<= 0)
            break

return arg1
