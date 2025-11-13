// 函数: sub_1423f3360
// 地址: 0x1423f3360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2
int128_t zmm6 = arg3

if (*(arg2 + 0x98) != 0)
    zmm6 = sub_1424473a0(arg2 + 8)

uint64_t result = *(rsi + 0x278)
int64_t var_d8

if (result == 0)
    sub_1423d37e0(arg1, rsi)
    var_d8 = 0
    int32_t var_d0_1 = 0
    sub_1405947f0(&var_d8, 0x4d)
    int32_t rax = var_d0_1 + 0x4d
    var_d0_1 = rax
    
    if (rax s> 0)
        sub_140594770(&var_d8)
    
    UnDecorator::getReferenceType(var_d8, 
        UEngine::TickWorldTravel has no world after ticking seamless travel handler.", 0x9a)
    result = sub_1423d27f0(arg1, *(rsi + 0x278), 0xa, &var_d8)
    int64_t rcx_6 = var_d8
    
    if (rcx_6 != 0)
        return sub_140a74f90(rcx_6)
else
    uint64_t var_c8
    void var_b8
    
    if (*(result + 0x578) s<= 1)
    label_1423f35cb:
        
        if (*(rsi + 0xc0) s> 1)
            int64_t* rcx_17 = *(result + 0x128)
            
            if (rcx_17 != 0)
                (*(*rcx_17 + 0x728))(rcx_17)
            
            int32_t rbx_5 = *(rsi + 0xc0)
            uint64_t r14_2 = 0
            int64_t rdi_3 = *(rsi + 0xb8)
            __builtin_memset(&var_d8, 0, 0x18)
            
            if (rbx_5 != 0)
                sub_1405a4c70(&var_c8, rbx_5, 0)
                r14_2 = var_c8
                memcpy(r14_2, rdi_3, rbx_5 * 2)
            
            int16_t* r8_7 = &data_142d40450
            
            if (rbx_5 != 0)
                r8_7 = r14_2
            
            result = (*(*arg1 + 0x440))(arg1, rsi, 
                sub_1423fb9e0(&var_b8, rsi + 0xd0, r8_7, zx.d(*(rsi + 0xc8))), &var_d8)
            
            if (result.d == 1)
                int64_t rdx_14 = *(rsi + 0x278)
                
                if (rdx_14 == 0)
                    sub_1423d37e0(arg1, rsi)
                    rdx_14 = *(rsi + 0x278)
                
                result = sub_1423d27f0(arg1, rdx_14, 0xb, &var_d8)
            
            if (r14_2 != 0)
                result = sub_140a74f90(r14_2)
            
            goto label_1423f38bd
        
        int64_t* rcx_25 = *(rsi + 0x1a0)
        
        if (rcx_25 != 0)
            result = (*(*rcx_25 + 0x260))(rcx_25, zmm6.d)
            void* rcx_26 = *(rsi + 0x1a0)
            
            if (rcx_26 != 0)
                result = zx.q(*(rcx_26 + 0xb8))
                
                if (result.d != 0)
                    result = zx.q(result.d - 1)
                    
                    if (result.d s> 0)
                        int64_t rax_6 = *(rcx_26 + 0x30)
                        *(arg1 + 0xa04) += 1
                        int64_t r12
                        r12.b = 0
                        int32_t rcx_27 = *(arg1 + 0xa04)
                        int32_t rax_7 = arg1[0x13f].d
                        int64_t rdi_4 = sx.q(rax_7 - 1)
                        
                        if (rax_7 - 1 s>= 0)
                            int64_t rbx_8 = rdi_4 << 4
                            int64_t temp1_1
                            
                            do
                                int64_t rcx_28 = arg1[0x13e]
                                
                                if (*(rbx_8 + rcx_28 + 8) == 0)
                                    r12.b = 1
                                else
                                    int64_t* rcx_29 = *(rbx_8 + rcx_28)
                                    
                                    if (rcx_29 == 0)
                                        r12.b = 1
                                    else if ((*(*rcx_29 + 0x50))(rcx_29, 0, rax_6, 8, rcx_26 + 0xb0)
                                            == 0)
                                        r12.b = 1
                                
                                rbx_8 -= 0x10
                                temp1_1 = rdi_4
                                rdi_4 -= 1
                            while (temp1_1 - 1 s>= 0)
                            rcx_27 = *(arg1 + 0xa04)
                            rsi = arg2
                        
                        *(arg1 + 0xa04) = rcx_27 - 1
                        
                        if (r12.b != 0)
                            sub_140599630(&arg1[0x13e], 0)
                        
                        return (*(*arg1 + 0x480))(arg1, rsi)
                
                if (*(rcx_26 + 0xa8) != 0 && *(rcx_26 + 0xa9) == 0)
                    int64_t* rcx_32 = *(rsi + 0x218)
                    
                    if (rcx_32 != 0)
                        result = (*(*rcx_32 + 0x340))(rcx_32)
                    
                    if (rcx_32 == 0 || result.b == 0)
                        if (sub_1423e9570(arg1, *(rsi + 0x1a0) + 0x68) == 0)
                            sub_1423d37e0(arg1, rsi)
                            return sub_1423d27f0(arg1, *(rsi + 0x278), 3, *(rsi + 0x1a0) + 0x68)
                        
                        void* rbx_9 = *(rsi + 0x1a0)
                        int64_t rdi_5 = *arg1
                        var_d8 = 0
                        int64_t var_d0_2 = 0
                        char rax_16 = (*(rdi_5 + 0x450))(arg1, rsi, 
                            sub_1423cf790(&var_b8, rbx_9 + 0x40), rbx_9, &var_d8)
                        int64_t* rcx_38 = *(rsi + 0x1a0)
                        
                        if (rcx_38 == 0)
                            sub_1423d37e0(arg1, rsi)
                            result = sub_1423d27f0(arg1, *(rsi + 0x278), 6, &var_d8)
                        else
                            result = (*(*rcx_38 + 0x278))(rcx_38, arg1, rsi, zx.q(rax_16), &var_d8)
                            *(rsi + 0x1a0) = 0
                        
                        goto label_1423f38bd
        else if (arg1[0x117].b == 6)
            arg1[0x117].b = 0
    else
        *(result + 0x55c) = *(result + 0x55c) f- zmm6.d
        result = *(rsi + 0x278)
        int32_t zmm1 = *(result + 0x55c)
        
        if (zmm1 f> 0f)
            goto label_1423f35cb
        
        int64_t* rcx_7 = *(result + 0x128)
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x728))(rcx_7, zmm1)
            result = *(rsi + 0x278)
        
        int32_t r14_1 = 0
        __builtin_memset(&var_d8, 0, 0x18)
        int16_t* r12_1 = nullptr
        int32_t rbx_1 = *(result + 0x578)
        int64_t rdi_1 = *(result + 0x570)
        int16_t* rdi_2
        int16_t* r8_1
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_c8, rbx_1, 0)
            r12_1 = var_c8
            memcpy(r12_1, rdi_1, rbx_1 * 2)
            result = *(rsi + 0x278)
            r8_1 = r12_1
            rdi_2 = r12_1
        else
            r8_1 = nullptr
            rdi_2 = nullptr
        
        if (rbx_1 == 0)
            r8_1 = &data_142d40450
        
        result = (*(*arg1 + 0x440))(arg1, rsi, 
            sub_1423fb9e0(&var_b8, rsi + 0xd0, r8_1, zx.d(*(result + 0x569))), &var_d8)
        
        if (result.d != 0)
            void* rbx_3 = *(rsi + 0x278)
            
            if (rbx_3 == 0)
                sub_1423d37e0(arg1, rsi)
            else if (*(rbx_3 + 0x570) != &data_142d40450)
                *(rbx_3 + 0x578) = 0
                
                if (*(rbx_3 + 0x57c) != 0)
                    sub_1405947f0(rbx_3 + 0x570, 0)
                    r14_1 = *(rbx_3 + 0x578)
                
                *(rbx_3 + 0x578) = r14_1
                
                if (r14_1 s> *(rbx_3 + 0x57c))
                    sub_140594770(rbx_3 + 0x570)
            
            result = sub_1423d27f0(arg1, *(rsi + 0x278), 0xa, &var_d8)
        
        if (rdi_2 != 0)
            result = sub_140a74f90(r12_1)
        
    label_1423f38bd:
        int64_t rcx_41 = var_d8
        
        if (rcx_41 != 0)
            return sub_140a74f90(rcx_41)
return result
