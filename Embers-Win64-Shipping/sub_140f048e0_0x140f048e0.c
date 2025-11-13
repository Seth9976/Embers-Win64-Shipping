// 函数: sub_140f048e0
// 地址: 0x140f048e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
void* rdi = arg1

if (arg2 != 0)
    int32_t rdx = *(arg1 + 0x20)
    
    if (rdx s> *(arg2 + 0xc))
        sub_1405c5570(arg2, rdx)

int32_t i = 0

if (*(rdi + 0x20) s<= 0)
    return 

int64_t r13_1 = 0
int64_t r14_1 = 0
int64_t arg_20 = 0

do
    void* rbp_2 = *(rdi + 0x18) + r14_1
    
    if (r13_1 s> 0)
        r15 += data_1439b39f0
    
    int32_t rdi_1 = 0
    int32_t j = 0
    
    if (*(rbp_2 + 0x30) s> 0)
        int64_t* r14_2 = nullptr
        
        do
            int64_t* rcx_1 = *(r14_2 + *(rbp_2 + 0x28))
            int32_t arg_10
            (*(*rcx_1 + 8))(rcx_1, &arg_10)
            r14_2 = &r14_2[6]
            j += 1
            rdi_1 += arg3 - arg_10
        while (j s< *(rbp_2 + 0x30))
        
        r14_1 = arg_20
    
    if (arg2 != 0)
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t arg_1c = rdi_1
        int32_t rax_4 = (rsi_1 + 1).d
        arg2[1].d = rax_4
        
        if (rax_4 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rsi_1 << 3)) = r15.q
    
    r15 += rdi_1
    r14_1 += 0x70
    rdi = arg1
    i += 1
    r13_1 += 1
    arg_20 = r14_1
while (i s< *(rdi + 0x20))
