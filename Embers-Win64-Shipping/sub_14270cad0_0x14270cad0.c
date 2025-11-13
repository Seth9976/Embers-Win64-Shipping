// 函数: sub_14270cad0
// 地址: 0x14270cad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rax_1 = sub_14273f770()
int64_t r8_1 = *arg2
int64_t rax_2 = (*(r8_1 + 0x610))(arg2, rax_1, r8_1)
int64_t rcx_1 = rax_2

if (rax_2 != 0)
label_14270cb52:
    int64_t rax_5 = *(arg1 + 0x250)
    int64_t r8_4 = *rcx_1
    int64_t rdx_3 = rax_5 + 0xe0
    
    if (rax_5 == 0)
        rdx_3 = 0
    
    (*(r8_4 + 0x498))(rcx_1, rdx_3, r8_4, 0)
    return 

void* rax_3 = sub_14255d000()
void* rdx_1 = arg2[2]
int64_t rax = sx.q(*(rax_3 + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != rax_3 + 0x30)
    return 

int64_t* rbx_2 = arg2[0x4b]

if (rbx_2 == 0)
    return 

int64_t rax_4 = sub_14273f770()
int64_t r8_3 = *rbx_2
rax = (*(r8_3 + 0x610))(rbx_2, rax_4, r8_3)
rcx_1 = rax

if (rax != 0)
    goto label_14270cb52
