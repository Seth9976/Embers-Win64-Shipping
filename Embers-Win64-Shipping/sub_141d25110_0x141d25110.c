// 函数: sub_141d25110
// 地址: 0x141d25110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rbx = sx.q(rax_1)
int32_t i_2 = rbx.d
int64_t* rbp = nullptr
int64_t* var_48 = nullptr
int32_t var_3c = 0

if (rax_1 s> 0)
    sub_1405a4d70(&var_48)
    rbp = var_48

memset(rbp, 0, rbx << 3)

if (rbx.d s> 0)
    int64_t rdi_1 = 0
    int64_t* rbx_1 = rbp
    
    do
        int64_t* rdx_1 = arg1[1] + (sx.q(*(*arg2 + (rdi_1 << 2))) << 3)
        
        if (rbx_1 != rdx_1)
            int64_t* rsi_1 = *rbx_1
            *rbx_1 = *rdx_1
            *rdx_1 = 0
            
            if (rsi_1 != 0)
                int64_t rcx_3 = *rsi_1
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                j_sub_140a74f90(rsi_1)
        
        rdi_1 += 1
        rbx_1 = &rbx_1[1]
    while (rdi_1 s< rbx)

int64_t** result = &var_48

if (&arg1[1] != &var_48)
    var_48.o = *(arg1 + 8)
    rbp = var_48
    *(arg1 + 8) = var_48.o

int32_t i_1 = i_2
int64_t* rdi_2 = rbp

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rbx_2 = *rdi_2
        
        if (rbx_2 != 0)
            int64_t rcx_5 = *rbx_2
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            result = j_sub_140a74f90(rbx_2)
        
        rdi_2 = &rdi_2[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbp == 0)
    return result

return sub_140a74f90(rbp)
