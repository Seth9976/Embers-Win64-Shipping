// 函数: sub_1418e0ab0
// 地址: 0x1418e0ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1
int64_t rbp_1

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* r11_1 = &arg1[7]
    rbp_1 = sx.q(*arg3)
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    rbx_1 = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rbp_1) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_1 == 0xffffffff)
label_1418e0b3c:
    *arg2 = 0xffffffff
else
    int64_t r15_1 = *arg1
    
    while (true)
        int64_t rcx = sx.q(rbx_1) * 5
        void* rdi_1 = r15_1 + (rcx << 3)
        
        if (*(r15_1 + (rcx << 3)) == rbp_1.d)
            int64_t* rcx_1 = *(rdi_1 + 8)
            int64_t* rdx = *(arg3 + 8)
            int64_t count = sx.q(rcx_1[1].d)
            
            if (count.d == rdx[1].d && memcmp(*rcx_1, *rdx, count) == 0)
                *arg2 = rbx_1
                break
        
        rbx_1 = *(rdi_1 + 0x20)
        
        if (rbx_1 == 0xffffffff)
            goto label_1418e0b3c

return arg2
