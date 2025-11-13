// 函数: sub_1406e87c0
// 地址: 0x1406e87c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *arg1
int64_t rdi = 0x38e38e38e38e38e
int64_t rax_3
int64_t rdx_1
rdx_1:rax_3 = muls.dp.q(0xe38e38e38e38e39, arg1[1] - r10)
int64_t rdx_2 = rdx_1 s>> 2
int64_t rdx_3 = rdx_2 + (rdx_2 u>> 0x3f)

if (rdx_3 == 0x38e38e38e38e38e)
    sub_140610c20()
    noreturn

int64_t rax_6
int64_t rdx_4
rdx_4:rax_6 = muls.dp.q(0xe38e38e38e38e39, arg1[2] - r10)
int64_t rdx_5 = rdx_4 s>> 2
int64_t rdx_6 = rdx_5 + (rdx_5 u>> 0x3f)
uint64_t rcx_5 = rdx_6 u>> 1

if (rdx_6 u<= 0x38e38e38e38e38e - rcx_5)
    rdi = rcx_5 + rdx_6
    
    if (rdi u< rdx_3 + 1)
        rdi = rdx_3 + 1

int32_t* rax_10 = sub_1406ec640(arg1, rdi)
void* result = &rax_10[(arg2 - r10) s/ 0x48 * 0x12]
*result = *arg3
*(result + 0x40) = 0
int64_t* rcx_9 = *(arg3 + 0x40)

if (rcx_9 != 0)
    if (rcx_9 != &arg3[2])
        *(result + 0x40) = rcx_9
        *(arg3 + 0x40) = 0
    else
        int64_t rax_12
        int64_t rdx_9
        rax_12, rdx_9 = (*(*rcx_9 + 8))(rcx_9, result + 8)
        *(result + 0x40) = rax_12
        int64_t* rcx_10 = *(arg3 + 0x40)
        
        if (rcx_10 != 0)
            rdx_9.b = rcx_10 != &arg3[2]
            (*(*rcx_10 + 0x20))(rcx_10, rdx_9)
            *(arg3 + 0x40) = 0

int64_t rdx_11 = arg1[1]
int32_t* r8 = rax_10
void* rcx_11 = *arg1

if (arg2 != rdx_11)
    sub_1406e8950(rcx_11, arg2, r8)
    rdx_11 = arg1[1]
    r8 = result + 0x48
    rcx_11 = arg2

sub_1406e8950(rcx_11, rdx_11, r8)
sub_1406ebd20(arg1, rax_10, rdx_3 + 1, rdi)
return result
