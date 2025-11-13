// 函数: sub_1427b1dc0
// 地址: 0x1427b1dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x60)
uint64_t result
int32_t var_a8

if (rcx == 0)
    int64_t* rcx_6 = *(arg1 + 0x38)
    var_a8 = 0
    int64_t var_a0_2 = 0
    var_a8.q = 0
    int32_t var_a0_3 = 0
    *(arg1 + 0x70) = var_a8.o
    result = (*(*rcx_6 + 0x298))(rcx_6, arg3, &var_a8)
    int64_t* rcx_7 = var_a8.q
    
    if (var_a0_3 != 0)
        void arg_8
        void* arg_18 = &arg_8
        result, arg3 = sub_14279bbe0(rcx_7, var_a0_3)
        rcx_7 = var_a8.q
        int64_t r15
        r15.b = 0
        int32_t r14_1 = 0
        
        if (var_a0_3 s> 0)
            int64_t* rsi_2 = nullptr
            
            while (r15.b == 0)
                int64_t* rcx_8 = *(rsi_2 + rcx_7)
                int32_t var_80
                result = (*(*rcx_8 + 0x280))(rcx_8, &var_80, arg2, 1)
                
                if (var_80 != 1)
                    rcx_7 = var_a8.q
                else
                    int64_t* rcx_9 = *(arg1 + 0xa0)
                    
                    if (rcx_9 != 0)
                        (*(*rcx_9 + 0x2b8))(rcx_9)
                        *(arg1 + 0xa0) = 0
                        *(arg1 + 0x68) = 0
                    
                    r15.b = 1
                    rcx_7 = var_a8.q
                    int64_t var_78
                    *(arg1 + 0x60) = var_78
                    result = *(rsi_2 + rcx_7 + 0x18)
                    *(arg1 + 0x68) = result
                    int128_t var_70
                    *(arg1 + 0x70) = var_70
                
                r14_1 += 1
                rsi_2 = &rsi_2[4]
                
                if (r14_1 s>= var_a0_3)
                    break
    
    if (rcx_7 != 0)
        result, arg3 = sub_140a74f90(rcx_7)
else
    int32_t result_1
    (*(*rcx + 0x288))(rcx, &result_1, arg2, arg1 + 0x70)
    result = zx.q(result_1)
    
    if (result.d == 3)
        var_a8 = 0
        int64_t var_a0_1 = 0
        int128_t zmm0 = var_a8.o
        *(arg1 + 0x60) = 0
        *(arg1 + 0x68) = 0
        *(arg1 + 0x70) = zmm0
    else if (result.d != 2)
        int64_t rbx_1 = **(arg1 + 0x30)
        void var_98
        int64_t* rax_2
        rax_2, arg3 = _vfprintf_p_l(&var_98, 
            UInteractiveToolManager::HandleCapturedMouseInput - unexpected capture state!", 
            UInputRouter")
        result = (*(rbx_1 + 8))(*(arg1 + 0x30), rax_2, 0)
        int64_t* var_90
        
        if (var_90 != 0)
            result = zx.q(var_90[1].d)
            var_90[1].d -= 1
            
            if (result.d == 1)
                result = (**var_90)(var_90)
                int32_t rsi_1 = *(var_90 + 0xc)
                *(var_90 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    result = (*(*var_90 + 8))(var_90, zx.q(rsi_1))
    
    if (*(arg1 + 0x29) != 0)
        int64_t* rcx_5 = *(arg1 + 0x30)
        result = (*(*rcx_5 + 0x10))(rcx_5)

if (*(arg1 + 0x60) == 0)
    result = sub_1427b2040(arg1, arg2, arg3)
    
    if (result.b != 0 && *(arg1 + 0x28) != 0)
        int64_t* rcx_11 = *(arg1 + 0x30)
        return (*(*rcx_11 + 0x10))(rcx_11)

return result
