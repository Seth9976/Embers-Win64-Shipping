// 函数: sub_1429e70c0
// 地址: 0x1429e70c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg2 + 0x18)
int64_t* r12 = *(arg1 + 0x18)
void* rbx_1 = *rsi + 0x270
void* rdi_1 = *r12 + 0x270
EnterCriticalSection(&rsi[9])

while (rsi[0xf].d == 0)
    SleepConditionVariableCS(&rsi[0xe], &rsi[9], 0xffffffff)

int64_t rax

if (*(rbx_1 + 0x10e8) == 0)
    rax = *(rbx_1 + 0x440)
else
    rax = *(rbx_1 + 0x448)

*(rdi_1 + 0x440) = rax
*(*r12 + 0x4ec0) = *(*rsi + 0x4ec0)
LeaveCriticalSection(*(arg2 + 0x18) + 0x48)
*(rdi_1 + 0x452c) = *(rbx_1 + 0x452c)
int64_t rax_4

if (*(rbx_1 + 0x344) == 0)
    rax_4 = *(rbx_1 + 0x198)
else
    rax_4 = *(rbx_1 + 0x190)

*(rdi_1 + 0x190) = rax_4
int32_t rax_5

if (*(rbx_1 + 0x344) != 0)
    rax_5 = *(rbx_1 + 0x178)
else
    rax_5 = *(rbx_1 + 0x168)

*(rdi_1 + 0x178) = rax_5
int32_t rax_6

if (*(rbx_1 + 0x344) != 0)
    rax_6 = *(rbx_1 + 0x17c)
else
    rax_6 = *(rbx_1 + 0x16c)

*(rdi_1 + 0x17c) = rax_6
*(rdi_1 + 0x180) = *(rbx_1 + 0x180)
*(rdi_1 + 0x184) = *(rbx_1 + 0x184)
*(rdi_1 + 0x338) = *(rbx_1 + 0x338)
int32_t rax_10

if (*(rbx_1 + 0x344) != 0)
    rax_10 = *(rbx_1 + 0x340)
else
    rax_10 = *(rbx_1 + 0x33c)

*(rdi_1 + 0x340) = rax_10
void* rcx_5 = rbx_1 + 0x460
int64_t i_2 = 0x18
*(rdi_1 + 0x1a0) = *(rbx_1 + 0x1c0)
*(rdi_1 + 0x1a4) = *(rbx_1 + 0x1c4)
*(rdi_1 + 0x1a8) = *(rbx_1 + 0x1c8)
*(rdi_1 + 0x1ac) = *(rbx_1 + 0x1cc)
*(rdi_1 + 0x1b0) = *(rbx_1 + 0x1d0)
*(rdi_1 + 0x1b4) = *(rbx_1 + 0x1d4)
*(rdi_1 + 0x1b8) = *(rbx_1 + 0x1d8)
*(rdi_1 + 0x1bc) = *(rbx_1 + 0x1dc)
void* rax_19 = rdi_1 + 0x460
int128_t zmm0
int64_t i

do
    rax_19 += 0x80
    zmm0 = *rcx_5
    rcx_5 += 0x80
    *(rax_19 - 0x80) = zmm0
    *(rax_19 - 0x70) = *(rcx_5 - 0x70)
    *(rax_19 - 0x60) = *(rcx_5 - 0x60)
    *(rax_19 - 0x50) = *(rcx_5 - 0x50)
    *(rax_19 - 0x40) = *(rcx_5 - 0x40)
    *(rax_19 - 0x30) = *(rcx_5 - 0x30)
    *(rax_19 - 0x20) = *(rcx_5 - 0x20)
    *(rax_19 - 0x10) = *(rcx_5 - 0x10)
    i = i_2
    i_2 -= 1
while (i != 1)
int64_t i_3 = 0x3f
int128_t* rcx_6 = *(rdi_1 + 0x1170)
*(rdi_1 + 0x10c4) = *(rbx_1 + 0x10c0)
*(rdi_1 + 0x10b8) = *(rbx_1 + 0x10b8)
*(rdi_1 + 0x10ca) = *(rbx_1 + 0x10ca)
*(rdi_1 + 0x10d2) = *(rbx_1 + 0x10d2)
*(rdi_1 + 0x10e8) = *(rbx_1 + 0x10e8)
*(rdi_1 + 0x10f8) = *(rbx_1 + 0x10f8)
*(rdi_1 + 0x1108) = *(rbx_1 + 0x1108)
*(rdi_1 + 0x1118) = *(rbx_1 + 0x1118)
*(rdi_1 + 0x1128) = *(rbx_1 + 0x1128)
*(rdi_1 + 0x1138) = *(rbx_1 + 0x1138)
*(rdi_1 + 0x1148) = *(rbx_1 + 0x1148)
*(rdi_1 + 0x1158) = *(rbx_1 + 0x1158)
int128_t* result = *(rbx_1 + 0x1170)
int64_t i_1

do
    rcx_6 = &rcx_6[8]
    zmm0 = *result
    result = &result[8]
    rcx_6[-8] = zmm0
    rcx_6[-7] = result[-7]
    rcx_6[-6] = result[-6]
    rcx_6[-5] = result[-5]
    rcx_6[-4] = result[-4]
    rcx_6[-3] = result[-3]
    rcx_6[-2] = result[-2]
    rcx_6[-1] = result[-1]
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
*rcx_6 = *result
rcx_6[1] = result[1]
rcx_6[2] = result[2]
rcx_6[3] = result[3]
rcx_6[4] = result[4]
rcx_6[5] = result[5]
rcx_6[6] = result[6]
return result
