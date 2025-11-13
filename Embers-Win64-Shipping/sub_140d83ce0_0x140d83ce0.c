// 函数: sub_140d83ce0
// 地址: 0x140d83ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) != 1)
    return DefWindowProcW(arg2, arg3, arg4, arg5) __tailcall

uint32_t Msg
LPARAM lParam

if (arg3 u> 0x281)
    if (arg3 == 0x282)
        Msg = 0x282
        lParam = arg5
    else
        if (arg3 == 0x286)
            return 0
        
        if (arg3 != 0x288)
            Msg = arg3
            lParam = arg5
        else
            Msg = 0x288
            lParam = arg5
else if (arg3 == 0x281)
    int32_t rax_20
    
    if (*(arg1 + 0x50) != 0 && arg4 != 0)
        rax_20 = *(arg1 + 0x48)
    
    if (*(arg1 + 0x50) == 0 || arg4 == 0 || test_bit(rax_20, 0x11) || not(test_bit(rax_20, 0x10)))
        lParam = arg5
        Msg = 0x281
    else
        Msg = 0x281
        lParam = zx.q(arg5.d) & 0x7fffffff
else if (arg3 u< 0x50)
    Msg = arg3
    lParam = arg5
else if (arg3 u<= 0x51)
    *(arg1 + 0x48) = ImmGetProperty(arg5, 4)
    Msg = arg3
    lParam = arg5
else if (arg3 == 0x10d)
    if (*(arg1 + 0x50) != 0)
        sub_140d76820(arg1)
    
    Msg = 0x10d
    lParam = arg5
else if (arg3 == 0x10e)
    if (*(arg1 + 0x50) != 0)
        sub_140d7a330(arg1)
    
    Msg = 0x10e
    lParam = arg5
else if (arg3 != 0x10f)
    Msg = arg3
    lParam = arg5
else
    int64_t rax_2 = *(arg1 + 0x50)
    
    if (rax_2 != 0)
        int64_t* rbx_1 = *(arg1 + 0x58)
        int64_t var_40 = rax_2
        int32_t var_38_1 = rbx_1.d
        
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
        
        int32_t arg_8
        sub_140d7a930(arg1 + 0x60, &arg_8, &var_40)
        int64_t rax_3 = sx.q(arg_8)
        int32_t r12_1 = 0
        void* const rsi_2
        
        if (rax_3.d == 0xffffffff)
            rsi_2 = nullptr
        else
            rsi_2 = rax_3 * 0x38 + *(arg1 + 0x60)
        
        if (rbx_1 != 0)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (*(rsi_2 + 0x20) == 0)
            sub_140d76820(arg1)
        
        HIMC rax_5 = ImmGetContext(arg2)
        HIMC var_58 = rax_5
        sub_140d89c40(arg1, rax_5)
        uint8_t rbx_3 = (arg5 u>> 0xb).b & 1
        arg_8.b = arg5.b u>> 7 & 1
        
        if (arg5 == 0)
            sub_140d76cc0(arg1)
        
        int32_t var_68
        int32_t var_64
        int32_t var_60
        
        if (rbx_3 != 0)
            int64_t* rcx_11 = *(arg1 + 0x50)
            var_60 = 0
            var_64 = 0
            var_68 = 1
            (*(*rcx_11 + 0x20))(rcx_11, &var_60, &var_64, &var_68, var_68, var_60)
            sub_140d7b340(&var_40, var_58, GCS_RESULTSTR)
            int64_t* rcx_13 = *(arg1 + 0x50)
            (*(*rcx_13 + 0x38))(rcx_13, zx.q(*(rsi_2 + 0x24)), zx.q(*(rsi_2 + 0x28)), &var_40)
            int64_t* rcx_14 = *(arg1 + 0x50)
            
            if (*(rsi_2 + 0x21) == 0)
                int32_t rdx_8 = var_38_1 - 1
                
                if (var_38_1 == 0)
                    rdx_8 = 0
                
                (*(*rcx_14 + 0x28))(rcx_14, zx.q(rdx_8 + *(rsi_2 + 0x24)), 0, 1)
            else
                (*(*rcx_14 + 0x28))(rcx_14, zx.q(var_60), zx.q(var_64), zx.q(var_68))
            
            sub_140d7a330(arg1)
            int64_t rcx_16 = var_40
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
        
        HIMC r13_3 = var_58
        
        if ((arg5.b u>> 3 & 1) != 0)
            sub_140d7b340(&var_40, r13_3, GCS_COMPSTR)
            
            if ((var_38_1 == 0 || var_38_1 == 1) && rbx_3 == 0)
                sub_140d76cc0(arg1)
            
            int64_t* rcx_19 = *(arg1 + 0x50)
            var_64 = 0
            var_60 = 0
            var_68 = 1
            (*(*rcx_19 + 0x20))(rcx_19, &var_64, &var_60, &var_68, var_68, var_60)
            int32_t r8_7 = var_60
            
            if (r8_7 != 0)
                int64_t* rcx_20 = *(arg1 + 0x50)
                uint64_t rdx_12 = zx.q(var_64)
                var_58 = nullptr
                int64_t var_50_1 = 0
                (*(*rcx_20 + 0x38))(rcx_20, rdx_12, r8_7, &var_58)
                HIMC rcx_21 = var_58
                
                if (rcx_21 != 0)
                    sub_140a74f90(rcx_21)
            
            if (*(rsi_2 + 0x20) == 0)
                sub_140d76820(arg1)
            
            int32_t rbx_4 = *(rsi_2 + 0x24)
            var_58.d = *(rsi_2 + 0x28)
            
            if (var_38_1 != 0)
                r12_1 = var_38_1 - 1
            
            *(rsi_2 + 0x28) = r12_1
            int64_t* rcx_23 = *(arg1 + 0x50)
            (*(*rcx_23 + 0x68))(rcx_23, zx.q(rbx_4), zx.q(r12_1))
            int64_t* rcx_24 = *(arg1 + 0x50)
            (*(*rcx_24 + 0x38))(rcx_24, zx.q(rbx_4), zx.q(var_58.d), &var_40)
            int64_t rcx_25 = var_40
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
        
        if (((arg5 u>> 0xe).b & 1) == 0 && arg_8.b != 0)
            int16_t rax_18 = ImmGetCompositionStringW(r13_3, GCS_CURSORPOS, nullptr, 0)
            int64_t* rcx_27 = *(arg1 + 0x50)
            (*(*rcx_27 + 0x28))(rcx_27, zx.q(sx.d(rax_18) + *(rsi_2 + 0x24)), 0, 1)
        
        ImmReleaseContext(arg2, r13_3)
    
    Msg = 0x10f
    lParam = arg5

return DefWindowProcW(arg2, Msg, arg4, lParam)
