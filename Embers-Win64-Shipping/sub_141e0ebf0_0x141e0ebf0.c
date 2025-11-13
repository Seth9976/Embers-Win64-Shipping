// 函数: sub_141e0ebf0
// 地址: 0x141e0ebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x2d0))()
void* rbx = arg1[4]

if (rbx != 0)
    void* rax_1 = sub_142591550()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* r8_1
        r8_1.b = 1
        sub_141f3e990(arg1[4], 1, r8_1.b)

int64_t* rcx_3 = arg1[0x48]

if (rcx_3 == 0)
    int64_t* rax_5 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_5
    rcx_3 = rax_5

(*(*rcx_3 + 0x10))(rcx_3, arg1)
int32_t rcx_4 = arg1[0x10].d
int64_t rsi = sx.q(rcx_4 - 1)

if (rcx_4 - 1 s>= 0)
    int64_t temp0_1
    
    do
        int64_t rbx_1 = arg1[0xf]
        void var_48
        int64_t* rax_8 = sub_141ddd6c0(&var_48, (zx.o(0)).d)
        sub_141e31c70(*(rbx_1 + (rsi << 3)), rax_8, 1)
        temp0_1 = rsi
        rsi -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_4 = arg1[0x10].d

if (rcx_4 s> 0)
    int32_t i = 0
    int64_t** rsi_1 = nullptr
    
    do
        int64_t* rbx_2 = *(rsi_1 + arg1[0xf])
        
        if (rbx_2 != 0)
            sub_141df5a80(arg1, rbx_2)
            sub_141df36a0(rbx_2, 1)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[0x10].d)
    
    arg1[0x10].d = 0
    
    if (*(arg1 + 0x84) != 0)
        sub_1405c5570(&arg1[0xf], 0)
    
    sub_140865470(&arg1[0x11], 0)
    sub_1405a9f90(&arg1[0xd], 0)

void* r15 = arg1[4]

if (r15 != 0)
    int32_t i_1 = 0
    
    if (arg1[0x2f].d s> 0)
        int64_t rbx_3 = 0
        
        do
            int64_t r14_1 = arg1[0x2e]
            
            if ((*(*arg1 + 0x310))(arg1, *(rbx_3 + r14_1 + 0x50)) != 0)
                void* const rsi_2 = *(*(rbx_3 + r14_1 + 0x50) + 0x20)
                void* rax_13
                int64_t rax_14
                void* rdx_6
                
                if (rsi_2 != 0)
                    rax_13 = sub_14246bfb0()
                    rdx_6 = *(rsi_2 + 0x10)
                    rax_14 = sx.q(*(rax_13 + 0x38))
                
                if (rsi_2 == 0 || rax_14.d s> *(rdx_6 + 0x38)
                        || *(*(rdx_6 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                    rsi_2 = nullptr
                
                int64_t* rcx_14 = *(rbx_3 + r14_1 + 0x50)
                (*(*rcx_14 + 0x278))(rcx_14, r15, rsi_2)
            
            i_1 += 1
            rbx_3 += 0xb8
        while (i_1 s< arg1[0x2f].d)

sub_141e0b910(&arg1[0x2e], 0)
return sub_141e30570(&arg1[0x20], r15) __tailcall
