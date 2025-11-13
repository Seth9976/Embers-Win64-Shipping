// 函数: sub_141d367b0
// 地址: 0x141d367b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t arg_18 = rbx
int64_t arg_10 = arg2
void* rax = data_143f376a0

if (rax == 0)
    j_sub_140b3db50()
    void arg_8
    rbx = *sub_140b58170(&arg_8, "ChaosSolvers", 1)
    j_sub_140b3db50()
    rax = sub_140b407e0(&data_143de7d78, rbx)
    data_143f376a0 = rax

EnterCriticalSection(rax + 0xa0)
rbx.b = 1

if (*(arg1 + 0x30) != 0)
    rbx = zx.q(sub_141d3b9a0(arg1))

char* rax_3 = j_sub_140a82f30(0x600)
char* r15

if (rax_3 == 0)
    r15 = nullptr
else
    r15 = sub_141d2da50(rax_3, rbx.b, arg2)

int64_t rbp = sx.q(*(arg1 + 0x48))
int32_t rax_5 = (rbp + 1).d
*(arg1 + 0x48) = rax_5

if (rax_5 s> *(arg1 + 0x4c))
    sub_1405a4d70(arg1 + 0x40)

uint32_t rdi_1 = (arg2 u>> 4).d
*(*(arg1 + 0x40) + (rbp << 3)) = r15
void* result = *(*(arg1 + 0x40) + (sx.q(*(arg1 + 0x48)) << 3) - 8)
int32_t rcx_7 = (0x9e3779b9 - rdi_1) ^ rdi_1 << 8
int32_t rdx_5 = neg.d(rcx_7 + rdi_1) ^ rcx_7 u>> 0xd
int32_t rdi_4 = (rdi_1 - rcx_7 - rdx_5) ^ rdx_5 u>> 0xc
int32_t rcx_10 = (rcx_7 - rdi_4 - rdx_5) ^ rdi_4 << 0x10
int32_t rdx_8 = (rdx_5 - rcx_10 - rdi_4) ^ rcx_10 u>> 5
int32_t rdi_7 = (rdi_4 - rcx_10 - rdx_8) ^ rdx_8 u>> 3
int32_t rcx_13 = (rcx_10 - rdi_7 - rdx_8) ^ rdi_7 << 0xa
void* rax_22 = sub_141d2c030(arg1 + 0x50, (rdx_8 - rcx_13 - rdi_7) ^ rcx_13 u>> 0xf, &arg_10)
int64_t rdi_8 = sx.q(*(rax_22 + 8))
int32_t rcx_16 = (rdi_8 + 1).d
*(rax_22 + 8) = rcx_16

if (rcx_16 s> *(rax_22 + 0xc))
    sub_1405a4d70(rax_22)

*(*rax_22 + (rdi_8 << 3)) = result
sub_1417b02f0()
AcquireSRWLockExclusive(result + 0x450)
sub_141d36290(result + 0x458, sub_1417b0b00(&data_143ef8280))
sub_141d36450(result + 0x4a8, sub_140960ca0(&data_143ef8280))
sub_141d36290(result + 0x4f8, sub_1417b0b00(&data_143ef8280))
sub_141d36450(result + 0x548, sub_140960ca0(&data_143ef8280))
ReleaseSRWLockExclusive(result + 0x450)

if ((not.b(arg3) & 1) != 0 && *(arg1 + 0x18) != 0)
    int64_t* rcx_24 = *(arg1 + 0x30)
    
    if (rcx_24 != 0)
        int64_t var_58_1 = 0
        void** const var_48_1 = &data_142da2668
        void* result_1 = result
        int64_t (* var_68)(int64_t* arg1, int64_t* arg2) = sub_141d35c80
        (*(*rcx_24 + 0x10))(rcx_24, &var_68)

void* rax_30 = data_143f376a0

if (rax_30 == 0)
    j_sub_140b3db50()
    int64_t rbx_2 = *sub_140b58170(&arg_10, "ChaosSolvers", 1)
    j_sub_140b3db50()
    rax_30 = sub_140b407e0(&data_143de7d78, rbx_2)
    data_143f376a0 = rax_30

LeaveCriticalSection(rax_30 + 0xa0)
return result
