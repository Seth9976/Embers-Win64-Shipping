// 函数: sub_142279ec0
// 地址: 0x142279ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2
void* rcx = arg2[6]

if (rcx != 0 && sub_141dc9840(rcx) == sub_141dc9840(arg1))
    *(rsi[6] + 0x298) = 0

arg1[0x53] = rsi
rsi[6] = arg1
void* rcx_3 = *((*(*arg1 + 0x150))(arg1) + 0x38)
int32_t rax_6 = arg1[0x66].d

if (rax_6 s>= 0xa28 && rcx_3 != 0)
    void* rdx = *(rcx_3 + 0x88)
    
    if (rdx != 0)
        int32_t r8_1 = *(rcx_3 + 0x64)
        int32_t rcx_4 = 0x708
        
        if (rax_6 s>= 0x708)
            rcx_4 = r8_1
            
            if (rax_6 s< r8_1)
                rcx_4 = rax_6
        
        *(rdx + 0x38) = rcx_4
        *(arg1[0x53] + 0x38) = rcx_4

void* rax_8 = sub_142531230()
void* rdx_1 = rsi[2]
int64_t rax_9 = sx.q(*(rax_8 + 0x38))

if (rax_9.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
    void* rax_13 = sub_14254f450()
    void* rdx_2 = rsi[2]
    int64_t rax_14 = sx.q(*(rax_13 + 0x38))
    
    if (rax_14.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
        rsi = nullptr
    
    arg1[0x83] = rsi
    
    if (rsi != 0)
        rsi[0x13] = arg1
else
    *(arg1 + 0x554) = 1
    (*(*rsi + 0x280))(rsi, rdx_1)
    (*(*arg1 + 0xd80))(arg1)

(*(*arg1 + 0xbd0))(arg1)
jump(*(*arg1 + 0xd78))
