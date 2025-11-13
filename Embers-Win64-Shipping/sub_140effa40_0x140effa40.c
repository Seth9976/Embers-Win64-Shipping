// 函数: sub_140effa40
// 地址: 0x140effa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = 0
void* rbx = arg1

if (arg3 != 0)
    int32_t rdx = *(arg1 + 0x20)
    
    if (rdx s> *(arg3 + 0xc))
        sub_1405c5570(arg3, rdx)

int32_t i = 0
int32_t i_1 = 0

if (*(rbx + 0x20) s<= 0)
    return 

int64_t rcx_1 = 0
int64_t rdx_1 = 0
int64_t var_48_1 = 0
int64_t var_50_1 = 0

do
    void* rsi_2 = *(rbx + 0x18) + rdx_1
    
    if (rcx_1 s> 0)
        if (arg2 != 0)
            sub_140a20ba0(arg2, &data_142d6acb4, 2)
        
        r13 += data_1439b39f0
    
    int32_t r15_1 = 0
    int32_t j = 0
    
    if (*(rsi_2 + 0x30) s> 0)
        int64_t* rdi = nullptr
        
        do
            int64_t rbx_1 = *(rsi_2 + 0x28)
            
            if (arg2 != 0)
                int64_t* rcx_3 = *(rdi + rbx_1)
                (*(*rcx_3 + 0x78))(rcx_3, arg2)
            
            int64_t* rcx_4 = *(rdi + rbx_1)
            int32_t arg_20
            (*(*rcx_4 + 8))(rcx_4, &arg_20)
            j += 1
            rdi = &rdi[6]
            r15_1 += arg4 - arg_20
        while (j s< *(rsi_2 + 0x30))
        
        i = i_1
        rbx = arg1
    
    if (arg3 != 0)
        int64_t rbx_2 = sx.q(arg3[1].d)
        int32_t var_54_1 = r15_1
        int32_t rax_4 = (rbx_2 + 1).d
        arg3[1].d = rax_4
        
        if (rax_4 s> *(arg3 + 0xc))
            sub_1405a4d70(arg3)
        
        *(*arg3 + (rbx_2 << 3)) = r13.q
        rbx = arg1
    
    i += 1
    rcx_1 = var_50_1 + 1
    rdx_1 = var_48_1 + 0x70
    i_1 = i
    r13 += r15_1
    var_50_1 = rcx_1
    var_48_1 = rdx_1
while (i s< *(rbx + 0x20))
