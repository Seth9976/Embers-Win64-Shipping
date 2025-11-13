// 函数: sub_1417f4170
// 地址: 0x1417f4170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_1417f1300(arg2)
void* rdx = arg1[8]
void* r9 = &arg1[7]
int32_t rbp = 0
int64_t r10_1 = sx.q(arg1[9].d) - 1

if (rdx != 0)
    r9 = rdx

int32_t rbx = *(r9 + ((sx.q(rax_1) & r10_1) << 2))

if (rbx != 0xffffffff)
    int64_t r8_1 = *arg1
    int64_t rdx_2
    
    while (true)
        rdx_2 = sx.q(rbx) * 6
        
        if (*(r8_1 + (rdx_2 << 3)) == *arg2 && *(r8_1 + (rdx_2 << 3) + 4) == *(arg2 + 4))
            break
        
        rbx = *(r8_1 + (rdx_2 << 3) + 0x28)
        
        if (rbx == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t rax_9 = sx.q(*(r8_1 + (rdx_2 << 3) + 0x2c)) & r10_1
        void* rcx_2 = r9 + (rax_9 << 2)
        
        for (int32_t i = *(r9 + (rax_9 << 2)); i != 0xffffffff; i = *rcx_2)
            if (i == rbx)
                *rcx_2 = *(r8_1 + (rdx_2 << 3) + 0x28)
                break
            
            rcx_2 = sx.q(i) * 0x30 + 0x28 + r8_1
    
    int64_t rcx_6 = *(*arg1 + (rdx_2 << 3) + 0x10)
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    rbp = 1
    sub_1407c2ba0(arg1, rbx, 1)

return zx.q(rbp)
