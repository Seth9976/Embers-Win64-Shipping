// 函数: sub_1419a20c0
// 地址: 0x1419a20c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 != 0)
    return 

if (sub_140a80f40().b != 0)
label_1419a20da:
    
    if (data_143f01c92 == 0)
        return sub_1419712f0(0) __tailcall
    
    return 

uint32_t rax

if (data_143f138f4 == 0)
    if (data_143de5480 == 0)
        goto label_1419a20da
    
    rax.b = GetCurrentThreadId() == data_143de5470
    
    if (rax.b != 0)
        goto label_1419a20da
    
    goto label_1419a212e

label_1419a212e:
void var_28
void** rax_2 = sub_14199b9d0(&var_28, nullptr, 0xff)
void* rcx_3 = *rax_2
int32_t r8_2 = rax_2[2].d
int64_t* rdx_2 = rax_2[1]
int64_t* rbx_1 = *(rcx_3 + 0x18)
int64_t* arg_10 = rbx_1
void* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_10

sub_1405a5890(rcx_3, rdx_2, r8_2, 1)

if (rbx_1 == 0)
    return 

rax = *rdi_1
*rdi_1 -= 1

if (rax == 1)
    sub_140a2f6e0(arg_10)
