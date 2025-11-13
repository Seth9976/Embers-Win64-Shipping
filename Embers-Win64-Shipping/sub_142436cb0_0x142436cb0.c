// 函数: sub_142436cb0
// 地址: 0x142436cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t* i = *(arg1 + 0x98)
int64_t var_28

for (void* rbp = &i[sx.q(*(arg1 + 0xa0))]; i != rbp; i = &i[1])
    void* rsi_1 = *i
    
    if (rsi_1 != 0)
        void* rax_1 = sub_14252ce80()
        void* rdx = *(rsi_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            int64_t* rax_4 = sub_1420e4db0(rsi_1, &var_28)
            
            if (arg2 != rax_4)
                int64_t rcx_2 = *arg2
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
                
                *arg2 = *rax_4
                *rax_4 = 0
                arg2[1].d = rax_4[1].d
                *(arg2 + 0xc) = *(rax_4 + 0xc)
                rax_4[1] = 0
            
            int64_t rcx_4 = var_28
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            break

if (arg2[1].d s<= 1)
    int64_t arg_8 = *(sub_140d21d80(arg1) + 0x18)
    sub_140b63b70(&arg_8, &var_28)
    
    if (arg2 == &var_28)
        int64_t rcx_9 = var_28
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
    else
        int64_t rcx_8 = *arg2
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        *arg2 = var_28
        int32_t var_20
        arg2[1].d = var_20
        int32_t var_1c
        *(arg2 + 0xc) = var_1c

int64_t* rax_11 = sub_140baa460(&var_28, arg2)

if (arg2 != rax_11)
    int64_t rcx_11 = *arg2
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    *arg2 = *rax_11
    *rax_11 = 0
    arg2[1].d = rax_11[1].d
    *(arg2 + 0xc) = *(rax_11 + 0xc)
    rax_11[1] = 0

int64_t rcx_13 = var_28

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return arg2
