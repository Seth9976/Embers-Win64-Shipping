// 函数: sub_140689000
// 地址: 0x140689000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t rdi = 0x7ffffffffffffff
int64_t rsi_2 = (arg1[1] - rax) s>> 5

if (rsi_2 == 0x7ffffffffffffff)
    sub_140610c20()
    noreturn

int64_t rcx_2 = (arg1[2] - rax) s>> 5
uint64_t rdx_1 = rcx_2 u>> 1

if (rcx_2 u<= 0x7ffffffffffffff - rdx_1)
    rdi = rdx_1 + rcx_2
    
    if (rdi u< rsi_2 + 1)
        rdi = rsi_2 + 1

int128_t* rax_2 = sub_1406aff30(arg1, rdi)
void* result = ((arg2 - rax) & 0xffffffffffffffe0) + rax_2
*(result + 0x10) = 0
*(result + 0x18) = 0
*result = *arg3
*(result + 0x10) = arg3[1]
arg3[1].q = 0
*(arg3 + 0x18) = 0xf
*arg3 = 0
int64_t rcx_4 = arg1[1]
int128_t* rdx_3 = *arg1

if (arg2 != rcx_4)
    sub_1406afc80(arg1, rdx_3, arg2, rax_2)
    sub_1406afc80(arg1, arg2, arg1[1], result + 0x20)
else if (rdx_3 != rcx_4)
    void* rax_3 = rax_2 + 0x18
    
    do
        *(rax_3 - 8) = 0
        *rax_3 = 0
        rax_3 += 0x20
        *(rax_3 - 0x38) = *rdx_3
        *(rax_3 - 0x28) = rdx_3[1]
        rdx_3[1].q = 0
        *(rdx_3 + 0x18) = 0xf
        *rdx_3 = 0
        rdx_3 = &rdx_3[2]
    while (rdx_3 != rcx_4)

int64_t* rcx_7 = *arg1

if (rcx_7 != 0)
    sub_140688f70(rcx_7, arg1[1])
    void* rcx_8 = *arg1
    
    if (((arg1[2] - rcx_8) & 0xffffffffffffffe0) u>= 0x1000)
        void* r8_3 = *(rcx_8 - 8)
        
        if (rcx_8 - r8_3 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_8 = r8_3
    
    j_sub_140a74f90(rcx_8)

*arg1 = rax_2
arg1[1] = &rax_2[(rsi_2 + 1) * 2]
arg1[2] = &rax_2[rdi * 2]
return result
