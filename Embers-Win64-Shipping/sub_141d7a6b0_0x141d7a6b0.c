// 函数: sub_141d7a6b0
// 地址: 0x141d7a6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
*arg2 = 0
arg2[1] = 0
int64_t r12
r12.b = 0
EnterCriticalSection(arg1 + 0x20)

if (arg2 != arg1 + 0x10)
    int128_t zmm1 = *arg2
    int128_t var_58_1 = zmm1
    *arg2 = *(arg1 + 0x10)
    *(arg1 + 0x10) = zmm1

int32_t rax_2 = *(arg1 + 0x1c)
void* rsi = *(arg1 + 0x10)
int32_t i_2 = *(arg1 + 0x18)

if (rax_2 s< 0)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rdi_2 = *(rsi + 0x20)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t rax_9 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (rax_9 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            int64_t rcx_6 = *rsi
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rsi += 0x28
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax_2 = *(arg1 + 0x1c)
    
    *(arg1 + 0x18) = 0
    
    if (rax_2 != 0)
        sub_1405c5660(arg1 + 0x10, 0)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t* rdi_1 = *(rsi + 0x20)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t rax_5 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (rax_5 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            int64_t rcx_3 = *rsi
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rsi += 0x28
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x18) = 0

if (*(arg1 + 0x7c) == 2)
    bool z_1
    
    if (0 == *(arg1 + 0x60))
        *(arg1 + 0x60) = 0
        z_1 = true
    else
        *(arg1 + 0x60)
        z_1 = false
    
    r12.b = z_1

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

if (r12.b != 0)
    sub_141d7f9e0(arg1)

__security_check_cookie(rax_1 ^ &var_78)
return arg2
