// 函数: sub_1429b3060
// 地址: 0x1429b3060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x80)
int32_t rcx = *(arg1 + 0x78)
void* r14 = nullptr
int32_t rdi_1

if (rdi s< rcx || *(arg1 + 0x84) s< *(arg1 + 0x7c))
    rdi_1 = 0
else
    rdi_1 = rdi - rcx

int64_t r13 = sx.q((arg6 - arg5 + 1) * (rdi_1 + 1))
sub_1429b17e0(arg4, (*(arg1 + 0x98) - *(arg1 + 0x90)) s>> 5)
sub_1429b1670(arg3, r13)
char var_b8 = 0
int64_t rsi_1 = sx.q(rdi_1 + 1)
int32_t var_d0 = 1
int64_t rbx = sx.q((rdi_1 + 1) * arg5)
void var_90
sub_1429bf9b0(arg2, 
    sub_142984980(&var_90, 0, *arg3 - ((sx.q(*(arg1 + 0x78)) + rbx) << 2), 4, rsi_1 << 2, 1, 1, 
        (zx.o(0)).q, 0, 0))
sub_142985580(*arg4, r13)
int64_t rdi_4 = rsi_1 << 3
var_b8.q = (zx.o(0)).q
int64_t var_c0
var_c0.d = 1
var_d0.q = 4
sub_1429bf7f0(arg2, &data_142d94068, 
    sub_1429bf780(&var_90, 2, **arg4 - ((sx.q(*(arg1 + 0x78)) + rbx) << 3), 8, rdi_4, 4, 1, 1, 0, 
        0, 0))

if (*(arg1 + 0x40) != 0)
    sub_142985580(*arg4 + 0x18, r13)
    var_b8.q = (zx.o(0)).q
    var_c0.d = 1
    var_d0.q = 4
    sub_1429bf7f0(arg2, "ZBack", 
        sub_1429bf780(&var_90, 2, *(*arg4 + 0x18) - ((sx.q(*(arg1 + 0x78)) + rbx) << 3), 8, rdi_4, 
            4, 1, 1, 0, 0, 0))

sub_142985580(*arg4 + 0x30, r13)
var_b8.q = (zx.o(0)).q
var_c0.d = 1
var_d0.q = 4
int32_t* rax_24 = sub_1429bf780(&var_90, 2, *(*arg4 + 0x30) - ((sx.q(*(arg1 + 0x78)) + rbx) << 3), 
    8, rdi_4, 4, 1, 1, 0, 0, 0)
sub_1429bf7f0(arg2, &(*U"DEFGAB")[4], rax_24)
void* i_1
void* i = *sub_14297bd10(arg1 + 0x30, &i_1)
i_1 = i
void var_98
int64_t* result = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    arg1 + 0x30, &var_98)

for (; i != *result; i = i_1)
    int64_t rcx_19 = sx.q(*(r14 + *(arg1 + 0xa8)))
    
    if (rcx_19.d s> 2)
        int64_t rdi_5 = rcx_19 * 3
        sub_142985580(*arg4 + (rdi_5 << 3), r13)
        var_b8.q = (zx.o(0)).q
        var_c0.d = 1
        var_d0.q = 4
        sub_1429bf7f0(arg2, i + 0x20, 
            sub_1429bf780(&var_90, 2, 
                *(*arg4 + (rdi_5 << 3)) - ((sx.q(*(arg1 + 0x78)) + rbx) << 3), 8, rdi_4, 4, 1, 1, 
                var_b8, 0, 0))
    
    r14 += 4
    sub_14297bb00(&i_1)
    result = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        arg1 + 0x30, &var_98)

return result
