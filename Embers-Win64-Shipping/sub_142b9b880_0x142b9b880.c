// 函数: sub_142b9b880
// 地址: 0x142b9b880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = -1
int64_t r9 = -1
char* rsi = arg2

do
    r9 += 1
while (arg2[r9] != 0)

bool cond:0_1

do
    cond:0_1 = arg3[rax + 1] != 0
    rax += 1
while (cond:0_1)
char* _Destination = nullptr
int32_t rbx_1 = (rax + 1).d + r9.d

if (rbx_1 s> 0)
    char* _Destination_1 = (*(arg1 + 8))(arg1, zx.q(rbx_1))
    _Destination = _Destination_1
    
    if (_Destination_1 == 0)
        return nullptr
    
    memset(_Destination_1, 0, sx.q(rbx_1))
else if (rbx_1 s< 0)
    return nullptr

char* rax_1 = strrchr(rsi, 0x2f)

if (rax_1 == 0)
    *_Destination = 0
else
    void* rbx_3 = rax_1 - rsi
    strncpy(_Destination, rsi, rbx_3 + 1)
    *(rbx_3 + _Destination + 1) = 0
    rsi = &rax_1[1]

void* rcx_3 = &_Destination[-1]
bool cond:2_1

do
    cond:2_1 = *(rcx_3 + 1) != 0
    rcx_3 += 1
while (cond:2_1)
int64_t rdx_2 = 0
char i

do
    i = arg3[rdx_2]
    *(rcx_3 + rdx_2) = i
    rdx_2 += 1
while (i != 0)
void* rcx_4 = &_Destination[-1]
bool cond:3_1

do
    cond:3_1 = *(rcx_4 + 1) != 0
    rcx_4 += 1
while (cond:3_1)
int64_t rdx_3 = 0
char i_1

do
    i_1 = rsi[rdx_3]
    *(rcx_4 + rdx_3) = i_1
    rdx_3 += 1
while (i_1 != 0)
return _Destination
