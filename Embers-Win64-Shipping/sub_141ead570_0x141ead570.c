// 函数: sub_141ead570
// 地址: 0x141ead570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = arg3
int64_t arg_8

if (arg2 == 0)
    arg_8 = 0
    rsi = 0

int64_t r15 = arg1[0x53]

if (arg2 == r15 && rsi == arg1[0x54])
    return 

int64_t rax

if (arg2 != 0)
    int64_t* rbx_1 = arg2[0x14]
    
    if (rbx_1 != 0)
        void* rax_1 = sub_14255d000()
        void* rcx = rbx_1[2]
        rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax << 3)) == rax_1 + 0x30)
            void* rax_3
            void* rdx_1
            
            do
                if (rbx_1 == arg1)
                    return 
                
                rax = (*(*rbx_1 + 0x630))(rbx_1)
                
                if (rax == 0)
                    break
                
                rbx_1 = *(rax + 0xa0)
                
                if (rbx_1 == 0)
                    break
                
                rax_3 = sub_14255d000()
                rdx_1 = rbx_1[2]
                rax = sx.q(*(rax_3 + 0x38))
                
                if (rax.d s> *(rdx_1 + 0x38))
                    break
            while (*(*(rdx_1 + 0x30) + (rax << 3)) == rax_3 + 0x30)

void* r14_1 = arg1[0x53]
arg1[0x53] = arg2
arg1[0x54] = rsi

if (arg1[0x51] != 0)
    rsi.b = 0
    int64_t* i = arg2
    
    while (i != 0)
        arg_8 = 0
        char rax_5 = (*(*i + 0x3e8))(i, 0)
        i = i[0x18]
        rsi = zx.q(rax_5)
        
        if (rax_5 != 0)
            break
    
    if (arg2 != r15)
        sub_141eaacc0(arg1[0x51] + 0x30, r14_1)
        
        if (rsi.b == 0)
            sub_141e93860(arg1[0x51] + 0x30, arg2)
    
    if (arg2 == 0)
        void* rbx_2 = arg1[0x51]
        arg1[0x54] = 0
        *(arg1 + 0x2c1) = 0
        arg_8 = 0
        *(rbx_2 + 0x2f0) &= 0xfffffff8
        *(rbx_2 + 0x2f4) = 0
        memset(rbx_2 + 0x2fc, 0, 0x88)
        rsi.b = 0
        *(rbx_2 + 0x304) = 0x3f800000
    else if (*(arg1 + 0x329) == 0)
        int64_t* rcx_8 = arg1[0x51]
        (*(*rcx_8 + 0x618))(rcx_8)
    
    sub_1423c9cb0(arg1[0x51] + 0x488, rsi.b)
    rax = zx.q(arg1[0x1e].b)
    
    if (rax.b == 3 || rax.b == 2)
        rax.b = arg1[0x53] != 0
        arg1[0x58].b = rax.b

if (arg4 != 0)
    (*(*arg1 + 0x770))(arg1)
