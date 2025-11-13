// 函数: sub_1408dad90
// 地址: 0x1408dad90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
*arg1 = &data_142e11988
int64_t* rsi = arg1[0x2d]
uint64_t r14_1 = sx.q(arg1[0x2e].d) << 3 u>> 3

if (rsi u> &rsi[arg1[0x2e]])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rsi
        
        if (rbx_1 != 0)
            (*(rbx_1[0x13] + 0x30))(&rbx_1[0x13])
            (*(rbx_1[0x17] + 0x30))(&rbx_1[0x17])
            (*(rbx_1[0x1b] + 0x30))(&rbx_1[0x1b])
            (*(rbx_1[0x1f] + 0x30))(&rbx_1[0x1f])
            (*(rbx_1[0x23] + 0x30))(&rbx_1[0x23])
            (*(rbx_1[0x27] + 0x30))(&rbx_1[0x27])
            (*(rbx_1[8] + 0x30))(&rbx_1[8])
            (*(rbx_1[0xc] + 0x30))(&rbx_1[0xc])
            (*(rbx_1[0x6e] + 0x30))(&rbx_1[0x6e])
            int64_t* rdi_1 = rbx_1[2]
            
            if (rdi_1 != 0)
                sub_1408dac20(rdi_1)
                j_sub_140a74f90(rdi_1)
            
            int64_t* rdi_2 = rbx_1[3]
            
            if (rdi_2 != 0)
                sub_1408dac20(rdi_2)
                j_sub_140a74f90(rdi_2)
            
            (**rbx_1)(rbx_1, 1)
        
        rsi = &rsi[1]
        rbp += 1
    while (rbp != r14_1)

arg1[0x2e].d = 0

if (*(arg1 + 0x174) != 0)
    sub_1405c5570(&arg1[0x2d], 0)

if (arg1[0x30] != 0)
    void* rax_12 = arg1[0x32]
    void* rcx_15 = &arg1[0x34]
    
    if (rax_12 != 0)
        rcx_15 = rax_12
    
    (*(*rcx_15 + 0x10))(rcx_15)

int64_t rcx_16 = arg1[0x2d]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

return sub_142289fd0(arg1) __tailcall
