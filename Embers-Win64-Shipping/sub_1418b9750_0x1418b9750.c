// 函数: sub_1418b9750
// 地址: 0x1418b9750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418c5570(arg1, 1)
int32_t rax = arg1[6].d
int64_t rbp
rbp.b = 0
int32_t result = rax - 1
int64_t result_1 = sx.q(result)

if (rax - 1 s>= 0)
    int64_t result_2
    
    do
        void* rbx_1 = *(arg1[5] + (result_1 << 3))
        EnterCriticalSection(&data_143efb1e0)
        
        if (*(rbx_1 + 0x40) != 1 || *(rbx_1 + 0x18) != 0)
            LeaveCriticalSection(&data_143efb1e0)
            rbp.b = 1
        else
            LeaveCriticalSection(&data_143efb1e0)
        
        sub_1418beb20(**arg1 + 0x10, rbx_1 + 8)
        int64_t rcx_2 = *(rbx_1 + 0x38)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rbx_1 + 0x10)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        result = j_sub_140a74f90(rbx_1)
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)

int32_t i = 0
arg1[6].d = 0

if (*(arg1 + 0x34) s<= 0xffffffff)
    result = sub_1405c5570(&arg1[5], 0)

if (rbp.b == 0)
    int32_t rax_3 = arg1[8].d
    int64_t rbp_1 = sx.q(rax_3 - 1)
    
    if (rax_3 - 1 s>= 0)
        int64_t temp3_1
        
        do
            void* rbx_2 = *(arg1[7] + (rbp_1 << 3))
            EnterCriticalSection(&data_143efb1e0)
            LeaveCriticalSection(&data_143efb1e0)
            sub_1418beb20(**arg1 + 0x10, rbx_2 + 8)
            int64_t rcx_8 = *(rbx_2 + 0x38)
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int64_t rcx_9 = *(rbx_2 + 0x10)
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            j_sub_140a74f90(rbx_2)
            temp3_1 = rbp_1
            rbp_1 -= 1
        while (temp3_1 - 1 s>= 0)
    
    result = *(arg1 + 0x44)
    arg1[8].d = 0
    
    if (result s< 0 && result != 0)
        result = sub_1405c5570(&arg1[7], 0)

if (arg1[0xa].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rbx_3 = *(r14_1 + arg1[9])
        result = sub_1418beb20(**arg1 + 0x10, rbx_3 + 8)
        
        if (rbx_3 != 0)
            int64_t rcx_14 = *(rbx_3 + 0x38)
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            int64_t rcx_15 = *(rbx_3 + 0x10)
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            result = j_sub_140a74f90(rbx_3)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< arg1[0xa].d)

int64_t rcx_17 = arg1[9]

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t rcx_18 = arg1[7]

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

int64_t rcx_19 = arg1[5]

if (rcx_19 == 0)
    return result

return sub_140a74f90(rcx_19) __tailcall
