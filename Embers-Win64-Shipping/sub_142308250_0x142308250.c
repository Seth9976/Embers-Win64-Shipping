// 函数: sub_142308250
// 地址: 0x142308250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
int32_t i = 0

if (*(rdx + 0x818) s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        sub_1422352a0(*(*(rdx + 0x810) + rbx_1))
        rdx = *arg1
        void* rsi_1 = *(rbx_1 + *(rdx + 0x810))
        
        if (rsi_1 != 0)
            sub_140745b20(rsi_1 + 0x1a8)
            j_sub_140a74f90(rsi_1)
            rdx = *arg1
        
        i += 1
        rbx_1 = &rbx_1[1]
    while (i s< *(rdx + 0x818))

bool cond:0 = *(rdx + 0x81c) == 0
*(rdx + 0x818) = 0

if (not(cond:0))
    sub_1405c5570(rdx + 0x810, 0)

void* rdx_2 = *arg1
int32_t i_1 = 0

if (*(rdx_2 + 0x808) s> 0)
    void* rax_2 = rdx_2
    int64_t* r15_1 = nullptr
    
    do
        void* rcx_5 = *(r15_1 + *(rax_2 + 0x800))
        
        if (rcx_5 != 0)
            sub_142225820(rcx_5, 0)
            rdx_2 = *arg1
            void* rsi_2 = *(r15_1 + *(rdx_2 + 0x800))
            
            if (rsi_2 != 0)
                int64_t* rbx_2 = *(rsi_2 + 0x128)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp1_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                int64_t* rcx_8 = *(rsi_2 + 0x108)
                
                if (rcx_8 != 0)
                    sub_1419df960(rcx_8, 1)
                
                int32_t j_2 = *(rsi_2 + 0xe8)
                void* rcx_9 = *(rsi_2 + 0xe0)
                
                if (j_2 != 0)
                    void* rbx_3 = rcx_9 + 0x50
                    int32_t j
                    
                    do
                        int64_t rcx_10 = *(rbx_3 + 0x10)
                        
                        if (rcx_10 != 0)
                            sub_140a74f90(rcx_10)
                        
                        int64_t rcx_11 = *rbx_3
                        
                        if (rcx_11 != 0)
                            sub_140a74f90(rcx_11)
                        
                        rbx_3 += 0x70
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                    rcx_9 = *(rsi_2 + 0xe0)
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                int32_t j_3 = *(rsi_2 + 0xd8)
                void* rcx_12 = *(rsi_2 + 0xd0)
                
                if (j_3 != 0)
                    void* rbx_4 = rcx_12 + 0x50
                    int32_t j_1
                    
                    do
                        int64_t rcx_13 = *(rbx_4 + 0x10)
                        
                        if (rcx_13 != 0)
                            sub_140a74f90(rcx_13)
                        
                        int64_t rcx_14 = *rbx_4
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                        
                        rbx_4 += 0x70
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                    rcx_12 = *(rsi_2 + 0xd0)
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                int64_t rcx_15 = *(rsi_2 + 0x48)
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                j_sub_140a74f90(rsi_2)
                rdx_2 = *arg1
        
        i_1 += 1
        r15_1 = &r15_1[1]
        rax_2 = rdx_2
    while (i_1 s< *(rdx_2 + 0x808))

bool cond:1 = *(rdx_2 + 0x80c) == 0
*(rdx_2 + 0x808) = 0

if (not(cond:1))
    sub_1405c5570(rdx_2 + 0x800, 0)

char result = __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(*arg1 + 0x820)

if (result == 0)
    return result

return sub_142275ce0(*arg1 + 0x820) __tailcall
