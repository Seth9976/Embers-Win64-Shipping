// 函数: sub_1417b23c0
// 地址: 0x1417b23c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t var_28 = 0
int32_t var_1c = 0
int32_t var_20 = 0
int64_t result

if (*(arg1 + 0x70) == 0)
    int32_t r14_1 = *(arg1 + 0x68)
    
    if (r14_1 s> 0)
        sub_1405a5410(&var_28, r14_1)
        
        if (r14_1 s> 0)
            do
                int64_t rdi_2 = sx.q(var_20)
                int32_t var_10_2 = rbx
                int32_t rax_3 = (rdi_2 + 1).d
                var_20 = rax_3
                
                if (rax_3 s> var_1c)
                    sub_1405a4f90(&var_28)
                
                rbx += 1
                *(var_28 + rdi_2 * 0x10) = arg1.o
            while (rbx s< r14_1)
    
    result = sub_14178f2d0(arg1 + 0xb0, &var_28)
else
    int32_t r14 = *(arg1 + 0x58)
    
    if (r14 s> 0)
        sub_1405a5410(&var_28, r14)
        
        if (r14 s> 0)
            do
                int64_t rdi_1 = sx.q(var_20)
                int32_t var_10_1 = rbx
                int32_t rax_1 = (rdi_1 + 1).d
                var_20 = rax_1
                
                if (rax_1 s> var_1c)
                    sub_1405a4f90(&var_28)
                
                rbx += 1
                *(var_28 + rdi_1 * 0x10) = arg1.o
            while (rbx s< r14)
    
    result = sub_14178ee80(arg1 + 0xb0, &var_28)

int64_t rcx_10 = var_28

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
