// 函数: sub_140cba380
// 地址: 0x140cba380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140bdf2e0()
void* rax_1
int64_t rcx

if (rax != 0)
    rcx = sx.q(*(rax + 0x38))
    rax_1 = *(arg2 + 0x10)

if (rax == 0 || rcx.d s> *(rax_1 + 0x38) || *(*(rax_1 + 0x30) + (rcx << 3)) != rax + 0x30)
    int64_t* r14_1 = arg1[1]
    
    if (r14_1 == 0)
        sub_140d1e450(arg1)
        r14_1 = arg1[1]
    
    int64_t rdx_1 = arg1[0xf]
    int64_t rbx_1 = r14_1[0x12]
    int64_t rdi_1 = r14_1[0xf]
    int64_t rbp_1 = r14_1[0x13]
    int64_t rsi_1 = r14_1[0x14]
    r14_1[0x12] = arg3
    (*(*r14_1 + 0x78))(r14_1, rdx_1)
    r14_1[0x13] = 0
    r14_1[0x14] = 0
    sub_140ce9c10(arg2, r14_1)
    r14_1[0x12] = rbx_1
    (*(*r14_1 + 0x78))(r14_1, rdi_1)
    r14_1[0x13] = rbp_1
    r14_1[0x14] = rsi_1

jump(*(*(arg2 + 0x10) + 0xc0))
