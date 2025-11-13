// 函数: sub_1406b0230
// 地址: 0x1406b0230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = nullptr
arg2[2] = 0
arg2[3] = 0xf
*arg2 = 0
uint64_t i_1 = arg4 - arg3

if (arg4 != arg3)
    void* r8 = nullptr
    uint64_t i
    
    do
        char ploc
        
        if (i_1 u> r8)
            int64_t rcx = arg2[3]
            void* count = i_1 - r8
            
            if (count u> rcx - r8)
                ploc = 0
                sub_14058c4e0(arg2, count, 0, count, 0)
            else
                arg2[2] = i_1
                int64_t* rsi_1 = arg2
                
                if (rcx u>= 0x10)
                    rsi_1 = *arg2
                
                memset(r8 + rsi_1, 0, count)
                *(rsi_1 + i_1) = 0
        else
            arg2[2] = i_1
            int64_t* rax_1 = arg2
            
            if (arg2[3] u>= 0x10)
                rax_1 = *arg2
            
            *(rax_1 + i_1) = 0
        
        void* end1 = sub_14058a480(arg2, 0) + arg2[2]
        ploc.q = arg1 + 0x10
        i = _Strxfrm(sub_14058a480(arg2, 0), end1, arg3, arg4, ploc)
        rdx = arg2[2]
        i_1 = i
        
        if (i u<= rdx)
            break
        
        r8 = rdx
    while (i != 0)

if (i_1 u<= rdx)
    arg2[2] = i_1
    int64_t* rax_6 = arg2
    
    if (arg2[3] u>= 0x10)
        rax_6 = *arg2
    
    *(rax_6 + i_1) = 0
    return arg2

int64_t rcx_6 = arg2[3]
uint64_t count_1 = i_1 - rdx

if (count_1 u> rcx_6 - rdx)
    sub_14058c4e0(arg2, count_1, 0, count_1, 0)
    return arg2

arg2[2] = i_1
int64_t* rax_10 = arg2

if (rcx_6 u>= 0x10)
    rax_10 = *arg2

void* rdi_2 = rax_10 + rdx
memset(rdi_2, 0, count_1)
*(rdi_2 + count_1) = 0
return arg2
