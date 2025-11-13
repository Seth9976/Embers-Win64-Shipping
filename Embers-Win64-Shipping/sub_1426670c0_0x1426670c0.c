// 函数: sub_1426670c0
// 地址: 0x1426670c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x1c)
void* rbx = *(arg1 + 0x10)
int32_t i_5 = *(arg1 + 0x18)

if (rax s< 0)
    if (i_5 != 0)
        int32_t i
        
        do
            int64_t rcx_2 = *(rbx + 0x10)
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            int64_t rcx_3 = *rbx
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx += 0x28
            i = i_5
            i_5 -= 1
        while (i != 1)
        rax = *(arg1 + 0x1c)
    
    *(arg1 + 0x18) = 0
    
    if (rax != 0)
        sub_1405c5660(arg1 + 0x10, 0)
else
    if (i_5 != 0)
        int32_t i_1
        
        do
            int64_t rcx = *(rbx + 0x10)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int64_t rcx_1 = *rbx
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx += 0x28
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x18) = 0

int32_t rax_1 = *(arg1 + 0x2c)
*(arg1 + 0x28) = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405a51b0(arg1 + 0x20, 0)

int32_t rax_2 = *(arg1 + 0x3c)
*(arg1 + 0x38) = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405a51b0(arg1 + 0x30, 0)

int32_t rax_3 = *(arg1 + 0x4c)
*(arg1 + 0x48) = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_1405a51b0(arg1 + 0x40, 0)

int32_t rax_4 = *(arg1 + 0x5c)
*(arg1 + 0x58) = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_1405a51b0(arg1 + 0x50, 0)

int32_t rax_5 = *(arg1 + 0x6c)
*(arg1 + 0x68) = 0

if (rax_5 s< 0 && rax_5 != 0)
    sub_1405a51b0(arg1 + 0x60, 0)

int32_t rax_6 = *(arg1 + 0x7c)
*(arg1 + 0x78) = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_1405a5310(arg1 + 0x70, 0)

int32_t rax_7 = *(arg1 + 0x9c)
void* rdi = *(arg1 + 0x90)
int32_t i_4 = *(arg1 + 0x98)

if (rax_7 s< 0)
    if (i_4 != 0)
        void* rdi_2 = rdi + 0x10
        int32_t i_2
        
        do
            int64_t rcx_12 = *rdi_2
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            rdi_2 += 0x20
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        rax_7 = *(arg1 + 0x9c)
    
    *(arg1 + 0x98) = 0
    
    if (rax_7 != 0)
        sub_1405a51b0(arg1 + 0x90, 0)
else
    if (i_4 != 0)
        int64_t* rdi_1 = rdi + 0x10
        int32_t i_3
        
        do
            int64_t rcx_11 = *rdi_1
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            rdi_1 = &rdi_1[4]
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
    
    *(arg1 + 0x98) = 0

int32_t rax_8 = *(arg1 + 0xac)
*(arg1 + 0xa8) = 0

if (rax_8 s< 0 && rax_8 != 0)
    sub_1405a51b0(arg1 + 0xa0, 0)

*(arg1 + 0xbc) = data_143dbb1f8.q
int32_t rax_9 = data_143dbb200
*(arg1 + 0xc4) = rax_9
*(arg1 + 0xb0) = *(arg1 + 0xbc)
*(arg1 + 0xb8) = rax_9
*(arg1 + 0xc8) = 0
int32_t rax_10 = *(arg1 + 0xd8)
*(arg1 + 0xdc) = 0
int32_t result = (rax_10 & 0xfffffffe) | 2
*(arg1 + 0xd8) = result
return result
