// 函数: sub_140909240
// 地址: 0x140909240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t rsi_2 = (arg1[1] - rax) s>> 5

if (rsi_2 == 0x7ffffffffffffff)
    sub_140610c20()
    noreturn

int64_t rcx_2 = (arg1[2] - rax) s>> 5
uint64_t rdx_1 = rcx_2 u>> 1
int64_t rax_2

if (rcx_2 u<= 0x7ffffffffffffff - rdx_1)
    rax_2 = rdx_1 + rcx_2
    
    if (rax_2 u< rsi_2 + 1)
        rax_2 = rsi_2 + 1
else
    rax_2 = rsi_2 + 1

int64_t rdx_2 = rax_2 << 5
int128_t* rbx_2

if (rax_2 u<= 0x7ffffffffffffff)
    if (rdx_2 u>= 0x1000)
        goto label_1409092df
    
    if (rdx_2 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = j_sub_140a82f30(rdx_2)
    
    goto label_140909321

rdx_2 = -1
label_1409092df:
int64_t rcx_3 = rdx_2 + 0x27

if (rcx_3 u<= rdx_2)
    rcx_3 = -1

int64_t rax_3 = j_sub_140a82f30(rcx_3)

if (rax_3 != 0)
    rbx_2 = (rax_3 + 0x27) & 0xffffffffffffffe0
    *(rbx_2 - 8) = rax_3
label_140909321:
    void* result = ((arg2 - rax) & 0xffffffffffffffe0) + rbx_2
    sub_140592d30(result, arg3)
    int64_t rdx_4 = arg1[1]
    int128_t* r8 = rbx_2
    void* rcx_6 = *arg1
    
    if (arg2 != rdx_4)
        sub_140909570(rcx_6, arg2, r8)
        rdx_4 = arg1[1]
        r8 = result + 0x20
        rcx_6 = arg2
    
    sub_140909570(rcx_6, rdx_4, r8)
    int64_t* rcx_7 = *arg1
    
    if (rcx_7 == 0)
        goto label_1409093b2
    
    sub_1409091b0(rcx_7, arg1[1])
    void* rcx_8 = *arg1
    
    if (((arg1[2] - rcx_8) & 0xffffffffffffffe0) u< 0x1000)
        goto label_14090939d
    
    void* r8_2 = *(rcx_8 - 8)
    
    if (rcx_8 - r8_2 - 8 u<= 0x1f)
        rcx_8 = r8_2
    label_14090939d:
        j_sub_140a74f90(rcx_8)
    label_1409093b2:
        *arg1 = rbx_2
        arg1[1] = &rbx_2[(rsi_2 + 1) * 2]
        arg1[2] = &rbx_2[rax_2 * 2]
        return result

_invalid_parameter_noinfo_noreturn()
noreturn
