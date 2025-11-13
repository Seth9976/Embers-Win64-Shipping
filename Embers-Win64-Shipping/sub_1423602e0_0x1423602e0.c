// 函数: sub_1423602e0
// 地址: 0x1423602e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = nullptr
char r11 = arg4
void* rbx = arg2
int64_t r12 = 0
int64_t* r13 = *arg3
int32_t r14 = 0
void* rax_2 = &r13[sx.q(arg3[1].d) * 2]
int64_t var_60
__builtin_memset(&var_60, 0, 0x20)
int64_t var_50

if (r13 == rax_2)
label_1423606a2:
    sub_14235e2d0(arg1, rbx, arg3, &var_60)
    void*** result_1 = sub_14235d9a0(arg1, rbx, &var_60, &var_50)
    r12 = var_60
    result = result_1
else
    while (true)
        int32_t rcx
        
        if ((*(*r13 + 4) & 1) == 0 || *(rbx + 0x38) == 0)
            rcx = 0
            
            if (r13[1].d == 0)
                rcx = 3
        else if (*(r13 + 0xc) == 0 || *(rbx + 0x18) == 0)
            rcx = 1
        else
            rcx = 2
        
        int32_t rax_6
        int32_t* rdx_3
        
        if (rcx == 0)
            if (arg1[2].d != *(arg1 + 0x3c))
                void* rdx_12 = arg1[9]
                void* r8_10 = &arg1[8]
                int64_t r9_5 = sx.q(r13[1].d)
                
                if (rdx_12 != 0)
                    r8_10 = rdx_12
                
                rax_6 = *(r8_10 + (((sx.q(arg1[0xa].d) - 1) & r9_5) << 2))
                
                if (rax_6 == 0xffffffff)
                    goto label_14236061e
                
                while (true)
                    rdx_3 = (sx.q(rax_6) << 4) + arg1[1]
                    
                    if (*rdx_3 == r9_5.d)
                        break
                    
                    rax_6 = rdx_3[2]
                    
                    if (rax_6 == 0xffffffff)
                        goto label_14236061e
                
            label_142360619:
                
                if (rax_6 != 0xffffffff)
                    goto label_142360624
                
                goto label_14236061e
            
        label_14236061e:
            rdx_3 = nullptr
        label_142360624:
            void* rax_15 = &rdx_3[1]
            
            if (rdx_3 == 0)
                rax_15 = nullptr
            
            if (rax_15 != 0)
                int64_t* rax_16 = sub_14235b430(arg1, rbx, *rax_15, &var_50, r11)
                
                if (rax_16 == 0)
                    break
                
                int64_t rbx_1 = sx.q(r14)
                r14 = (rbx_1 + 1).d
                int64_t var_58_1
                var_58_1.d = r14
                
                if (r14 s> var_58_1:4.d)
                    sub_1405a4d70(&var_60)
                    r14 = var_58_1.d
                    r12 = var_60
                
                r11 = arg4
                *(r12 + (rbx_1 << 3)) = rax_16
                rbx = arg2
        else if (rcx == 1)
            int32_t* rcx_22
            
            if (arg1[0xc].d == *(arg1 + 0x8c))
            label_142360562:
                rcx_22 = nullptr
            else
                void* r8_6 = &arg1[0x12]
                void* rdx_8 = *(r8_6 + 8)
                int64_t r9_3 = sx.q(*(rbx + 0x38))
                
                if (rdx_8 != 0)
                    r8_6 = rdx_8
                
                int32_t rax_12 = *(r8_6 + (((sx.q(arg1[0x14].d) - 1) & r9_3) << 2))
                
                if (rax_12 == 0xffffffff)
                label_142360562_1:
                    rcx_22 = nullptr
                else
                    while (true)
                        rcx_22 = sx.q(rax_12) * 0x60 + arg1[0xb]
                        
                        if (*rcx_22 == r9_3.d)
                            break
                        
                        rax_12 = rcx_22[0x16]
                        
                        if (rax_12 == 0xffffffff)
                            goto label_142360562_2
                    
                    if (rax_12 == 0xffffffff)
                    label_142360562_2:
                        rcx_22 = nullptr
            
            void* r9_4 = &rcx_22[2]
            
            if (rcx_22 == 0)
                r9_4 = nullptr
            
            if (r9_4 != 0)
                if (*(r9_4 + 8) == *(r9_4 + 0x34))
                    goto label_14236061e
                
                void* rdx_9 = *(r9_4 + 0x40)
                void* r8_8 = r9_4 + 0x38
                int64_t r10_2 = sx.q(r13[1].d)
                
                if (rdx_9 != 0)
                    r8_8 = rdx_9
                
                rax_6 = *(r8_8 + (((sx.q(*(r9_4 + 0x48)) - 1) & r10_2) << 2))
                
                if (rax_6 == 0xffffffff)
                    goto label_14236061e
                
                while (true)
                    rdx_3 = (sx.q(rax_6) << 4) + *r9_4
                    
                    if (*rdx_3 == r10_2.d)
                        break
                    
                    rax_6 = rdx_3[2]
                    
                    if (rax_6 == 0xffffffff)
                        goto label_14236061e
                
                goto label_142360619
        else if (rcx == 2)
            int32_t* rcx_12
            
            if (arg1[0x16].d == *(arg1 + 0xdc))
            label_142360483:
                rcx_12 = nullptr
            else
                void* r8_2 = &arg1[0x1c]
                void* rdx_4 = *(r8_2 + 8)
                int64_t r9_1 = sx.q(*(rbx + 0x38))
                
                if (rdx_4 != 0)
                    r8_2 = rdx_4
                
                int32_t rax_8 = *(r8_2 + (((sx.q(arg1[0x1e].d) - 1) & r9_1) << 2))
                
                if (rax_8 == 0xffffffff)
                label_142360483_1:
                    rcx_12 = nullptr
                else
                    while (true)
                        rcx_12 = sx.q(rax_8) * 0x60 + arg1[0x15]
                        
                        if (*rcx_12 == r9_1.d)
                            break
                        
                        rax_8 = rcx_12[0x16]
                        
                        if (rax_8 == 0xffffffff)
                            goto label_142360483_2
                    
                    if (rax_8 == 0xffffffff)
                    label_142360483_2:
                        rcx_12 = nullptr
            
            void* r9_2 = &rcx_12[2]
            
            if (rcx_12 == 0)
                r9_2 = nullptr
            
            if (r9_2 != 0)
                if (*(r9_2 + 8) == *(r9_2 + 0x34))
                    goto label_14236061e
                
                void* r8_4 = r9_2 + 0x38
                void* rdx_5 = *(r8_4 + 8)
                int64_t r10_1 = sx.q(*(*(rbx + 0x18) + 0xc))
                
                if (rdx_5 != 0)
                    r8_4 = rdx_5
                
                rax_6 = *(r8_4 + (((sx.q(*(r9_2 + 0x48)) - 1) & r10_1) << 2))
                
                if (rax_6 == 0xffffffff)
                    goto label_14236061e
                
                while (true)
                    rdx_3 = (sx.q(rax_6) << 4) + *r9_2
                    
                    if (*rdx_3 == r10_1.d)
                        break
                    
                    rax_6 = rdx_3[2]
                    
                    if (rax_6 == 0xffffffff)
                        goto label_14236061e
                
                goto label_142360619
        else if (rcx == 3)
            if (arg1[0x20].d == *(arg1 + 0x12c))
                goto label_14236061e
            
            void* r8 = &arg1[0x26]
            void* rdx = *(r8 + 8)
            int64_t r9 = sx.q(*(*(rbx + 0x18) + 0xc))
            
            if (rdx != 0)
                r8 = rdx
            
            rax_6 = *(r8 + (((sx.q(arg1[0x28].d) - 1) & r9) << 2))
            
            if (rax_6 == 0xffffffff)
                goto label_14236061e
            
            while (true)
                rdx_3 = (sx.q(rax_6) << 4) + arg1[0x1f]
                
                if (*rdx_3 == r9.d)
                    break
                
                rax_6 = rdx_3[2]
                
                if (rax_6 == 0xffffffff)
                    goto label_14236061e
            
            goto label_142360619
        r13 = &r13[2]
        
        if (r13 == rax_2)
            goto label_1423606a2

if (r12 != 0)
    sub_140a74f90(r12)

int64_t rcx_34 = var_50

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

return result
