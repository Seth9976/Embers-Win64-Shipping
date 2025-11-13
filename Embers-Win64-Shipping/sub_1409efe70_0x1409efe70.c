// 函数: sub_1409efe70
// 地址: 0x1409efe70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28 = nullptr
int32_t i_2 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rdx_2 = &var_28

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
int64_t result = sub_1409de050(arg1, rdx_2)
int32_t i_1 = i_2

if (i_1 != 0)
    int64_t* r14_2 = var_28 + 0x18
    int32_t i
    
    do
        int32_t j_2 = r14_2[1].d
        int64_t* rsi_1 = *r14_2
        
        if (j_2 != 0)
            int32_t j
            
            do
                int32_t k_1 = rsi_1[1].d
                int64_t* rbx_1 = *rsi_1
                
                if (k_1 != 0)
                    int32_t k
                    
                    do
                        int64_t rcx_2 = *rbx_1
                        
                        if (rcx_2 != 0)
                            result = sub_140a74f90(rcx_2)
                        
                        rbx_1 = &rbx_1[2]
                        k = k_1
                        k_1 -= 1
                    while (k != 1)
                    rbx_1 = *rsi_1
                
                if (rbx_1 != 0)
                    result = sub_140a74f90(rbx_1)
                
                rsi_1 = &rsi_1[2]
                j = j_2
                j_2 -= 1
            while (j != 1)
            rsi_1 = *r14_2
        
        if (rsi_1 != 0)
            result = sub_140a74f90(rsi_1)
        
        int32_t j_3 = r14_2[-1].d
        int64_t* rbx_2 = r14_2[-2]
        
        if (j_3 != 0)
            int32_t j_1
            
            do
                int64_t rcx_5 = *rbx_2
                
                if (rcx_5 != 0)
                    result = sub_140a74f90(rcx_5)
                
                rbx_2 = &rbx_2[2]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            rbx_2 = r14_2[-2]
        
        if (rbx_2 != 0)
            result = sub_140a74f90(rbx_2)
        
        r14_2 = &r14_2[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_7 = var_28

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
