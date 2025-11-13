// 函数: sub_142113440
// 地址: 0x142113440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14212f7d0(arg1)
TEB* gsbase
int32_t* r15_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143cd80cc s> *r15_1)
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

void* r14

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    r14 = &arg1[0x48]
    sub_142113b50(arg1, r14, &arg1[0x4a])
else
    r14 = &arg1[0x48]
    void* i = *r14
    
    for (void* rsi_2 = sx.q(*(r14 + 8)) * 0x38 + i; i != rsi_2; i += 0x38)
        sub_142123000(i)

sub_14210e760(r14, 0)
void* i_1 = &data_143f48af0

while (i_1 s< &data_143f48b28)
    int64_t rax_3 = *i_1
    i_1 += 8
    
    if (arg1 == rax_3)
        break

if (sub_140cdd6a0(arg1) s< 0x1d7 && (arg1[0x40].b & 1) != 0)
    arg1[0x2a].b = 5

int64_t rdi_1 = 0
int32_t i_2 = 0

if (arg1[0x91].d s> 0)
    int64_t rsi_3 = 0
    
    do
        int64_t* rcx_4 = *(rsi_3 + arg1[0x90] + 0x10)
        
        if (rcx_4 != 0)
            sub_140cd85e0(rcx_4)
        
        i_2 += 1
        rsi_3 += 0x18
    while (i_2 s< arg1[0x91].d)

if (sub_140d3cb50(arg1) != 0 && *(sub_140d3cb50(arg1) + 0x240) s< 0x132)
    sub_14210fd90()
    int64_t* arg_8
    sub_140cba0f0(&data_143a2e7c0, &arg_8, &data_143f48ac8)
    arg_8 = arg1
    sub_14210fd90()
    sub_1419e9e70(&data_143a2e7c0, &data_143f48ac8, &arg_8)

char rax_9 = *(arg1 + 0x154)

if (rax_9 == 0xe)
    *(arg1 + 0x154) = 1
    *(arg1 + 0x156) = (1 << (1 u% 0x20)).w
else if (rax_9 != 0xd)
    *(arg1 + 0x156) = (1 << (zx.d(rax_9) u% 0x20)).w

if (*(arg1 + 0x152) == 0x11)
    *(arg1 + 0x152) = 0

if ((arg1[0x46].d | *(arg1 + 0x22c) | arg1[0x45].d | *(arg1 + 0x224)) == 0)
    CoCreateGuid(arg1 + 0x224)

arg1[0x47]
sub_142134750(arg1)
int32_t result = *r15_1

if (data_143cd80cc s> result)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 != 0 && data_143de5427 == 0) || data_143cd80c8 != 0 || *(arg1 + 0x20b) s< 0)
    return result

int64_t* rsi_4 = arg1[0x8c]
uint64_t r14_2 = sx.q(arg1[0x8d].d) << 3 u>> 3

if (rsi_4 u> &rsi_4[arg1[0x8d]])
    r14_2 = 0

if (r14_2 != 0)
    do
        int64_t* rcx_12 = *rsi_4
        
        if (rcx_12 != 0)
            sub_140cd85e0(rcx_12)
        
        rsi_4 = &rsi_4[1]
        rdi_1 += 1
    while (rdi_1 != r14_2)

return sub_14210db20(arg1, 0)
