// 函数: sub_1420c0910
// 地址: 0x1420c0910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0xffffffff

char rsi = (*(arg2 + 0x80)).b
int64_t* r14 = *(arg2 + 0x78)
int64_t count = sx.q(*(r14 + 0x3c))

if (sub_1420c0c90(arg1, arg2, arg3) != 0xffffffff)
    return 0xffffffff

int32_t rcx = *(arg1 + 0xc)
int32_t rdi_1 = arg1[1].d
arg1[1].d = rdi_1 + 1

if ((not.b(rsi) & 1) != 0)
    if (rdi_1 + 1 s> rcx)
        sub_140ce4cd0(arg1, zx.q(rdi_1), count.d)
else if (rdi_1 + 1 s> rcx)
    sub_140ce4c40(arg1, rdi_1, count.d)

void* r15_1 = nullptr
rsi = not.b(rsi) & 1
void* r9_1

if (arg1[1].d != 0)
    void* rcx_3 = *arg1
    
    if (rsi == 0 && (rcx_3.b & 1) != 0)
        rcx_3 = (rcx_3 s>> 1) + arg1
    
    r9_1 = sx.q(rdi_1 * count.d) + rcx_3
else
    r9_1 = nullptr

if (not(test_bit(zx.q(r14[8].d), 9)))
    (*(*r14 + 0xf0))(r14, r9_1)
else
    memset(r9_1, 0, count)

if (arg1[1].d != 0)
    void* rax_6 = *arg1
    
    if (rsi == 0 && (rax_6.b & 1) != 0)
        rax_6 = (rax_6 s>> 1) + arg1
    
    r15_1 = sx.q(rdi_1 * count.d) + rax_6

int64_t r9_3 = *r14
(*(r9_3 + 0xc0))(r14, r15_1, arg3, r9_3)
return zx.q(rdi_1)
