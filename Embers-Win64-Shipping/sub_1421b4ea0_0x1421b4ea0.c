// 函数: sub_1421b4ea0
// 地址: 0x1421b4ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(arg2[1])
int64_t rax = *arg1
int64_t** rbx = *(rax + (r8 << 3))
void** rdi = rax + (r8 << 3)
uint32_t rsi = zx.d(arg2[2])
*(arg1 + 0x24) += rsi
int64_t* result

if (rbx != 0)
    uint32_t rbp_1 = zx.d(*arg2)
    
    while (true)
        uint32_t rcx_1 = zx.d(*(rbx + 0xa))
        uint32_t rdx = zx.d(rbx[1].w)
        
        if (rbp_1 u<= rdx + rcx_1)
            result = zx.q(rsi + rbp_1)
            
            if (rdx == result.d)
                rcx_1.w += rsi.w
                rbx[1].w = rbp_1.w
                *(rbx + 0xa) = rcx_1.w
                break
            
            result = zx.q(rdx + rcx_1)
            
            if (result.d == rbp_1)
                int64_t** i = *rbx
                rcx_1.w += rsi.w
                *(rbx + 0xa) = rcx_1.w
                
                while (i != 0)
                    uint32_t r8_2 = zx.d(*(rbx + 0xa))
                    result = zx.q(i[1].w)
                    
                    if (result.d != zx.d(rbx[1].w) + r8_2)
                        break
                    
                    int64_t** i_1 = i
                    *(rbx + 0xa) = *(i + 0xa) + r8_2.w
                    *rbx = *i
                    i = *i
                    result = arg1[2]
                    *i_1 = result
                    arg1[2] = i_1
                
                break
        else
            rdi = rbx
            rbx = *rbx
            
            if (rbx != 0)
                continue
        
        int64_t*** result_1 = arg1[2]
        
        if (result_1 == 0)
            arg1[3].d += 1
            result = sub_140a82f30(0x10, 0)
            result_1 = result
        else
            result = *result_1
            arg1[2] = result
        
        *result_1 = rbx
        result_1[1].w = rbp_1.w
        *(result_1 + 0xa) = rsi.w
        *rdi = result_1
        break
else
    int64_t* result_2 = arg1[2]
    
    if (result_2 == 0)
        arg1[3].d += 1
        result = sub_140a82f30(0x10, 0)
        result_2 = result
    else
        result = *result_2
        arg1[2] = result
    
    result_2[1].w = *arg2
    *result_2 = 0
    *(result_2 + 0xa) = rsi.w
    *rdi = result_2

return result
