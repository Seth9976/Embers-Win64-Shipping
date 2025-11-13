// 函数: sub_14239a610
// 地址: 0x14239a610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) == 0)
    return 

CRITICAL_SECTION* lpCriticalSection = arg1 + 0x68
int64_t* i_2 = nullptr
int64_t* i_4 = nullptr
EnterCriticalSection(lpCriticalSection)
int64_t* i_3 = *(arg1 + 8)

if (i_3 != 0)
    int64_t* i
    
    do
        i_3[0xa].d -= 1
        i = i_3[1]
        
        if (i_3[0xa].d s<= 0)
            int32_t arg_8
            sub_140a73790(arg1 + 0x18, &arg_8, &i_3[8])
            int64_t rax_1 = sx.q(arg_8)
            void* const rcx_2
            
            if (rax_1.d == 0xffffffff)
                rcx_2 = nullptr
            else
                rcx_2 = *(arg1 + 0x18) + rax_1 * 0x28
            
            void* rax_3 = *i_3
            int64_t* rdx_3 = rcx_2 + 0x10
            
            if (rcx_2 == 0)
                rdx_3 = nullptr
            
            if (rax_3 == 0)
                *(arg1 + 8) = i
            else
                *(rax_3 + 8) = i
            
            int64_t* rcx_3 = i_3[1]
            int64_t rax_4 = *i_3
            
            if (rcx_3 == 0)
                *(arg1 + 0x10) = rax_4
            else
                *rcx_3 = rax_4
            
            void* rcx_4 = i_3[2]
            int64_t rax_5 = i_3[3]
            *i_3 = 0
            i_3[1] = 0
            
            if (rcx_4 == 0)
                *rdx_3 = rax_5
            else
                *(rcx_4 + 0x18) = rax_5
            
            void* rcx_5 = i_3[3]
            uint64_t rax = i_3[2]
            
            if (rcx_5 == 0)
                rdx_3[1] = rax
            else
                *(rcx_5 + 0x10) = rax
            
            i_3[2] = 0
            i_3[3] = 0
            
            if (i_4 == 0)
                i_2 = i_3
            else
                i_4[1] = i_3
            
            i_4 = i_3
            
            if (*rdx_3 == 0)
                sub_142395260(arg1 + 0x18, &i_3[8])
        
        i_3 = i
    while (i != 0)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

if (i_2 == 0)
    return 

int64_t* i_1

do
    i_1 = i_2[1]
    
    if (i_2[5].d != 0)
        int64_t* rcx_8 = i_2[4]
        
        if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
            int64_t* rcx_9
            
            if (i_2[5].d == 0)
                rcx_9 = nullptr
            else
                rcx_9 = i_2[4]
            
            (*(*rcx_9 + 0x50))(rcx_9)
    
    int64_t* rbx_1 = i_2[9]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    sub_140745b20(&i_2[6])
    sub_140745b20(&i_2[4])
    j_sub_140a74f90(i_2)
    i_2 = i_1
while (i_1 != 0)
