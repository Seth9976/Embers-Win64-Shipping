// 函数: sub_142963000
// 地址: 0x142963000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t rax = zx.q(*arg1)
int64_t rbx = arg3
char* rbp = arg2
void* r14_1

if (rax == 0)
    r14_1 = &arg1[1]
label_142963082:
    void* rsi_3 = rbx & 0xfffffffffffffff8
    
    if (rsi_3 u> 0)
        sub_1429630d0(arg1, rbp, rsi_3)
    
    uint32_t count = rbx.d - rsi_3.d
    
    if (rbx != rsi_3)
        memcpy(r14_1, rsi_3 + rbp, count)
        *arg1 = count
else
    void* rcx_1 = &arg1[1] + rax
    
    if (rbx u>= 8 - rax)
        memcpy(rcx_1, arg2, (8 - rax).d)
        r14_1 = &arg1[1]
        *arg1 = 0
        rbx -= 8 - rax
        rbp = &rbp[8 - rax]
        sub_1429630d0(arg1, r14_1, 8)
        goto label_142963082
    
    memcpy(rcx_1, arg2, arg3.d)
    *arg1 += rbx.d
return 1
