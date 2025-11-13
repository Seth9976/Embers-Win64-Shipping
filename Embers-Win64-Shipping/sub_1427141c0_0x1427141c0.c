// 函数: sub_1427141c0
// 地址: 0x1427141c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[5]
void** rax

if (arg2 != rsi && rsi != 0)
    void* rax_1 = sub_1426a09e0()
    void* rdx = *(rsi + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s<= *(rdx + 0x38) && (*(rdx + 0x30))[rax] == rax_1 + 0x30)
        sub_1405a46b0(rsi + 0x488, arg1)

if (arg2 != 0)
    void* rax_2 = sub_1426a09e0()
    void* rdx_2 = *(arg2 + 0x10)
    rax = sx.q(*(rax_2 + 0x38))
    
    if (rax.d s<= *(rdx_2 + 0x38) && (*(rdx_2 + 0x30))[rax] == rax_2 + 0x30)
        rax = sub_140a84c80(0, 0x30, 0)
        void** rsi_1 = rax
        
        if (rax != 0)
            *rsi_1 = &data_142d57800
            sub_140d3a3a0(&rsi_1[1], arg1)
            rsi_1[2] = sub_142705280
            rsi_1[4] = sub_140a387b0()
            *rsi_1 = &data_142d57858
            sub_140599630(arg2 + 0x488, 1)
            void arg_8
            (*(*rsi_1 + 0x30))(rsi_1, &arg_8)
            int64_t r14_1 = sx.q(*(arg2 + 0x490))
            int32_t rax_5 = (r14_1 + 1).d
            *(arg2 + 0x490) = rax_5
            
            if (rax_5 s> *(arg2 + 0x494))
                sub_1405a4f90(arg2 + 0x488)
            
            rax = (r14_1 << 4) + *(arg2 + 0x488)
            *rax = rsi_1
            rax[1].d = 3

arg1[5] = arg2

if (arg2 == 0 && arg3 == 0)
    return 

sub_142609170(arg1[0x1b])
arg1[0x1b] = 0
return sub_1426f6d80(arg1) __tailcall
