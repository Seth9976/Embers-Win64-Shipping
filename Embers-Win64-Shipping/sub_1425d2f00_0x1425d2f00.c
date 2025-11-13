// 函数: sub_1425d2f00
// 地址: 0x1425d2f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2 + 0x28)
    int64_t rcx = *arg1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg1 = *(arg2 + 0x28)
    *(arg2 + 0x28) = 0
    arg1[1].d = *(arg2 + 0x30)
    *(arg1 + 0xc) = *(arg2 + 0x34)
    *(arg2 + 0x30) = 0

if (&arg1[2] != arg2 + 0x38)
    int64_t rcx_1 = arg1[2]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    arg1[2] = *(arg2 + 0x38)
    *(arg2 + 0x38) = 0
    arg1[3].d = *(arg2 + 0x40)
    *(arg1 + 0x1c) = *(arg2 + 0x44)
    *(arg2 + 0x40) = 0

if (&arg1[4] != arg2 + 0x48)
    int64_t rcx_2 = arg1[4]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    arg1[4] = *(arg2 + 0x48)
    *(arg2 + 0x48) = 0
    arg1[5].d = *(arg2 + 0x50)
    *(arg1 + 0x2c) = *(arg2 + 0x54)
    *(arg2 + 0x50) = 0

if (&arg1[0x10] != arg2 + 0x58)
    int64_t rcx_3 = arg1[0x10]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[0x10] = *(arg2 + 0x58)
    *(arg2 + 0x58) = 0
    arg1[0x11].d = *(arg2 + 0x60)
    *(arg1 + 0x8c) = *(arg2 + 0x64)
    *(arg2 + 0x60) = 0

if (&arg1[0x12] != arg2 + 0x68)
    int64_t rcx_4 = arg1[0x12]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    arg1[0x12] = *(arg2 + 0x68)
    *(arg2 + 0x68) = 0
    arg1[0x13].d = *(arg2 + 0x70)
    *(arg1 + 0x9c) = *(arg2 + 0x74)
    *(arg2 + 0x70) = 0

*(arg1 + 0xa4) = *(arg2 + 0x78)
arg1[0x14].d = *(arg2 + 0x7c)

if (&arg1[0x15] != arg2 + 0x80)
    int64_t rcx_5 = arg1[0x15]
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    arg1[0x15] = *(arg2 + 0x80)
    *(arg2 + 0x80) = 0
    arg1[0x16].d = *(arg2 + 0x88)
    *(arg1 + 0xb4) = *(arg2 + 0x8c)
    *(arg2 + 0x88) = 0

int32_t* var_38
sub_141d43620(arg2, &var_38)
int32_t* rsi = var_38
int64_t rbp = 0
int32_t result_1
void* result = sx.q(result_1)
void* rcx_7 = &rsi[result]
uint64_t r12_3 = (rcx_7 - rsi + 3) u>> 2

if (rsi u> rcx_7)
    r12_3 = 0

if (r12_3 != 0)
    do
        int32_t rdi_5 = *rsi
        result = sub_141d435b0(arg2, rdi_5)
        void* result_2 = result
        
        if (result != 0)
            int32_t arg_8 = rdi_5
            result = sub_1425cf840(&arg1[6], rdi_5, &arg_8)
            int64_t* result_3 = result
            
            if (result != result_2)
                int64_t rcx_10 = *result
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                *result_3 = *result_2
                *result_2 = 0
                result_3[1].d = *(result_2 + 8)
                result = zx.q(*(result_2 + 0xc))
                *(result_3 + 0xc) = result.d
                *(result_2 + 8) = 0
        
        rsi = &rsi[1]
        rbp += 1
    while (rbp != r12_3)
    
    rsi = var_38

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
