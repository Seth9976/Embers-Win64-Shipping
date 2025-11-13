// 函数: sub_1428d6300
// 地址: 0x1428d6300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rbx = arg3
int64_t rsi = arg2
int64_t** r14 = arg1

if (arg1[0x11].d != 0xffffffff)
    if (rbx == 0)
        return 1
    
    int64_t rdi_1 = sx.q(sub_142890e90(*arg1))
    int64_t rax_2 = sx.q(r14[0x11].d)
    void* rbp_1
    
    if (rax_2.d s<= 0)
        rbp_1 = &r14[9]
    label_1428d63c2:
        
        while (rbx u> rdi_1)
            if (sub_142891550(*r14, rbp_1, rsi, zx.q(rdi_1.d)) == 0)
                return 0
            
            rbx -= rdi_1
            rsi += rdi_1
        
        memcpy(&r14[0xd], rsi, rbx.d)
        r14[0x11].d = rbx.d
        return 1
    
    int64_t r15_1 = rbx
    int64_t rax_4 = rdi_1 - rax_2
    
    if (rbx u>= rax_4)
        r15_1 = rax_4
    
    memcpy(rax_2 + 0x68 + r14, rsi, r15_1.d)
    r14[0x11].d += r15_1.d
    int64_t temp0_1 = rbx
    rbx -= r15_1
    
    if (temp0_1 == r15_1)
        return 1
    
    rbp_1 = &r14[9]
    rsi += r15_1
    
    if (sub_142891550(*r14, rbp_1, &r14[0xd], zx.q(rdi_1.d)) != 0)
        goto label_1428d63c2

return 0
