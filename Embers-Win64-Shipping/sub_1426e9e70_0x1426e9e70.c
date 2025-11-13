// 函数: sub_1426e9e70
// 地址: 0x1426e9e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x34) = arg2
void* (* var_18)(void* arg1, int64_t* arg2) = sub_1426e5f80
int32_t var_10 = 0
void*** result_3 = sub_140a84c80(0, 0x30, 0)
void*** result_1 = result_3
int32_t var_20 = 3

if (result_3 != 0)
    *result_3 = &data_143474f80
    sub_140d3a3a0(&result_3[1], arg1)
    *(result_3 + 0x10) = var_18.o
    result_3[5] = sub_140a387b0()
    *result_3 = &data_143474fd8

void* result = sub_1426d59d0(arg3, arg2, &result_1)
int32_t rsi_1 = result.d

if (var_20 == 0)
    result = result_1
label_1426e9f3a:
    
    if (result != 0)
        result = sub_140a74f90(result)
else
    void*** result_5 = result_1
    
    if (result_5 != 0)
        void** r8_1 = *result_5
        r8_1[7](result_5, 0, r8_1)
        result = sub_140a84c80(result_5, 0, 0)
        goto label_1426e9f3a

*(arg1 + 0x30) = rsi_1

if (rsi_1 != 0xffffffff)
    void* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        void* rax_1 = sub_14273a910()
        void* rdx_2 = *(rbx_1 + 0x10)
        result = sx.q(*(rax_1 + 0x38))
        
        if (result.d s<= *(rdx_2 + 0x38))
            void* result_2 = result
            result = *(rdx_2 + 0x30)
            
            if (*(result + (result_2 << 3)) == rax_1 + 0x30)
                int64_t* rdx_3 = *(rbx_1 + 0xc8)
                int64_t r8_3 = sx.q(*(rbx_1 + 0xd0))
                int64_t* rax_2 = rdx_3
                void* rcx_5 = &rdx_3[r8_3]
                
                if (rdx_3 != rcx_5)
                    while (*rax_2 != arg1)
                        rax_2 = &rax_2[1]
                        
                        if (rax_2 == rcx_5)
                            goto label_1426e9fc4
                
                if (rdx_3 == rcx_5 || ((rax_2 - rdx_3) s>> 3).d == 0xffffffff)
                label_1426e9fc4:
                    int32_t rax_5 = (r8_3 + 1).d
                    *(rbx_1 + 0xd0) = rax_5
                    
                    if (rax_5 s> *(rbx_1 + 0xd4))
                        sub_1405a4d70(rbx_1 + 0xc8)
                    
                    *(*(rbx_1 + 0xc8) + (r8_3 << 3)) = arg1
                
                int32_t i = *(arg1 + 0x30)
                int32_t r8_4
                int32_t r8_5
                
                if (i != 0xffffffff)
                    r8_4 = *(rbx_1 + 0x48)
                    r8_5 = r8_4 - 1
                
                void*** result_4
                int64_t* rbx_2
                
                if (i == 0xffffffff || r8_4 - 1 s< 0)
                label_1426ea020:
                    result_1.o = zx.o(0)
                    rbx_2 = var_20.q
                    result_4 = result_1
                else
                    int64_t r10_1 = *(rbx_1 + 0x40)
                    int64_t rdx_5 = sx.q(r8_5)
                    int64_t* rcx_9 = (rdx_5 << 4) + r10_1
                    
                    while (*(*rcx_9 + 0x30) != i)
                        r8_5 -= 1
                        rcx_9 -= 0x10
                        int64_t temp2_1 = rdx_5
                        rdx_5 -= 1
                        
                        if (temp2_1 - 1 s< 0)
                            goto label_1426ea020
                    
                    int64_t rax_11 = sx.q(r8_5) * 2
                    rbx_2 = *(r10_1 + (rax_11 << 3) + 8)
                    result_4 = *(r10_1 + (rax_11 << 3))
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                
                result = arg1 + 0x48
                
                if (result == &result_1)
                label_1426ea088:
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            result = (**rbx_2)(rbx_2)
                            int32_t temp3_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                return (*(*rbx_2 + 8))(rbx_2, 1)
                else
                    *result = result_4
                    int64_t* rdi_1 = *(result + 8)
                    
                    if (rbx_2 == rdi_1)
                        goto label_1426ea088
                    
                    *(result + 8) = rbx_2
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            result = (**rdi_1)(rdi_1)
                            int32_t temp5_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                return (*(*rdi_1 + 8))(rdi_1, 1)

return result
