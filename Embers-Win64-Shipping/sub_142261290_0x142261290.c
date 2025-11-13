// 函数: sub_142261290
// 地址: 0x142261290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141dbb100(arg1)
void* rdi = arg1[0x53]

if (rdi != 0)
    void* rax = sub_142531230()
    void* rdx_1 = *(rdi + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        int64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax + 0x30)
            void* rcx = *(rdi + 0x70)
            
            if (rcx != 0)
                result = (*(*(rcx + 0x28) + 0x198))(rcx + 0x28)
                
                if (result.b != 0)
                    void var_18
                    int64_t* rax_2 = sub_142029ad0(*(rdi + 0x70), &var_18)
                    int64_t* rbx_1 = rax_2[1]
                    int64_t var_28 = *rax_2
                    int64_t* var_20_1 = rbx_1
                    int128_t zmm0_1 = var_28.o
                    rax_2[1] = 0
                    *rax_2 = 0
                    var_28.o = zmm0_1
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d += 1
                    
                    result = sub_142272180(rdi + 0x1a0, &var_28)
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            result = (**rbx_1)(rbx_1)
                            int32_t temp2_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                result = (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    int64_t* var_10
                    
                    if (var_10 != 0)
                        var_10[1].d -= 1
                        
                        if (var_10[1].d == 1)
                            result = (**var_10)(var_10)
                            int32_t temp3_1 = *(var_10 + 0xc)
                            *(var_10 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                result = (*(*var_10 + 8))(var_10, 1)

void* rcx_9 = data_143e29f28

if (rcx_9 != 0)
    result = sub_140e6af30(rcx_9)
    
    if (result.b != 0)
        arg1[0x87].d |= 1

return result
