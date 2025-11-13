// 函数: sub_14298c2a0
// 地址: 0x14298c2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1] u>= 0x555555555555554)
    std::_Xlength_error("map/set<T> too long")
    noreturn

int64_t* rax = sub_14298c260(arg1, arg5)
arg1[1] += 1
rax[1] = arg4
void* rcx = *arg1

if (arg4 == rcx)
    *(rcx + 8) = rax
    **arg1 = rax
    *(*arg1 + 0x10) = rax
else if (arg3 == 0)
    arg4[2] = rax
    void* rax_2 = *arg1
    
    if (arg4 == *(rax_2 + 0x10))
        *(rax_2 + 0x10) = rax
else
    *arg4 = rax
    int64_t** rax_1 = *arg1
    
    if (arg4 == *rax_1)
        *rax_1 = rax

int64_t* rbx_1 = rax

if (*(rax[1] + 0x18) == 0)
    do
        int64_t* rax_4 = rbx_1[1]
        int64_t*** rdx_1 = &rbx_1[1]
        int64_t* r9 = rax_4[1]
        void* rcx_3 = *r9
        int64_t* rcx_6
        int64_t** rdx_2
        
        if (rax_4 == rcx_3)
            rcx_3 = r9[2]
            
            if (*(rcx_3 + 0x18) == 0)
                goto label_14298c456
            
            int64_t** rcx_4 = rax_4[2]
            
            if (rbx_1 != rcx_4)
                rcx_4 = rax_4
            else
                rbx_1 = rax_4
                rbx_1[2] = *rcx_4
                int64_t* rax_6 = *rcx_4
                
                if (*(rax_6 + 0x19) == 0)
                    rax_6[1] = rbx_1
                
                rcx_4[1] = rax_4[1]
                void* rax_8 = *arg1
                
                if (rbx_1 != *(rax_8 + 8))
                    int64_t** rax_9 = rax_4[1]
                    
                    if (rbx_1 != *rax_9)
                        rax_9[2] = rcx_4
                        rdx_1 = &rax_4[1]
                        *rcx_4 = rbx_1
                        rax_4[1] = rcx_4
                    else
                        *rax_9 = rcx_4
                        rdx_1 = &rax_4[1]
                        *rcx_4 = rbx_1
                        rax_4[1] = rcx_4
                else
                    *(rax_8 + 8) = rcx_4
                    rdx_1 = &rax_4[1]
                    *rcx_4 = rbx_1
                    rax_4[1] = rcx_4
            
            rcx_4[3].b = 1
            (*rdx_1)[1][3].b = 0
            rcx_6 = (*rdx_1)[1]
            rdx_2 = *rcx_6
            *rcx_6 = rdx_2[2]
            void* rax_13 = rdx_2[2]
            
            if (*(rax_13 + 0x19) == 0)
                *(rax_13 + 8) = rcx_6
            
            rdx_2[1] = rcx_6[1]
            void* rax_15 = *arg1
            
            if (rcx_6 != *(rax_15 + 8))
                void** rax_16 = rcx_6[1]
                
                if (rcx_6 != rax_16[2])
                    *rax_16 = rdx_2
                    rdx_2[2] = rcx_6
                else
                    rax_16[2] = rdx_2
                    rdx_2[2] = rcx_6
            else
                *(rax_15 + 8) = rdx_2
                rdx_2[2] = rcx_6
            
            rcx_6[1] = rdx_2
        else if (*(rcx_3 + 0x18) != 0)
            if (rbx_1 == *rax_4)
                rbx_1 = rax_4
                sub_140909ab0(arg1, rax_4)
            
            *(rbx_1[1] + 0x18) = 1
            *(*(rbx_1[1] + 8) + 0x18) = 0
            rcx_6 = *(rbx_1[1] + 8)
            rdx_2 = rcx_6[2]
            rcx_6[2] = *rdx_2
            int64_t* rax_23 = *rdx_2
            
            if (*(rax_23 + 0x19) == 0)
                rax_23[1] = rcx_6
            
            rdx_2[1] = rcx_6[1]
            void* rax_25 = *arg1
            
            if (rcx_6 != *(rax_25 + 8))
                int64_t*** rax_26 = rcx_6[1]
                
                if (rcx_6 != *rax_26)
                    rax_26[2] = rdx_2
                else
                    *rax_26 = rdx_2
            else
                *(rax_25 + 8) = rdx_2
            
            *rdx_2 = rcx_6
            rcx_6[1] = rdx_2
        else
        label_14298c456:
            rax_4[3].b = 1
            *(rcx_3 + 0x18) = 1
            (*rdx_1)[1][3].b = 0
            rbx_1 = (*rdx_1)[1]
    while (*(rbx_1[1] + 0x18) == 0)

void* rcx_10 = *(*arg1 + 8)
*arg2 = rax
*(rcx_10 + 0x18) = 1
return arg2
