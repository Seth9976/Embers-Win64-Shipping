// 函数: sub_1405b0f80
// 地址: 0x1405b0f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141d79720()
int64_t* result_1 = result

if (result != 0)
    int64_t rax = sub_141d828c0()
    void* rcx = result_1[2]
    result = rax + 0x30
    int64_t rdx_1 = sx.q(*(result + 8))
    
    if (rdx_1.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rdx_1 << 3)) == result)
        int64_t var_28 = *arg1
        int64_t* rax_2 = arg1[1]
        
        if (rax_2 != 0)
            rax_2[1].d += 1
        
        int128_t var_18 = *(arg1 + 0x60)
        result = sub_141d7d110(result_1, &var_28, &arg1[2], &var_18)
        
        if (rax_2 != 0)
            result = zx.q(rax_2[1].d)
            rax_2[1].d -= 1
            
            if (result.d == 1)
                result = (**rax_2)(rax_2)
                int32_t rdi = *(rax_2 + 0xc)
                *(rax_2 + 0xc) -= 1
                
                if (rdi == 1)
                    return (*(*rax_2 + 8))(rax_2, zx.q(rdi))

return result
