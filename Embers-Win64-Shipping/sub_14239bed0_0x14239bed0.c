// 函数: sub_14239bed0
// 地址: 0x14239bed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = arg2

if (*data_143f5a148 == 0)
    int64_t rcx = sx.q(*data_143f5a160)
    int64_t rax_2 = data_143f0f200
    int64_t rdi_1 = rax_2
    
    if (rcx.d != 0xffffffff)
        rdi_1 = rcx << 0x14
    else
        int64_t* rcx_1 = data_143f0f180
        int512_t zmm1
        zmm1.o = data_142d3f800
        int128_t var_78
        __builtin_memset(&var_78, 0xff, 0x20)
        int128_t var_58
        __builtin_memset(&var_58, 0, 0x1c)
        (*(*rcx_1 + 0x1f0))(zx.o(0), zmm1)
        int64_t rcx_2 = sx.q(data_143f0f208)
        
        if (rcx_2.d s> 0)
            int128_t var_68
            int64_t rax_4 = var_68:8.q
            
            if (rax_4 s> 0)
                rdi_1 = rcx_2 * rax_4 s/ 0x64
        
        rax_2 = data_143f0f200
    
    if (rdi_1 != rax_2)
        rax_2 = rdi_1
    
    data_143f0f200 = rax_2

sub_142393c50(arg1)
int32_t rcx_5 = *(arg1 + 0x260)
int32_t rdx_2 = *(arg1 + 0x18) + rcx_5

if (rdx_2 s> *(arg1 + 0x1c))
    sub_140ac1010(arg1 + 0x10, rdx_2)
    rcx_5 = *(arg1 + 0x260)

int32_t i = 0

if (rcx_5 s> 0)
    void* r14_1 = nullptr
    
    do
        void* r13_1 = *(*(arg1 + 0x258) + (r14_1 << 3))
        
        if (r13_1 != 0)
            *(r13_1 + 0x34) = *(arg1 + 0x18)
            uint32_t rdx_3 = zx.d(*(r14_1 + *(arg1 + 0x268)))
            int32_t rsi_1
            void* rdi_5
            
            if (rdx_3.b == 0)
                rdi_5 = arg1 + 0xc8
                rsi_1 = 0x31
            else if (rdx_3 == 1)
                rdi_5 = *(arg1 + 0x190)
                rsi_1 = *(arg1 + 0x198)
            else if (rdx_3 == 2)
                rdi_5 = *(arg1 + 0x1a0)
                rsi_1 = *(arg1 + 0x1a8)
            else
                rdi_5 = nullptr
                rsi_1 = -1
            
            int64_t rbp_1 = sx.q(*(arg1 + 0x18))
            int32_t rax_11 = (rbp_1 + 1).d
            *(arg1 + 0x18) = rax_11
            
            if (rax_11 s> *(arg1 + 0x1c))
                sub_142396a20(arg1 + 0x10)
                rdx_3 = zx.d(rdx_3.b)
            
            int64_t rcx_10 = rbp_1 * 0xd8
            
            if (rcx_10 != neg.q(*(arg1 + 0x10)))
                sub_1423a4e60(rcx_10 + *(arg1 + 0x10), r13_1, rdi_5, rsi_1, rdx_3.b, arg1 + 0x1b0)
        
        i += 1
        r14_1 += 1
    while (i s< *(arg1 + 0x260))
    
    rsi = arg2

bool cond:1 = *(arg1 + 0x264) == 0
*(arg1 + 0x260) = 0

if (not(cond:1))
    sub_1405c5570(arg1 + 0x258, 0)

bool cond:2 = *(arg1 + 0x274) == 0
*(arg1 + 0x270) = 0

if (not(cond:2))
    sub_1405c5510(arg1 + 0x268, 0)

sub_1423b7130(arg1 + 0x1b0)
sub_1423871c0(arg1)
sub_1423915a0(arg1, 0x3f800000, rsi)

if (rsi != 0)
    sub_142393960(arg1 + 0x210)

return sub_142393a40(arg1) __tailcall
