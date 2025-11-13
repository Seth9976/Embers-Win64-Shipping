// 函数: sub_1407e6590
// 地址: 0x1407e6590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
char r13 = arg3
uint64_t result_2 = zx.q(arg2)
*(arg1 + 0xb0) = 0

if (arg3 == 0)
    *(arg1 + 0x40) = 0
    
    if (*(arg1 + 0x44) s<= 0xffffffff)
        sub_1405dadb0(arg1 + 0x38, 0)

void* rax = *(rbx + 0x10)
uint32_t count_2 = (((result_2 << 2) + 0xf).d & 0xfffffff0) + 0x10
int32_t result = *(rbx + 0x20)
int32_t r12_1 = *(rax + 0x20) * count_2
int32_t rsi_1 = *(rax + 0x24) * count_2

if (r12_1 != result || rsi_1 != *(rbx + 0x30))
    int32_t r9_1 = data_14396ee64
    int32_t rdx = data_14396ee60
    int64_t r15
    
    if (r12_1 s<= result && rsi_1 s<= *(rbx + 0x30))
        arg1.b = 0
        int32_t rax_1 = r12_1
        
        if (rdx s>= r12_1)
            rax_1 = rdx
        
        if (rax_1 * r9_1 s>= *(rbx + 0x24) && r12_1 != 0)
            goto label_1407e6653
        
        arg3 = 1
    label_1407e665c:
        int32_t rax_3 = rsi_1
        
        if (rdx s>= rsi_1)
            rax_3 = rdx
        
        if (rax_3 * r9_1 s>= *(rbx + 0x34) && rsi_1 != 0)
            goto label_1407e6673
        
        r15.b = 1
        
        if (arg3 != 0 || r15.b != 0)
            goto label_1407e66ab
        
        goto label_1407e6684
    
    arg1.b = 1
label_1407e6653:
    arg3 = 0
    
    if (arg1.b == 0)
        goto label_1407e665c
    
label_1407e6673:
    r15.b = 0
    
    if (arg1.b != 0 || arg3 != 0 || r15.b != 0)
    label_1407e66ab:
        *(rbx + 0xb4) = result_2.d
        
        if (r13 == 0)
            sub_14080c8a0(rbx + 0x18, r12_1, arg3)
            result = sub_14080c8a0(rbx + 0x28, rsi_1, r15.b)
        else
            int64_t var_48 = 0
            int64_t r15_1 = 0
            int32_t arg_18 = 0
            int64_t r14 = 0
            int32_t var_3c_1 = 0
            int32_t r13_1 = 0
            int64_t var_38 = 0
            int32_t result_1 = 0
            
            if (r12_1 s> 0)
                sub_1405daba0(&var_48)
                r15_1 = var_48
                memset(r15_1, 0, sx.q(r12_1))
                arg_18 = r12_1
            else if (r12_1 s< 0 && r12_1 != 0)
                sub_1405dac10(&var_48)
                r15_1 = var_48
                arg_18 = r12_1
            
            if (rsi_1 s> 0)
                sub_1405daba0(&var_38)
                r14 = var_38
                memset(r14, 0, sx.q(rsi_1))
                r13_1 = rsi_1
            else if (rsi_1 s< 0 && rsi_1 != 0)
                sub_1405dac10(&var_38)
                r14 = var_38
                r13_1 = rsi_1
            
            if (count_2 != 0)
                uint32_t count = *(rbx + 0xb8)
                
                if (count != 0)
                    if (count_2 u<= count)
                        count = count_2
                    
                    int32_t rsi_2 = *(*(rbx + 0x10) + 0x20)
                    int32_t rsi_3 = rsi_2 - 1
                    
                    if (rsi_2 - 1 s>= 0)
                        int32_t temp4_1
                        
                        do
                            memcpy(zx.q(rsi_3 * count_2) + r15_1, 
                                zx.q(*(rbx + 0xb8) * rsi_3) + *(rbx + 0x18), count)
                            temp4_1 = rsi_3
                            rsi_3 -= 1
                        while (temp4_1 - 1 s>= 0)
                
                if (count_2 != 0)
                    uint32_t count_1 = *(rbx + 0xbc)
                    
                    if (count_1 != 0)
                        if (count_2 u<= count_1)
                            count_1 = count_2
                        
                        int32_t rsi_4 = *(*(rbx + 0x10) + 0x24)
                        int32_t rsi_5 = rsi_4 - 1
                        
                        if (rsi_4 - 1 s>= 0)
                            int32_t temp5_1
                            
                            do
                                memcpy(zx.q(rsi_5 * count_2) + r14, 
                                    zx.q(*(rbx + 0xbc) * rsi_5) + *(rbx + 0x28), count_1)
                                temp5_1 = rsi_5
                                rsi_5 -= 1
                            while (temp5_1 - 1 s>= 0)
            
            if (rbx + 0x18 != &var_48)
                int64_t rcx_12 = *(rbx + 0x18)
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                *(rbx + 0x18) = r15_1
                r15_1 = 0
                *(rbx + 0x20) = arg_18
                *(rbx + 0x24) = var_3c_1
            
            result = &var_38
            
            if (rbx + 0x28 != &var_38)
                int64_t rcx_13 = *(rbx + 0x28)
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                result = result_1
                *(rbx + 0x28) = r14
                *(rbx + 0x30) = r13_1
                *(rbx + 0x34) = result
            else if (r14 != 0)
                result = sub_140a74f90(r14)
            
            if (r15_1 != 0)
                result = sub_140a74f90(r15_1)
    else
    label_1407e6684:
        result = *(rbx + 0xb4)
        
        if (result u>= result_2.d)
            result_2 = zx.q(result)
        
        *(rbx + 0xb4) = result_2.d
        count_2 = (((result_2 << 2) + 0xf).d & 0xfffffff0) + 0x10
else
    *(rbx + 0xb4) = result_2.d

if (count_2 == *(rbx + 0xb8) && count_2 == *(rbx + 0xbc))
    return result

*(rbx + 0xb8) = count_2
*(rbx + 0xbc) = count_2
return sub_1407e8ce0(rbx)
