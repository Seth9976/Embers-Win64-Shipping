// 函数: sub_141d254a0
// 地址: 0x141d254a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rbx = sx.q(rax_1)
int32_t i_2 = rbx.d
int64_t* r14 = nullptr
int64_t* var_48 = nullptr
int32_t var_3c = 0

if (rax_1 s> 0)
    sub_1405a4f90(&var_48)
    r14 = var_48

memset(r14, 0, rbx << 4)

if (rbx.d s> 0)
    int64_t* rdi_1 = r14
    int64_t rsi_1 = 0
    
    do
        int64_t* rbx_3 = (sx.q(*(*arg2 + (rsi_1 << 2))) << 4) + arg1[1]
        
        if (rdi_1 != rbx_3)
            int64_t rcx_2 = *rdi_1
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            *rdi_1 = *rbx_3
            *rbx_3 = 0
            rdi_1[1].d = rbx_3[1].d
            *(rdi_1 + 0xc) = *(rbx_3 + 0xc)
            rbx_3[1] = 0
        
        rsi_1 += 1
        rdi_1 = &rdi_1[2]
    while (rsi_1 s< rbx)

int64_t** result = &var_48

if (&arg1[1] != &var_48)
    var_48.o = *(arg1 + 8)
    r14 = var_48
    *(arg1 + 8) = var_48.o

int32_t i_1 = i_2
int64_t* rbx_4 = r14

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx_4
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
        
        rbx_4 = &rbx_4[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r14 == 0)
    return result

return sub_140a74f90(r14) __tailcall
