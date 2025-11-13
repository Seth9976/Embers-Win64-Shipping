// 函数: sub_14194c750
// 地址: 0x14194c750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(*(arg1 + 0x3c))
int64_t r11 = r15 * 0x28
uint32_t r8 = *(r11 + &data_1439c85ec)
uint32_t rax_1 = r8
uint32_t r10 = *(r11 + 0x1439c85e8)
uint32_t r9_1 = *(arg1 + 0x60) u>> arg2.b
int32_t rcx_1 = 1

if (r9_1 u>= r8)
    rax_1 = r9_1

uint32_t rax_5 = r10

if (r9_1 u>= r10)
    rax_5 = r9_1

int32_t rax_9 = *(arg1 + 0x68)
int32_t rbx_2 = divu.dp.d(0:(rax_1 - 1 + r8), r8) * divu.dp.d(0:(rax_5 - 1 + r10), r10)
    * (&data_1439c85f4)[r15 * 0xa]

if (rax_9 u<= 1)
    rax_9 = 0

if (rax_9 != 0)
    rcx_1 = rax_9

int32_t rax_10 = 1

if ((*(arg1 + 0xe8) & 1) != 0)
    rax_10 = 6

int64_t rsi = sx.q(rax_10 * rcx_1 * arg2 + arg3) << 3
char var_40
int32_t var_38
int32_t var_30
void*** rdx_1

if (*(rsi + *(arg1 + 0xa0)) == 0)
    void*** rax_16 = j_sub_140a82f30(0x58)
    
    if (rax_16 == 0)
        rdx_1 = nullptr
    else
        var_30 = 0
        var_38 = 0
        var_40 = 0
        rdx_1 = sub_1419058e0(rax_16, 0, rbx_2, 2, 0, 0, 0, 0)
    
    int64_t rax_18 = *(arg1 + 0xa0)
    int64_t* rcx_3 = *(rsi + rax_18)
    *(rsi + rax_18) = rdx_1
    
    if (rdx_1 != 0)
        rdx_1[1].d += 1
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1)
            (**rcx_3)(rcx_3, 1)

int64_t* rbx_4 = *(rsi + *(arg1 + 0xa0))

if (rbx_4 != 0)
    rbx_4[1].d += 1

rdx_1.b = 1
int64_t rsi_1 = r15 * 0x1c
void* rax_20 = sub_14190d690(*(arg1 + 0x70), rdx_1.b)
int32_t r9_2 = *(arg1 + 0x84)
int32_t r8_3 = data_1439c7498 - 1
int32_t r10_1 = *(arg1 + 0x80)
int64_t rdx_2 = sx.q(r8_3) * 5
int64_t rcx_6 = *(rax_20 + 8)

if (*(rcx_6 + (rdx_2 << 3) + 0x10) != r9_2 || *(rcx_6 + (rdx_2 << 3) + 0x14) != r10_1)
    var_38 = *(arg1 + 0x34)
    var_40.d = 0xffffffff
    sub_14190a090(*(arg1 + 0x70), rax_20, r8_3, r9_2, r10_1, 0xffffffff)

data_143effcd8(0x88eb, zx.q(rbx_4[3].d))
int32_t rax_22 = *(arg1 + 0x68)

if (rax_22 u<= 1)
    rax_22 = 0

if (rax_22 == 0)
    if ((&data_143efedb8)[r15 * 7].b == 0)
        data_143effac0(0xd05, 1)
        uint64_t rcx_9 = zx.q(arg3 + 0x8515)
        
        if ((*(arg1 + 0xe8) & 1) == 0)
            rcx_9 = zx.q(*(arg1 + 0x84))
        
        data_143effa68(rcx_9, zx.q(arg2), zx.q(*(rsi_1 + &data_143efedb0)), 
            zx.q(*(rsi_1 + &data_143efedb0:4)), 0, var_40, var_38, var_30)
        data_143effac0(0xd05, 4)
    else
        uint64_t rcx_8 = zx.q(arg3 + 0x8515)
        
        if ((*(arg1 + 0xe8) & 1) == 0)
            rcx_8 = zx.q(*(arg1 + 0x84))
        
        data_143effc58(rcx_8, zx.q(arg2), 0)

int64_t result = data_143effcd8(0x88eb, 0)
rbx_4[1].d -= 1

if (rbx_4[1].d != 1)
    return result

return (**rbx_4)(rbx_4, 1)
