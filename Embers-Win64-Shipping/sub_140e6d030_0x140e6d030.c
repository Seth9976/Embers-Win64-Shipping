// 函数: sub_140e6d030
// 地址: 0x140e6d030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
int64_t* rcx = data_143e20d18
uint128_t zmm6 = zx.o(arg3)
int64_t var_348
(*(*rcx + 0x68))(rcx, &var_348)
int64_t* var_340

if (var_348 == 0)
label_140e6d20c:
    int32_t rax_16 = arg4[1].d
    int64_t rsi_1 = sx.q(rax_16 - 1)
    
    if (rax_16 - 1 s< 0)
    label_140e6d376:
        sub_140d947e0(arg2)
        
        if (var_340 != 0)
            var_340[1].d -= 1
            
            if (var_340[1].d == 1)
                int64_t rdx_5 = *var_340
                (*rdx_5)(var_340, rdx_5)
                int32_t temp3_1 = *(var_340 + 0xc)
                *(var_340 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    int64_t r8_4 = *var_340
                    (*(r8_4 + 8))(var_340, 1, r8_4)
    else
        int64_t r14_2 = rsi_1 << 4
        
        while (true)
            int64_t* rdi_2 = *arg4 + r14_2
            
            if (sub_140e1acc0(*rdi_2) != 0 && sub_140e1ad10(*rdi_2) == 0)
                void var_318
                (*(*arg1 + 0xf8))(arg1, &var_318, zmm6.q, sub_140e12730(*rdi_2), arg5, arg6, arg5)
                void var_310
                int64_t* var_1d0
                int64_t var_1c8
                
                if (sub_140db3500(&var_318) != 0)
                    sub_140e50940(arg2, &var_318)
                    int64_t var_1d8
                    *(arg2 + 0x140) = var_1d8
                    *(arg2 + 0x148) = var_1d0
                    *(arg2 + 0x150) = var_1c8
                    int32_t var_1c0
                    *(arg2 + 0x158) = var_1c0
                    int32_t var_1bc
                    *(arg2 + 0x15c) = var_1bc
                    int64_t var_1d8_1
                    __builtin_memset(&var_1d8_1, 0, 0x20)
                label_140e6d4a9:
                    sub_140596d80(&var_1c8)
                    
                    if (var_1d0 != 0)
                        var_1d0[1].d -= 1
                        
                        if (var_1d0[1].d == 1)
                            (**var_1d0)(var_1d0)
                            int32_t temp17_1 = *(var_1d0 + 0xc)
                            *(var_1d0 + 0xc) -= 1
                            
                            if (temp17_1 == 1)
                                (*(*var_1d0 + 8))(var_1d0, 1)
                    
                    sub_140d94d20(&var_310)
                    
                    if (var_340 != 0)
                        var_340[1].d -= 1
                        
                        if (var_340[1].d == 1)
                            (**var_340)(var_340)
                            int32_t temp22_1 = *(var_340 + 0xc)
                            *(var_340 + 0xc) -= 1
                            
                            if (temp22_1 == 1)
                                (*(*var_340 + 8))(var_340, 1)
                    
                    break
                
                void var_1b8
                (*(*arg1 + 0x190))(arg1, &var_1b8, zmm6.q, rdi_2, arg5, arg6)
                void var_1b0
                int64_t* var_70
                void var_68
                
                if (sub_140db3500(&var_1b8) != 0)
                    sub_140e52b70(arg2, &var_1b8)
                    sub_140596d80(&var_68)
                    
                    if (var_70 != 0)
                        var_70[1].d -= 1
                        
                        if (var_70[1].d == 1)
                            (**var_70)(var_70)
                            int32_t temp18_1 = *(var_70 + 0xc)
                            *(var_70 + 0xc) -= 1
                            
                            if (temp18_1 == 1)
                                (*(*var_70 + 8))(var_70, 1)
                    
                    sub_140d94d20(&var_1b0)
                    goto label_140e6d4a9
                
                sub_140596d80(&var_68)
                
                if (var_70 != 0)
                    var_70[1].d -= 1
                    
                    if (var_70[1].d == 1)
                        (**var_70)(var_70)
                        int32_t temp20_1 = *(var_70 + 0xc)
                        *(var_70 + 0xc) -= 1
                        
                        if (temp20_1 == 1)
                            (*(*var_70 + 8))(var_70, 1)
                
                sub_140d94d20(&var_1b0)
                sub_140596d80(&var_1c8)
                
                if (var_1d0 != 0)
                    var_1d0[1].d -= 1
                    
                    if (var_1d0[1].d == 1)
                        (**var_1d0)(var_1d0)
                        int32_t temp23_1 = *(var_1d0 + 0xc)
                        *(var_1d0 + 0xc) -= 1
                        
                        if (temp23_1 == 1)
                            (*(*var_1d0 + 8))(var_1d0, 1)
                
                sub_140d94d20(&var_310)
            
            r14_2 -= 0x10
            int64_t temp4_1 = rsi_1
            rsi_1 -= 1
            
            if (temp4_1 - 1 s< 0)
                goto label_140e6d376
else
    uint128_t zmm0 = var_348.o
    uint128_t var_338 = zmm0
    void* rax_3 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int64_t var_328
    sub_140da2300(&var_328, arg4, &var_338)
    int64_t* rbx_1 = var_338:8.q
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* var_320
    
    if (var_328 == 0)
        if (var_320 != 0)
            var_320[1].d -= 1
            
            if (var_320[1].d == 1)
                (**var_320)(var_320)
                int32_t temp7_1 = *(var_320 + 0xc)
                *(var_320 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_320 + 8))(var_320, 1)
        
        goto label_140e6d20c
    
    uint128_t zmm0_1 = var_328.o
    var_338 = zmm0_1
    void* rax_6 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    (*(*arg1 + 0x190))(arg1, arg2, zmm6.q, &var_338, arg5, arg6, arg5)
    int64_t* rbx_2 = var_338:8.q
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp10_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (var_320 != 0)
        var_320[1].d -= 1
        
        if (var_320[1].d == 1)
            (**var_320)(var_320)
            int32_t temp15_1 = *(var_320 + 0xc)
            *(var_320 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_320 + 8))(var_320, 1)
    
    if (var_340 != 0)
        var_340[1].d -= 1
        
        if (var_340[1].d == 1)
            (**var_340)(var_340)
            int32_t temp21_1 = *(var_340 + 0xc)
            *(var_340 + 0xc) -= 1
            
            if (temp21_1 == 1)
                (*(*var_340 + 8))(var_340, 1)
__security_check_cookie(rax_1 ^ &var_388)
return arg2
