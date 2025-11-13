// 函数: sub_1421882a0
// 地址: 0x1421882a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_2 = 0
int32_t result_1 = 0
int32_t i = 0
int32_t result

if (*(arg1 + 0x48) s> 0)
    int64_t* r15_1 = nullptr
    int64_t r12
    int64_t arg_18 = r12
    
    do
        int64_t* rbx_2 = *(r15_1 + *(arg1 + 0x40))
        
        if (rbx_2 != 0 && (*(rbx_2 + 0x2c) & 1) != 0)
            r12.b = 0
            
            if (rbx_2[5].d == 0)
                void* rbp_1 = rbx_2[9]
                
                if (rbp_1 != 0)
                    void* rax = sub_142557290()
                    void* rdx_1 = *(rbp_1 + 0x10)
                    int64_t rax_1 = sx.q(*(rax + 0x38))
                    
                    if (rax_1.d s<= *(rdx_1 + 0x38)
                            && *(*(rdx_1 + 0x30) + (rax_1 << 3)) == rax + 0x30)
                        r12.b = 1
                        result_1 = *(rbp_1 + 0x40) + 2
            
            result = (*(*rbx_2 + 0x270))(rbx_2)
            
            if (r12.b == 1)
                *(rbx_2 + 0xb4) = result_1
                result = result_1
            
            if (result s> result_2)
                result_2 = result
        
        i += 1
        r15_1 = &r15_1[1]
    while (i s< *(arg1 + 0x48))

result.b = 1
return result
