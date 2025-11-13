// 函数: sub_141d24f80
// 地址: 0x141d24f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rbx = sx.q(rax_1)
int32_t i_2 = rbx.d
int64_t* rbp = nullptr
int64_t* var_48 = nullptr
int32_t var_3c = 0

if (rax_1 s> 0)
    sub_1405a4f90(&var_48)
    rbp = var_48

memset(rbp, 0, rbx << 4)

if (rbx.d s> 0)
    int64_t rsi_1 = 0
    int64_t* rdi_1 = rbp
    
    do
        int64_t* rcx_4 = (sx.q(*(*arg2 + (rsi_1 << 2))) << 4) + arg1[1]
        
        if (rdi_1 != rcx_4)
            *rdi_1 = *rcx_4
            *rcx_4 = 0
            int64_t rax_4 = rcx_4[1]
            int64_t* rbx_1 = rdi_1[1]
            
            if (rax_4 != rbx_1)
                rcx_4[1] = 0
                rdi_1[1] = rax_4
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp4_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi_1 += 1
        rdi_1 = &rdi_1[2]
    while (rsi_1 s< rbx)

void* result = &arg1[1]

if (result != &var_48)
    var_48.o = *result
    rbp = var_48
    *result = var_48.o

int32_t i_1 = i_2

if (i_1 != 0)
    void* rdi_2 = &rbp[1]
    int32_t i
    
    do
        int64_t* rbx_2 = *rdi_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_2 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbp == 0)
    return result

return sub_140a74f90(rbp) __tailcall
