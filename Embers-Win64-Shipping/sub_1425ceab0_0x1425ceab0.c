// 函数: sub_1425ceab0
// 地址: 0x1425ceab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t* rax = sub_1425cebc0(arg1)
void* const var_38
int32_t i_4
void* var_28
int64_t* rcx_1
int32_t rsi

if (rax == 0)
    var_38 = nullptr
    rcx_1 = &var_38
    i_4 = 0
    rsi = 2
else
    int64_t r8_1 = *rax
    rcx_1 = (*(r8_1 + 0x260))(rax, &var_28, r8_1)
    rsi = 1

*arg2 = 0
*arg2 = *rcx_1
*rcx_1 = 0
arg2[1].d = rcx_1[1].d
*(arg2 + 0xc) = *(rcx_1 + 0xc)
rcx_1[1] = 0

if ((rsi.b & 2) != 0)
    int32_t i_2 = i_4
    rsi &= 0xfffffffd
    void* const rbp_1 = var_38
    
    if (i_2 != 0)
        int64_t* rbx_1 = rbp_1 + 0x10
        int32_t i
        
        do
            int64_t rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx_1 = &rbx_1[5]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (rbp_1 != 0)
        sub_140a74f90(rbp_1)

if ((rsi.b & 1) != 0)
    int32_t i_5
    int32_t i_3 = i_5
    
    if (i_3 != 0)
        int64_t* rbx_3 = var_28 + 0x10
        int32_t i_1
        
        do
            int64_t rcx_4 = *rbx_3
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rbx_3 = &rbx_3[5]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    void* rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

return arg2
