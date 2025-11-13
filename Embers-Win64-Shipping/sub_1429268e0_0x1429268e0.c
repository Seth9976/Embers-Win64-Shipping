// 函数: sub_1429268e0
// 地址: 0x1429268e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rbx = *(arg1 + 0x18)
void* rdi = arg3
void* rsi = arg2
int64_t rbp = rbx[0x19]

if (arg3 != 0)
    int64_t rax_1 = rbx[0x1b]
    void* r14_3
    
    if (rax_1 == 0)
        r14_3 = &rbx[0x1c]
    label_142926989:
        void* rbp_1
        
        if (rdi u< rbp)
            rbp_1 = rdi
        else
            rbp_1 = sub_142962d80(rbx, rsi, rdi, rbp)
        
        if (rbp_1 != 0)
            memcpy(r14_3, rdi + rsi - rbp_1, rbp_1.d)
            rbx[0x1b] = rbp_1
    else
        int64_t r14_2 = rbp - rax_1
        void* rcx_1 = &rbx[0x1c] + rax_1
        
        if (arg3 u>= r14_2)
            memcpy(rcx_1, arg2, r14_2.d)
            rsi += r14_2
            rdi -= r14_2
            r14_3 = &rbx[0x1c]
            sub_142962d80(rbx, r14_3, rbp, rbp)
            rbx[0x1b] = 0
            goto label_142926989
        
        memcpy(rcx_1, arg2, arg3.d)
        rbx[0x1b] += rdi

return 1
