// 函数: sub_1420c07d0
// 地址: 0x1420c07d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0xffffffff

int32_t rbp = arg1[1].d
int64_t* rsi = *(arg2 + 0x78)
char rdi = (*(arg2 + 0x80)).b
int32_t rdx = *(arg1 + 0xc)
int64_t count = sx.q(*(rsi + 0x3c))
arg1[1].d = rbp + 1

if ((not.b(rdi) & 1) != 0)
    if (rbp + 1 s> rdx)
        sub_140ce4cd0(arg1, zx.q(rbp), count.d)
else if (rbp + 1 s> rdx)
    sub_140ce4c40(arg1, rbp, count.d)

void* r14 = nullptr
rdi = not.b(rdi) & 1
void* r9

if (arg1[1].d != 0)
    void* rcx_3 = *arg1
    
    if (rdi == 0 && (rcx_3.b & 1) != 0)
        rcx_3 = (rcx_3 s>> 1) + arg1
    
    r9 = sx.q(rbp * count.d) + rcx_3
else
    r9 = nullptr

if (not(test_bit(zx.q(rsi[8].d), 9)))
    (*(*rsi + 0xf0))(rsi, r9)
else
    memset(r9, 0, count)

if (arg1[1].d != 0)
    void* rcx_7 = *arg1
    
    if (rdi == 0 && (rcx_7.b & 1) != 0)
        rcx_7 = (rcx_7 s>> 1) + arg1
    
    r14 = sx.q(rbp * count.d) + rcx_7

(*(*rsi + 0xc0))(rsi, r14, arg3)
return zx.q(rbp)
