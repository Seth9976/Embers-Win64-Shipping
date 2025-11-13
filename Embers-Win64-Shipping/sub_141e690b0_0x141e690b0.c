// 函数: sub_141e690b0
// 地址: 0x141e690b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140cde1f0(arg2)
void* rcx_1 = arg1[8]
void* r9 = &arg1[7]
int32_t rbp = 0
int64_t r10_1 = sx.q(arg1[9].d) - 1

if (rcx_1 != 0)
    r9 = rcx_1

int32_t rbx = *(r9 + ((sx.q(rax_1) & r10_1) << 2))

if (rbx != 0xffffffff)
    int64_t rdx = *arg1
    int64_t* r8_1
    
    while (true)
        r8_1 = sx.q(rbx) * 0x68
        
        if (*(r8_1 + rdx) == *arg2 && *(r8_1 + rdx + 8) == arg2[1])
            break
        
        rbx = *(r8_1 + rdx + 0x60)
        
        if (rbx == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t rax_9 = sx.q(*(r8_1 + rdx + 0x64)) & r10_1
        void* rcx_3 = r9 + (rax_9 << 2)
        
        for (int32_t i = *(r9 + (rax_9 << 2)); i != 0xffffffff; i = *rcx_3)
            if (i == rbx)
                *rcx_3 = *(r8_1 + rdx + 0x60)
                break
            
            rcx_3 = sx.q(i) * 0x68 + 0x60 + rdx
    
    void* rsi_2 = *arg1 + r8_1
    *(rsi_2 + 0x58) = 0
    int64_t rcx_6 = *(rsi_2 + 0x50)
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    sub_141e508b0(rsi_2 + 0x10)
    rbp = 1
    sub_1408fa9b0(arg1, rbx, 1)

return zx.q(rbp)
