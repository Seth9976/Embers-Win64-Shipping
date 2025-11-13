// 函数: sub_140612700
// 地址: 0x140612700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* arg_10 = arg2
int64_t* rsi_1 = arg2

if (*(arg1 + 5) != 0)
    return sub_14058b120(std::cerr, "Error: Cannot add an event to a closed track.") __tailcall

void** rax_2 = *(arg1 + 0x10)
int64_t* rbx_1 = *(arg1 + 8)
void* const rdi_1 = nullptr
void* const r14_1 = nullptr

while (rbx_1 != rax_2)
    rdi_1 = *rbx_1
    
    if (*(rdi_1 + 0xc) s> *(arg2 + 0xc))
        break
    
    r14_1 = rdi_1
    rbx_1 = &rbx_1[1]
    rdi_1 = nullptr

if (rax_2 == *(arg1 + 0x18))
    sub_14060b6e0(&arg1[2], rbx_1, &arg_10)
    rsi_1 = arg_10
else if (rbx_1 != rax_2)
    *rax_2 = rax_2[-1]
    *(arg1 + 0x10) += 8
    memmove(rax_2 - (rax_2 - rbx_1 - 8), rbx_1, (rax_2 - rbx_1 - 8).d)
    *rbx_1 = rsi_1
else
    *rax_2 = rsi_1
    *(arg1 + 0x10) += 8

arg1[1].b = 1
int32_t rdx_3 = *(rsi_1 + 0xc)

if (r14_1 != 0)
    rdx_3 -= *(r14_1 + 0xc)

sub_140615390(rsi_1[2], rdx_3)

if (rdi_1 != 0)
    sub_140615390(*(rdi_1 + 0x10), *(rdi_1 + 0xc) - *(rsi_1 + 0xc))

int32_t rax = (*(*rsi_1 + 0x10))(rsi_1)
*arg1 += rax

if (rsi_1[1].d != 0x2f)
    return 

if (rdi_1 != 0)
    return sub_14058b120(std::cerr, 
        "Attempting to insert EndOfTrack before an existing event.  Use closeTrack() when finished with "
    "MidiTrack.") __tailcall

*(arg1 + 5) = 1
