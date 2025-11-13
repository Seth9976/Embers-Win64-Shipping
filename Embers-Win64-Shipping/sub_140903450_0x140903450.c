// 函数: sub_140903450
// 地址: 0x140903450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
int32_t arg_8 = 0
EnterCriticalSection(arg1 + 0x18)

if (*(arg1 + 0x140) != 0)
    int64_t rdx_1 = sx.q(*(arg1 + 0x140))
    int64_t r13_1 = sx.q(*(*(arg1 + 0x138) + (rdx_1 << 2) - 4))
    *(arg1 + 0x140) = (rdx_1 - 1).d
    int64_t* rdi_1
    int64_t* r14_1
    uint64_t result_1
    
    if (*(arg1 + 0x160) s<= 0)
        uint64_t result_2 = j_sub_140a82f30(0x40)
        result_1 = result_2
        
        if (result_2 == 0)
            result_1 = 0
            rdi_1 = arg_8.q
            r14_1 = arg_8.q
        else
            r14_1 = *(arg1 + 0xe8)
            int64_t r8_2 = *(arg1 + 0xe0)
            
            if (r14_1 != 0)
                r14_1[1].d += 1
            
            rdi_1 = *(arg1 + 0x10)
            int64_t rdx_2 = 0
            
            if (rdi_1 != 0)
                int32_t rax_5 = 0
                bool z_1
                
                if (0 == rdi_1[1].d)
                    rdi_1[1].d = 0
                    z_1 = true
                else
                    rax_5 = rdi_1[1].d
                    z_1 = false
                
                if (z_1)
                label_140903539:
                    rdi_1 = nullptr
                else
                    while (true)
                        bool z_2
                        
                        if (rax_5 == rdi_1[1].d)
                            rdi_1[1].d = rax_5 + 1
                            z_2 = true
                        else
                            rdi_1[1].d
                            z_2 = false
                        
                        if (z_2)
                            if (rdi_1 != 0)
                                rdx_2 = *(arg1 + 8)
                            
                            break
                        
                        rax_5 = 0
                        bool z_3
                        
                        if (0 == rdi_1[1].d)
                            rdi_1[1].d = 0
                            z_3 = true
                        else
                            rax_5 = rdi_1[1].d
                            z_3 = false
                        
                        if (z_3)
                            goto label_140903539
            
            *(result_1 + 8) = 0xffffffff
            *result_1 = &data_142e1af50
            *(result_1 + 0x10) = 0
            *(result_1 + 0x18) = 0
            *(result_1 + 0x20) = rdx_2
            *(result_1 + 0x28) = rdi_1
            
            if (rdi_1 != 0)
                *(rdi_1 + 0xc) += 1
            
            *(result_1 + 0x30) = r8_2
            *(result_1 + 0x38) = r14_1
            
            if (r14_1 != 0)
                r14_1[1].d += 1
            
            result = 3
    else
        int64_t r8_1 = sx.q(*(arg1 + 0x160))
        result_1 = *(*(arg1 + 0x158) + (r8_1 << 3) - 8)
        *(arg1 + 0x160) = (r8_1 - 1).d
        sub_1405c53d0(arg1 + 0x158)
        rdi_1 = arg_8.q
        r14_1 = arg_8.q
    
    if ((result.b & 2) != 0)
        result = zx.q(result.d) & 0xfffffffd
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rax_9 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_9 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    if ((result.b & 1) != 0 && r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t r12_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (r12_1 == 1)
                (*(*r14_1 + 8))(r14_1, zx.q(r12_1))
    
    int64_t rax_14 = *(arg1 + 0xb0)
    *(result_1 + 8) = r13_1.d
    sub_140597df0(result_1 + 0x10, (r13_1 << 4) + rax_14)
    int64_t rdi_2 = sx.q(*(arg1 + 0x150))
    int32_t rax_15 = (rdi_2 + 1).d
    *(arg1 + 0x150) = rax_15
    
    if (rax_15 s> *(arg1 + 0x154))
        sub_1405a4cf0(arg1 + 0x148)
    
    result = result_1
    *(*(arg1 + 0x148) + (rdi_2 << 2)) = r13_1.d

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

return result
