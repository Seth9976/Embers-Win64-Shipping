// 函数: sub_14265e0a0
// 地址: 0x14265e0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = nullptr
void* rax_1

if (arg1 != 0)
    rax_1 = sub_1423de540(data_143f5b298, arg1, 1)
    r10 = rax_1

if ((arg1 == 0 || rax_1 == 0) && arg6 != 0)
    r10 = sub_1423de540(data_143f5b298, arg6, 1)

*arg4 = *arg2
arg4[1].d = arg2[1].d
uint64_t result

if (r10 == 0)
    result.b = 1
    return result

int64_t* rsi = *(r10 + 0x120)

if (rsi == 0)
    result.b = 1
else
    void* rax_3 = sub_14269bba0()
    void* rdx_2 = rsi[2]
    result = sx.q(*(rax_3 + 0x38))
    
    if (result.d s> *(rdx_2 + 0x38))
        result.b = 1
    else if (*(*(rdx_2 + 0x30) + (result << 3)) != rax_3 + 0x30)
        result.b = 1
    else
        uint64_t result_1
        
        if (arg6 != 0)
            result = sub_140d21950(arg6, sub_142548ca0())
            
            if (result == 0)
                goto label_14265e1a3
            
            int64_t rdx_4 = *result
            result = (*(*rsi + 0x2b0))(rsi, (*(rdx_4 + 0x10))(result, rdx_4), arg2, &data_143dbb1f8)
            result_1 = result
            
            if (result != 0)
                goto label_14265e1c3
            
            goto label_14265e1a3
        
    label_14265e1a3:
        result_1 = rsi[5]
        
        if (result_1 != 0)
        label_14265e1c3:
            void var_28
            int64_t* rax_6 = sub_14265ad90(&var_28, result_1, arg6, arg5)
            int64_t var_38 = *rax_6
            void* rcx_8 = rax_6[1]
            void* var_30_1 = rcx_8
            
            if (rcx_8 != 0)
                *(rcx_8 + 8) += 1
            
            char rax_7 = (*(result_1 + 0x2d8))(result_1, arg2, arg3, arg4, &var_38, 0)
            int64_t* rbx_2 = rax_6[1]
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rdi_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rdi_1 == 1)
                        int64_t r8_5 = *rbx_2
                        (*(r8_5 + 8))(rbx_2, zx.q(rdi_1), r8_5)
            
            return zx.q(rax_7)
        
        result.b = 1

return result
