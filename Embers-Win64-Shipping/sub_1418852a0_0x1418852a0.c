// 函数: sub_1418852a0
// 地址: 0x1418852a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xb0)
int64_t* result = nullptr
int32_t r8_4 = (*(arg1 + 0xe4) ^ arg2[3]) | (*(arg1 + 0xe0) ^ arg2[2]) | (*(arg1 + 0xdc) ^ arg2[1])
    | (*arg2 ^ *(arg1 + 0xd8))

if (r8_4 == 0)
    result = *(arg1 + 0xe8)
else
    void arg_10
    int32_t* rax_6
    int128_t zmm1_1
    rax_6, zmm1_1 = sub_140b162a0(arg1 + 0xf0, &arg_10, arg2)
    
    if (*rax_6 != 0xffffffff)
        void* var_48
        sub_141890fe0(arg1, &var_48, arg2, arg4, zmm1_1, arg3)
        void* rbp_1 = var_48
        void* rax_8
        
        while (true)
            bool z_1
            
            if (0 == *(rbp_1 + 0x78))
                *(rbp_1 + 0x78) = 0
                z_1 = true
            else
                int64_t rax_7
                rax_7.b = *(rbp_1 + 0x78)
                z_1 = false
            
            rax_8 = var_48
            
            if (not(z_1))
                break
            
            int64_t* rcx_3 = *(rax_8 + 0x70)
            (*(*rcx_3 + 0x20))(rcx_3, 0xffffffff, 0)
        
        int128_t zmm0_1 = *(rax_8 + 0x80)
        
        if (zmm0_1.b != 0)
            sub_141893010(arg1 + 0xf0, arg2)
            int64_t* rcx_5 = *(arg1 + 0x18)
            (*(*rcx_5 + 0x20))(rcx_5, zx.q(*(arg1 + 0xf8) - *(arg1 + 0x124)))
        else
            int64_t* result_1 = zmm0_1:8.q
            *(arg1 + 0xd8) = *arg2
            result = *(arg1 + 0xe8)
            int64_t* result_2 = result
            
            if (result != result_1)
                *(arg1 + 0xe8) = result_1
                result = result_1
                
                if (result_2 != 0)
                    (**result_2)(result_2, 1)
                    result = *(arg1 + 0xe8)
        
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t rbp_2 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (rbp_2 == 1)
                    (*(*var_40 + 8))(var_40, zx.q(rbp_2))

if (arg1 != -0xb0)
    LeaveCriticalSection(arg1 + 0xb0)

return result
