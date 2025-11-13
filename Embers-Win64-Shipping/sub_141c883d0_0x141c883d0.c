// 函数: sub_141c883d0
// 地址: 0x141c883d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg3
int64_t* rdi = arg2
char* result = (*(*rcx + 0x38))(rcx)
int32_t i = 0
char rbp = result.b

if (rdi[1].d s> 0)
    int64_t* r12_1 = nullptr
    
    do
        int64_t rcx_1 = *rdi
        int64_t* rsi_1 = *(r12_1 + rcx_1 + 8)
        int64_t* rbx_1 = *(r12_1 + rcx_1)
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        result = (*(*rbx_1 + 0x28))(rbx_1)
        
        if (result.b == 0)
        label_141c886b0:
            
            if (rsi_1 != 0)
                result = zx.q(rsi_1[1].d)
                rsi_1[1].d -= 1
                
                if (result.d == 1)
                    (**rsi_1)(rsi_1)
                    result = zx.q(*(rsi_1 + 0xc))
                    *(rsi_1 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*rsi_1 + 8))(rsi_1, 1)
        else
            result = (*(*rbx_1 + 0x18))(rbx_1)
            char var_48 = 1
            char var_47_1 = rbp
            char rcx_4 = *result
            
            if (rcx_4 != 2)
                char rdx = result[1]
                char* result_1
                
                if (rbp u<= rdx)
                    if (rbp u< rdx)
                        if (rcx_4 != 1)
                            goto label_141c886b0
                        
                        result_1 = &var_48
                        goto label_141c8848d
                    
                    if (rcx_4 != 1)
                        goto label_141c886b0
                    
                    result_1 = result
                else
                    result_1 = result
                
            label_141c8848d:
                
                if (result_1[1] != rdx)
                    goto label_141c886b0
                
                goto label_141c88496
            
        label_141c88496:
            char rdx_1 = result[2]
            void* rcx_5 = &result[2]
            char var_46 = 1
            char var_45_1 = rbp
            
            if (rdx_1 != 2)
                char r8 = *(rcx_5 + 1)
                
                if (r8 u> rbp || (rbp u<= r8 && rdx_1 == 1))
                    goto label_141c884cf
                
                if (rdx_1 != 1)
                    goto label_141c886b0
                
                rcx_5 = &var_46
            label_141c884cf:
                result = zx.q(result[3])
                
                if (*(rcx_5 + 1) != result.b)
                    goto label_141c886b0
                
                goto label_141c884e2
            
        label_141c884e2:
            int64_t* rax_4 = (*(*rbx_1 + 0x20))(rbx_1, rdx_1)
            int64_t* rbx_2 = rax_4[1]
            
            if (rbx_2 == 0)
                goto label_141c88525
            
            int32_t rax_5 = 0
            bool z_1
            
            if (0 == rbx_2[1].d)
                rbx_2[1].d = 0
                z_1 = true
            else
                rax_5 = rbx_2[1].d
                z_1 = false
            
            if (z_1)
            label_141c88513:
                rbx_2 = nullptr
            label_141c88525:
                result = sub_140dbb060(rdi, i, 1, 1)
                i -= 1
                r12_1 -= 0x10
            label_141c88677:
                
                if (rbx_2 == 0)
                    goto label_141c886b0
                
                result = zx.q(rbx_2[1].d)
                rbx_2[1].d -= 1
                
                if (result.d == 1)
                    (**rbx_2)(rbx_2)
                    result = zx.q(*(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*rbx_2 + 8))(rbx_2, 1)
                
                goto label_141c886b0
            
            while (true)
                bool z_2
                
                if (rax_5 == rbx_2[1].d)
                    rbx_2[1].d = rax_5 + 1
                    z_2 = true
                else
                    rbx_2[1].d
                    z_2 = false
                
                if (z_2)
                    break
                
                rax_5 = 0
                bool z_3
                
                if (0 == rbx_2[1].d)
                    rbx_2[1].d = 0
                    z_3 = true
                else
                    rax_5 = rbx_2[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_141c88513
            
            if (rbx_2 == 0)
                goto label_141c88525
            
            int64_t* j = *rax_4
            
            if (j == 0)
                goto label_141c88525
            
            int32_t rax_8
            int32_t rax_10
            
            if (rbp == 0)
                rax_8 = (*(*j + 0x10))(j)
                int64_t* rcx_10 = *arg3
                int64_t rdx_3 = *rcx_10
                rax_10 = (*(rdx_3 + 0x58))(rcx_10, rdx_3)
            
            if (rbp != 0 || rax_8 == rax_10)
                int64_t* r8_1 = *arg4
                int64_t rdx_4 = sx.q(arg4[1].d)
                int64_t* rax_15 = r8_1
                int64_t rdi_3 = rdx_4 * 2
                void* rcx_15 = &r8_1[rdi_3]
                
                if (r8_1 != rcx_15)
                    while (*rax_15 != j)
                        rax_15 = &rax_15[2]
                        
                        if (rax_15 == rcx_15)
                            goto label_141c8864c
                    
                    result = (rax_15 - r8_1) s>> 4
                
                if (r8_1 == rcx_15 || result.d == 0xffffffff)
                label_141c8864c:
                    int32_t rax_17 = (rdx_4 + 1).d
                    arg4[1].d = rax_17
                    
                    if (rax_17 s> *(arg4 + 0xc))
                        sub_1405a4f90(arg4)
                    
                    result = *arg4
                    *(result + (rdi_3 << 3)) = j
                    *(result + (rdi_3 << 3) + 8) = rbx_2
                    rbx_2[1].d += 1
                
                rdi = arg2
                goto label_141c88677
            
            result = zx.q(rbx_2[1].d)
            rbx_2[1].d -= 1
            
            if (result.d == 1)
                (**rbx_2)(rbx_2)
                result = zx.q(*(rbx_2 + 0xc))
                *(rbx_2 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
            
            if (rsi_1 != 0)
                result = zx.q(rsi_1[1].d)
                rsi_1[1].d -= 1
                
                if (result.d == 1)
                    (**rsi_1)(rsi_1)
                    result = zx.q(*(rsi_1 + 0xc))
                    *(rsi_1 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*rsi_1 + 8))(rsi_1, 1)
            
            rdi = arg2
        
        i += 1
        r12_1 = &r12_1[2]
    while (i s< rdi[1].d)

return result
