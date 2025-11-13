// 函数: sub_14061d540
// 地址: 0x14061d540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] += 1
void** rdi = *arg1
void** rax = *arg2
arg3[1] = rax

if (rax == rdi)
    *rdi = arg3
    rdi[1] = arg3
    rdi[2] = arg3
    arg3[3].b = 1
    return arg3

if (arg2[1].d != 0)
    *rax = arg3
    
    if (rax == *rdi)
        *rdi = arg3
else
    rax[2] = arg3
    
    if (rax == rdi[2])
        rdi[2] = arg3

void** rdx = arg3

if (*(arg3[1] + 0x18) == 0)
    do
        void** rcx_3 = rdx[1]
        void*** r9_1 = &rdx[1]
        int64_t* r8 = rcx_3[1]
        void*** r10_1 = &rcx_3[1]
        void* rax_3 = *r8
        int64_t* rcx_1
        int64_t** r8_2
        
        if (rcx_3 == rax_3)
            rax_3 = r8[2]
            
            if (*(rax_3 + 0x18) == 0)
                goto label_14061d6c7
            
            void** r8_1 = rcx_3[2]
            
            if (rdx != r8_1)
                r8_1 = rcx_3
            else
                rdx = rcx_3
                rcx_3[2] = *r8_1
                void* rax_5 = *r8_1
                
                if (*(rax_5 + 0x19) == 0)
                    *(rax_5 + 8) = rcx_3
                
                r8_1[1] = *r10_1
                void* rax_7 = *arg1
                
                if (rcx_3 != *(rax_7 + 8))
                    void** rax_8 = *r10_1
                    
                    if (rcx_3 != *rax_8)
                        rax_8[2] = r8_1
                        r9_1 = r10_1
                        *r8_1 = rcx_3
                        *r10_1 = r8_1
                    else
                        *rax_8 = r8_1
                        r9_1 = r10_1
                        *r8_1 = rcx_3
                        *r10_1 = r8_1
                else
                    *(rax_7 + 8) = r8_1
                    r9_1 = r10_1
                    *r8_1 = rcx_3
                    *r10_1 = r8_1
            
            r8_1[3].b = 1
            *((*r9_1)[1] + 0x18) = 0
            rcx_1 = (*r9_1)[1]
            r8_2 = *rcx_1
            *rcx_1 = r8_2[2]
            void* rax_12 = r8_2[2]
            
            if (*(rax_12 + 0x19) == 0)
                *(rax_12 + 8) = rcx_1
            
            r8_2[1] = rcx_1[1]
            void* rax_14 = *arg1
            
            if (rcx_1 != *(rax_14 + 8))
                void** rax_15 = rcx_1[1]
                
                if (rcx_1 != rax_15[2])
                    *rax_15 = r8_2
                    r8_2[2] = rcx_1
                else
                    rax_15[2] = r8_2
                    r8_2[2] = rcx_1
            else
                *(rax_14 + 8) = r8_2
                r8_2[2] = rcx_1
            
            rcx_1[1] = r8_2
        else if (*(rax_3 + 0x18) != 0)
            void** rax_18 = *rcx_3
            
            if (rdx == rax_18)
                rdx = rcx_3
                rcx_3 = rax_18
                *rdx = rax_18[2]
                void* rax_20 = rcx_3[2]
                
                if (*(rax_20 + 0x19) == 0)
                    *(rax_20 + 8) = rdx
                
                rcx_3[1] = *r10_1
                void* rax_22 = *arg1
                
                if (rdx != *(rax_22 + 8))
                    void*** rax_23 = *r10_1
                    
                    if (rdx != rax_23[2])
                        *rax_23 = rcx_3
                    else
                        rax_23[2] = rcx_3
                else
                    *(rax_22 + 8) = rcx_3
                
                rcx_3[2] = rdx
                r9_1 = r10_1
                *r10_1 = rcx_3
            
            rcx_3[3].b = 1
            *((*r9_1)[1] + 0x18) = 0
            rcx_1 = (*r9_1)[1]
            r8_2 = rcx_1[2]
            rcx_1[2] = *r8_2
            int64_t* rax_27 = *r8_2
            
            if (*(rax_27 + 0x19) == 0)
                rax_27[1] = rcx_1
            
            r8_2[1] = rcx_1[1]
            void* rax_29 = *arg1
            
            if (rcx_1 != *(rax_29 + 8))
                int64_t*** rax_30 = rcx_1[1]
                
                if (rcx_1 != *rax_30)
                    rax_30[2] = r8_2
                else
                    *rax_30 = r8_2
            else
                *(rax_29 + 8) = r8_2
            
            *r8_2 = rcx_1
            rcx_1[1] = r8_2
        else
        label_14061d6c7:
            rcx_3[3].b = 1
            *(rax_3 + 0x18) = 1
            *((*r9_1)[1] + 0x18) = 0
            rdx = (*r9_1)[1]
    while (*(rdx[1] + 0x18) == 0)

*(rdi[1] + 0x18) = 1
return arg3
