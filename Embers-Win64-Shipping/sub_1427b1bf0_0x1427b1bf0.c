// 函数: sub_1427b1bf0
// 地址: 0x1427b1bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x40)
uint64_t result
int32_t var_98

if (rcx == 0)
    int64_t* rcx_6 = *(arg1 + 0x38)
    int32_t rbx_3 = 0
    var_98 = 0
    int64_t var_90_2 = 0
    var_98.q = 0
    int32_t var_90_3 = 0
    *(arg1 + 0x50) = var_98.o
    result = (*(*rcx_6 + 0x298))(rcx_6, arg3, &var_98)
    int64_t* rcx_7 = var_98.q
    
    if (var_90_3 != 0)
        void arg_8
        void* arg_18 = &arg_8
        result = sub_14279bbe0(rcx_7, var_90_3)
        rcx_7 = var_98.q
        int64_t r14
        r14.b = 0
        
        if (var_90_3 s> 0)
            int64_t* rsi_2 = nullptr
            
            while (r14.b == 0)
                int64_t* rcx_8 = *(rsi_2 + rcx_7)
                int32_t var_70
                result = (*(*rcx_8 + 0x280))(rcx_8, &var_70, arg2, 1)
                rcx_7 = var_98.q
                
                if (var_70 == 1)
                    r14.b = 1
                    int64_t var_68
                    *(arg1 + 0x40) = var_68
                    result = *(rsi_2 + rcx_7 + 0x18)
                    *(arg1 + 0x48) = result
                    int128_t var_60
                    *(arg1 + 0x50) = var_60
                
                rbx_3 += 1
                rsi_2 = &rsi_2[4]
                
                if (rbx_3 s>= var_90_3)
                    break
    
    if (rcx_7 != 0)
        return sub_140a74f90(rcx_7)
else
    int32_t result_1
    (*(*rcx + 0x288))(rcx, &result_1, arg2, arg1 + 0x50)
    result = zx.q(result_1)
    
    if (result.d == 3)
        var_98 = 0
        int64_t var_90_1 = 0
        int128_t zmm0 = var_98.o
        *(arg1 + 0x40) = 0
        *(arg1 + 0x48) = 0
        *(arg1 + 0x50) = zmm0
    else if (result.d != 2)
        int64_t rbx_1 = **(arg1 + 0x30)
        void var_88
        int64_t* rax_2 = _vfprintf_p_l(&var_88, 
            UInteractiveToolManager::HandleCapturedKeyboardInput - unexpected capture state!", 
            UInputRouter")
        result = (*(rbx_1 + 8))(*(arg1 + 0x30), rax_2, 0)
        int64_t* var_80
        
        if (var_80 != 0)
            result = zx.q(var_80[1].d)
            var_80[1].d -= 1
            
            if (result.d == 1)
                result = (**var_80)(var_80)
                int32_t rsi_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    result = (*(*var_80 + 8))(var_80, zx.q(rsi_1))
    
    if (*(arg1 + 0x29) != 0)
        int64_t* rcx_5 = *(arg1 + 0x30)
        return (*(*rcx_5 + 0x10))(rcx_5)
return result
