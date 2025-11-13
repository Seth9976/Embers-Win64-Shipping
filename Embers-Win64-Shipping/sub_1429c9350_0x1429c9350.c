// 函数: sub_1429c9350
// 地址: 0x1429c9350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[1]

if (rax u>= 0x3fffffffffffffe)
    int64_t rdi
    int64_t arg_8 = rdi
    void* rdx = arg5[5]
    
    if (rdx != 0)
        sub_1429cc220(&arg5[5], rdx, (arg5[7] - rdx) s>> 2)
        __builtin_memset(&arg5[5], 0, 0x18)
    
    j_sub_140a74f90(arg5)
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
    void** rax_5 = *arg1
    
    if (arg4 == *rax_5)
        *rax_5 = arg5

int64_t* rax_6 = arg5

if (*(arg5[1] + 0x18) == 0)
    do
        int64_t* rcx_3 = rax_6[1]
        int64_t* r8_3 = rcx_3[1]
        void* rdx_1 = *r8_3
        int64_t* rdx_6
        int64_t** r8_4
        
        if (rcx_3 == rdx_1)
            void* rdx_2 = r8_3[2]
            
            if (*(rdx_2 + 0x18) != 0)
                if (rax_6 == rcx_3[2])
                    void** rdx_4 = rcx_3[2]
                    rax_6 = rcx_3
                    rax_6[2] = *rdx_4
                    void* rcx_7 = *rdx_4
                    
                    if (*(rcx_7 + 0x19) == 0)
                        *(rcx_7 + 8) = rax_6
                    
                    rdx_4[1] = rax_6[1]
                    void* rcx_9 = *arg1
                    
                    if (rax_6 != *(rcx_9 + 8))
                        void*** rcx_10 = rax_6[1]
                        
                        if (rax_6 != *rcx_10)
                            rcx_10[2] = rdx_4
                        else
                            *rcx_10 = rdx_4
                    else
                        *(rcx_9 + 8) = rdx_4
                    
                    *rdx_4 = rax_6
                    rax_6[1] = rdx_4
                
                *(rax_6[1] + 0x18) = 1
                *(*(rax_6[1] + 8) + 0x18) = 0
                rdx_6 = *(rax_6[1] + 8)
                r8_4 = *rdx_6
                *rdx_6 = r8_4[2]
                void* rcx_15 = r8_4[2]
                
                if (*(rcx_15 + 0x19) == 0)
                    *(rcx_15 + 8) = rdx_6
                
                r8_4[1] = rdx_6[1]
                void* rcx_17 = *arg1
                
                if (rdx_6 != *(rcx_17 + 8))
                    void** rcx_18 = rdx_6[1]
                    
                    if (rdx_6 != rcx_18[2])
                        *rcx_18 = r8_4
                        r8_4[2] = rdx_6
                    else
                        rcx_18[2] = r8_4
                        r8_4[2] = rdx_6
                else
                    *(rcx_17 + 8) = r8_4
                    r8_4[2] = rdx_6
                
                rdx_6[1] = r8_4
            else
                rcx_3[3].b = 1
                *(rdx_2 + 0x18) = 1
                *(*(rax_6[1] + 8) + 0x18) = 0
                rax_6 = *(rax_6[1] + 8)
        else if (*(rdx_1 + 0x18) != 0)
            if (rax_6 == *rcx_3)
                void* rdx_8 = *rcx_3
                rax_6 = rcx_3
                *rax_6 = *(rdx_8 + 0x10)
                void* rcx_22 = *(rdx_8 + 0x10)
                
                if (*(rcx_22 + 0x19) == 0)
                    *(rcx_22 + 8) = rax_6
                
                *(rdx_8 + 8) = rax_6[1]
                void* rcx_24 = *arg1
                
                if (rax_6 != *(rcx_24 + 8))
                    void** rcx_25 = rax_6[1]
                    
                    if (rax_6 != rcx_25[2])
                        *rcx_25 = rdx_8
                    else
                        rcx_25[2] = rdx_8
                else
                    *(rcx_24 + 8) = rdx_8
                
                *(rdx_8 + 0x10) = rax_6
                rax_6[1] = rdx_8
            
            *(rax_6[1] + 0x18) = 1
            *(*(rax_6[1] + 8) + 0x18) = 0
            rdx_6 = *(rax_6[1] + 8)
            r8_4 = rdx_6[2]
            rdx_6[2] = *r8_4
            int64_t* rcx_30 = *r8_4
            
            if (*(rcx_30 + 0x19) == 0)
                rcx_30[1] = rdx_6
            
            r8_4[1] = rdx_6[1]
            void* rcx_32 = *arg1
            
            if (rdx_6 != *(rcx_32 + 8))
                int64_t*** rcx_33 = rdx_6[1]
                
                if (rdx_6 != *rcx_33)
                    rcx_33[2] = r8_4
                else
                    *rcx_33 = r8_4
            else
                *(rcx_32 + 8) = r8_4
            
            *r8_4 = rdx_6
            rdx_6[1] = r8_4
        else
            rcx_3[3].b = 1
            *(rdx_1 + 0x18) = 1
            *(*(rax_6[1] + 8) + 0x18) = 0
            rax_6 = *(rax_6[1] + 8)
    while (*(rax_6[1] + 0x18) == 0)

void* rax_7 = *arg1
*arg2 = arg5
*(*(rax_7 + 8) + 0x18) = 1
return arg2
