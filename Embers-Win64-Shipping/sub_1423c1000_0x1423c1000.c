// 函数: sub_1423c1000
// 地址: 0x1423c1000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi

if (arg1[0x1a] == 0)
    rsi = 0
else
    char rax_2 = (*(*arg1 + 0x318))()
    void* rcx = arg1[0x1a]
    
    if (rax_2 == 0)
        rsi = (*(rcx + 0x20)).b
    else
        rsi = (*(*(rcx + 0x28) + 4)).b

char rsi_1 = rsi - sub_1423c1a70(arg1)
wchar16 const* const r8

if ((arg1[0xc].b & 4) == 0)
    r8 = u"Streamed"
    
    if ((*(arg1 + 0x3d) & 2) != 0)
        r8 = u"NeverStreamed"
else
    r8 = u"Virtual"

int32_t* rax_5 = arg1[0x1a]
int32_t rdx_1
uint32_t r9

if (rax_5 == 0)
    r9 = 0
    rdx_1 = 0
else
    void* rcx_2 = *(rax_5 + 0x28)
    
    if (rcx_2 == 0)
        r9 = rax_5[3]
        rdx_1 = rax_5[1]
    else
        r9 = zx.d(*(rcx_2 + 0x20))
        rdx_1 = rax_5[1]

int32_t rdx_2 = rdx_1 s>> rsi_1

if (rax_5 != 0)
    *rax_5

int32_t rcx_4 = 1

if (rdx_2 s>= 1)
    rcx_4 = rdx_2

int64_t var_10 = (&data_1439c85e0)[sx.q(r9) * 5]
int32_t var_18 = rcx_4
sub_140a2e390(arg2, u"%s %dx%d [%s]", r8)
return arg2
