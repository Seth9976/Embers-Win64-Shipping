// 函数: sub_140d6f0b0
// 地址: 0x140d6f0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg3
int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int64_t rax_1 = sub_140809010(arg1, arg3 + arg5, arg4)
int32_t* rcx = *arg1
int32_t* arg_8 = rcx

if (i_1 != 0)
    void* r12_1 = arg2 + 0x30
    void* r15_1 = &rcx[8]
    int32_t i
    
    do
        *rcx = *(r12_1 - 0x30)
        *(r15_1 - 0x18) = *(r12_1 - 0x28)
        sub_140596d10(r15_1 - 0x10, r12_1 - 0x20)
        *r15_1 = 0
        int32_t j_1 = *(r12_1 - 8)
        void* rdi_1 = *(r12_1 - 0x10)
        *(r15_1 + 8) = j_1
        
        if (j_1 != 0)
            sub_1405a4be0(r15_1, j_1, 0)
            int64_t* rbx_1 = *r15_1
            int32_t j
            
            do
                *rbx_1 = 0
                int32_t rsi = *(rdi_1 + 8)
                int64_t r13_1 = *rdi_1
                rbx_1[1].d = rsi
                
                if (rsi != 0)
                    sub_1405a4c70(rbx_1, rsi, 0)
                    memcpy(*rbx_1, r13_1, rsi * 2)
                else
                    *(rbx_1 + 0xc) = 0
                
                rbx_1 = &rbx_1[2]
                rdi_1 += 0x10
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_1 = i_2
        else
            *(r15_1 + 0xc) = 0
        
        *(r15_1 + 0x10) = *r12_1
        rcx = &arg_8[0x12]
        *(r15_1 + 0x18) = *(r12_1 + 8)
        rax_1 = *(r12_1 + 0xc)
        r12_1 += 0x48
        *(r15_1 + 0x1c) = rax_1
        r15_1 += 0x48
        i = i_1
        i_1 -= 1
        arg_8 = rcx
        i_2 = i_1
    while (i != 1)

return rax_1
