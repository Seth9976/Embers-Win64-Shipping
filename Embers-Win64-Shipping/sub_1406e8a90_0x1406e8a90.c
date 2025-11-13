// 函数: sub_1406e8a90
// 地址: 0x1406e8a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg1[1]
int64_t r8 = arg1[2]

if (rdi != r8)
    int32_t rax = *arg2
    *(rdi + 0x40) = 0
    *rdi = rax
    int64_t result = sub_1406ec540(&rdi[2], &arg2[2])
    arg1[1] += 0x48
    return result

int64_t r9 = *arg1
int64_t rsi = 0x38e38e38e38e38e
int64_t rbp_2 = (rdi - r9) s/ 0x48

if (rbp_2 == 0x38e38e38e38e38e)
    sub_140610c20()
    noreturn

int64_t rdx_4 = (r8 - r9) s/ 0x48
uint64_t rcx_4 = rdx_4 u>> 1

if (rdx_4 u<= 0x38e38e38e38e38e - rcx_4)
    rsi = rcx_4 + rdx_4
    
    if (rsi u< rbp_2 + 1)
        rsi = rbp_2 + 1

int32_t* rax_8 = sub_1406ec640(arg1, rsi)
void* rbp_3 = &rax_8[rbp_2 * 0x12]
*rbp_3 = *arg2
*(rbp_3 + 0x40) = 0
sub_1406ec540(rbp_3 + 8, &arg2[2])
int64_t rdx_7 = arg1[1]
int32_t* r8_2 = rax_8
int32_t* rcx_10 = *arg1

if (rdi != rdx_7)
    sub_1406e8a10(rcx_10, rdi, r8_2)
    rdx_7 = arg1[1]
    r8_2 = rbp_3 + 0x48
    rcx_10 = rdi

sub_1406e8a10(rcx_10, rdx_7, r8_2)
return sub_1406ebd20(arg1, rax_8, rbp_2 + 1, rsi) __tailcall
