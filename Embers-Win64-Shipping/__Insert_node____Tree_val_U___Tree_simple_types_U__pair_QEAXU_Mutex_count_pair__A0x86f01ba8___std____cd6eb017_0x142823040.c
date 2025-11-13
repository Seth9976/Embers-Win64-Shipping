// 函数: ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0x86f01ba8@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0x86f01ba8@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0x86f01ba8@@@std@@PEAX@std@@@2@QEAU32@@Z
// 地址: 0x142823040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] += 1
void** r10 = *arg1
void** rax = *arg2
arg3[1] = rax

if (rax != r10)
    if (arg2[1].d != 0)
        *rax = arg3
        
        if (rax == *r10)
            *r10 = arg3
    else
        rax[2] = arg3
        
        if (rax == r10[2])
            r10[2] = arg3
    
    void* rax_1 = arg3[1]
    void** rdx = arg3
    
    while (*(rax_1 + 0x18) == 0)
        void*** r11_1 = &rdx[1]
        void** rcx = *r11_1
        void*** rbx_1 = &rcx[1]
        void** r9_1 = *rbx_1
        void* rax_2 = *r9_1
        int64_t* rcx_2
        int64_t** r9_3
        
        if (rcx == rax_2)
            rax_2 = r9_1[2]
            
            if (*(rax_2 + 0x18) == 0)
                goto label_14282318d
            
            void** r9_2 = rcx[2]
            
            if (rdx != r9_2)
                r9_2 = rcx
            else
                rdx = rcx
                rcx[2] = *r9_2
                void* rax_4 = *r9_2
                
                if (*(rax_4 + 0x19) == 0)
                    *(rax_4 + 8) = rcx
                
                r9_2[1] = *rbx_1
                void* rax_6 = *arg1
                
                if (rcx != *(rax_6 + 8))
                    void** rax_7 = *rbx_1
                    
                    if (rcx != *rax_7)
                        rax_7[2] = r9_2
                    else
                        *rax_7 = r9_2
                else
                    *(rax_6 + 8) = r9_2
                
                *r9_2 = rcx
                r11_1 = rbx_1
                *rbx_1 = r9_2
            
            r9_2[3].b = 1
            *((*r11_1)[1] + 0x18) = 0
            rcx_2 = (*r11_1)[1]
            r9_3 = *rcx_2
            *rcx_2 = r9_3[2]
            void* rax_11 = r9_3[2]
            
            if (*(rax_11 + 0x19) == 0)
                *(rax_11 + 8) = rcx_2
            
            r9_3[1] = rcx_2[1]
            void* rax_13 = *arg1
            
            if (rcx_2 != *(rax_13 + 8))
                void** rax_14 = rcx_2[1]
                
                if (rcx_2 != rax_14[2])
                    *rax_14 = r9_3
                else
                    rax_14[2] = r9_3
            else
                *(rax_13 + 8) = r9_3
            
            r9_3[2] = rcx_2
            rcx_2[1] = r9_3
        else if (*(rax_2 + 0x18) != 0)
            void** rax_17 = *rcx
            
            if (rdx == rax_17)
                rdx = rcx
                rcx = rax_17
                *rdx = rax_17[2]
                void* rax_19 = rcx[2]
                
                if (*(rax_19 + 0x19) == 0)
                    *(rax_19 + 8) = rdx
                
                rcx[1] = *rbx_1
                void* rax_21 = *arg1
                
                if (rdx != *(rax_21 + 8))
                    void*** rax_22 = *rbx_1
                    
                    if (rdx != rax_22[2])
                        *rax_22 = rcx
                    else
                        rax_22[2] = rcx
                else
                    *(rax_21 + 8) = rcx
                
                rcx[2] = rdx
                r11_1 = rbx_1
                *rbx_1 = rcx
            
            rcx[3].b = 1
            *((*r11_1)[1] + 0x18) = 0
            rcx_2 = (*r11_1)[1]
            r9_3 = rcx_2[2]
            rcx_2[2] = *r9_3
            int64_t* rax_26 = *r9_3
            
            if (*(rax_26 + 0x19) == 0)
                rax_26[1] = rcx_2
            
            r9_3[1] = rcx_2[1]
            void* rax_28 = *arg1
            
            if (rcx_2 != *(rax_28 + 8))
                int64_t*** rax_29 = rcx_2[1]
                
                if (rcx_2 != *rax_29)
                    rax_29[2] = r9_3
                else
                    *rax_29 = r9_3
            else
                *(rax_28 + 8) = r9_3
            
            *r9_3 = rcx_2
            rcx_2[1] = r9_3
        else
        label_14282318d:
            rcx[3].b = 1
            *(rax_2 + 0x18) = 1
            *((*r11_1)[1] + 0x18) = 0
            rdx = (*r11_1)[1]
        rax_1 = rdx[1]
    
    *(r10[1] + 0x18) = 1
else
    *r10 = arg3
    r10[1] = arg3
    r10[2] = arg3
    arg3[3].b = 1

return arg3
