// 函数: sub_140966560
// 地址: 0x140966560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1
void* result
int64_t rdx
result, rdx = (*(*arg1 + 0x378))()
void* result_1 = result

if (result == 0)
    result.b = 0
else
    rdx.b = 1
    
    if ((*(*r14 + 0x270))(r14, rdx, arg2, arg3, 0, arg4).b == 0)
        result.b = 0
    else
        int64_t* rbp_1 = r14[0x2e]
        int32_t r12_1 = 0
        int32_t var_a0_1 = 0
        void* rax_1 = sub_140cde0b0()
        
        if ((1 & sub_140b5b8a0(0, 0)) != 0)
            sub_140d19010(rax_1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        result = sub_140d2dfc0(rbp_1, rax_1, 0, 0, 0, 0, 0, 0, 0)
        r14[0x11] = result
        
        if (result != 0)
            (*(*result + 0x2f0))(result, r14, r14[0xea], arg3, 2, 0, 0)
            int32_t rax_5 = *(arg3 + 0x20)
            
            if (*(result + 0x1acc) != 1)
                if (result + 0x1a98 != &r14[0xf3])
                    int32_t i_4 = *(result + 0x1aa0)
                    
                    if (i_4 != 0)
                        int64_t* rdi_2 = *(result + 0x1a98) + 8
                        int32_t i
                        
                        do
                            int64_t* rbx_1 = *rdi_2
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t temp2_1 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (temp2_1 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            rdi_2 = &rdi_2[2]
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                    
                    int32_t i_5 = r14[0xf4].d
                    int64_t* rbx_2 = r14[0xf3]
                    int32_t r8_2 = *(result + 0x1aa4)
                    *(result + 0x1aa0) = i_5
                    
                    if (i_5 != 0 || r8_2 != 0)
                        sub_1405a4be0(result + 0x1a98, i_5, r8_2)
                        int64_t* r8_3 = *(result + 0x1a98)
                        
                        if (i_5 != 0)
                            int32_t i_1
                            
                            do
                                *r8_3 = *rbx_2
                                void* rax_9 = rbx_2[1]
                                r8_3[1] = rax_9
                                
                                if (rax_9 != 0)
                                    *(rax_9 + 8) += 1
                                
                                r8_3 = &r8_3[2]
                                rbx_2 = &rbx_2[2]
                                i_1 = i_5
                                i_5 -= 1
                            while (i_1 != 1)
                    else
                        *(result + 0x1aa4) = 0
                
                sub_14095cd40(&r14[0xf3], 0)
                int64_t var_88
                sub_140d3a3a0(&var_88, result)
                int64_t rax_10 = var_88
                void* result_3 = result_1
                void* result_5 = result_3
                sub_140a2e390(&result_1, u"%d", zx.q(rax_5))
                int16_t* const r8_5 = &data_142d40450
                void* result_4 = &data_142d40450
                int32_t var_90
                
                if (var_90 != 0)
                    result_4 = result_1
                
                if (*(arg3 + 0x18) != 0)
                    r8_5 = *(arg3 + 0x10)
                
                int64_t r10_2 = *result_3
                void** const var_48_1 = &data_142e345d8
                int64_t (* var_68)(int32_t* arg1, int64_t* arg2) = sub_1409551e0
                int64_t var_58_1 = 0
                int128_t var_40_1 = rax_10.o
                int64_t var_30_1 = rax_5.q
                (*(r10_2 + 0x50))(result_3, &var_68, r8_5, result_4, 0x89, 0, 1)
                void* result_2 = result_1
                
                if (result_2 != 0)
                    sub_140a74f90(result_2)
                
                sub_142164160(arg1)
                result.b = 1
            else if (r14[0xf4].d s<= 1)
                sub_142164160(r14)
                result.b = 1
            else
                int64_t rax_13 = (*(*r14 + 0x438))(r14)
                int64_t rcx_17 = sx.q(r14[0xf4].d)
                
                if (rcx_17.d == 0)
                    sub_142164160(r14)
                    result.b = 1
                else
                    int32_t rdi_3 = 0
                    var_a0_1 = 0
                    int32_t r15_2 = 0
                    int64_t rsi_2 = 0
                    bool r8_6 = *r14[0xf3] == rax_13
                    bool var_a8_1 = r8_6
                    
                    do
                        int64_t r9_2 = sx.q(r15_2)
                        rsi_2 += 1
                        r15_2 += 1
                        
                        if (rsi_2 s< rcx_17)
                            int64_t rcx_20 = (rsi_2 << 4) + r14[0xf3]
                            
                            do
                                int32_t rax_15
                                rax_15.b = *rcx_20 == rax_13
                                
                                if (zx.d(r8_6) != rax_15)
                                    break
                                
                                r15_2 += 1
                                rsi_2 += 1
                                rcx_20 += 0x10
                            while (rsi_2 s< rcx_17)
                        
                        int32_t i_3 = r15_2 - r9_2.d
                        
                        if (r8_6 == 0)
                            if (i_3 != 0)
                                int64_t* r14_5 = (r9_2 << 4) + 8 + arg1[0xf3]
                                int32_t i_2
                                
                                do
                                    int64_t* rdi_4 = *r14_5
                                    
                                    if (rdi_4 != 0)
                                        rdi_4[1].d -= 1
                                        
                                        if (rdi_4[1].d == 1)
                                            (**rdi_4)(rdi_4)
                                            int32_t temp6_1 = *(rdi_4 + 0xc)
                                            *(rdi_4 + 0xc) -= 1
                                            
                                            if (temp6_1 == 1)
                                                (*(*rdi_4 + 8))(rdi_4, 1)
                                    
                                    r14_5 = &r14_5[2]
                                    i_2 = i_3
                                    i_3 -= 1
                                while (i_2 != 1)
                                r8_6 = var_a8_1
                                rdi_3 = var_a0_1
                            
                            r14 = arg1
                        else
                            if (rdi_3 != r9_2.d)
                                int64_t rax_16 = r14[0xf3]
                                memmove((sx.q(rdi_3) << 4) + rax_16, (r9_2 << 4) + rax_16, i_3 << 4)
                                r8_6 = var_a8_1
                            
                            rdi_3 += i_3
                            var_a0_1 = rdi_3
                        
                        r8_6 ^= 1
                        var_a8_1 = r8_6
                    while (rsi_2 s< rcx_17)
                    
                    r14[0xf4].d = rdi_3
                    sub_142164160(r14)
                    result.b = 1
        else
            if (*arg4 != Could not cast the ServerConnection into the base connection class for this net")
                arg4[1].d = 0
                
                if (*(arg4 + 0xc) != 0x57)
                    sub_1405947f0(arg4, (result + 0x57).d)
                    r12_1 = arg4[1].d
                
                arg4[1].d = r12_1 + 0x57
                
                if (r12_1 + 0x57 s> *(arg4 + 0xc))
                    sub_140594770(arg4)
                
                int64_t rcx_5 = *arg4
                __builtin_memcpy(rcx_5, Could not cast the ServerConnection into the base connec", 
                    0x70)
                *(rcx_5 + 0x70) = (*Could not cast the ServerConnection into the base connection class for this net")
                    [0x38].o
                __builtin_wcscpy(rcx_5 + 0x80, u"ss for this netdriver!")
            
            result.b = 0

return result
