// 函数: sub_14297c550
// 地址: 0x14297c550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[1]

if (rax u>= 0xdd67c8a60dd67b)
    sub_14297e5a0(arg1, arg5)
    std::_Xlength_error("map/set<T> too long")
    noreturn

arg1[1] = rax + 1
arg5[1] = arg4
void* rax_2 = *arg1

if (arg4 == rax_2)
    *(rax_2 + 8) = arg5
    **arg1 = arg5
    *(*arg1 + 0x10) = arg5
else if (arg3 == 0)
    arg4[2] = arg5
    void* rax_4 = *arg1
    
    if (arg4 == *(rax_4 + 0x10))
        *(rax_4 + 0x10) = arg5
else
    *arg4 = arg5
    int64_t* rax_5 = *arg1
    
    if (arg4 == *rax_5)
        *rax_5 = arg5

void** rbx = arg5

if (*(arg5[1] + 0x18) == 0)
    do
        void** rax_7 = rbx[1]
        void*** rdx = &rbx[1]
        int64_t* r9 = rax_7[1]
        void* rcx = *r9
        int64_t* rcx_3
        int64_t** rdx_1
        
        if (rax_7 == rcx)
            rcx = r9[2]
            
            if (*(rcx + 0x18) == 0)
                goto label_14297c6e6
            
            void** rcx_1 = rax_7[2]
            
            if (rbx != rcx_1)
                rcx_1 = rax_7
            else
                rbx = rax_7
                rbx[2] = *rcx_1
                void* rax_9 = *rcx_1
                
                if (*(rax_9 + 0x19) == 0)
                    *(rax_9 + 8) = rbx
                
                rcx_1[1] = rax_7[1]
                void* rax_11 = *arg1
                
                if (rbx != *(rax_11 + 8))
                    void** rax_12 = rax_7[1]
                    
                    if (rbx != *rax_12)
                        rax_12[2] = rcx_1
                        rdx = &rax_7[1]
                        *rcx_1 = rbx
                        rax_7[1] = rcx_1
                    else
                        *rax_12 = rcx_1
                        rdx = &rax_7[1]
                        *rcx_1 = rbx
                        rax_7[1] = rcx_1
                else
                    *(rax_11 + 8) = rcx_1
                    rdx = &rax_7[1]
                    *rcx_1 = rbx
                    rax_7[1] = rcx_1
            
            rcx_1[3].b = 1
            *((*rdx)[1] + 0x18) = 0
            rcx_3 = (*rdx)[1]
            rdx_1 = *rcx_3
            *rcx_3 = rdx_1[2]
            void* rax_16 = rdx_1[2]
            
            if (*(rax_16 + 0x19) == 0)
                *(rax_16 + 8) = rcx_3
            
            rdx_1[1] = rcx_3[1]
            void* rax_18 = *arg1
            
            if (rcx_3 != *(rax_18 + 8))
                void** rax_19 = rcx_3[1]
                
                if (rcx_3 != rax_19[2])
                    *rax_19 = rdx_1
                    rdx_1[2] = rcx_3
                else
                    rax_19[2] = rdx_1
                    rdx_1[2] = rcx_3
            else
                *(rax_18 + 8) = rdx_1
                rdx_1[2] = rcx_3
            
            rcx_3[1] = rdx_1
        else if (*(rcx + 0x18) != 0)
            if (rbx == *rax_7)
                rbx = rax_7
                sub_140909ab0(arg1, rax_7)
            
            *(rbx[1] + 0x18) = 1
            *(*(rbx[1] + 8) + 0x18) = 0
            rcx_3 = *(rbx[1] + 8)
            rdx_1 = rcx_3[2]
            rcx_3[2] = *rdx_1
            int64_t* rax_26 = *rdx_1
            
            if (*(rax_26 + 0x19) == 0)
                rax_26[1] = rcx_3
            
            rdx_1[1] = rcx_3[1]
            void* rax_28 = *arg1
            
            if (rcx_3 != *(rax_28 + 8))
                int64_t*** rax_29 = rcx_3[1]
                
                if (rcx_3 != *rax_29)
                    rax_29[2] = rdx_1
                else
                    *rax_29 = rdx_1
            else
                *(rax_28 + 8) = rdx_1
            
            *rdx_1 = rcx_3
            rcx_3[1] = rdx_1
        else
        label_14297c6e6:
            rax_7[3].b = 1
            *(rcx + 0x18) = 1
            *((*rdx)[1] + 0x18) = 0
            rbx = (*rdx)[1]
    while (*(rbx[1] + 0x18) == 0)

void* rax_31 = *arg1
*arg2 = arg5
*(*(rax_31 + 8) + 0x18) = 1
return arg2
