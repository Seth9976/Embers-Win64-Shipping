// 函数: sub_140d1a100
// 地址: 0x140d1a100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = __security_cookie ^ &var_38
int64_t* rax_2 = *(arg1 + 0x20)
void* r13 = *rax_2
*(arg1 + 0x20) = &rax_2[1]
*(arg1 + 0x38) = 0
*(arg1 + 0x30) = 0
uint32_t rdx = zx.d(rax_2[1].b)
*(arg1 + 0x20) = rax_2 + 9
(&data_143e1cd60)[zx.q(rdx)](*(arg1 + 0x18), arg1, 0)
int64_t* rcx_1 = *(arg1 + 0x30)
int64_t* r15

if (rcx_1 == 0)
    r15 = nullptr
else
    r15 = (*(*rcx_1 + 0x130))(rcx_1, *(arg1 + 0x38))

uint64_t count = zx.q(*(r13 + 0xb6))
void* rsi

if (count.w != 0)
    int64_t rcx_2 = count + 0x1e
    
    if (rcx_2 u<= count + 0xf)
        rcx_2 = 0xffffffffffffff0
    
    int64_t rcx_3 = rcx_2 & 0xfffffffffffffff0
    __chkstk(rcx_3)
    void var_58
    rsi = (&var_58 - rcx_3 + 0x2f) & 0xfffffffffffffff0
else
    rsi = nullptr

memset(rsi, 0, count)
char* rax_10 = *(arg1 + 0x20)
int64_t* rbx = *(r13 + 0x50)

while (*rax_10 != 0x16)
    *(arg1 + 0x38) = 0
    int64_t rcx_5 = rbx[8]
    
    if (not(test_bit(rcx_5, 8)))
        void* r14_2 = sx.q(*(rbx + 0x4c)) + rsi
        
        if (not(test_bit(rcx_5, 9)))
            (*(*rbx + 0xf0))(rbx, r14_2)
        else
            memset(r14_2, 0, sx.q(*(rbx + 0x3c) * rbx[7].d))
        
        char* rax_18 = *(arg1 + 0x20)
        uint32_t rcx_11 = zx.d(*rax_18)
        *(arg1 + 0x20) = &rax_18[1]
        (&data_143e1cd60)[zx.q(rcx_11)](*(arg1 + 0x18), arg1, r14_2)
    else
        char* rax_11 = *(arg1 + 0x20)
        uint32_t rcx_6 = zx.d(*rax_11)
        *(arg1 + 0x20) = &rax_11[1]
        (&data_143e1cd60)[zx.q(rcx_6)](*(arg1 + 0x18), arg1, 0)
        int64_t r8 = *(arg1 + 0x38)
        
        if (r8 != 0)
            (*(*rbx + 0xc8))(rbx, sx.q(*(rbx + 0x4c)) + rsi, r8)
    
    rax_10 = *(arg1 + 0x20)
    rbx = rbx[4]

void* result = &rax_10[1]
*(arg1 + 0x20) = result

if (r15 != 0)
    result = sub_1405a9f90(r15, rsi)

for (int64_t* i = *(r13 + 0x80); i != 0; i = i[0xd])
    result.b = not.b((i[8] u>> 0x24).b)
    
    if ((result.b & 1) != 0)
        result = (*(*i + 0xe8))(i, sx.q(*(i + 0x4c)) + rsi)

__security_check_cookie(var_38 ^ &var_38)
return result
