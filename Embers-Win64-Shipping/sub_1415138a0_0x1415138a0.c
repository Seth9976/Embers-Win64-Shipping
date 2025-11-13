// 函数: sub_1415138a0
// 地址: 0x1415138a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg3 + 0x10)
int64_t rax_1 = *(arg3 + 0x20)
uint64_t rbp = zx.q(arg4)
void* result_2 = *(arg3 + 0x28)
void* var_68
*(arg3 + 0x28) = &var_68
var_68 = arg3 + 0x10
char var_50 = 0
*(arg3 + 0x30) += 1
uint64_t rcx = zx.q(*(arg1 + 0xb028))
int32_t rax_2 = 8 * rcx

if (mulu.dp.q(8, rcx) u>> 0x40 != zx.o(0))
    rax_2 = -1

int64_t rax_3 = sub_14081d830(rax_2, arg3 + 0x10, 1, 0)
uint64_t rdi = 0
int32_t rax_4 = *(arg1 + 0xb028)
int32_t rdx_1 = 0

if (rax_4 != 0)
    do
        uint64_t rcx_2 = zx.q(rdx_1)
        uint32_t r8 = zx.d(*(*(arg1 + 0xb018) + (rcx_2 << 1)))
        *(rax_3 + (rcx_2 << 3) + 4) = rdx_1.w
        int32_t rax_6
        
        if (r8 != 0xffff)
            rax_6 = ((zx.d(*(*(arg1 + 0xb000) + (rcx_2 << 3) + 7)) & 0xf) + 1) * r8
        else
            rax_6 = -1
        
        *(rax_3 + (rcx_2 << 3)) = rax_6
        rdx_1 += 1
        rax_4 = *(arg1 + 0xb028)
    while (rdx_1 u< rax_4)

sub_1414f04e0(rax_3, rax_4, arg5)
int32_t rcx_4 = *(arg1 + 0xb02c)

if (rcx_4 u>= rbp.d)
    rbp = zx.q(rcx_4)

int32_t rcx_5 = *(arg1 + 0xb028)

if (rcx_5 u<= rbp.d)
    rbp = zx.q(rcx_5)

uint64_t r13 = zx.q(rbp.d)
int32_t rax_11 = 8 * r13

if (mulu.dp.q(8, r13) u>> 0x40 != zx.o(0))
    rax_11 = -1

void* rax_12 = sub_14081d830(rax_11, arg3 + 0x10, 1, 0)
void* rax_13 = sub_14081d830(rbp.d, arg3 + 0x10, 1, 0)
uint64_t rcx_8 = zx.q(*(arg1 + 0xb028))
int32_t rax_14 = 2 * rcx_8

if (mulu.dp.q(2, rcx_8) u>> 0x40 != zx.o(0))
    rax_14 = -1

int64_t rax_15 = sub_14081d830(rax_14, arg3 + 0x10, 1, 0)
memset(rax_15, 0xff, zx.q(*(arg1 + 0xb028)) * 2)
int32_t i = 0

if (rbp.d != 0)
    void* rsi_1 = rax_13
    void* r10_1 = rax_12
    
    do
        uint64_t r9 = zx.q(*(rax_3 - rax_12 + r10_1 + 4))
        r10_1 += 8
        rsi_1 += 1
        *(r10_1 - 8) = *(*(arg1 + 0xb000) + (r9 << 3))
        *(rsi_1 - 1) = *(r9 + *(arg1 + 0xb020))
        *(rax_15 + (r9 << 1)) = i.w
        i += 1
    while (i u< rbp.d)

memcpy(*(arg1 + 0xb000), rax_12, (rbp << 3).d)
void* result = memcpy(*(arg1 + 0xb020), rax_13, r13.d)
int32_t i_1 = 0

if (*(arg1 + 0xb030) u> 0)
    do
        int64_t r8_6 = *(arg1 + 0xb008)
        void* result_3 = *(r8_6 + (zx.q(i_1) << 3))
        void* result_1 = result_3
        result = result_3 u>> 0x20
        int16_t r9_1 = *(rax_15 + (zx.q(result.w) << 1))
        
        if (r9_1 != 0xffff)
            result_1:4.d = (result.d & 0xffff0000) | zx.d(r9_1)
            result = result_1
            *(r8_6 + (rdi << 3)) = result
            rdi = zx.q(rdi.d + 1)
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0xb030))

*(arg1 + 0xb028) = rbp.d
*(arg1 + 0xb030) = rdi.d

if (var_50 == 0)
    void* rax_21 = var_68
    char var_50_1 = 1
    *(rax_21 + 0x20) -= 1
    void* rcx_17 = var_68
    
    if (rax_1 != *(rcx_17 + 0x10))
        sub_140b16b40(rcx_17, rax_1)
        rcx_17 = var_68
    
    *rcx_17 = rax
    result = result_2
    *(var_68 + 0x18) = result

return result
