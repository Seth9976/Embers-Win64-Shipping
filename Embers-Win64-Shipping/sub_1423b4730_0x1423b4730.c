// 函数: sub_1423b4730
// 地址: 0x1423b4730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
void* r14 = &(*U"1111")[rbx]
int64_t result = sub_1419803d0((*U"1111")[rbx])

if (result.b == 0)
    result.b = 0
else
    char rax = sub_140a80f40()
    char rax_1
    
    if (rax == 0)
        rax_1 = sub_140a80ed0()
    
    bool cond:0_1
    
    if (rax != 0 || rax_1 != 0)
        char rax_5
        
        if (arg2 != 0)
            rax_5 = (*(arg2 + 0x60))()
        
        int64_t rsi
        
        if (arg2 == 0 || rax_5 != 0)
            rsi.b = 1
        else
            rsi.b = 0
        
        if (sub_1419803d0(*r14).b == 0 || rsi.b == 0 || arg1 == 0)
            result.b = 0
        else
            result = (*(*arg1 + 0x280))(arg1)
            
            if (result == 0)
                result.b = 0
            else
                int64_t r9_1 = *result
                int64_t arg_20 = 0
                result = (*(r9_1 + 0x40))(result, zx.q(rbx.d), &arg_20, r9_1)
                
                if (result == 0)
                    result.b = 0
                else
                    int64_t rdx_2 = *result
                    int32_t rax_7 = (*(rdx_2 + 0x168))(result, rdx_2)
                    int64_t rdx_3 = *result
                    result = (*(rdx_3 + 0x170))(result, rdx_3)
                    
                    if (rax_7 == 2)
                        result.b = 1
                    else
                        if (rax_7 == 1)
                            cond:0_1 = result.b == 0
                            goto label_1423b48b9
                        
                        result.b = 0
    else
        if (data_143de5480 != rax_1)
            result.b = GetCurrentThreadId().d == data_143de5470
        
        if (data_143de5480 == rax_1 || result.b != 0)
            char rax_3
            
            if (arg2 != 0)
                rax_3 = (*(arg2 + 0x60))()
            
            if (arg2 == 0 || rax_3 != 0)
                rbx.b = 1
            else
                rbx.b = 0
            
            if (sub_1419803d0(*r14).b != 0 && rbx.b != 0 && arg1 != 0)
                result = (*(*arg1 + 0x268))(arg1)
                goto label_1423b47d1
            
            result.b = 0
        else if (arg2 == 0)
            if (arg1 != 0)
                goto label_1423b47b7
            
            result.b = 0
        else if ((*(arg2 + 0x60))().b == 0 || arg1 == 0)
            result.b = 0
        else
        label_1423b47b7:
            int64_t rax_2 = *arg1
            int128_t var_18 = zx.o(0)
            result = (*(rax_2 + 0x270))(arg1, &var_18)
        label_1423b47d1:
            char rcx_2 = *(result + 0x209)
            
            if (rcx_2 == 2)
                result.b = 1
            else if (rcx_2 != 1)
                result.b = 0
            else
                cond:0_1 = (*(result + 0x20a) & rcx_2) == 0
            label_1423b48b9:
                
                if (cond:0_1)
                    result.b = 0
                else
                    result.b = 1

return result
