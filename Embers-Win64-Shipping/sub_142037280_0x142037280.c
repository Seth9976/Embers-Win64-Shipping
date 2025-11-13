// 函数: sub_142037280
// 地址: 0x142037280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t* rcx = *(arg4 + 8)
int64_t* rbx_2
int64_t var_40

if (rcx == 0)
label_142037392:
    int64_t* rcx_7 = *(arg1 + 0x278)
    int64_t* rax_10 = (*(*rcx_7 + 0x640))(rcx_7, &var_40, arg2)
    rbx_2 = arg5
    
    if (rbx_2 != rax_10)
        int64_t rcx_8 = *rbx_2
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        *rbx_2 = *rax_10
        *rax_10 = 0
        rbx_2[1].d = rax_10[1].d
        *(rbx_2 + 0xc) = *(rax_10 + 0xc)
        rax_10[1] = 0
    
    int64_t rcx_10 = var_40
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
else
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_142037392
    
    int64_t* rax_3 = sub_142168400()
    int64_t* rcx_1 = *(arg4 + 8)
    char rax_4
    
    if (rcx_1 != 0)
        int64_t rdx = *rcx_1
        rax_4 = (*(rdx + 0x28))(rcx_1, rdx)
    
    int64_t* rax_5
    
    if (rcx_1 == 0 || rax_4 == 0)
        int64_t arg_20 = 0
        rax_5 = &arg_20
    else
        int64_t* rcx_2 = *(arg4 + 8)
        int64_t r8 = *rcx_2
        void var_48
        rax_5 = (*(r8 + 0x10))(rcx_2, &var_48, r8)
    
    if (*rax_5 == *(*(*rax_3 + 0x288))(rax_3, &var_40))
        goto label_142037392
    
    rbx_2 = arg5
    
    if (*rbx_2 != u"incompatible_unique_net_id")
        int32_t rdx_3 = 0
        rbx_2[1].d = 0
        
        if (*(rbx_2 + 0xc) != 0x1b)
            sub_1405947f0(rbx_2, 0x1b)
            rdx_3 = rbx_2[1].d
        
        rbx_2[1].d = rdx_3 + 0x1b
        
        if (rdx_3 + 0x1b s> *(rbx_2 + 0xc))
            sub_140594770(rbx_2)
        
        __builtin_wcscpy(*rbx_2, u"incompatible_unique_net_id")
int64_t rbp
rbp.b = 0
int32_t rdx_5 = data_143a2e0e0
int32_t rcx_12 = data_143a2e0ec + 1
data_143a2e0ec = rcx_12
uint64_t result = zx.q(rdx_5 - 1)
int64_t rsi_3 = sx.q(result.d)

if (result.d s>= 0)
    int64_t r14_2 = rsi_3 << 4
    int64_t temp0_1
    
    do
        result = data_143a2e0d8
        
        if (*(r14_2 + result + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_13 = *(r14_2 + result)
            
            if (rcx_13 == 0)
                rbp.b = 1
            else
                result = (*(*rcx_13 + 0x50))(rcx_13, arg1, arg4, rbx_2)
                
                if (result.b == 0)
                    rbp.b = 1
        
        r14_2 -= 0x10
        temp0_1 = rsi_3
        rsi_3 -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_12 = data_143a2e0ec
    rdx_5 = data_143a2e0e0

data_143a2e0ec = rcx_12 - 1

if (rbp.b != 0 && rcx_12 - 1 s<= 0)
    int32_t rsi_4 = rdx_5
    
    if (rdx_5 s> 0)
        int64_t* rbx_3 = nullptr
        
        do
            int64_t rax_14 = data_143a2e0d8
            
            if (*(rbx_3 + rax_14 + 8) == 0)
                sub_1405a4880(&data_143a2e0d8, rdi, 1, 1)
            else
                int64_t* rcx_15 = *(rbx_3 + rax_14)
                
                if (rcx_15 == 0)
                    sub_1405a4880(&data_143a2e0d8, rdi, 1, 1)
                else if ((*(*rcx_15 + 0x20))(rcx_15) != 0)
                    sub_1405a4880(&data_143a2e0d8, rdi, 1, 1)
                else
                    rdi += 1
                    rbx_3 = &rbx_3[2]
            
            rdx_5 = data_143a2e0e0
        while (rdi s< rdx_5)
    
    result = zx.q(rdx_5 * 2)
    
    if (result.d s<= 2)
        result = 2
    
    data_143a2e0e8 = result.d
    
    if (rsi_4 s> result.d && data_143a2e0e4 != rdx_5)
        return sub_1405a5410(&data_143a2e0d8, rdx_5)

return result
