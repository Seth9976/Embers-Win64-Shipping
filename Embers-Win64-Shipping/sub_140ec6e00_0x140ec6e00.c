// 函数: sub_140ec6e00
// 地址: 0x140ec6e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx
rcx.b = sub_140b5b8a0(*(arg1 + 0x3e0), 0) == 0
bool result = *(arg1 + 0x3e4) != 0 | rcx.b

if (result != 0 && *(arg1 + 0x3e8) != 0 && *(arg1 + 0x3f0) != 0 && *(arg1 + 0x400) != 0xffffffff)
    void* rcx_1 = *(arg1 + 0x3a0)
    int64_t* rdx_1 = *(rcx_1 + 0x50)
    void* r8_3 = &rdx_1[sx.q(*(rcx_1 + 0x58)) * 2]
    uint128_t var_28
    void* const rcx_2
    int64_t* rbx_1
    int64_t* rdi_1
    uint128_t zmm6
    
    if (rdx_1 == r8_3)
    label_140ec6eb2:
        zmm6 = zx.o(0)
        rcx_2 = nullptr
        var_28 = zx.o(0)
        rbx_1 = nullptr
        rdi_1 = var_28:8.q
    else
        while (true)
            rcx_2 = *rdx_1
            
            if (*(rcx_2 + 0x80) == *(arg1 + 0x3e0) && *(rcx_2 + 0x88) == *(arg1 + 0x3e8))
                rdi_1 = rdx_1[1]
                var_28.q = rcx_2
                var_28:8.q = rdi_1
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                
                zmm6 = var_28
                rbx_1 = rdi_1
                break
            
            rdx_1 = &rdx_1[2]
            
            if (rdx_1 == r8_3)
                goto label_140ec6eb2
    
    if (rcx_2 != 0)
        char rax_1 = *(rcx_2 + 0x88)
        
        if ((rax_1 == 5 || rax_1 == 8) && (rax_1 == 3 || *(rcx_2 + 0x95) != 0))
            void* rcx_3 = *(arg1 + 0x3a0)
            
            for (int64_t* i = *(rcx_3 + 0x50); i != &i[sx.q(*(rcx_3 + 0x58)) * 2]; i = &i[2])
                void* rcx_4 = *i
                
                if (*(rcx_4 + 0x80) == *(arg1 + 0x3e0) && *(rcx_4 + 0x88) == 3)
                    int64_t* rbx_2 = i[1]
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                    
                    if (rcx_4 != 0)
                        var_28.q = rcx_4
                        var_28:8.q = rbx_2
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d += 1
                        
                        uint128_t zmm0 = zmm6
                        zmm6 = var_28
                        int64_t* rdi_2 = _mm_bsrli_si128(zmm0, 8).q
                        var_28 = zmm6
                        
                        if (rdi_2 != 0)
                            rdi_2[1].d -= 1
                            
                            if (rdi_2[1].d == 1)
                                (**rdi_2)(rdi_2)
                                int32_t temp5_1 = *(rdi_2 + 0xc)
                                *(rdi_2 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rdi_2 + 8))(rdi_2, 1)
                        
                        rdi_1 = var_28:8.q
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp3_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
                    
                    break
        
        var_28 = zmm6
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        sub_140ec0b60(*(arg1 + 0x3a0), &var_28, *(arg1 + 0x400), arg2, arg3)
        rbx_1 = rdi_1
    
    sub_140ed5ec0(arg1 + 0x3e0)
    result = sub_140ea9880(arg1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
