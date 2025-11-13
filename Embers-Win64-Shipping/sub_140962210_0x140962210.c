// 函数: sub_140962210
// 地址: 0x140962210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 8)
void* result

if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
    int32_t rdi = 0
    
    if (*(arg1 + 0x60) s<= 0)
        result.b = 0
    else
        while (true)
            int64_t* rbx_1 = *(arg2 + 0x10)
            void* rsi_3 = sx.q(rdi) * 0x50 + *(arg1 + 0x58)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int64_t var_50_1 = *(arg2 + 8)
            int64_t* var_48_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            void** var_58 = &data_142e259e0
            int64_t var_40_1 = 0
            int64_t var_38_1 = 0
            void* rbp_1 = sub_140946d90(rsi_3 + 0x30, &var_58)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t rdx_1 = *rbx_1
                    (*rdx_1)(rbx_1, rdx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        int64_t r8 = *rbx_1
                        (*(r8 + 8))(rbx_1, 1, r8)
            
            if (rbp_1 != 0)
                sub_14094ded0(arg3, rsi_3 + 8)
                result.b = 1
                break
            
            rdi += 1
            
            if (rdi s>= *(arg1 + 0x60))
                result.b = 0
                break
    
    return result

result.b = 0
return result
